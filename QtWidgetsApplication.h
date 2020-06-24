#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication.h"

class QtWidgetsApplication : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = Q_NULLPTR);
    void setnum1(int num);
    void setnum2(int num);
    void setflag(int f);
    //声明计算函数
    int calculate();

private slots:
    //声明初始化函数
    void on_action_Button_c_clicked();
    //声明数字按钮函数
    void on_number_Button_clicked();
    //声明运算符按钮函数
    void on_action_Button_clicked();
    //声明等于按钮函数
    void on_action_Button_equal_clicked();
    

private:
    int num1; //变量1
    int num2; //变量2
    int flag; //计算运算符标识

    Ui::QtWidgetsApplicationClass ui;
};
