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

void NS_Comp_Svc::BillService::createBill(System::DateTime^ date, int nbr, double price, int fk) {
	System::String^ sql;

	this->oMappTB->setpayment_date(date);
	this->oMappTB->setpayment_nbr(nbr);
	this->oMappTB->setamount(price);
	this->oMappTB->setfk_bill_order(fk);
	sql = this->oMappTB->Insert();
	
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::BillService::updateBill(System::DateTime^ date, int nbr, double price, int fk) {
	System::String^ sql;

	this->oMappTB->setpayment_date(date);
	this->oMappTB->setpayment_nbr(nbr);
	this->oMappTB->setamount(price);
	this->oMappTB->setfk_bill_order(fk);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::BillService::deleteBill(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}