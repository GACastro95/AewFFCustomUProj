#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "ELSSInGameUtility.generated.h"

class AActor;
class AELSSFadeManager;
class AELSSGameMode;
class AELSSGameState;
class AELSSItemManager;
class AELSSLocatorManager;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSRoundManager;
class AELSSSoundManager;
class AELSSStorm;
class AELSSVehicleManager;
class APlayerController;
class ULevelStreaming;
class UMeshComponent;
class UObject;
class USoundAtomCue;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSInGameUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SinkToPool(const UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldPlaySoundInSSMode(const UObject* WorldContextObject, const UMeshComponent* inMeshComp, const USoundAtomCue* InCue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSubLevelVisible(const UObject* WorldContextObject, UWorld* World, const FName LevelName, bool bVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* ScoopFromPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, const FTransform& Transform, bool ifNotEnoughReuseWithoutAlloc);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveValidInteractableObjectFromGameState(const UObject* WorldContextObject, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifySpectatorPremiumFeature(const UObject* WorldContextObject, int32 UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSModeOutGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSModeInGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange(AActor* SelfActor, AActor* TargetActor, float degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSStorm* GetStorm(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSVehicleManager* GetSSVehicleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSSoundManager* GetSSSoundManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSRoundTotalTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSRoundManager* GetSSRoundManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayerController* GetSSPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayer* GetSSPlayer(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSLocatorManager* GetSSLocatorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSItemManager* GetSSItemManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSGameState* GetSSGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSGamePlayElapsedTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSGameMode* GetSSGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSFadeManager* GetSSFadeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSElapsedTimeFromReadyState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSElapsedTimeForAnalytics(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocalPlayerControllers(const UObject* WorldContextObject, TArray<APlayerController*>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayerController* GetFirstLocalSSPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* FindSubLevel(const UObject* WorldContextObject, UWorld* World, const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcRotateAngleToTarget(float inBaseAngle, float inTargetAngle, float inAddAngle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddValidInteractableObjectToGameState(const UObject* WorldContextObject, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, int32 PoolSize);
    
};

