#include "CLOrders.h"

System::String^ NS_Comp_Mappage::CLOrders::Select(void) {
	return "select  id_order, ref_order, concat(customer_name, ' ', customer_first_name) as customer_name, price_duty_free, deliver_date, order_date from orders inner join Customer on Orders.FK_order_customer = Customer.id_customer";
}
System::String^ NS_Comp_Mappage::CLOrders::Filtrer(System::String^ filtre)
{
	return filtre;
}
System::String^ NS_Comp_Mappage::CLOrders::Envoyer(System::String^ command)
{
	return command;
}

void NS_Comp_Mappage::CLOrders::setId(int id) {
	this->Id = id;
}
void NS_Comp_Mappage::CLOrders::setref_order(System::String^ ref) {
	this->ref_order = ref;
}
void NS_Comp_Mappage::CLOrders::setprice_duty_free(float price) {
	this->price_duty_free = price;
}
void NS_Comp_Mappage::CLOrders::setdeliver_date(System::DateTime^ deliver) {
	this->deliver_date = deliver;
}
void NS_Comp_Mappage::CLOrders::setorder_date(System::DateTime^ order) {
	this->order_date = order;
}
void NS_Comp_Mappage::CLOrders::setfk_order_customer(int customer) {
	this->FK_order_customer = customer;
}

int NS_Comp_Mappage::CLOrders::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLOrders::getref_order(void) { return this->ref_order; }
float NS_Comp_Mappage::CLOrders::getprice_duty_free(void) { return this->price_duty_free; }
System::DateTime^ NS_Comp_Mappage::CLOrders::getdeliver_date(void) { return this->deliver_date; }
System::DateTime^ NS_Comp_Mappage::CLOrders::getorder_date(void) { return this->order_date; }
int NS_Comp_Mappage::CLOrders::getfk_order_customer(void) { return this->FK_order_customer; }