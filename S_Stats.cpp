#include "S_Stats.h"
#include "C_Stats.h"
#include <exception>

using namespace Services;

S_Stats::S_Stats(void) {
    this->BMappage = gcnew C_Stats;
    this->BConnexion = gcnew C_AccesAuxDonnées;
 
}

double S_Stats::PanierMoyen(void) {
    DataSet^ dt;
    dt = this->CConnexion->getRows(this->BMappage->PanierMoyen(), "CP");

    return Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]);
}

double S_Stats::ChiffreAffaireMois(String^ mois) {
    DataSet^ dt = gcnew DataSet;
    dt = this->CConnexion->getRows(this->BMappage->ChiffreAffaireMois(mois), "CCA");

    return Convert::ToDouble(dt->Tables[0]->Rows[0]->ItemArray[0]);
}

array<String^>^ S_Stats::ProduitSousSeuil(void) {
    DataSet^ dt = gcnew DataSet;
    dt = this->CConnexion->getRows(this->BMappage->ProduitSousSeuil(), "PSS");

    array<String^>^ list = gcnew array<String^>(dt->Tables[0]->Rows->Count);
    for (int i = 0; i < dt->Tables[0]->Rows->Count; i++) {
        list[i] = (String^)dt->Tables[0]->Rows[i]->ItemArray[0] + " - "
            + Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[1]) + " - Quantité: "
            + Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[2]) + " - Seuil: "
            + Convert::ToString(dt->Tables[0]->Rows[i]->ItemArray[3]);
    }

    return list;
}
