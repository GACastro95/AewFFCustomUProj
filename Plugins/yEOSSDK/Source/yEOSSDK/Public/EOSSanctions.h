#pragma once
#include "CoreMinimal.h"
#include "EOSIDs.h"
#include "EOSSanctionsAPIVersionSettings.h"
#include "EOSSanctionsQueryPlayerSanctionsDispatcherDelegate.h"
#include "EOSSanctions.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSanctions : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSanctionsQueryPlayerSanctionsDispatcher QueryPlayerSanctionsDispatcher;
    
    UEOSSanctions();

    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSSanctionsAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool QueryPlayerSanctions();
    
};

