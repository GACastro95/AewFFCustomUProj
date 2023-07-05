#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ELSSActionCameraController.generated.h"

class AELSSGameplayCamera;
class AELSSPlayer;
class UELSSCameraParamManager;

UCLASS(Blueprintable)
class ABP_200508_API UELSSActionCameraController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActiveTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationLerpAlphaSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationLerpHeightCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationLerpAlphaTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLocationLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatusIsEnableUserRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatusIsEnableUpdateState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* MainPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* OpponentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSGameplayCamera* GameplayCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSCameraParamManager* ParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OpponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatusIsActive;
    
public:
    UELSSActionCameraController();
    UFUNCTION(BlueprintCallable)
    void UpdateOnTick(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationToOwner(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationToOpponent(float inTargetRate, float inHeightCoef, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTargetLocation(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNextStep(int32 inStep, float inTimer);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeStep(int32 inStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStep() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStep(int32 inStep);
    
};

