#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EActionStateMontagePlayResult.h"
#include "ELSSActionStateMovementAdjust.h"
#include "ESSActionCameraID.h"
#include "ESSActionStateSyncMode.h"
#include "ESSActionTransitTrigger.h"
#include "ESSActionTransitableCondition.h"
#include "ESSDamageReceiverState.h"
#include "ESSMoveCommand.h"
#include "SSDamageReactionParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSActionStateBase.generated.h"

class AActor;
class ACharacter;
class AELSSPlayer;
class UAnimInstance;
class UAnimMontage;
class UELSSActionStateBase;
class UELSSActionStatePlayerComponent;
class UELSSCharacterMovementComponent;

UCLASS(Blueprintable)
class ABP_200508_API UELSSActionStateBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionStateSyncMode SyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageLo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallLimitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableUpperBodyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinueInvolveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSActionStateMovementAdjust MovementAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatedMovementAdjustTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLandingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionTransitableCondition DefaultTransitable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionTransitableCondition CancelTransitable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSActionStatePlayerComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontageReplaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontageBeforeReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReservedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCancelTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMovableTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LandingStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDamageReceiverState DamageReceiverState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RootMotionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactiveMontageTimeCount;
    
    UELSSActionStateBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMovementParam();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMontage(float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMontageSt(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetMontageLo(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMovableTransit(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCancelTransit(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReserveMontage(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontageBranch(EActionStateMontagePlayResult& Result, UAnimMontage* inCurrentMontage, UAnimMontage* inPlayMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMontage(UAnimMontage* inMontage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSimulateLand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPrePlayFirstMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostUpdateMovementParam();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifySyncOff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyMotionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyJumpUp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintCallable)
    void NativeUpdate(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnableUpperBodyAnim() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnablePickupVisible() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnableMovement() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableFallCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAffectedBySlip() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Initialize(UELSSActionStatePlayerComponent* inOwnerComponent, UAnimInstance* inAnimInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IgnoreMovementCorrect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UELSSActionStateBase> GetTransitableStateDefault(ESSActionTransitTrigger transitTrigger) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UELSSActionStateBase> GetTransitableState(ESSActionTransitTrigger transitTrigger) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTransitableMove(ESSActionTransitTrigger transitTrigger, ESSMoveCommand& outMoveCommand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESSActionStateSyncMode GetSyncMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* GetReceiverMontage(UAnimMontage* inAttackerMontage);
    
    UFUNCTION(BlueprintCallable)
    float GetPlayingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetOwnerPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMoveSpeedScale() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxLandingLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetInvolveFeedbackDamageAttackId(int32& outMoveId, int32& outAttackHitId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetInvolveDamageAttackId(int32& outMoveId, int32& outAttackHitId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UAnimMontage* GetFirstMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESSDamageReceiverState GetDamageReceiverState() const;
    
    UFUNCTION(BlueprintCallable)
    FSSDamageReactionParam GetDamageReactionParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetDamageReactionMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetDamageLandMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetDamageFallingMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSActionCameraID GetCurrentMoveActionCameraID() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCurrentMontageReplaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSCharacterMovementComponent* GetCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable)
    bool DetectSituationHitReaction(const FHitResult& inHitResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckOwnerLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanLand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDisappear() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

