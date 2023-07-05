#pragma once
#include "CoreMinimal.h"
#include "YGS2SSMasterData.h"
#include "ELSSMasterDataLoader.h"
#include "ELSSMasterDataLoaderForBotClient.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSMasterDataLoaderForBotClient : public AELSSMasterDataLoader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
public:
    AELSSMasterDataLoaderForBotClient();
    UFUNCTION(BlueprintCallable)
    void SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetSSMasterData(bool inDataVersionOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponse_GetSSMasterDataVersion(bool inExistsData, const FYGS2SSMasterData& inResponseData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResponse_GetSSMasterData(bool inExistsData, const FYGS2SSMasterData& inResponseData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError_GetSSMasterDataVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError_GetSSMasterData();
    
};

