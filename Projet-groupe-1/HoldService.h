#pragma once
#include "CLHold.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class HoldService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLHold^ oMappTB;
	public:
		HoldService(void);
		void createHold(int, int);
		System::Data::DataSet^ selectHold(int);
		void deleteHold(int);
		void updateHold(int, int);
	};
}