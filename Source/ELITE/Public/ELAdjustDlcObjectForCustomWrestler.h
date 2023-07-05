#pragma once
#include "CoreMinimal.h"
#include "UnavailableDlcData.h"
#include "ELAdjustDlcSaveDataAccessObjectBase.h"
#include "ELAdjustDlcObjectForCustomWrestler.generated.h"

class UELMovesAdjust;
class UMyWrestlerDataObject;
class UTemplateScoutAsset;

UCLASS(Blueprintable)
class ELITE_API UELAdjustDlcObjectForCustomWrestler : public UELAdjustDlcSaveDataAccessObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTemplateScoutAsset> Template_M01_Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTemplateScoutAsset> Template_F01_Asset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemplateScoutAsset* Template_M01_Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemplateScoutAsset* Template_F01_Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELMovesAdjust* MovesAdjust;
    
public:
    UELAdjustDlcObjectForCustomWrestler();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckScout(UMyWrestlerDataObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckRoster(UMyWrestlerDataObject* Object);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitCheckList(const FUnavailableDlcData& UnavailableDlcData);
    
};

