#include "C_Base.h"
using namespace System::Data::SqlClient;
using namespace System::Data;

using namespace Composants;

C_Base::C_Base() {
}

void C_Base::StartProcedure(String^ command) {
    this->Procedure = gcnew SqlCommand(command);
    this->Procedure->CommandType = CommandType::StoredProcedure;
}