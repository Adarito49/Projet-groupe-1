#include "OrderService.h"

NS_Comp_Svc::OrderService::OrderService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLOrders();
}

void createOrder(System::String^, float, System::DateTime^, System::DateTime^, int) {

}

System::Data::DataSet^ NS_Comp_Svc::OrderService::selectOrder(System::String^ dataTableName) {
	System::String^ sql;
	
	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::OrderService::createOrder(System::String^ ref, float price, System::DateTime^ deliver, System::DateTime^ order, int fk) {
	System::String^ sql;

	this->oMappTB->setref_order(ref);
	this->oMappTB->setprice_duty_free(price);
	this->oMappTB->setdeliver_date(deliver);
	this->oMappTB->setorder_date(order);
	this->oMappTB->setfk_order_customer(fk);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::OrderService::updateOrder(System::String^ ref, float price, System::DateTime^ deliver, System::DateTime^ order, int fk) {
	System::String^ sql;

	this->oMappTB->setref_order(ref);
	this->oMappTB->setprice_duty_free(price);
	this->oMappTB->setdeliver_date(deliver);
	this->oMappTB->setorder_date(order);
	this->oMappTB->setfk_order_customer(fk);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::OrderService::deleteOrder(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}