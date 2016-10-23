#include "machine.h"
#include "ui_machine.h"

machine::machine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::machine) {
    ui->setupUi(this);
}

machine::~machine() {
    delete ui;
}

#define PRICE_COFFEE  150
#define PRICE_TEA     100
#define PRICE_ARONIA  300

void machine::on_push_500_clicked() {
    if (ui->lcd_money->intValue() < 99500) {
        ui->lcd_money->display(ui->lcd_money->intValue() + 500);
    }
}

void machine::on_push_100_clicked() {
    if (ui->lcd_money->intValue() < 99900) {
        ui->lcd_money->display(ui->lcd_money->intValue() + 100);
    }
}

void machine::on_push_50_clicked() {
    if (ui->lcd_money->intValue() < 99950) {
        ui->lcd_money->display(ui->lcd_money->intValue() + 50);
    }
}

void machine::on_push_coffee_clicked() {
    if (ui->lcd_money->intValue() >= PRICE_COFFEE) {
        ui->lcd_money->display(ui->lcd_money->intValue() - PRICE_COFFEE);
        ui->image_sold->setPixmap(*ui->image_coffee->pixmap());
    }
}

void machine::on_push_tea_clicked() {
    if (ui->lcd_money->intValue() >= PRICE_TEA) {
        ui->lcd_money->display(ui->lcd_money->intValue() - PRICE_TEA);
        ui->image_sold->setPixmap(*ui->image_tea->pixmap());
    }
}

void machine::on_push_aronia_clicked() {
    if (ui->lcd_money->intValue() >= PRICE_ARONIA) {
        ui->lcd_money->display(ui->lcd_money->intValue() - PRICE_ARONIA);
        ui->image_sold->setPixmap(*ui->image_aronia->pixmap());
    }
}
