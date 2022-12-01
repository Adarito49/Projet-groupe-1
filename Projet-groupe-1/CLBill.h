#pragma once
namespace NS_Comp_Mappage
{
	ref class CLBill
	{
	private:
		System::String^ sSql;
		int Id;
		System::DateTime^ payment_date;
		int payment_nbr;
		double amount;
		int FK_bill_order;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setId(int);
		void setpayment_date(System::DateTime^);
		void setpayment_nbr(int);
		void setamount(double);
		void setfk_bill_order(int);

		int getId(void);
		System::DateTime^ getpayment_date(void);
		int getpayment_nbr(void);
		double getamount(void);
		int getfk_bill_order(void);
	};
}