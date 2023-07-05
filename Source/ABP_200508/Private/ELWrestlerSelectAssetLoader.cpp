#include "ELWrestlerSelectAssetLoader.h"

void UELWrestlerSelectAssetLoader::ReleaseAssets() {
}

void UELWrestlerSelectAssetLoader::LoadAsyncOnlineAssets(const TArray<FSoftObjectPath>& _assetPathList, const int32& _positionIndex, const FWrestlerSetupParam& _wrestlerSetupParam, const int32& _PresetIndex, FWrestlerSelectOnlineAssetLoadCompleteDelegate _delegate) {
}

void UELWrestlerSelectAssetLoader::LoadAsyncAssets(const TArray<FSoftObjectPath>& _assetPathList, const int32& _positionIndex, const EWrestlerID_N& _WrestlerID, const FGuid& _wrestlerUID, const int32& _PresetIndex, FWrestlerSelectAssetLoadCompleteDelegate _delegate) {
}

bool UELWrestlerSelectAssetLoader::IsLoadedOnlineAsset(const FWrestlerSetupParam& _wrestlerSetupParam, const int32& _PresetIndex) {
    return false;
}

UELWrestlerSelectAssetLoader::UELWrestlerSelectAssetLoader() {
    this->m_PositionIndex = -1;
    this->m_WrestlerID = EWrestlerID_N::None;
    this->m_PresetIndex = -1;
}

