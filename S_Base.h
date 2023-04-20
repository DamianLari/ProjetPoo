#pragma once

#include "C_Base.h"
#include "C_AccesAuxDonnées.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
using namespace Composants;

namespace Services
{
    ref class S_Base {

    public:
        S_Base();
        DataSet^ data;
    protected:
        C_Base^ BMappage;
        C_AccesAuxDonnées^ BConnexion;
    };
};