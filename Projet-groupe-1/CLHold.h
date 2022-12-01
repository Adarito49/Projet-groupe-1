#pragma once
namespace NS_Comp_Mappage
{
	ref class CLHold
	{
	private:
		System::String^ sSql;
		int fk_hold_order;
		int fk_hold_product;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setfk_order(int);
		void setfk_product(int);

		int getfk_order(void);
		int getfk_product(void);
	};
}