#include "ELDialogBoxBattlePassWidgetBase.h"

void UELDialogBoxBattlePassWidgetBase::Setup(int32 _addPoint) {
}

void UELDialogBoxBattlePassWidgetBase::OnUpdateBattlePassPoint(bool _Successed) {
}



int32 UELDialogBoxBattlePassWidgetBase::GetProgressRateNum() const {
    return 0;
}

FLevelProgressRateParam UELDialogBoxBattlePassWidgetBase::GetLevelProgressRateParam(int32 _Index, bool& _findParam) {
    return FLevelProgressRateParam{};
}

void UELDialogBoxBattlePassWidgetBase::EndDialog() {
}

UELDialogBoxBattlePassWidgetBase::UELDialogBoxBattlePassWidgetBase() {
}

