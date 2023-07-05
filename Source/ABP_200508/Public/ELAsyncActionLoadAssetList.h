#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELAsyncActionLoadAssetBase.h"
#include "OnELAssetListLoadedDelegate.h"
#include "ELAsyncActionLoadAssetList.generated.h"

class UELAsyncActionLoadAssetList;
class UObject;

UCLASS(Blueprintable)
class UELAsyncActionLoadAssetList : public UELAsyncActionLoadAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnELAssetListLoaded Completed;
    
    UELAsyncActionLoadAssetList();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELAsyncActionLoadAssetList* ELAsyncLoadAssetPathList(UObject* WorldContextObject, const TArray<FSoftObjectPath>& AssetList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELAsyncActionLoadAssetList* ELAsyncLoadAssetList(UObject* WorldContextObject, const TArray<TSoftObjectPtr<UObject>>& AssetList);
    
};

