#pragma once
#include "CoreMinimal.h"
#include "EOSAchievementAPIVersionSettings.h"
#include "EOSAchievementEventDispatcherDelegate.h"
#include "EOSAchievementInfo.h"
#include "EOSPlayerAchievementInfo.h"
#include "EOSPlayerAchievementUnlockEventDispatcherDelegate.h"
#include "EOSStats.h"
#include "EOSUnlockAchievementInfo.h"
#include "EOSAchievement.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAchievement : public UEOSStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAchievementEventDispatcher AchievementEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSPlayerAchievementUnlockEventDispatcher PlayerAchievementUnlockEventDispatcher;
    
    UEOSAchievement();
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetAchievementApiVersion(FEOSAchievementAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUnlock(const TArray<FString>& _cAchievementIDs);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryPlayerAchievement();
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryAchievementInfo();
    
    UFUNCTION(BlueprintCallable)
    bool GetUnlockAchievements(FEOSUnlockAchievementInfo& _stUnlockAchievementInfo, const FString& _strAchievemtnID);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerAchievements(TArray<FEOSPlayerAchievementInfo>& _stPlayerAchievementInfos);
    
    UFUNCTION(BlueprintCallable)
    bool GetAchievements(TArray<FEOSAchievementInfo>& _stAchievementInfos);
    
};

