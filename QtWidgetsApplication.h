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
    //�������㺯��
    int calculate();

private slots:
    //������ʼ������
    void on_action_Button_c_clicked();
    //�������ְ�ť����
    void on_number_Button_clicked();
    //�����������ť����
    void on_action_Button_clicked();
    //�������ڰ�ť����
    void on_action_Button_equal_clicked();
    

private:
    int num1; //����1
    int num2; //����2
    int flag; //�����������ʶ

    Ui::QtWidgetsApplicationClass ui;
};
