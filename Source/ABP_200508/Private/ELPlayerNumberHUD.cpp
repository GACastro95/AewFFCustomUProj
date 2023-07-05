#include "ELPlayerNumberHUD.h"

void UELPlayerNumberHUD::SetTagIcons(TArray<UELTagMatchIconBase*> InTagIcons) {
}

void UELPlayerNumberHUD::ResetShowTimer_N() {
}


ESlateVisibility UELPlayerNumberHUD::GetTopVisibility_N() const {
    return ESlateVisibility::Visible;
}

UELPlayerNumberHUD::UELPlayerNumberHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->bInitialized_N = false;
    this->bHideControllerID_N = false;
    this->ShowTimer_N = 0.00f;
}

