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
		void createStaff(System::String^, System::String^, System::Int16^, System::DateTime^);
		System::Data::DataSet^ selectStaff(System::String^);
		void deleteStaff(System::Int16^);
		void updateStaff(System::String^, System::String^, System::Int16^, System::DateTime^);
	};
}