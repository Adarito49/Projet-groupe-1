#include "CLStaff.h"
#include "CLCustomer.h"
#include "GuiGestionPersonnel.h"

System::String^ NS_Comp_Mappage::CLStaff::Select(void)
{
	return "SELECT id_staff, staff_name, staff_first_name, hire_date, line_manager, n_street, street_name, zip_code, city_name FROM staff RIGHT JOIN Adress ON staff.FK_staff_adress = Adress.id_adress  where id_staff is not null"; //SELECT * FROM [Projet_POO].[dbo].[Staff] WHERE staff_name = @name
}
System::String^ NS_Comp_Mappage::CLStaff::Filtrer(System::String^ filtre)
{
	return filtre;
}
System::String^ NS_Comp_Mappage::CLStaff::Envoyer(System::String^ command)
{
	return command;
}

void NS_Comp_Mappage::CLStaff::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLStaff::setstaff_name(System::String^ staff_name)
{
	this->staff_name = staff_name;
}
void NS_Comp_Mappage::CLStaff::setstaff_first_name(System::String^ staff_first_name)
{
	this->staff_first_name = staff_first_name;
}
void NS_Comp_Mappage::CLStaff::setline_manager(int line_manager)
{
	this->line_manager = line_manager;
}
void NS_Comp_Mappage::CLStaff::sethire_date(System::DateTime^ hire_date)
{
	this->hire_date = hire_date;
}
void NS_Comp_Mappage::CLStaff::setid_adress(int id_adress)
{
	this->id_adress = id_adress;
}


int NS_Comp_Mappage::CLStaff::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLStaff::getstaff_name(void) { return this->staff_name; }
System::String^ NS_Comp_Mappage::CLStaff::getstaff_first_name(void) { return this->staff_first_name; }
int NS_Comp_Mappage::CLStaff::getline_manager(void) { return this->line_manager; }
System::DateTime^ NS_Comp_Mappage::CLStaff::gethire_date(void) { return this->hire_date; }
int NS_Comp_Mappage::CLStaff::getid_adress(void) { return this->id_adress; }