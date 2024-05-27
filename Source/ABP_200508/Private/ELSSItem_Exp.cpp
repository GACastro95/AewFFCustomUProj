#include "ELSSItem_Exp.h"
#include "ESSItemType.h"

AELSSItem_Exp::AELSSItem_Exp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::Exp;
    this->Exp = 0;
}


