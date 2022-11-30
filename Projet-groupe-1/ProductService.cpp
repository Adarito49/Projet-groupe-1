#include "ProductService.h"

NS_Comp_Svc::ProductService::ProductService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLProduct();
}

void createProduct(System::String^, System::String^, System::String^, System::String^, int, int) {

}

System::Data::DataSet^ NS_Comp_Svc::ProductService::selectProduct(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ProductService::createProduct(System::String^ n_rue, System::String^ nom_rue, System::String^ code_postal, System::String^ nom_ville, int id_client, int id_client_livraison) {
	System::String^ sql;

	this->oMappTB->setn_street(n_rue);
	this->oMappTB->setstreet_name(nom_rue);
	this->oMappTB->setzip_code(code_postal);
	this->oMappTB->setcity_name(nom_ville);
	this->oMappTB->setfk_customer(id_client);
	this->oMappTB->setfk_customer_invoice(id_client_livraison);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::ProductService::updateProduct(System::String^ n_rue, System::String^ nom_rue, System::String^ code_postal, System::String^ nom_ville, int id_client, int id_client_livraison) {
	System::String^ sql;

	this->oMappTB->setn_street(n_rue);
	this->oMappTB->setstreet_name(nom_rue);
	this->oMappTB->setzip_code(code_postal);
	this->oMappTB->setcity_name(nom_ville);
	this->oMappTB->setfk_customer(id_client);
	this->oMappTB->setfk_customer_invoice(id_client_livraison);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::ProductService::deleteProduct(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}