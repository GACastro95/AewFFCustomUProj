#include "ELCAEUtilityFunction.h"

UELCAEUtilityFunction::UELCAEUtilityFunction() {
}

void UELCAEUtilityFunction::SortUnlockableItems(const TArray<FELCAEMenuItemInfo>& UnlockItems, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<FELCAEMenuItemInfo>& SortedItems) {
}

void UELCAEUtilityFunction::MakeSelectableMusicList(UDataTable* MusicListDataTable, TArray<EWrestlerID_N> CurrentWrestlers, TArray<FJukeBoxParam>& MusicList, UObject* WorldContextObject) {
}

void UELCAEUtilityFunction::MakeSelectableAnimationList(UDataTable* EntranceAnimationDataTable, UELUnlockableItemManagerBase* UnlockableItemManager, bool ChampionAnimation, bool Single, TArray<FELCAEMenuItemInfo>& Animations) {
}

void UELCAEUtilityFunction::GetUnlockableItemInfo(const TArray<FELCAEMenuItemInfo>& UnlockItems, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<FELRefUnlockableItemInfo>& UnlockableItemInfos) {
}

bool UELCAEUtilityFunction::CanSelectableMusic(const FJukeBoxParam& JukeBoxParam, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<EWrestlerID_N> CurrentWrestlers) {
    return false;
}


