#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientMode.h"
#include "EEOSAntiCheatClientViolationType.h"
#include "EOSAntiCheatAPIVersionSettings.h"
#include "EOSAntiCheatClientActionRequiredDispatcherDelegate.h"
#include "EOSAntiCheatClientAuthStatusChangedDispatcherDelegate.h"
#include "EOSAntiCheatClientPollStatusDispatcherDelegate.h"
#include "EOSAntiCheatIntegrityViolatedDispatcherDelegate.h"
#include "EOSIDs.h"
#include "EOSAntiCheatClient.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAntiCheatClient : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAntiCheatClientActionRequiredDispatcher ClientActionRequiredDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAntiCheatClientAuthStatusChangedDispatcher ClientAuthStatusChangedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAntiCheatClientPollStatusDispatcher ClientPollStatusDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAntiCheatIntegrityViolatedDispatcher ClientViolatedDispatcher;
    
    UEOSAntiCheatClient();

    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSAntiCheatAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool EndSession();
    
    UFUNCTION(BlueprintCallable)
    EEOSAntiCheatClientViolationType ClientTickSession();
    
    UFUNCTION(BlueprintCallable)
    bool BeginSession(EEOSAntiCheatClientMode _enClinetMode);
    
};

