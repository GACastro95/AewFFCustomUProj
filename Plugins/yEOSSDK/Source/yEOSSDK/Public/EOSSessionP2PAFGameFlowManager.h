#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAFGameFlowStep.h"
#include "EOSSessionP2PAdditionalFunctionBase.h"
#include "EOSSessionP2PAFGameFlowManager.generated.h"

class IEOSSessionP2PAFGameFlowCallbackInterface;
class UEOSSessionP2PAFGameFlowCallbackInterface;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAFGameFlowManager : public UEOSSessionP2PAdditionalFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface>> m_cGameFlowCallbacks;
    
public:
    UEOSSessionP2PAFGameFlowManager();
    UFUNCTION(BlueprintCallable)
    bool UnregistGameFlowCallbackInterface(TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface);
    
    UFUNCTION(BlueprintCallable)
    bool RequestChangeGameFlow(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool RegistGameFlowCallbackInterface(TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface);
    
    UFUNCTION(BlueprintCallable)
    bool QuitGame();
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleChangeGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
    UFUNCTION(BlueprintCallable)
    bool InitGameFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionP2PAFGameFlowStep GetGameFlowStep() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangedGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep _enGameFlowStep);
    
};

