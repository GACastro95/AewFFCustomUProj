#include "ELSSCharacterSetupComponent.h"

UELSSCharacterSetupComponent::UELSSCharacterSetupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UELSSCharacterSetupComponent::UpdateDefaultMotion(EWrestlerID_N inWrestlerId, const FWrestlerSetupParam& inWrestlerSetupParam) {
}


bool UELSSCharacterSetupComponent::CheckBlockedUserUGC(const FSSWrestlerSetupParam& inWrestlerSetupParam) const {
    return false;
}


