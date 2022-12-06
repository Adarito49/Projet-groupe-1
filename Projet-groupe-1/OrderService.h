#pragma once
#include "CLOrders.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class OrderService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLOrders^ oMappTB;
	public:
		OrderService(void);
		System::Data::DataSet^ selectOrder(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void Envoyer(System::String^);
	};
}