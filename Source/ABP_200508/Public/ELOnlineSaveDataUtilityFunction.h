#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELStatDataCache.h"
#include "ELOnlineSaveDataUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELOnlineSaveDataUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELOnlineSaveDataUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static bool UpdateStickerHistory(const TArray<int32>& _stickerHistory);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateStatsDataCache(const TMap<FString, FELStatDataCache>& _statsMap);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupStatsDataCache();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveRequestOnlineSaveData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadRequestOnlineSaveData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStickerHistory(TArray<int32>& _stickerHistory);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStatsDataCache(TMap<FString, FELStatDataCache>& _statsMap);
    
};

