#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESSLocatorType.h"
#include "ESSPlayerStartLocatorAreaId.h"
#include "ESSPlayerStartLocatorType.h"
#include "ELSSLocator.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLocatorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerStartLocatorType PlayerStartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerStartLocatorAreaId PlayerStartAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 filterId;
    
public:
    AELSSLocator();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSLocatorType GetLocatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFilterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetActorRotationYawOnly() const;
    
};

