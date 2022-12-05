#pragma once
#include "CLCustomer.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class CustomerService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLCustomer^ oMappTB;
	public:
		CustomerService(void);
		System::Data::DataSet^ selectCustomer(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void Envoyer(System::String^);
	};
}