#include "ELAnimInstance_BuildBody.h"

UELAnimInstance_BuildBody::UELAnimInstance_BuildBody() {
    this->bShouldUpdateParam = false;
    this->bEnableFixBone = false;
    this->bFixRootNode = false;
    this->FixRootNodeRatio = 0.00f;
    this->bDisableUpdate = false;
}

void UELAnimInstance_BuildBody::UpdateState() {
}

void UELAnimInstance_BuildBody::UpdateParam(const bool bForce) {
}

void UELAnimInstance_BuildBody::PostInitProperties() {
}

void UELAnimInstance_BuildBody::OnUpdateState_Implementation() {
}

void UELAnimInstance_BuildBody::OnUpdateParam_Implementation(const bool bForce) {
}


