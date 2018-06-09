#include <qmessagebox.h>
#include "EntityWorkshop.hpp"

EntityWorkshop::EntityWorkshop(QWidget *parent)
	: QMainWindow(parent)
{
	ui = std::make_unique<Ui::EntityWorkshopClass>();
	ui->setupUi(this);
	init();
}

void EntityWorkshop::init()
{
	for (auto& itr : rootItem)
		itr = new QTreeWidgetItem;

	rootItem[0]->setText(0, "Animations");
	rootItem[1]->setText(0, "Entities");
	rootItem[2]->setText(0, "Sprites");

	for (auto& itr : rootItem)
		ui->documentView->addTopLevelItem(itr);

	connectWidgets();
}

void EntityWorkshop::connectWidgets()
{
	connect(ui->actionAbout_Qt, &QAction::triggered, this, &EntityWorkshop::on_aboutQt_triggered);
	connect(ui->documentView, &QTreeWidget::itemDoubleClicked, this, &EntityWorkshop::on_itemDoubleClicked);
}

void EntityWorkshop::on_aboutQt_triggered()
{
	QMessageBox::aboutQt(this, tr("About Qt"));
}

void EntityWorkshop::on_itemDoubleClicked(QTreeWidgetItem * item, int column)
{
	if (item->parent() == nullptr)
	{
		int index = ui->documentView->indexOfTopLevelItem(item);
		
	}
	else
	{
		QMessageBox::information(this, "Clicked", "item clicked");
	}
}
