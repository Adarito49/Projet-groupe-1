#pragma once
#include "CLStaff.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class StaffService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLStaff^ oMappTB;
	public:
		StaffService(void);
		System::Data::DataSet^ selectStaff(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void Envoyer(System::String^);
	};
}   