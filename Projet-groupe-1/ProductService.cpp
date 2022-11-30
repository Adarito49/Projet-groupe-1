#include "ProductService.h"

NS_Comp_Svc::ProductService::ProductService(void) {
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLCustomer();
}