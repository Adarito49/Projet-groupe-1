#include "CLCustomer.h"

System::String^ NS_Comp_Mappage::CLCustomer::Select(void) { // methode select pour afficher sur une datagridview coté gestion client
	return "select id_customer, customer_name, customer_first_name, birth_date, t1.n_street, t1.street_name, t1.zip_code, t1.city_name, t2.n_street, t2.street_name, t2.zip_code, t2.city_name from Customer left join Adress as t1 on Customer.id_customer = t1.FK_adress_customer LEFT OUTER JOIN Adress as t2 ON Customer.id_customer = t2.FK_adress_customer_invoice where id_customer is not null";
}

System::String^ NS_Comp_Mappage::CLCustomer::Filtrer(System::String^ filtre) // methode pour filtrer une datagridview 
{
	return filtre;
}
System::String^ NS_Comp_Mappage::CLCustomer::Envoyer(System::String^ command)// methode pour faire l'update la suppression ainsi que la création de données dans une database
{
	return command;
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