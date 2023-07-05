#include "ELUserProfileManager.h"

void UELUserProfileManager::UpdateWeaponSymbolIcon(int32 _iconID) {
}

void UELUserProfileManager::UpdateWeaponDecal(int32 _decalID, FUserProfileColorParam _Param) {
}

void UELUserProfileManager::UpdatePlayerIconBg(int32 _iconID, FUserProfileColorParam _Param) {
}

void UELUserProfileManager::UpdatePlayerIcon(int32 _playerIconID) {
}

void UELUserProfileManager::UpdateBadgeList(TArray<int32> _badgeList) {
}

void UELUserProfileManager::SetLastSelectedWeaponIndex(int32 _Index) {
}

void UELUserProfileManager::GetWeaponSymbolTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

void UELUserProfileManager::GetWeaponSymbolIcon(int32& _outSymbolIconID) {
}

int32 UELUserProfileManager::GetWeaponPlacementInfoNum() const {
    return 0;
}

void UELUserProfileManager::GetWeaponPlacementInfoAt(int32 _Index, FUserProfileWeaponPlacementInfo& _outInfo) {
}

void UELUserProfileManager::GetWeaponPlacementAt(int32 _Index, FTransform& _outTransform) {
}

void UELUserProfileManager::GetWeaponDecalTextureAndColor(int32 _iconID, int32 _symbolID, int32 _colorID, int32 _colorListIndex, TSoftObjectPtr<UTexture2D>& _outTexture, TSoftObjectPtr<UTexture2D>& _outSymbolTexture, FLinearColor& _outColor) {
}

void UELUserProfileManager::GetWeaponDecalTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

void UELUserProfileManager::GetWeaponDecal(int32& _outDecalID, int32& _outDecalSymboiID, FUserProfileColorParam& _outColorParam) {
}

void UELUserProfileManager::GetProfileColor(int32 _colorID, int32 _colorListIndex, EUserProfileEditType _editType, FLinearColor& _outColor) {
}

void UELUserProfileManager::GetPlayerIconTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

void UELUserProfileManager::GetPlayerIconBgTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture) {
}

void UELUserProfileManager::GetPlayerIconBg(int32& _outIconID, FUserProfileColorParam& _outColorParam) {
}

void UELUserProfileManager::GetPlayerIcon(int32& _outPlayerIconID) {
}

void UELUserProfileManager::GetMyWeaponDecalTexture(bool& _findAsset, UTexture2D*& _outWeaponSymbolTex, UTexture2D*& _outWeaponBgTex, FLinearColor& _outColor) {
}

int32 UELUserProfileManager::GetLinkageUnlockableItemID(EUserProfileEditType _editType, int32 _checkItemID) {
    return 0;
}

int32 UELUserProfileManager::GetLastSelectedWeaponIndex() {
    return 0;
}

void UELUserProfileManager::GetBadgeTexture(TArray<int32> _iconIdList, TArray<TSoftObjectPtr<UTexture2D>>& _outTextureList) {
}

void UELUserProfileManager::GetBadgeList(bool& IsEditedBadge, TArray<int32>& _outBadgeList) {
}

void UELUserProfileManager::ApplySaveDataToParam(USaveDataObject_PlayerData* _playerData) {
}

UELUserProfileManager::UELUserProfileManager() {
}

