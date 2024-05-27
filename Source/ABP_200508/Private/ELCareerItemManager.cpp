#include "ELCareerItemManager.h"

AELCareerItemManager::AELCareerItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AELCareerItemManager::UseItems(UELCareerGameParam* _pGameParam, ECareerItemNo _ItemNo) {
    return false;
}

TArray<FCareerItemData> AELCareerItemManager::GetCareerItemTableBase() {
    return TArray<FCareerItemData>();
}

FCareerItemData AELCareerItemManager::GetCareerItemData(ECareerItemNo _ItemNo) {
    return FCareerItemData{};
}

void AELCareerItemManager::DeactiveItemEffect(UELCareerGameParam* _pGameParam, ECareerDisappearItemEffect _DisappearItemEffect) {
}

bool AELCareerItemManager::CanUseItem(ECareerItemEffect _ItemEffect) const {
    return false;
}

void AELCareerItemManager::AddCareerItemData(FCareerItemData _Data) {
}

void AELCareerItemManager::ActiveItemEffect(UELCareerGameParam* _pGameParam) {
}


