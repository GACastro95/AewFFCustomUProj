#pragma once
#include "CoreMinimal.h"
#include "ELSSLocator.h"
#include "ESSPlayerStartLocatorAreaId.h"
#include "ESSPlayerStartLocatorType.h"
#include "SSPlayerStartLocatorParam.h"
#include "ELSSLocator_PlayerStart.generated.h"

class AELSSLocator_PlayerStart;

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocator_PlayerStart : public AELSSLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerStartLocatorParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerStartLocatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSLocator_PlayerStart*> SubLocators;
    
public:
    AELSSLocator_PlayerStart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSPlayerStartLocatorType GetPlayerStartLocatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSPlayerStartLocatorAreaId GetPlayerStartLocatorAreaId() const;
    
};

