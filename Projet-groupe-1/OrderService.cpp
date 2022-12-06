#include "OrderService.h"

NS_Comp_Svc::OrderService::OrderService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLOrders();
}

System::Data::DataSet^ NS_Comp_Svc::OrderService::selectOrder(System::String^ dataTableName) {
	System::String^ sql;
	
	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::OrderService::FiltrerService(System::String^ dataTableName, System::String^ yo) {
	System::String^ sql;

	sql = this->oMappTB->Filtrer(yo);
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::OrderService::Envoyer(System::String^ command) {
	System::String^ sql;

	sql = this->oMappTB->Envoyer(command);
	this->oCad->actionRows(sql);
}
