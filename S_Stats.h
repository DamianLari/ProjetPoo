#pragma once
#include "S_Base.h"
#include "C_Stats.h"

using namespace Composants;

namespace Services
{
    ref class S_Stats :
        public S_Base
    {
    private:
        C_Stats^ BMappage;
        C_AccesAuxDonnées^ BConnexion;

        double Val_Achat;

    
    public:
        S_Stats(void);
        double PanierMoyen(void);
        double ChiffreAffaireMois(String^ mois);
        array<String^>^ ProduitSousSeuil(void);
        double AchatTotalClient(int ID);
        array<String^>^ Plus_Vendus(void);
        array<String^>^ Moins_Vendus(void);
        double ValeurCommerciale(void);
        double ValeurAchat(void);

       
    };
};