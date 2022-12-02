#pragma once
#include "CLProduct.h"
#include "LinkDB.h"

namespace NS_Comp_Svc
{
	ref class ProductService
	{
	private:
		NS_Comp_Data::LinkDB^ oCad;
		NS_Comp_Mappage::CLProduct^ oMappTB;
	public:
		ProductService(void);
		void createProduct(System::String^, System::String^, double, int, int, double, double);
		System::Data::DataSet^ selectProduct(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void Envoyer(System::String^);
		void deleteProduct(int);
		void updateProduct(System::String^, System::String^, double, int, int, double, double);
	};
}