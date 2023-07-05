#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "WrestlerSelectAssetLoadCompleteDelegateDelegate.h"
#include "WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate.h"
#include "ELWrestlerSelectAssetLoader.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELWrestlerSelectAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N m_WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_WrestlerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PresetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerSetupParam m_WrestlerSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerSelectAssetLoadCompleteDelegate LoadCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerSelectOnlineAssetLoadCompleteDelegate LoadOnlineCompleteDelegate;
    
public:
    UELWrestlerSelectAssetLoader();
    UFUNCTION(BlueprintCallable)
    void ReleaseAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadAsyncOnlineAssets(const TArray<FSoftObjectPath>& _assetPathList, const int32& _positionIndex, const FWrestlerSetupParam& _wrestlerSetupParam, const int32& _PresetIndex, FWrestlerSelectOnlineAssetLoadCompleteDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsyncAssets(const TArray<FSoftObjectPath>& _assetPathList, const int32& _positionIndex, const EWrestlerID_N& _WrestlerID, const FGuid& _wrestlerUID, const int32& _PresetIndex, FWrestlerSelectAssetLoadCompleteDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedOnlineAsset(const FWrestlerSetupParam& _wrestlerSetupParam, const int32& _PresetIndex);
    
};

