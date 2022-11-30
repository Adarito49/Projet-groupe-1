#include "CLProduct.h"

System::String^ NS_Comp_Mappage::CLProduct::Select(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLProduct::Insert(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLProduct::Delete(void) {
	return "";
}
System::String^ NS_Comp_Mappage::CLProduct::Update(void) {
	return "";
}

void NS_Comp_Mappage::CLProduct::setId(int id) {
	this->Id = id;
}
void NS_Comp_Mappage::CLProduct::setn_street(System::String^ n_rue) {
	this->n_street = n_rue;
}
void NS_Comp_Mappage::CLProduct::setstreet_name(System::String^ nom_rue) {
	this->street_name = nom_rue;
}
void NS_Comp_Mappage::CLProduct::setzip_code(System::String^ code_postal) {
	this->zip_code = code_postal;
}
void NS_Comp_Mappage::CLProduct::setcity_name(System::String^ nom_ville) {
	this->city_name = nom_ville;
}
void NS_Comp_Mappage::CLProduct::setfk_customer(int id_customer) {
	this->FK_adress_customer = id_customer;
}
void NS_Comp_Mappage::CLProduct::setfk_customer_invoice(int id_customer) {
	this->FK_adress_customer_invoice = id_customer;
}

int NS_Comp_Mappage::CLProduct::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLProduct::getn_street(void) { return this->n_street; }
System::String^ NS_Comp_Mappage::CLProduct::getstreet_name(void) { return this->street_name; }
System::String^ NS_Comp_Mappage::CLProduct::getzip_code(void) { return this->zip_code; }
System::String^ NS_Comp_Mappage::CLProduct::getcity_name(void) { return this->city_name; }
int NS_Comp_Mappage::CLProduct::getfk_customer(void) { return this->FK_adress_customer; }
int NS_Comp_Mappage::CLProduct::getfk_customer_invoice(void) { return this->FK_adress_customer_invoice; }