#pragma once
#include "CoreMinimal.h"
#include "YGS2SSMasterData.h"
#include "ELSSMasterDataLoader.h"
#include "ELSSMasterDataLoaderForServer.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSMasterDataLoaderForServer : public AELSSMasterDataLoader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRetryCount;
    
public:
    AELSSMasterDataLoaderForServer();
    UFUNCTION(BlueprintCallable)
    void SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetSSMasterDataForServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponse_GetSSMasterDataForServer(bool inExistsData, const FYGS2SSMasterData& inResponseData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError_GetSSMasterDataForServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndRequest(bool IsSuccess);
    
};

