#include "ELSSWidgetHUD_OperationGuide.h"

void UELSSWidgetHUD_OperationGuide::UpdateOperationGuide() {
}


void UELSSWidgetHUD_OperationGuide::SetOperationGuideType(ESSOperationGuideExecute InType) {
}



void UELSSWidgetHUD_OperationGuide::SetGuideFontAndButtonVisible(int32 InVisibleIndex) {
}




UELSSWidgetHUD_OperationGuide::UELSSWidgetHUD_OperationGuide() {
    this->NowOperationType = ESSOperationGuideExecute::None;
    this->IsGuradState = false;
    this->IsInteractMode = false;
}

