#include "ELSSItem_JewelRadar.h"
#include "ESSItemType.h"

AELSSItem_JewelRadar::AELSSItem_JewelRadar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::JewelRadar;
    this->JewelRadar = 0;
}


