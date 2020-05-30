#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("calculadora");
    ui->resultado->setText("0.0");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_suma_clicked()
{
    ui->resultado->setText(QString::number(ui->n1->value() + ui->n2->value()));
}
void Widget::on_resta_clicked()
{
    ui->resultado->setText(QString::number(ui->n1->value() - ui->n2->value()));
}

void Widget::on_multiplicacion_clicked()
{
    ui->resultado->setText(QString::number(ui->n1->value() * ui->n2->value()));
}

void Widget::on_division_clicked()
{
    ui->resultado->setText(QString::number(ui->n1->value() / ui->n2->value()));
}
