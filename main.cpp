#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QPushButton>
#include <qlayout.h>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	MainWindow w;
	QWidget* wd = w.findChild<QWidget*>("verticalWidget");

	w.show();
	return a.exec();
}

void QWidget::enterEvent(QEvent * event)
{
	MainWindow w;
	QWidget* wd = w.findChild<QWidget*>("verticalWidget");
	wd->move(100, 1000);
	this->repaint();
}