#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSIssueNotifyDisabler.generated.h"

class UEOSInternalIssueNotify;
class UEOSIssueNotifyDisabler;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSIssueNotifyDisabler : public UEOSCommon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSInternalIssueNotify* m_pcHook;
    
public:
    UEOSIssueNotifyDisabler();

    UFUNCTION(BlueprintCallable)
    static bool CreateIssueNotifyDisabler(UEOSIssueNotifyDisabler*& _pcInstance);
    
};

