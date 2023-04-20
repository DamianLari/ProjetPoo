#pragma once
#include "C_Base.h"

namespace Composants
{
    ref class C_Stats :
        public C_Base
    {
    public:
        SqlCommand^ PanierMoyen(void);
        SqlCommand^ ChiffreAffaireMois(String^ mois);
        SqlCommand^ ProduitSousSeuil(void);
        SqlCommand^ AchatTotalClient(int ID);
        SqlCommand^ PlusVendus(void);
        SqlCommand^ MoinsVendus(void);
        SqlCommand^ ValeurCommerciale(void);
        SqlCommand^ ValeurAchat(void);
    };
};