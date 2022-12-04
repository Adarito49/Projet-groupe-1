#include "CLAdress.h"

System::String^ NS_Comp_Mappage::CLAdress::Select(void) {
	return "";
}

void NS_Comp_Mappage::CLAdress::setId(int id) {
	this->Id = id;
}
void NS_Comp_Mappage::CLAdress::setn_street(System::String^ n_rue) {
	this->n_street = n_rue;
}
void NS_Comp_Mappage::CLAdress::setstreet_name(System::String^ nom_rue) {
	this->street_name = nom_rue;
}
void NS_Comp_Mappage::CLAdress::setzip_code(System::String^ code_postal) {
	this->zip_code = code_postal;
}
void NS_Comp_Mappage::CLAdress::setcity_name(System::String^ nom_ville) {
	this->city_name = nom_ville;
}
void NS_Comp_Mappage::CLAdress::setfk_customer(int id_customer) {
	this->FK_adress_customer = id_customer;
}
void NS_Comp_Mappage::CLAdress::setfk_customer_invoice(int id_customer) {
	this->FK_adress_customer_invoice = id_customer;
}

int NS_Comp_Mappage::CLAdress::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLAdress::getn_street(void) { return this->n_street; }
System::String^ NS_Comp_Mappage::CLAdress::getstreet_name(void) { return this->street_name; }
System::String^ NS_Comp_Mappage::CLAdress::getzip_code(void) { return this->zip_code; }
System::String^ NS_Comp_Mappage::CLAdress::getcity_name(void) { return this->city_name; }
int NS_Comp_Mappage::CLAdress::getfk_customer(void) { return this->FK_adress_customer; }
int NS_Comp_Mappage::CLAdress::getfk_customer_invoice(void) { return this->FK_adress_customer_invoice; }