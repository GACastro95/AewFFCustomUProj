#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAFGameFlowStep.h"
#include "EOSSessionP2PSynchronizedPacketBase.h"
#include "EOSSessionP2PGameFlowPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PGameFlowPacket : public UEOSSessionP2PSynchronizedPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PGameFlowPacket();
    UFUNCTION(BlueprintCallable)
    bool SetResultForPossibleToChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bResult, bool _bAutoChangeGameFlow);
    
    UFUNCTION(BlueprintCallable)
    bool SetResultForChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bResult);
    
    UFUNCTION(BlueprintCallable)
    bool Notify(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleToChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bAutoChangeGameFlow);
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoChangeGameFlow();
    
    UFUNCTION(BlueprintCallable)
    bool Get(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool Change(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool Accept(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bAccepted);
    
};

