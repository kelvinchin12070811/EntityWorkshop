#pragma once
#include <array>
#include <memory>
#include <QtWidgets/QMainWindow>
#include <QTreeWidgetItem>
#include "ui_EntityWorkshop.h"

class EntityWorkshop : public QMainWindow
{
	Q_OBJECT

public:
	EntityWorkshop(QWidget *parent = Q_NULLPTR);

private:
	void init();
	void connectWidgets();
private: // slots
	void on_aboutQt_triggered();
	void on_itemDoubleClicked(QTreeWidgetItem* item, int column);
private:
	std::unique_ptr<Ui::EntityWorkshopClass> ui;

	std::array<QTreeWidgetItem*, 3> rootItem;
};
