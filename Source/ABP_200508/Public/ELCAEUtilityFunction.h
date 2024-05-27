#pragma once
#include "CoreMinimal.h"
#include "ELRefUnlockableItemInfo.h"
#include "EWrestlerID_N.h"
#include "JukeBoxParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELCAEMenuItemInfo.h"
#include "ELCAEUtilityFunction.generated.h"

class UDataTable;
class UELUnlockableItemManagerBase;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELCAEUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELCAEUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static void SortUnlockableItems(const TArray<FELCAEMenuItemInfo>& UnlockItems, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<FELCAEMenuItemInfo>& SortedItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeSelectableMusicList(UDataTable* MusicListDataTable, TArray<EWrestlerID_N> CurrentWrestlers, TArray<FJukeBoxParam>& MusicList, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MakeSelectableAnimationList(UDataTable* EntranceAnimationDataTable, UELUnlockableItemManagerBase* UnlockableItemManager, bool ChampionAnimation, bool Single, TArray<FELCAEMenuItemInfo>& Animations);
    
    UFUNCTION(BlueprintCallable)
    static void GetUnlockableItemInfo(const TArray<FELCAEMenuItemInfo>& UnlockItems, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<FELRefUnlockableItemInfo>& UnlockableItemInfos);
    
    UFUNCTION(BlueprintCallable)
    static bool CanSelectableMusic(const FJukeBoxParam& JukeBoxParam, UELUnlockableItemManagerBase* UnlockableItemManager, TArray<EWrestlerID_N> CurrentWrestlers);
    
};

