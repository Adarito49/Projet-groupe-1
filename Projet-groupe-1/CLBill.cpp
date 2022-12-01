#include "CLBill.h"

System::String^ NS_Comp_Mappage::CLBill::Select(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLBill::Insert(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLBill::Delete(void) {
	return "DELETE from Bill where id_bill='"+this->Id+"'";
}
System::String^ NS_Comp_Mappage::CLBill::Update(void) {
	return "";
}

void NS_Comp_Mappage::CLBill::setId(int id) {
	this->Id = id;
}
void NS_Comp_Mappage::CLBill::setpayment_date(System::DateTime^ date) {
	this->payment_date = date;
}
void NS_Comp_Mappage::CLBill::setpayment_nbr(int nbr) {
	this->payment_nbr = nbr;
}
void NS_Comp_Mappage::CLBill::setamount(double price) {
	this->amount = price;
}
void NS_Comp_Mappage::CLBill::setfk_bill_order(int fk) {
	this->FK_bill_order = fk;
}

int NS_Comp_Mappage::CLBill::getId(void) { return this->Id; }
System::DateTime^ NS_Comp_Mappage::CLBill::getpayment_date(void) { return this->payment_date; }
int NS_Comp_Mappage::CLBill::getpayment_nbr(void) { return this->payment_nbr; }
double NS_Comp_Mappage::CLBill::getamount(void) { return this->amount; }
int NS_Comp_Mappage::CLBill::getfk_bill_order(void) { return this->FK_bill_order; }