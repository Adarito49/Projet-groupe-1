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
