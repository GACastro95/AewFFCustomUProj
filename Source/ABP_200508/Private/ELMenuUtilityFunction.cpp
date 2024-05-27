#include "ELMenuUtilityFunction.h"

UELMenuUtilityFunction::UELMenuUtilityFunction() {
}

void UELMenuUtilityFunction::StartTipsLoadingScreenWithOverrideNextLevel(UObject* _pWorldContextObject, ETipsLoadingCategory _nextGameMode, const FName& _nextLevel, const FString& _nextLevelOption) {
}

void UELMenuUtilityFunction::StartTipsLoadingScreen(UObject* _pWorldContextObject, ETipsLoadingCategory _nextGameMode) {
}

void UELMenuUtilityFunction::SetUserFocusToGameViewport(UObject* _pWorldContextObject) {
}

void UELMenuUtilityFunction::SetGameFPS(UObject* _pWorldContextObject, int32 _fpsValue) {
}

bool UELMenuUtilityFunction::PlatformTextCheck(const FText& InText, FText& OutText) {
    return false;
}

bool UELMenuUtilityFunction::IsValidWrestlerSelectOnKeyboard(UObject* _pWorldContextObject) {
    return false;
}

bool UELMenuUtilityFunction::IsValidForceFailedDlcCheck() {
    return false;
}

bool UELMenuUtilityFunction::IsUnlockedItemContent(UObject* _pWorldContextObject, const int32 _checkUnlockableItemID) {
    return false;
}

bool UELMenuUtilityFunction::IsAllControllerEnableInput(UObject* _pWorldContextObject) {
    return false;
}

void UELMenuUtilityFunction::Integer_Sort(TArray<int32> _target, bool IsDesc, TArray<int32>& _out) {
}

int32 UELMenuUtilityFunction::GetUserIndexForKeyboard(UObject* _pWorldContextObject) {
    return 0;
}

int32 UELMenuUtilityFunction::GetOnlineUserRankImageIndex(const int32 _rankPoint, const int32 _scoreRanking) {
    return 0;
}

void UELMenuUtilityFunction::GetMenuSelectWreslterParamFromWrestlerID(UObject* _pWorldContextObject, EWrestlerID_N _targetWrestler, bool& _findParam, FMenuSelectWreslterParam& _outResult) {
}

void UELMenuUtilityFunction::GetMenuSelectWreslterList(UObject* _pWorldContextObject, ESelectWreslterSortType _sortType, TArray<FMenuSelectWreslterParam>& _outResult, bool _isCheckUnlockStatus) {
}

void UELMenuUtilityFunction::GetMenuEditWrestlerProfile(FELWrestlerProfile& _outProfile, const UMyWrestlerDataObject* _targetWrestlerData) {
}

UFont* UELMenuUtilityFunction::GetCurrentLanguageFont(UObject* _pWorldContextObject, const UObject* BaseFont) {
    return NULL;
}

void UELMenuUtilityFunction::GetCurrentLanguage(UObject* _pWorldContextObject, ELanguageType& _Result) {
}

void UELMenuUtilityFunction::ConvertBodyWeightUnitToLb(const float _inBodyWeight, int32& _outLbs) {
}

void UELMenuUtilityFunction::ConvertBodyHeightUnitToFoot(const float _inBodyHeight, int32& _outFoot, int32& _outInch) {
}

void UELMenuUtilityFunction::ChangeUserIndexForKeyboardMouse(UObject* _pWorldContextObject, int32 _newIndex) {
}

void UELMenuUtilityFunction::ChangeLanguage(UObject* _pWorldContextObject, ELanguageType _type) {
}

void UELMenuUtilityFunction::ChangeEnableInputToHostControllerOnly(UObject* _pWorldContextObject) {
}

void UELMenuUtilityFunction::ChangeEnableInputToAllController(UObject* _pWorldContextObject) {
}

int32 UELMenuUtilityFunction::CalcTileViewScrollIndex(int32 _currentSelectIndex, int32 _currentScrollIndex, int32 _dispVerticalItemNum, int32 _dispHorizontalItemNum, TEnumAsByte<EOrientation> _orientation) {
    return 0;
}

void UELMenuUtilityFunction::CalcListCursor(int32 Current, int32 ChangeNum, int32 Size, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMenuUtilityFunction::CalcGridCursor(int32 Current, int32 ChangeXNum, int32 ChangeYNum, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}


