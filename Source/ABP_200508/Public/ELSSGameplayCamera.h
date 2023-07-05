#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCamera.h"
#include "ESSActionCameraID.h"
#include "ESSCameraMode.h"
#include "ESSCameraPosition.h"
#include "ESSCameraShakeType.h"
#include "SSCameraStateControlParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSGameplayCamera.generated.h"

class AActor;
class AELSSPlayer;
class AELSSPlayerController;
class APawn;
class ASceneCapture2D;
class UCameraComponent;
class UELSSActionCameraController;
class UELSSCameraParamManager;
class UELSSCameraShake;
class UELSSSpringArmComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSGameplayCamera : public AGameplayCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseMoveInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepWatcherCameraDuration_AfterResetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatcherCameraRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WatcherResetCameraDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraPosition CameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSCameraShakeType, TSubclassOf<UELSSCameraShake>> CameraShakeDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSActionCameraController* ActionCameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSActionCameraID, TSubclassOf<UELSSActionCameraController>> ActionCameraControllerTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSActionCameraID, UELSSActionCameraController*> ActionCameraControllerDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActionCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionCameraLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionCameraLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionCameraLerpBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionCameraAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionCameraAlphaEndInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* SceneCapture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* ControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverrideCameraTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSCameraParamManager> ParamManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSCameraParamManager* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCameraMode ControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraStateControlParam StateControlParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
public:
    AELSSGameplayCamera();
    UFUNCTION(BlueprintCallable)
    void SwitchCameraPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetSceneCaptureEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneCapture2D(ASceneCapture2D* inSceneCapture2D, bool inCapture);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledPawn(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPosition(ESSCameraPosition InPosition);
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera(bool inImmediate, bool inUseOverrideTargetPitch, float inOverrideTargetPitch, float inDiffYaw, float inOverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void ProgressActionCamera(ESSActionCameraID inActionCameraID, int32 inStep);
    
    UFUNCTION(BlueprintCallable)
    UELSSActionCameraController* PlayActionCamera(ESSActionCameraID inActionCameraID, AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnJumped(AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UELSSCameraShake> GetCameraShake(ESSCameraShakeType InType) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndActionCamera();
    
    UFUNCTION(BlueprintCallable)
    void EndActionCamera(ESSActionCameraID inActionCameraID);
    
};

