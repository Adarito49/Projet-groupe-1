#include "CLCustomer.h"

System::String^ NS_Comp_Mappage::CLCustomer::Select(void) {
	return "SELECT * FROM [Projet_POO].[dbo].[Customer]";
}
System::String^ NS_Comp_Mappage::CLCustomer::Insert(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLCustomer::Delete(void) {
	return "DELETE from Customer where id_customer='"+this->Id+"'";
}
System::String^ NS_Comp_Mappage::CLCustomer::Update(void) {
	return "";
}

void NS_Comp_Mappage::CLCustomer::setId(int id) {
	this->Id = id;
}
void NS_Comp_Mappage::CLCustomer::setcustomer_name(System::String^ client_name) {
	this->customer_name = client_name;
}
void NS_Comp_Mappage::CLCustomer::setcustomer_first_name(System::String^ client_first_name) {
	this->customer_first_name = client_first_name;
}
void NS_Comp_Mappage::CLCustomer::setbirth_date(System::DateTime^ birthDate) {
	this->birth_date = birthDate;
}

int NS_Comp_Mappage::CLCustomer::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLCustomer::getcustomer_name(void) { return this->customer_name; }
System::String^ NS_Comp_Mappage::CLCustomer::getcustomer_first_name(void) { return this->customer_first_name; }
System::DateTime^ NS_Comp_Mappage::CLCustomer::getbirth_date(void) { return this->birth_date; }