#include "ELCareerMapPlayerControllerBase.h"

AELCareerMapPlayerControllerBase::AELCareerMapPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_InputComponent = NULL;
}

void AELCareerMapPlayerControllerBase::TransferOperatePawn(APawn* ApplyPawn) {
}

void AELCareerMapPlayerControllerBase::BroadcastApplyPawn(APawn* ApplyPawn) {
}


