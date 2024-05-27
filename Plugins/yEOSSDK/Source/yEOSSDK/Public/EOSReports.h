#pragma once
#include "CoreMinimal.h"
#include "EEOSPlayerReportsCategory.h"
#include "EOSIDs.h"
#include "EOSReportsAPIVersionSettings.h"
#include "EOSReportsSendPlayerBehaviorReportDispatcherDelegate.h"
#include "EOSReports.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSReports : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSReportsSendPlayerBehaviorReportDispatcher SendPlayerBehaviorReportDispatcher;
    
    UEOSReports();

    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSReportsAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool SendReport(const FString& _strReportedProductUserId, EEOSPlayerReportsCategory _enCategory, const FString& _strMessage, const FString& _strContext);
    
};

