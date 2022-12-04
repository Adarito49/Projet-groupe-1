#pragma once
#include "CLBill.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class BillService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLBill^ oMappTB;
	public:
		BillService(void);
		System::Data::DataSet^ selectBill(System::String^);
	};
}