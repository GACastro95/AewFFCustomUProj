#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "SSRoundParam.h"
#include "SSVehicleSpawnParamForRound.h"
#include "Templates/SubclassOf.h"
#include "ELSSVehicleManager.generated.h"

class AELSSLocator_Vehicle;

UCLASS(Blueprintable)
class ABP_200508_API AELSSVehicleManager : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSubclassOf<AActor>> LoadedVehicleClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ValidVehicles;
    
public:
    AELSSVehicleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SpawnVehicleToLocator(int32 inVehicleId, AELSSLocator_Vehicle* inLocator);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVehicleFromRound(const FSSVehicleSpawnParamForRound& inSpawnParam);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnVehicle(int32 inVehicleId, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void OnTickRound(const FSSRoundParam& inRoundParam, float newRoundTime, float prevRoundTime);
    
    UFUNCTION(BlueprintCallable)
    void OnEndRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsyncVehicleClasses();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AActor> GetVehicleClass(int32 inDatabaseId);
    

    // Fix for true pure virtual functions not being implemented
};

