#include "ELSSItem_Jewel.h"
#include "ESSItemType.h"

AELSSItem_Jewel::AELSSItem_Jewel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::Jewel;
    this->Jewel = 0;
}


