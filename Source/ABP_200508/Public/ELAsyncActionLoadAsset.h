#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELAsyncActionLoadAssetBase.h"
#include "OnELAssetLoadedDelegate.h"
#include "ELAsyncActionLoadAsset.generated.h"

class UELAsyncActionLoadAsset;
class UObject;

UCLASS(Blueprintable)
class UELAsyncActionLoadAsset : public UELAsyncActionLoadAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnELAssetLoaded Completed;
    
    UELAsyncActionLoadAsset();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELAsyncActionLoadAsset* ELAsyncLoadAssetPath(UObject* WorldContextObject, const FSoftObjectPath& Asset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UELAsyncActionLoadAsset* ELAsyncLoadAsset(UObject* WorldContextObject, const TSoftObjectPtr<UObject>& Asset);
    
};

