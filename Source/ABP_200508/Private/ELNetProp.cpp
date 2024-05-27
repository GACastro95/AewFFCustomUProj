#include "ELNetProp.h"

AELNetProp::AELNetProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetOwnerCharacter = NULL;
    this->AttachChara_N = NULL;
}

void AELNetProp::SetNetOwnerCharacter(AELNetCharacter* NewOwner) {
}

bool AELNetProp::IsAttached_N(const ACharacter* Chara) const {
    return false;
}

AELNetCharacter* AELNetProp::GetNetOwnerCharacter() const {
    return NULL;
}


