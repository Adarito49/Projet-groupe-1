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
		void createOrder(System::String^, float, System::DateTime^, System::DateTime^, int);
		System::Data::DataSet^ selectOrder(System::String^);
		void deleteOrder(int);
		void updateOrder(System::String^, float, System::DateTime^, System::DateTime^, int);
	};
}