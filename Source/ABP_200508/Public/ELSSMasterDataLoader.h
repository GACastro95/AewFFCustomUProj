#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YGS2SSMasterData.h"
#include "ELSSMasterDataLoader.generated.h"

class UELSSMasterData;
class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSMasterDataLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoneLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterData* MasterData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGS2RequestBase* CurrentYGS2Request;
    
public:
    AELSSMasterDataLoader();
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoading(bool inSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ImportMasterDataFromResponseData(const FYGS2SSMasterData& inResponseData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDataVersionFromResponseData(const FYGS2SSMasterData& inResponseData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginLoadMasterDataByLocalData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginLoadMasterDataByAPI();
    
};

