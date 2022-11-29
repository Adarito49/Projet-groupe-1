#include "StaffService.h"

NS_Comp_Svc::StaffService::StaffService(void)
{
	this->oCad = gcnew NS_Comp_Data::LinkDB();
	this->oMappTB = gcnew NS_Comp_Mappage::CLStaff();
}
