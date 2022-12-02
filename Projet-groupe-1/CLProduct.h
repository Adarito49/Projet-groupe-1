#pragma once
namespace NS_Comp_Mappage
{
	ref class CLProduct
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ product_name;
		System::String^ product_type;
		double price;
		int product_quantity;
		int resupply_threshold;
		double vat_cover;
		double buying_price;
	public:
		System::String^ Select(void);
		System::String^ Filtrer(System::String^);
		System::String^ Envoyer(System::String^);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setId(int);
		void setproduct_name(System::String^);
		void setproduct_type(System::String^);
		void setprice(double);
		void setproduct_quantity(int);
		void setresupply_threshold(int);
		void setvat_cover(double);
		void setbuying_price(double);

		int getId(void);
		System::String^ getproduct_name(void);
		System::String^ getproduct_type(void);
		double getprice(void);
		int getproduct_quantity(void);
		int getresupply_threshold(void);
		double getvat_cover(void);
		double getbuying_price(void);
	};
}