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
		void createCustomer(System::String^, System::String^, System::DateTime^);
		System::Data::DataSet^ selectCustomer(System::String^);
		void deleteCustomer(int);
		void updateCustomer(System::String^, System::String^, System::DateTime^);
	};
}