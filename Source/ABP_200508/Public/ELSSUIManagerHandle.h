#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSSUIManagerHandle.generated.h"

class UELSSPanelBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSUIManagerHandle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UELSSPanelBase> SoftClassPtr;
    
    UELSSUIManagerHandle();
    UFUNCTION(BlueprintCallable)
    bool IsLoadComplete();
    
};

