#pragma once
#include "CoreMinimal.h"
#include "EOSInternalIssueDispatcherDelegate.h"
#include "EOSLockebleCommon.h"
#include "EOSInternalIssueNotify.generated.h"

class UEOSInternalIssueNotify;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSInternalIssueNotify : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSInternalIssueDispatcher InternalIssueDispatcher;
    
    UEOSInternalIssueNotify();

    UFUNCTION(BlueprintCallable)
    static void SetEnable(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    static UEOSInternalIssueNotify* Get();
    
    UFUNCTION(BlueprintCallable)
    static void Destroy();
    
    UFUNCTION(BlueprintCallable)
    static bool Create(UEOSInternalIssueNotify*& _pcInstance);
    
};

