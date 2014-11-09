#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QPushButton>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	QPushButton *btn = new QPushButton(&w);
	qApp->setStyleSheet(
		"QPushButton {"
		"border: 1px solid #000000;"
		"border-radius: 10px;"
		"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
		"stop: 0 #dedede, stop: 0.5 #434343, stop: 0.51 #000000, stop: 1 #656a6d);"
		"min-width: 80px;"
		"}"

		"QPushButton:pressed {"
		"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
		"stop: 0 #cfcccc, stop: 0.5 #333232, stop: 0.51 #000000, stop: 1 #585c5f);"
		"}"

		"QPushButton:flat {"
		"border: none; "
		"}"
		);

	//btn->move(160, 150);
	w.show();
	return a.exec();
}