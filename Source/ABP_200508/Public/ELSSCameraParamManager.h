#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSCameraBaseParamID.h"
#include "ESSCameraParamType.h"
#include "ESSCameraPlaceType.h"
#include "ESSCameraState.h"
#include "SSCameraBaseParam.h"
#include "SSCameraPlaceParam.h"
#include "SSCameraStateControlParam.h"
#include "SSCameraStateParam.h"
#include "ELSSCameraParamManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABP_200508_API UELSSCameraParamManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraBaseParam BaseParamTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraBaseParam BaseParamOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraBaseParam BaseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraStateParam StateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraPlaceParam PlaceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraPlaceType CurrentPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseParamLerpRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraParamType CameraParamType;
    
public:
    UELSSCameraParamManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStateParam(ESSCameraState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlaceParam(ESSCameraPlaceType inPlaceType);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseParamWithBlend(ESSCameraBaseParamID inBaseParamID, float InDuration, bool inEaseOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseParam(ESSCameraBaseParamID inControlMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStateControlParam(FSSCameraStateControlParam& OutParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSCameraParamType GetCameraParamType() const;
    
};

