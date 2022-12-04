#include "HoldService.h"

NS_Comp_Svc::HoldService::HoldService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLHold();
}

System::Data::DataSet^ NS_Comp_Svc::HoldService::selectHold(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}