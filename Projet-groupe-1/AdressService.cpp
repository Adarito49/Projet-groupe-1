#include "AdressService.h"

NS_Comp_Svc::AdressService::AdressService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLAdress();
}

System::Data::DataSet^ NS_Comp_Svc::AdressService::selectAdress(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
