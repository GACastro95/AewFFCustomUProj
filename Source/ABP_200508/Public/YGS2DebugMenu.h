#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "EYGS2DebugMenuClientStep.h"
#include "YGS2CommandData.h"
#include "YGS2DebugMenu.generated.h"

class UYGS2DebugMenuClient;

UCLASS(Blueprintable)
class ABP_200508_API UYGS2DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYGS2DebugMenuClient*> m_cClients;
    
public:
    UYGS2DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetSkipLogin();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClientUpdate(EYGS2DebugMenuClientStep _enClientStep, const FYGS2CommandData& _rstCommandData, UYGS2DebugMenuClient* _pcClient);
    
};

