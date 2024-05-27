#include "ELSSHottestPlayer.h"

AELSSHottestPlayer::AELSSHottestPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CostumeID = 0;
}

float AELSSHottestPlayer::PlayMotion(UAnimMontage* PlayMontage) {
    return 0.0f;
}

FSSWrestlerSetupParam AELSSHottestPlayer::GetSSWrestlerSetupParam() const {
    return FSSWrestlerSetupParam{};
}

int32 AELSSHottestPlayer::GetCostumeID() const {
    return 0;
}

FWrestlerSetupParam AELSSHottestPlayer::CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const {
    return FWrestlerSetupParam{};
}


