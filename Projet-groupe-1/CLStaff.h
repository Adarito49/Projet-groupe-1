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
		int line_manager;
		System::DateTime^ hire_date;
		int id_adress;
	public:
		System::String^ Select(void);
		System::String^ Filtrer(System::String^);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setId(int);
		void setstaff_name(System::String^);
		void setstaff_first_name(System::String^);
		void setline_manager(int);
		void sethire_date(System::DateTime^);
		void setid_adress(int);

		int getId(void);
		System::String^ getstaff_name(void);
		System::String^ getstaff_first_name(void);
		int getline_manager(void);
		System::DateTime^ gethire_date(void);
		int getid_adress();
	};
}
