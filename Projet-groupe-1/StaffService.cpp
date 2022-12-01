#include "StaffService.h"

NS_Comp_Svc::StaffService::StaffService(void)
{
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLStaff();
}

System::Data::DataSet^ NS_Comp_Svc::StaffService::selectStaff(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::StaffService::FiltrerService(System::String^ dataTableName, System::String^ yo) {
	System::String^ sql;

	sql = this->oMappTB->Filtrer(yo);
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::StaffService::createStaff(System::String^ nom, System::String^ prenom, int line_manager, System::DateTime^ hire_date, int id_adress)
{
	System::String^ sql;

	this->oMappTB->setstaff_name(nom);
	this->oMappTB->setstaff_first_name(prenom);
	this->oMappTB->setline_manager(line_manager);
	this->oMappTB->sethire_date(hire_date);
	this->oMappTB->setid_adress(id_adress);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::StaffService::updateStaff(System::String^ nom, System::String^ prenom, int line_manager, System::DateTime^ hire_date, int id_adress)
{
	System::String^ sql;

	this->oMappTB->setstaff_name(nom);
	this->oMappTB->setstaff_first_name(prenom);
	this->oMappTB->setline_manager(line_manager);
	this->oMappTB->sethire_date(hire_date);
	this->oMappTB->setid_adress(id_adress);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::StaffService::deleteStaff(int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}