#include "ELSSItem_BlackDia.h"
#include "ESSItemType.h"

AELSSItem_BlackDia::AELSSItem_BlackDia(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::BlackDia;
    this->OldOwnerActor = NULL;
    this->Jewel = 0;
}


