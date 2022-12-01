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
		void createStaff(System::String^, System::String^, int, System::DateTime^, int);
		System::Data::DataSet^ selectStaff(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void deleteStaff(int);
		void updateStaff(System::String^, System::String^, int, System::DateTime^, int);
	};
}   