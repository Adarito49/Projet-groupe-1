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
void NS_Comp_Mappage::CLProduct::setproduct_name(System::String^ nom_produit) {
	this->product_name = nom_produit;
}
void NS_Comp_Mappage::CLProduct::setproduct_type(System::String^ type_produit) {
	this->product_type = type_produit;
}
void NS_Comp_Mappage::CLProduct::setprice(double prix) {
	this->price = prix;
}
void NS_Comp_Mappage::CLProduct::setproduct_quantity(int quantity) {
	this->product_quantity = quantity;
}
void NS_Comp_Mappage::CLProduct::setresupply_threshold(int resupply) {
	this->resupply_threshold = resupply;
}
void NS_Comp_Mappage::CLProduct::setvat_cover(double tva) {
	this->vat_cover = tva;
}
void NS_Comp_Mappage::CLProduct::setbuying_price(double prix_achat) {
	this->buying_price = prix_achat;
}

int NS_Comp_Mappage::CLProduct::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLProduct::getproduct_name(void) { return this->product_name; }
System::String^ NS_Comp_Mappage::CLProduct::getproduct_type(void) { return this->product_type; }
double NS_Comp_Mappage::CLProduct::getprice(void) { return this->price; }
int NS_Comp_Mappage::CLProduct::getproduct_quantity(void) { return this->product_quantity; }
int NS_Comp_Mappage::CLProduct::getresupply_threshold(void) { return this->resupply_threshold; }
double NS_Comp_Mappage::CLProduct::getvat_cover(void) { return this->vat_cover; }
double NS_Comp_Mappage::CLProduct::getbuying_price(void) { return this->buying_price; }