#pragma once
#include "CLAdress.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class AdressService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLAdress^ oMappTB;
	public:
		AdressService(void);
		System::Data::DataSet^ selectAdress(System::String^);
	};
}