#include "CustomerService.h"

NS_Comp_Svc::CustomerService::CustomerService(void)
{
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLCustomer();
}

void createCustomer(System::String^, System::String^, System::DateTime^) {

}

System::Data::DataSet^ NS_Comp_Svc::CustomerService::selectCustomer(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CustomerService::createCustomer(System::String^ nom, System::String^ prenom, System::DateTime^ birth_date) {
	System::String^ sql;

	this->oMappTB->setcustomer_name(nom);
	this->oMappTB->setcustomer_first_name(prenom);
	this->oMappTB->setbirth_date(birth_date);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CustomerService::updateCustomer(System::String^ nom, System::String^ prenom, System::DateTime^ birth_date) {
	System::String^ sql;

	this->oMappTB->setcustomer_name(nom);
	this->oMappTB->setcustomer_first_name(prenom);
	this->oMappTB->setbirth_date(birth_date);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CustomerService::deleteCustomer(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}