#include "LinkDB.h"


NS_Comp_Data::LinkDB::LinkDB(void) // CONSTRUCTEUR, Connection à la database 
{
	this->sCnx = "Data Source=ADAR-PC\\ADARITO;Initial Catalog=Projet_POO;User ID=Adarito;Password=azerty";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::LinkDB::getRows(System::String^ sSql, System::String^ sDataTableName) // methodes récupération ligne dans la database
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void NS_Comp_Data::LinkDB::actionRows(System::String^ sSql)// methodes action sur une ligne dans la database
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}
