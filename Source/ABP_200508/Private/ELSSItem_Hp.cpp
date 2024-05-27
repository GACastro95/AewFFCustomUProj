#include "ELSSItem_Hp.h"
#include "ESSItemType.h"

AELSSItem_Hp::AELSSItem_Hp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = ESSItemType::Hp;
    this->RecoveryRate = 0.00f;
}


