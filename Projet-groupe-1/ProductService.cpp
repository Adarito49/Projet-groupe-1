#include "ProductService.h"

NS_Comp_Svc::ProductService::ProductService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLProduct();
}

void createProduct(System::String^, System::String^, double, int, int, double, double) {

}

System::Data::DataSet^ NS_Comp_Svc::ProductService::selectProduct(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ProductService::createProduct(System::String^ nom, System::String^ type, double prix, int quantity, int resupply, double tva, double buying) {
	System::String^ sql;

	this->oMappTB->setproduct_name(nom);
	this->oMappTB->setproduct_type(type);
	this->oMappTB->setprice(prix);
	this->oMappTB->setproduct_quantity(quantity);
	this->oMappTB->setresupply_threshold(resupply);
	this->oMappTB->setbuying_price(buying);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::ProductService::updateProduct(System::String^ nom, System::String^ type, double prix, int quantity, int resupply, double tva, double buying) {
	System::String^ sql;

	this->oMappTB->setproduct_name(nom);
	this->oMappTB->setproduct_type(type);
	this->oMappTB->setprice(prix);
	this->oMappTB->setproduct_quantity(quantity);
	this->oMappTB->setresupply_threshold(resupply);
	this->oMappTB->setvat_cover(tva);
	this->oMappTB->setbuying_price(buying);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::ProductService::deleteProduct(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}