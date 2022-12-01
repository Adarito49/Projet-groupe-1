#include "HoldService.h"

NS_Comp_Svc::HoldService::HoldService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLHold();
}

void createHold(int, int) {

}

System::Data::DataSet^ NS_Comp_Svc::HoldService::selectHold(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::HoldService::createHold(int order, int product) {
	System::String^ sql;

	this->oMappTB->setfk_order(order);
	this->oMappTB->setfk_product(product);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::HoldService::updateHold(int order, int product) {
	System::String^ sql;

	this->oMappTB->setfk_order(order);
	this->oMappTB->setfk_product(product);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::HoldService::deleteHold(int id) {
	System::String^ sql;

	this->oMappTB->setfk_order(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}