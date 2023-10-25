#include "AccederAuxDonn�es.h"
namespace Composants {
	AccederAuxDonn�es::AccederAuxDonn�es() {
		this->Requete = "RIEN";
		this->ChaineConnexion = "Data Source=34.163.214.4;Initial Catalog=Exode;Persist Security Info=True;User ID=sqlserver;Password=mdpgpr5";
		this->Connecteur = gcnew SqlConnection(this->ChaineConnexion);
		this->Commande = gcnew SqlCommand(this->Requete, this->Connecteur);
		this->Adapteur = gcnew SqlDataAdapter(this->Commande);
		this->DS = gcnew DataSet();
		this->Commande->CommandType = CommandType::Text;
	}

	void AccederAuxDonn�es::actionRows(String^ Requete)
	{
		//this->setRequete(requete);
		this->Commande->CommandText = Requete;
		this->Adapteur->SelectCommand = Commande;
		this->Connecteur->Open();
		this->Commande->ExecuteNonQuery();
		this->Connecteur->Close();
	}

	DataSet^ AccederAuxDonn�es::getRows(String^ Requete, String^ Table)
	{
		this->DS->Clear();
		//this->setRequete(Requete);
		//this->Adapteur = gcnew SqlDataAdapter(this->Commande);
		this->Commande->CommandText = Requete;
		this->DS = gcnew DataSet();
		this->Adapteur->SelectCommand = this->Commande;
		this->Adapteur->Fill(this->DS, Table);
		return this->DS;
	}


	int AccederAuxDonn�es::actionRowID(String^ requete) {
		int id;
		this->setRequete(requete);
		this->Commande->CommandText = this->Requete;
		this->Connecteur->Open();
		id = Convert::ToInt32(this->Commande->ExecuteScalar());
		this->Connecteur->Close();
		return id;
	}
	void AccederAuxDonn�es::setRequete(String^ requete)
	{
		if (requete == "" || requete == "RIEN")
		{
			this->Requete = "RIEN";
		}
		else
		{
			this->Requete = requete;
		}
	}
}

