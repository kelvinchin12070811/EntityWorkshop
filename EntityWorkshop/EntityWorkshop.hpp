#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EntityWorkshop.h"

class EntityWorkshop : public QMainWindow
{
	Q_OBJECT

public:
	EntityWorkshop(QWidget *parent = Q_NULLPTR);

private:
	Ui::EntityWorkshopClass ui;
};
