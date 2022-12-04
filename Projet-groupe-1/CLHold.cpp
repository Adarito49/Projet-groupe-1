#include "CLHold.h"

System::String^ NS_Comp_Mappage::CLHold::Select(void) {
	return "";
}

void NS_Comp_Mappage::CLHold::setfk_order(int fk) {
	this->fk_hold_order = fk;
}
void NS_Comp_Mappage::CLHold::setfk_product(int fk) {
	this->fk_hold_product = fk;
}

int NS_Comp_Mappage::CLHold::getfk_order(void) { return this->fk_hold_order; }
int NS_Comp_Mappage::CLHold::getfk_product(void) { return this->fk_hold_product; }