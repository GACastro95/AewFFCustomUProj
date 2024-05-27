#include "ELSSItem_RecoveryShield.h"
#include "ESSItemType.h"

AELSSItem_RecoveryShield::AELSSItem_RecoveryShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::RecoveryShield;
    this->RecoveryRate = 0.00f;
}


