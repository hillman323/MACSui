#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

///
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *menu=new QMenu();
    menu->addAction(tr("1"));
    menu->addAction(tr("2"));
    menu->addAction(tr("3"));
    ui->toolButton_22->setMenu(menu);
    ui->toolButton_20->setMenu(menu);
    ui->toolButton_23->setMenu(menu);
    ui->toolButton_24->setMenu(menu);
    ui->toolButton_25->setMenu(menu);
    ui->toolButton_26->setMenu(menu);
    ui->toolButton_27->setMenu(menu);
    ui->toolButton_28->setMenu(menu);
    ui->toolButton_31->setMenu(menu);
    ui->toolButton_32->setMenu(menu);
    ui->toolButton_34->setMenu(menu);
    ui->toolButton_35->setMenu(menu);
    ui->pushButton->setStyleSheet("background-color: rgb(255, 0, 0);color: black;");
    ui->pushButton_2->setStyleSheet("background-color: rgb(0, 255, 0);color: black;");
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);
    ui->redlineEdit->setStyleSheet("background-color: rgb(0, 255, 0);color: white;border:0px;");
    ui->bluelineEdit->setStyleSheet("background-color: rgb(0, 0, 255);border:0px;");
    ui->redlineEdit_2->setStyleSheet("background-color: rgb(0, 255, 0);color: white;border:0px;");
    ui->bluelineEdit_2->setStyleSheet("background-color: rgb(0, 0, 255);border:0px;");
    ui->redlineEdit_3->setStyleSheet("background-color: rgb(0, 255, 0);color: white;border:0px;");
    ui->bluelineEdit_3->setStyleSheet("background-color: rgb(0, 0, 255);border:0px;");
    ui->redlineEdit_4->setStyleSheet("background-color: rgb(0, 255, 0);color: white;border:0px;");
    ui->bluelineEdit_4->setStyleSheet("background-color: rgb(0, 0, 255);border:0px;");
    ui->redlineEdit_5->setStyleSheet("background-color: rgb(0, 255, 0);color: white;border:0px;");
    ui->bluelineEdit_5->setStyleSheet("background-color: rgb(0, 0, 255);border:0px;");
    ui->pushButton_3->setFlat(true);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerUpdate(void)
{
    QDateTime time=QDateTime::currentDateTime();
    QString str=time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->timelabel->setText(str);
}
