#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSGeneralEventDispatcherDelegate.h"
#include "EOSInstanceManagerBase.generated.h"

class UEOSInstanceBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSInstanceManagerBase : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSGeneralEventDispatcher GeneralEventDispatcher;
    
    UEOSInstanceManagerBase();
    UFUNCTION(BlueprintCallable)
    int32 GetInstanceList(TArray<UEOSInstanceBase*>& _cInstanceList);
    
};

