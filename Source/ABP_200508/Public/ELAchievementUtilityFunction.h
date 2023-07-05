#pragma once
#include "CoreMinimal.h"
#include "EELAchievementList.h"
#include "ESaveDataProcResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELAchievementUtilityFunction.generated.h"

class UELGameInstance;

UCLASS(Blueprintable)
class ABP_200508_API UELAchievementUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELAchievementUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static void UnlockCareerStackAchievment();
    
    UFUNCTION(BlueprintCallable)
    static void UnlockAchievementCore(EELAchievementList _AchievementType);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockAchievement(EELAchievementList _AchievementType);
    
    UFUNCTION(BlueprintCallable)
    static void StackAchievementCount(EELAchievementList _Achievement, int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAchievementQuery();
    
    UFUNCTION(BlueprintCallable)
    static void SetStackSaveAchievementInfo(EELAchievementList _Achievement, bool _stack);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementStatus(EELAchievementList _Achievement, bool _Status, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementCountCommon(EELAchievementList _Achievement, int32 _Count, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementCount(EELAchievementList _Achievement, int32 _Count, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static ESaveDataProcResult SaveRequestAchievementDataCore(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestAchievementData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnlockSteamAchievement(EELAchievementList AchievementType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveCount(EELAchievementList _Achievement, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSavedata(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSaveAchievementInCareer();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EELAchievementList> GetStackSaveAchievementArray();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementStatus(EELAchievementList _Achievement, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static UELGameInstance* GetAchievementGameInstance();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAchievementCountCommon(EELAchievementList _Achievement, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAchievementCount(EELAchievementList _Achievement, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllAchievements();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAchievement(EELAchievementList AchievementType);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckUnlockAddAchievementCount(EELAchievementList _AchievementType, int32 _Add);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckUnlockAchievementCore(EELAchievementList AchievementType, int32 AddCount);
    
    UFUNCTION(BlueprintCallable)
    static void CheckUnlockAchievement(EELAchievementList AchievementType, int32 AddCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddAchievementCountCommon(EELAchievementList _Achievement, int32 _Add, uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddAchievementCount(EELAchievementList _Achievement, int32 _Add, uint8 _saveDataAccessFlag);
    
};

