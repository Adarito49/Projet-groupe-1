#pragma once
namespace NS_Comp_Mappage
{
	ref class CLStaff
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ staff_name;
		System::String^ staff_first_name;
		System::Int16^ line_manager;
		System::DateTime^ hire_date;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setId(int);
		void setstaff_name(System::String^);
		void setstaff_first_name(System::String^);
		void setline_manager(System::Int16^);
		void sethire_date(System::DateTime^);

		int getId(void);
		System::String^ getstaff_name(void);
		System::String^ getstaff_first_name(void);
		System::Int16^ getline_manager(void);
		System::DateTime^ gethire_date(void);
	};
}
