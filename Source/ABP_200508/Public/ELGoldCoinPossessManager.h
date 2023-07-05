#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "EYGS2ErrorType.h"
#include "DonwloadedGoldCoinDelegateDelegate.h"
#include "ELGoldCoinPossessManager.generated.h"

class UEOSUserContentsBase;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UELGoldCoinPossessManager : public UObject {
    GENERATED_BODY()
public:
    UELGoldCoinPossessManager();
    UFUNCTION(BlueprintCallable)
    bool RequestDownloadDataFromEOS(FDonwloadedGoldCoinDelegate OnResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RequestDownloadData(FDonwloadedGoldCoinDelegate OnResultDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_UploadData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response_DownloadData(EYGS2ErrorType _errorType, UYGS2RequestBase* _requestBaseInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnEosUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
};

