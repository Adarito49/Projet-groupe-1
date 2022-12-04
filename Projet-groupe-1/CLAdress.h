#pragma once
namespace NS_Comp_Mappage
{
	ref class CLAdress
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ n_street;
		System::String^ street_name;
		System::String^ zip_code;
		System::String^ city_name;
		int FK_adress_customer;
		int FK_adress_customer_invoice;
	public:
		System::String^ Select(void);

		void setId(int);
		void setn_street(System::String^);
		void setstreet_name(System::String^);
		void setzip_code(System::String^);
		void setcity_name(System::String^);
		void setfk_customer(int);
		void setfk_customer_invoice(int);

		int getId(void);
		System::String^ getn_street(void);
		System::String^ getstreet_name(void);
		System::String^ getzip_code(void);
		System::String^ getcity_name(void);
		int getfk_customer(void);
		int getfk_customer_invoice(void);
	};
}