#ifndef MACHINE_H
#define MACHINE_H

#include <QWidget>

namespace Ui {
class machine;
}

class machine : public QWidget
{
    Q_OBJECT

public:
    explicit machine(QWidget *parent = 0);
    ~machine();

private slots:
    void on_push_500_clicked();

    void on_push_100_clicked();

    void on_push_50_clicked();

    void on_push_coffee_clicked();

    void on_push_tea_clicked();

    void on_push_aronia_clicked();

private:
    Ui::machine *ui;
};

#endif // MACHINE_H
