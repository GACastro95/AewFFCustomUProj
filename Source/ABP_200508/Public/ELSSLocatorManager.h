#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "ESSLocatorType.h"
#include "ESSPlayerStartLocatorType.h"
#include "ELSSLocatorManager.generated.h"

class AELSSLocator;

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocatorManager : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator*> LocatorList_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator*> LocatorList_ItemBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator*> LocatorList_PlayerStart;
    
public:
    AELSSLocatorManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AELSSLocator*> GetPlayerStartLocatorList(ESSPlayerStartLocatorType StartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AELSSLocator*> GetLocatorListWithFiltering(ESSLocatorType InType, bool InUseFiltering, int32 inFilterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AELSSLocator*> GetLocatorListFromNear(ESSLocatorType InType, const FVector& inOrigin, float inDistance, int32 inMaxNum, bool InUseFiltering, int32 inFilterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AELSSLocator*> GetLocatorListForRespawn(ESSLocatorType InType, const FVector& inOrigin) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

