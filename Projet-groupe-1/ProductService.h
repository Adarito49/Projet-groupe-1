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
		System::Data::DataSet^ selectProduct(System::String^);
		System::Data::DataSet^ FiltrerService(System::String^, System::String^);
		void Envoyer(System::String^);
	};
}