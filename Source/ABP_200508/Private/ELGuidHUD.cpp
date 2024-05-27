#include "ELGuidHUD.h"

UELGuidHUD::UELGuidHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->bShowHUD = false;
    this->bUseCustomPosition = false;
    this->OwnerMesh = NULL;
    this->Font = NULL;
}

void UELGuidHUD::SetPlayer(AELCharacter_Native* Player) {
}

int32 UELGuidHUD::GetPlayerIndex() const {
    return 0;
}


