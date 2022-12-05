#pragma once
namespace NS_Comp_Mappage
{
	ref class CLCustomer
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ customer_name;
		System::String^ customer_first_name;
		System::DateTime^ birth_date;
	public:
		System::String^ Select(void);
		System::String^ Filtrer(System::String^);
		System::String^ Envoyer(System::String^);

		void setId(int);
		void setcustomer_name(System::String^);
		void setcustomer_first_name(System::String^);
		void setbirth_date(System::DateTime^);

		int getId(void);
		System::String^ getcustomer_name(void);
		System::String^ getcustomer_first_name(void);
		System::DateTime^ getbirth_date(void);
	};
}