#pragma once
#include "CoreMinimal.h"
#include "ELDeveloperSettings.h"
#include "ESaveDataType.h"
#include "AdjustDlcSaveData.h"
#include "AdjustDlcSaveDataParam.h"
#include "SaveDataAccessData.h"
#include "SaveDataAccessParam.h"
#include "GameSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class ELITE_API UGameSettings : public UELDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataType, FSaveDataAccessData> SaveDataAccessSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidShippingSSmode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataType, FAdjustDlcSaveData> AdjustDlcSaveDataSetting;
    
    UGameSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSSmode();
    
    UFUNCTION(BlueprintCallable)
    static void InitExtendedSaveGameInfoDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSaveTitleNameFromFilenName(const FString& SaveFileName, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void GetSaveDataAccessParams(TArray<FSaveDataAccessParam>& Out);
    
    UFUNCTION(BlueprintCallable)
    static void GetAdjustDlcSaveDataAccessParams(TArray<FAdjustDlcSaveDataParam>& Out);
    
};

