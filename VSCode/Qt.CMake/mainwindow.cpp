#include "mainwindow.h"

MainWindow::MainWindow() : QMainWindow(nullptr)
{
    m_button = new QPushButton(this);
    m_button->setText("PushButton");
    m_button->setEnabled(false);
    connect(m_button, &QPushButton::clicked, [=](bool b){
        qDebug() << "Clicked.";
    });
    m_button->setEnabled(true);
    m_button->show();
}

MainWindow::~MainWindow()
{

}