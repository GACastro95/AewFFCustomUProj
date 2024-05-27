#pragma once
#include "CoreMinimal.h"
#include "EYGS2ErrorType.h"
#include "Request_ErrSetupData.h"
#include "ELSSMasterDataLoader.h"
#include "ELSSMasterDataLoaderForClient.generated.h"

class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSMasterDataLoaderForClient : public AELSSMasterDataLoader {
    GENERATED_BODY()
public:
    AELSSMasterDataLoaderForClient(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    UYGS2RequestBase* Request_GetSSMasterDataVersion(bool inDataVersionOnly);
    
    UFUNCTION(BlueprintCallable)
    UYGS2RequestBase* Request_GetSSMasterData(bool inDataVersionOnly, int32 inRetryCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponse_GetSSMasterDataVersion(EYGS2ErrorType inYGS2ErrorType, UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponse_GetSSMasterData(EYGS2ErrorType inYGS2ErrorType, UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorResponse_GetSSMasterDataVersion(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorResponse_GetSSMasterData(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComplete_GetSSMasterData(bool inSuccess, UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable)
    void ImportMasterDataFromYGS2Response(UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable)
    void ImportMasterDataFromResponse(UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDataVersionFromYGS2Response(UYGS2RequestBase* inRequest);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDataVersionFromResponse(UYGS2RequestBase* inRequest);
    
};

