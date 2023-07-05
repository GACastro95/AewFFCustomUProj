#include "ELNetProp.h"

void AELNetProp::SetNetOwnerCharacter(AELNetCharacter* NewOwner) {
}

bool AELNetProp::IsAttached_N(const ACharacter* Chara) const {
    return false;
}

AELNetCharacter* AELNetProp::GetNetOwnerCharacter() const {
    return NULL;
}

AELNetProp::AELNetProp() {
    this->NetOwnerCharacter = NULL;
    this->AttachChara_N = NULL;
}

