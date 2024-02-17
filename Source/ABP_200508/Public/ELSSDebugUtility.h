#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSModeServerParam.h"
#include "SSServerEndpoint.h"
#include "YGS2SSPlayerData.h"
#include "ESSDebugStreathCheck.h"
#include "ESSDebugStringCategory.h"
#include "ESSGameStateDebugFlag.h"
#include "ESSLocalDebugFlag.h"
#include "ESSPlayerDebugFlag.h"
#include "ELSSDebugUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSDebugUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSDebugUtility();
    UFUNCTION(BlueprintCallable)
    static void SSDebugLog_LocalNetworkVersion();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SSDebugAutoPlay_PressMenuDecision(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupSSDebugStreathCheckSettings(const UObject* WorldContextObject, ESSDebugStreathCheck InType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSReservedPlayerDebugFlag(const UObject* WorldContextObject, ESSPlayerDebugFlag FlagType, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSReservedGameStateDebugFlag(const UObject* WorldContextObject, ESSGameStateDebugFlag FlagType, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSLocalDebugFlag(const UObject* WorldContextObject, ESSLocalDebugFlag FlagType, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugStringOnScreen(const UObject* WorldContextObject, const FString& inString, ESSDebugStringCategory inCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugSinglePlayFixedSeconds(const UObject* WorldContextObject, int32 InSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugOverrideUserId(const UObject* WorldContextObject, const FString& inUserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugMatchMakeGroupId(const UObject* WorldContextObject, int32 inGroupId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugLowQuarity(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_Version(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_TeamInfo(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_RuleInfo(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_Region(const UObject* WorldContextObject, bool IsOn, const FString& inRegionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_DebugStatus(const UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugInfo_AppliedPenalty(const UObject* WorldContextObject, const FYGS2SSPlayerData& inNewParam, const FYGS2SSPlayerData& inOldParam, bool isCheat);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSDebugAutoEquipWeapon(const UObject* WorldContextObject, bool IsOn, int32 inDatabaseId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveSSDebugStringOnScreen(const UObject* WorldContextObject, ESSDebugStringCategory inCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllSSDebugStringOnScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshSSDebugStringOnScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDebugPlayStartAssemble(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDebugPlayAutoAttack(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDebugOverrideServerParam(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSSDebugAIOnlyMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSSReservedPlayerDebugFlag(const UObject* WorldContextObject, ESSPlayerDebugFlag FlagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSSReservedGameStateDebugFlag(const UObject* WorldContextObject, ESSGameStateDebugFlag FlagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSSLocalDebugFlag(const UObject* WorldContextObject, ESSLocalDebugFlag FlagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSDebugSinglePlayFixedSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSSDebugPlayNumberOfClients();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugOverrideYGS2URLForDataLoading(const UObject* WorldContextObject, FString& outYGS2URL);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugOverrideUserId(const UObject* WorldContextObject, FString& outUserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugOverrideServerParam(const UObject* WorldContextObject, FSSModeServerParam& outServerInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugOverrideServerEndpoint(const UObject* WorldContextObject, FSSServerEndpoint& outEndpointInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSDebugOverrideMasterDataVersion(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSDebugMatchMakeGroupSinglePlayOffset(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSDebugMatchMakeGroupId(const UObject* WorldContextObject, bool inAddSinglePlayOffset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugAutoEquipWeapon(const UObject* WorldContextObject, int32& outDatabaseId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSDebugAIEditWrestlerNum(const UObject* WorldContextObject, int32& outEditWrestlerNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearSSDebugStringOnScreen(const UObject* WorldContextObject, ESSDebugStringCategory inCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplySSDebugDisableWorldRendering(const UObject* WorldContextObject);
    
};

