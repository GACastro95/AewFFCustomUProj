#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAFGameFlowStep.h"
#include "EOSLockebleCommon.h"
#include "EOSSessionP2PAFGameFlowData.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAFGameFlowData : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UEOSSessionP2PAFGameFlowData();
    UFUNCTION(BlueprintCallable)
    void SetPossibleChangeGameFlowStep(EEOSSessionP2PAFGameFlowStep _enStep);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionP2PAFGameFlowStep GetPossibleChangeGameFlowStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionP2PAFGameFlowStep GetGameFlowStep() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeGameFlow(EEOSSessionP2PAFGameFlowStep _enStep);
    
};

