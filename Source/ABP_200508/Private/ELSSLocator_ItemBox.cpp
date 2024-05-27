#include "ELSSLocator_ItemBox.h"

AELSSLocator_ItemBox::AELSSLocator_ItemBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocatorGroup = ESSItemBoxLocatorGroup::All;
    this->SpawnedItemBox = NULL;
}


