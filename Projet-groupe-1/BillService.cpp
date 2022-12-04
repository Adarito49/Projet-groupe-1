#include "BillService.h"

NS_Comp_Svc::BillService::BillService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLBill();
}

System::Data::DataSet^ NS_Comp_Svc::BillService::selectBill(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
