#include "EntityWorkshop.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EntityWorkshop w;
	w.show();
	return a.exec();
}
