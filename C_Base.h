#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;


namespace Composants
{
    ref class C_Base
    {
    public: C_Base();

    protected:
        SqlCommand^ Procedure;
        void StartProcedure(String^);
    };
};