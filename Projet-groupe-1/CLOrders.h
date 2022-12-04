#pragma once
namespace NS_Comp_Mappage
{
	ref class CLOrders
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ ref_order;
		float price_duty_free;
		System::DateTime^ deliver_date;
		System::DateTime^ order_date;
		int FK_order_customer;
	public:
		System::String^ Select(void);

		void setId(int);
		void setref_order(System::String^);
		void setprice_duty_free(float);
		void setdeliver_date(System::DateTime^);
		void setorder_date(System::DateTime^);
		void setfk_order_customer(int);

		int getId(void);
		System::String^ getref_order(void);
		float getprice_duty_free(void);
		System::DateTime^ getdeliver_date(void);
		System::DateTime^ getorder_date(void);
		int getfk_order_customer(void);
	};
}