#include "ELGuidHUD.h"

void UELGuidHUD::SetPlayer(AELCharacter_Native* Player) {
}

int32 UELGuidHUD::GetPlayerIndex() const {
    return 0;
}

UELGuidHUD::UELGuidHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->bShowHUD = false;
    this->bUseCustomPosition = false;
    this->OwnerMesh = NULL;
    this->Font = NULL;
}

