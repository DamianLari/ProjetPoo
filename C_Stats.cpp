#include "C_Stats.h"
using namespace Composants;

SqlCommand^ C_Stats::PanierMoyen(void) {
    Start_Procedure("PanierMoyen");
    return this->Procedure;
}

SqlCommand^ C_Stats::ChiffreAffaireMois(String^ mois) {
    Start_Procedure("ChiffreAffaireMois");

    this->Procedure->Parameters->AddWithValue("@Mois", mois);

    return this->Procedure;
}

SqlCommand^ C_Stats::ProduitSousSeuil(void) {
    Start_Procedure("ProduitSousSeuil");

    return this->Procedure;
}

SqlCommand^ C_Stats::AchatTotalClient(int ID) {
    Start_Procedure("AchatTotalClient");

    this->Procedure->Parameters->AddWithValue("@ID", ID);

    return this->Procedure;
}

SqlCommand^ C_Stats::PlusVendus(void) {
    Start_Procedure("PlusVendus");

    return this->Procedure;
}

SqlCommand^ C_Stats::MoinsVendus(void) {
    Start_Procedure("MoinsVendus");

    return this->Procedure;
}

SqlCommand^ C_Stats::ValeurCommerciale(void) {
    
    Start_Procedure("ValeurCommerciale");

    return this->Procedure;
}

SqlCommand^ C_Stats::ValeurAchat(void) {
    Start_Procedure("ValeurAchat");

    return this->Procedure;
}
