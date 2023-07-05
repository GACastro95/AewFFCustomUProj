#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttireParam.h"
#include "EditPartsCategoryName.h"
#include "PersonParam.h"
#include "PresetParam.h"
#include "WrestlerSetupParam.h"
#include "EBasicFunctionResult.h"
#include "EActionSkillType.h"
#include "EBodyWeightType.h"
#include "EELMatchResultType.h"
#include "ELWrestlerMeshParam.h"
#include "ELWrestlerNameProfileParam.h"
#include "ELWrestlerProfile.h"
#include "ELWrestlerProfile_Skill.h"
#include "EPassiveSkillTriggerType.h"
#include "EReserveReversalType.h"
#include "ERopeGroggy.h"
#include "ESpecialMovesType.h"
#include "EStickinputDir.h"
#include "EWhipState.h"
#include "EWrestlerID_N.h"
#include "StMatchRule.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "EAnimPoseType.h"
#include "EAttackCollision_N.h"
#include "EBodyHomingType.h"
#include "ELNetCharacter.h"
#include "ELRequestTutorialParam.h"
#include "EMovesDataTableType_N.h"
#include "ERefereeDQReactionKind_N.h"
#include "ERefereeMeshMode.h"
#include "ESyncPosRotKind.h"
#include "ETagMatchAutoPinBreakStep_N.h"
#include "ETrainingModeAIType.h"
#include "ETrainingReversalKind.h"
#include "FootCtrlParam.h"
#include "StAOnColPoint.h"
#include "StAOnDamage.h"
#include "StAOnHit.h"
#include "StApronDashAttackLocationFix.h"
#include "StChain.h"
#include "StDQMeter.h"
#include "StDQReactionAndPlayer.h"
#include "StDivingStartPart.h"
#include "StFEquipPassiveSkillData.h"
#include "StLimbHP.h"
#include "StManagerSystemMotion.h"
#include "StMontageList_ApronChain.h"
#include "StMontageList_AutoTracking.h"
#include "StMontageList_CornerChain.h"
#include "StMontageList_GrappleChain.h"
#include "StMontageList_HandsInPocketPin.h"
#include "StMontageList_RopeChain.h"
#include "StMovesStep.h"
#include "StPassiveSkillData.h"
#include "StPassiveSkillSrcParam.h"
#include "StPinchMoves.h"
#include "StPlayerBarrierInfo.h"
#include "StSystemInAirDamage.h"
#include "StSystemReferee.h"
#include "StTargettingParam.h"
#include "StTauntParam.h"
#include "StUpperBodyBlendUpdateInfo.h"
#include "StWeaponSystemMotion.h"
#include "Templates/SubclassOf.h"
#include "ELCharacter_Native.generated.h"

class AActor;
class ACharacter;
class AELCharacter_Native;
class AELMiniGameBase;
class AELNetProp;
class ASyncMotionMontage;
class UAnimMontage;
class UAnimNotifyState;
class UAnimSequence;
class UAnimSequenceBase;
class UCableComponent;
class UCapsuleComponent;
class UCharacterProfilesBase;
class UCurveVector;
class UDataTable;
class UELAchievementObserver;
class UELAnimInstance_PartIK;
class UELBuildBody;
class UELCostume;
class UELFootIK;
class UELIngameTutorialDialogInputEvent;
class UELMomentumMeterBase;
class UELReplayBase;
class UELSeesawSystem;
class UELShockCounter;
class UEnum;
class UMaterialInterface;
class UMatineeCameraShake;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class ABP_200508_API AELCharacter_Native : public AELNetCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSeesawSystem* SeesawSystem_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELAchievementObserver* AchievementObserver_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELShockCounter* ShockCounter_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MainMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASyncMotionMontage* SyncMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> AttackCollisionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> HitColList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStPlayerBarrierInfo> PlayerBarrierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitCol_Top_OverlapCounter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* HipOffsetCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipOffsetProgress;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWorkHipOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HipOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncLiftState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncFloatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncLiftedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncOffState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightDetectionLiftSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackupPlayRate_WeightDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyWeightType SyncLiftBodyWeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyWeightType SyncFloatBodyWeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyWeightType BodyWeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshHeight_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AnimScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWeightDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InGameDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaceRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeLeftStickForwardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeLeftStickRIghtValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReserveEnvironmentThrowReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReserveEnvironmentThrowDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ReserveEnvironmentThrowCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InterpolateEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InterpolateSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolateProgressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InterpolateAddPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InterpolateLastAddPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InterpolateAddRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InterpolateLastAddRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainWrestlingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ReserveRapidPenaltyRemains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ReserveReversalResetTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EReserveReversalType> ReserveReversals_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyHomingType BodyHomingType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHomingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHomingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHomingQuickStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BodyHomingQuickStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BodyHormingOponentPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BodyHomingBackHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDivingTakeoffActorYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDivingTakeoffActorYawBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivingTakeoffHomingEndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyHomingWorkingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BodyHomingDoneStepCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHorming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNeckHomingState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAnimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_Skill WrestlerProfileSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastPlayUpperBodyBlendMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUseUpperBodyBlendIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStUpperBodyBlendUpdateInfo> UpperBodyBlendUpdateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStFEquipPassiveSkillData> EquipPassiveSkillInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastMovementInoutVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DamageDebuff_DirectionReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharacterProfilesBase> CharacterProfilesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterProfilesBase* CharacterProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAIController_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupAI_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIDifficulty_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIFightStyle_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoFinisherFlow_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoSignatureFlow_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCasualeModeAutoPinFlow_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugOption_Idle_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingModeAIType TrainingModeAIType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DonePinchMoveCount_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestTagWaitReturn_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestRingEscape_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollOutDownState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* DamageReactionMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* GrappleReachMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* StrongGrappleReachMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* DownMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* GroggyMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* GroggyMontageLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* SubmissionMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* TauntMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpecialTauntMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* SetUpActionReachMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* StrongSetUpActionReachMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastRiseUpAttackMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastChainWrestlingAttackMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastChainWrestlingDefenceMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastChainWrestlingPositionChangeMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReserveLandingWhipMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastDivingSyncAttackMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastDivingSyncDamageMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastRiseUpMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAnimPoseType AnimPoseType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesDamageLv_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESpecialMovesType SpecialMovesType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesDownValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesGroggyValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesHitEffectValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesValue_UniqueIndex_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMovesDataTableType_N MovesType_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MovesCategoryValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EReserveReversalType AttackKind_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStPinchMoves LastUsePinchMoveMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameSystemParam_PinchMoveMomentumPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStWeaponSystemMotion WeaponSystemMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStManagerSystemMotion ManagerSystemAnimation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemReferee RefereeSystemAnimation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_CornerTop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_AnyApron_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RingInOut_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_WeaponRingInOut_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_HandsInPocket_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStChain MontageList_ChainMove_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStChain MontageList_ChainMove_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_CornerChain MontageList_CornerChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_RopeChain MontageList_RopeChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_ApronChain MontageList_ApronChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_GrappleChain MontageList_GrappleChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ChainWrestlingLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_HandsInPocketPin MontageList_HandsInPocketPin_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSystemInAirDamage MontageList_SystemInAirDamage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Navigation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Walk_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Run_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Idle_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_WeaponPickUpMotionEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RopeRebound_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RopeReboundStop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_WalkEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Corner_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_CornerGroggyFront_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_CornerGroggyBack_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_TableDownLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_TableDownEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_FrontCornerChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BackCornerChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RopeChainState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_FrontAprontToRingChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BackAprontToRingChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RingToApronChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_FrontChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BackChain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RunStart_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RunEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_NavigationAll_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_StandardIdle_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_DownPainReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_StepMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_StandChainGrappleLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_TagTouch_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_TagWakeupGroggyDamageReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ChainGrappleCancel_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_NoAbilityReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_CornerSetupMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RunLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_DashRingOut_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Recuperability_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_WakeUpTauntWakeUp_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LongDown_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ExplodingOvertheTopRope_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_CornerTopOrRise_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Apron_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_DivingInterception_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_DivingInterceptionDamage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RingSideToApron_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ApronToRing_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_RingIn_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ManagerInterfered_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_NaviDirStartAndLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_NaviDirEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_GroggyMove_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BlockPose_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BlockLoopPose_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_GrappleGuardPose_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ApronWalk_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_ChainGrappleTagPartnerAttackReaction_Attacker_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LadderMidEndure_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LadderMidTilt_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LadderMidTiltDamageReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_IWThrow_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_EnvGroggy_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_Taunt_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_IrishWhipRun_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_FrontChainAll_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_BackChainAll_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_DownJumpOver_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LadderTopLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_KickCatchLoopAttacker_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_KickCatchLoopDefencer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_KneelingLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_AllowAutoTrackingMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMontageList_AutoTracking MontageList_AutoTracking_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_LadderClimbStartMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_HangRopeLoopMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_HangRopeCanDamageSituationRopeMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageList_HangRopeCanDamageSituationCornerMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMovesStep MovesStepMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStDivingStartPart LastDivingMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BackupUpdatePlaceLocation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RingActor_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyDonePlaceRing_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectTypeQuery> OverlapRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OverlapRingFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStApronDashAttackLocationFix ApronDashAttackLocationFix_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHud_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HUDSlot_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManager_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELMiniGameBase* PinMiniGame_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELMiniGameBase* SubmissionMiniGame_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerID_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleRoyaleEntrance_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleRoyaleRingInRun_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> MiniGameMashInputs_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakoutNavi_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakoutAttack_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckTemporary_IsHandsInPocketMotion_Done_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckTemporary_IsHandsInPocketMotion_Value_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CheckTemporary_IsHandsInPocketMotion_Montage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunMoveStart_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferee_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemChar_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HP_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStLimbHP LimbHP_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStLimbHP DefaultLimbHP_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTagWait_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickDeltaSeconds_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELReplayBase* ReplayComponent_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot ReplayPoseSnapshot_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot ReplayPoseSnapshotNextFrame_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ReplayTransform_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseSnapshotBlendRate_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELCharacter_Native*> GameCharArray_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELCharacter_Native*> SyncCharArray_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELCharacter_Native*> NowFrameCapsuleBlockHitPlayers_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELNetProp* UsingWeapon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELNetProp* SpecialAttachWeapon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastPlayStartOfMatchMotion_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CallAOnNotify_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimNotifyState*> ReserveRemoveANSList_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimNotifyState*, FStAOnDamage> ANSList_AOn_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStAOnColPoint AOnColPoint_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStAOnHit AOnHit_Atk_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStAOnHit AOnHit_Def_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveHitStop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchLeaveRingDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETagMatchAutoPinBreakStep_N TagMatchAutoPinBreakStep_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TagMatchAutoPinBreakDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectionalThrowState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoTracking_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTrackingObserveDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTrackingCheckThresholdAngle_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTrackingDoneDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KneelingLoopDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickCatchThrowDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverTheTopRopeHangRopeLoopDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PullUpCounter_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullUpCounterSubRemain_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* SetupMotionForMePlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreApronMove_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputApronMove_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReserveManagerInterferedTarget_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckLandingWhip_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SkillEffect_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoneRopeDamageReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoneDownAttack_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnvironmentGroggyOn_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestGauntletDeadPlayerDestroy_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestReplayState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNowHitStop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainRiseUpInvincible_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarbedWireTouchExplosionInterval_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionSkillEscapeCoolTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBloodStainState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckTemporary_CanNaviOpe_Done_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckTemporary_CanNaviOpe_Value_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckTemporary_CanNaviOpe_Breakout_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CheckTemporary_CanNaviOpe_MainMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StickNeutralAfterTaunt_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntActiveSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TopRopeGroggy_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MiddleRopeGroggy_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWhipState WhipState_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BarricadeClimbLoop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStTauntParam TauntParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStTargettingParam TargettingParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReserveCriticalHitStop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReserveHitStopWeapon_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReserveHitStopStartDelay_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillEffectSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ManagerInterfered_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ManagerInterfered_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestRunStopFlag_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBarbedWireBoardHitNowFrame_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignatureHitCount_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEntranceReplaceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NowOverlapCanPickupWeapons_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIrishWhipRun_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELRequestTutorialParam IngameTutorialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TagDamage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TagRecoverValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockStrongGrapple_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockStrongGrapplePercent_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveKipUpRemainSecond_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageLv_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageLvDownSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveReversalBuffSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCountForForceDown_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IgnoreApronMoveBeforeMoveValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalMatchRule_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStMatchRule LocalMatchRule_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRule_ExplodingBarbedWireDeathMatch_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRule_ForbiddenOutside_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRule_CasinoBattleRoyale_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRule_DQ_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rule_RingOutCount_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultParam_HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightDetectionChangeAnimSpeedSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightDetectionChangeAnimSpeedMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* TagDamageHormingAttackPlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LastCheckSyncJA_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastCheckSyncJA_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LastCheckMotionEnd_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastCheckMotionEnd_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRefereeModel_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveAutoPositionChangeToFinisher_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainGrappleMoveEnvPushDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotAim_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateAimRotation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NavigationDirectionValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainGrappleReversalRemainSecond_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainGrappleProgressTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainWrestlingProgressTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* LastDownDragTargetPlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckDownDragContinuousInput_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownDragDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* LastJumpOverPlayerForMe_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* FirstRingOutActor_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug_RingOutCountStop_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingOutPlayerCount_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllRingOut_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutOfSyncMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSyncMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotExcuteBarrierCollisionOverlapEvent_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBarrierCollisionIgnoreWorld_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveScalingHeadBarrierBlockCollisionDelayedSyncOff_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCharacter_Native* ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetPlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReserveScalingHeadBarrierBlockCollisionDelayedSyncOffTargetMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBarrierCollisionScalingRemain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> NeedDisableOverlapEventCapsuleWhenAlwaySweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeaponHitCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WeaponHitCol_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunProgressTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BeforeRunLocation_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSameLocationDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkHitOtherCharaPrograssTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinuousPressStrikeReversal_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinuousPressGrappleGuard_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderGrabObjectDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DivingTakeoffFlag_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingDivingHit_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowExcuteObserveInjuryReaction_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbtacksOverlapDownDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApronMoveStateTimeCount_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditPartsCategoryName> MouthMaskPartsCategorys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreZVelocity_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharaMeshInterpolateTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharaMeshInterpolateProgressTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharaMeshInterpolateEnd_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddCharaMeshInterpolateVector_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddLastCharaMeshInterpolateVector_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClimbNearSteelStepBarricade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCheckOverlapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreEnableCheckOverlapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseTableTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreEnableTagWaitRingInAuthority_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDivingHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSyncBarrierCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStDQReactionAndPlayer> ReserveDQReactions_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStDQReactionAndPlayer> ReserveWeaponReactions_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DQReactionObserveDuration_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastDQReactionPlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> DQMeterValueForPlayers_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStDQMeter DQMeter_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastWeaponReactionPlayer_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ClonedRefereeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefereeMeshMode RefereeMeshMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefereeOpacityStateTimeCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELIngameTutorialDialogInputEvent* TutorialInputEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeferredUpdateTransformTargetMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimMontage* PinMontage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELBuildBody* BuildBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELCostume> CustomCostumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELCostume* CustomCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BodyHomingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* BodyHomingTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThreadTickAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> BarrierCollisionOverlapCheckTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> BarrierCollisionOverlapCheckTypes_IgnoreWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierCollisionOverlapWarpThreshold_Self;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierCollisionOverlapWarpThreshold_Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierCollisionOverlapMoveInterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierCollisionOverlapMoveInterpolateTime_World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> BarrierCollisionResponseSyncCharaChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBarrierCollisionDefaultRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBarrierCollisionBigRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBarrierCollisionScalingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncBarrierCollisionInterpolateTime;
    
public:
    AELCharacter_Native();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateUpperBodyBlend(UPARAM(Ref) TArray<FStUpperBodyBlendUpdateInfo>& InfoArray, const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const float TickDeltaSeconds, const bool CanMotion, const float CoreHP, const float HeadHP, const float ArmHP, const float BodyHP, const float LegHP, const float Momentum, const bool SpecialState, const bool DiveSkill, const bool FenceSkill, const bool TopeconSkill, const bool ExplodingMatch, const bool CanNaviOperate, const bool RingInOutOperate, const bool EnviromentOperate, const bool TargetRing, const bool SelfRing, const bool DirectionReverse, UPARAM(Ref) int32& InLastUseUpperBodyBlendIndex, bool& Enable) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTutorialHitReachCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTarget_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateReserveReversal_N(const int32 AtkPlayerIndex, const float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePassiveSkillTriggerCountImpl(int32 PassiveSkillIndex, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateOverlapWeapon_Impl(AActor* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLongPress_Impl();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBothAOnHit_N(const FStAOnDamage& AOnDamage, UPARAM(Ref) TArray<AELCharacter_Native*>& DefPlayer);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDynamicMaterial(USkeletalMeshComponent* SkeletalMeshComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void TutorialEndEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerPassiveSkill_N(const TArray<EPassiveSkillTriggerType>& Triggers, const AELCharacter_Native* FromPlayer, const float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void TickUpdateReserveReversal_N(const float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickUpdateReserveHitStop_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickUpdateNavigationDirection_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickUpdateNavigation_Impl();
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateLiftState_N(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateInterpolateLocationandRotation_N(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateInterpolateCharaMeshLocation_N(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateinGameDuration_N(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateHipOffset_N(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickUpdateAnimScaleZ_N(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObserveRopeDamageReaction_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObserveLeftStickTargetChange_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void TickHomingOn_N(const float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickAutoRun_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateUsingWeaponReaction_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void Tick_UpdateUpperBodyBlend_N(const float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateTaunt_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateTagWaitApronWarp_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateTagRollOut_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateTagMatchAutoPinBreak_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateTableTopDownTableStateCheck_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateRunToRingCollisionAnimation_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateRunStop_WalkToOtherChara_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateRunStop_SameLocationStop_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateRunStop_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateRunStop_FaleSafeApronLanding_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateReturnTagWait_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateReserveChainGrappleInput_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateRecuperability_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateOperateStep_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateMinigame_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateLadderGrabObject_UpdateDuration_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateLadderGrabObject_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateLadderGrabObject_FaleSafe_Impl(bool& DoneFaleSafe);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateKneelingOperate_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateKickCatchThrow_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateInRingRunToCorner_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateGuideHUD_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateGroggyState_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateGrappleGuard_PlayGrappleGuardPoseLeave_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateGrappleGuard_PlayGrappleGuardPoseEnter_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateGrappleGuard_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateGauntletDeadPlayerDestroy_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateFCrowdMomentChk_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDownState_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDownDragOperate_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDivingLanding_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateDivingLanding_CheckPendingHit_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateDivingLanding_CheckLanding_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDirectionalThrow_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDamageLv_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateDamageDebuff_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateContinuousDamageCountRecover_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateCombination_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateCheckTimerToPlayAnimation_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateCheckTimerToPlayAnimation_HangRope_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateCheckTimerToPlayAnimation_CheckPullUpCount_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateChainGrappleTimeUp_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateChainGrappleMove_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void Tick_UpdateBodyHoming_N(const float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateBloodStain_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateBlockPose_PlayBlockPoseLeave_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateBlockPose_PlayBlockPoseEnter_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateBlockPose_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateAutoTracking_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateAutoReplay_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateApronMove_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_UpdateAim_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_SwitchAI_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_OverTheTopRope_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveTurnOverCountClear_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveThumbtacksSlipDamage_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick_ObserveTagRingInAuthority_N();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveSubmission_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveReserveRingOutCountUp_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveRefereeMeshMode_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObservePin_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveInjuryReaction_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveEnvironmentGroggy_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveEnvironmentAnimChange_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveClearShockCounterForSetupMotion_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveChain_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ObserveApronOtherCharaHit_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_ObserveApronOtherCharaHit_CheckInApron_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_ObserveApronOtherCharaHit_CheckHangRopeDamage_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_LocallyControlled_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_InvaderDownDestroy_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_IntervalTutorial_Impl(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_Debug_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_CheckTagMatchScoreAddObjects_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_CheckOverlapTableInNavi_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TauntStick(float AxisValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartRopeIK_N(UCableComponent* Rope, bool bBoth, bool bRightOnly, float BlendSec, float MaxBlendRate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRefereeCount_Impl();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnSyncMotionMontage(TEnumAsByte<ECollisionChannel> Channel, UPARAM(Ref) TArray<AELCharacter_Native*>& SyncCharArray, const FVector& SyncLocation, const FRotator& SyncRotation, const ESyncPosRotKind SyncPosKind, const ESyncPosRotKind SyncRotKind, float Interpolate, bool bIgnoreSweep, bool bNoSyncRotation, int32 Priority, bool useCharacterHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSkeletalMeshMaterials(USkeletalMeshComponent* Target, const TArray<FName>& TargetMaterialNames, const bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetWrestlerProfile(const FELWrestlerProfile& InWrestlerProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetWorkHipOffsetForCutscene(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterForMID(const FName ParameterName, const FVector& NewValue, const FName Specific);
    
    UFUNCTION(BlueprintCallable)
    void SetupPreset(EBasicFunctionResult& Result, const FPersonParam& PersonParam, const FPresetParam& PresetParam, const FAttireParam ExtraParts, const bool bEntrance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupForInteractiveWinscene();
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacter(EBasicFunctionResult& Result, const FWrestlerSetupParam& SetupParam, const FAttireParam ExtraParts, const bool bEntrance, const bool bSpecificEntrance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupBarrierCollisionOverlapEventBind();
    
    UFUNCTION(BlueprintCallable)
    void SetTouchLeaveRing(bool Flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTextureParameterForMID(const FName ParameterName, UTexture* NewTexture, const FName Specific);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSyncMotionAnyChar_N(UPARAM(Ref) TArray<AELCharacter_Native*>& SyncCharArray, UPARAM(Ref) ASyncMotionMontage*& NewSyncMotion);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterForMID(const FName ParameterName, const float NewValue, const FName Specific);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerBarrierCollisionSetting_N(bool NoCollision, bool Block, bool Overlap, bool IgnoreOverlapHand, bool IgnoreBlockHead, bool IgnoreWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPinMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherCharaHitInApron_N(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOldAIController(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLadderMiniGameForceSuccess(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThreadTickAsync(bool isThread);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIgnoreActorWhenMoving_N(const TArray<AActor*>& IgnoreSweepActorArray, const bool bShouldIgnore);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHipOffsetForCutscene(FVector Offset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableTutorialStrikeReversal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableTutorialGrappleReversal();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSyncBarrierCollision(bool Enabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeferredUpdateYaw(float Yaw, UAnimMontage* targetMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetDeferredUpdateDeltaLocation(const FVector& Delta, UAnimMontage* targetMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadReason(EELMatchResultType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDamageReaction_CurrentMontage_N();
    
    UFUNCTION(BlueprintCallable)
    void SetComponentsRelativeScale(const TArray<USceneComponent*>& Targets, FVector NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionsEnabled(const TArray<UPrimitiveComponent*>& Targets, TEnumAsByte<ECollisionEnabled::Type> NewEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterMesh(USkeletalMesh* NewMesh, const TArray<FName>& InvisibleMaterialNames);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBodyMask_N(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaskMaterialSlotNames, UMaterialInterface* MaskedMaterial);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBodyHoming_N(const EBodyHomingType Type, const float Angle, const float Range, const bool QuickStart, const bool OpponentTagPartner, const bool bBackHoming, const bool NearHoming);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleRoyaleRingInRun_N(bool bNewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttackCollisionListScale_N(const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackCollisionEnable_N(const int32 Type, const bool Enable);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void S_StopUpperBodyBlendMotion_N();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void S_PlayUpperBodyBlendMotion_N(UAnimSequence* AnimSequence);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void S_AddActorWorldRotation_N(const FRotator& AddRotation, const bool bSweep, const bool bTeleport);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void S_AddActorWorldOffset_N(const FVector& AddLocation, const bool bSweep, const bool bTeleport);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetWeaponDiffHeight() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetRefereeCountState_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetRefereeCount_Impl();
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshMaterials();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetForceSyncMovement();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCostume();
    
    UFUNCTION(BlueprintCallable)
    void RequestTutorial_N(FName TutorialName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestStartTutorial_Impl(FName TutorialName, bool IsHostPad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDQReaction_Impl();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPassiveSkillEffectandCameraImpl(const FStPassiveSkillData& Passive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMontage_Impl(const UAnimMontage* Montage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDQRefereeVoice_Impl(ERefereeDQReactionKind_N Kind);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTakeControlBtn_N(AELCharacter_Native* AtkPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSetupProfiles(const FWrestlerSetupParam& SetupParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSetupPreset(const FPersonParam& PersonParam, const FPresetParam& PresetParam, const FAttireParam& ExtraParts, const bool bEntrance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSetupCharacter(const FWrestlerSetupParam& SetupParam, const bool bEntrance, const bool bSpecificEntrance);
    
    UFUNCTION(BlueprintCallable)
    void OnReverseDirectionEvent_N(bool InReverse);
    
    UFUNCTION(BlueprintCallable)
    void OnReversalEvent_N(bool Reversal, ESpecialMovesType SpecialMovesType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestedTutorials_Impl();
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveGloveBuffEvent_N(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayPassiveSkillEffectEvent_N(const FStPassiveSkillData& PassiveSkillData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayNormalTauntEvent_N(EStickinputDir InputDir);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayActionSkillEvent_N(int32 ActionSkillNo);
    
    UFUNCTION(BlueprintCallable)
    void OnMeterValuePenaltyEvent_N(float PenaltyRate);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageHPEvent_N(AELCharacter_Native* AtkPlayer, float DamageHead, float DamageArm, float DamageBody, float DamageLeg);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedTutorials_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeRefereeMeshMode(ERefereeMeshMode inMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangedTrainingReversalKind(ETrainingReversalKind Kind);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedLastHitMovesSituationIndex(int32 MovesSituationIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveForward(float AxisValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void M_SetDeferredUpdateYawMainMontage_N(float Yaw);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void M_SetDeferredUpdateYaw_N(float Yaw, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void M_SetActorRotation_N(const FRotator& NewRotation, const bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void M_SetActorLocationAndRotation_N(const FVector& NewLocation, const FRotator& NewRotation, const bool bSweep, const bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void M_SetActorLocation_N(const FVector& NewLocation, const bool bSweep, const bool bTeleport);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LadderMatchMiniGameStartServer(int32 StartProgress, UAnimMontage* GrabLoopMontage);
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameStart(int32 StartProgress, UAnimMontage* GrabLoopMontage);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LadderMatchMiniGameSetProgress(int32 Step, float Percent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LadderMatchMiniGameOnProgressEvent(int32 Step, bool Finish);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LadderMatchMiniGameOnFailedEvent();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LadderMatchMiniGameCancelServer();
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameCancel();
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameButtonPressY();
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameButtonPressX();
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameButtonPressB();
    
    UFUNCTION(BlueprintCallable)
    void LadderMatchMiniGameButtonPressA();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalk_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWakeUpTauntWakeUpMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseMouthMaskParts_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTauntMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaunt_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagWakeupGroggyDamageReaction_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagWait_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagTouch_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTableTopDown_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemChar_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSyncWith_N(const ACharacter* Chara, bool& bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncMainSlot_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSync_N(bool& bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubmission_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrongSetUpActionReach_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartOfMatchMotion_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandSituation_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandChainGrappleLoop_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandChainGrapple_N(bool& bFront) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialTaunt_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSitDown_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowGuideHudPinfall_N();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunState_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunOrRopeRebound_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunLoop_N(UPARAM(Ref) UAnimMontage*& Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunEnd_N(UPARAM(Ref) UAnimMontage*& Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRun_N(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeRebound_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERopeGroggy IsRopeGroggy_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeChain_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeBreak(const FBox& Rope);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiseUp_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingToApronChain_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingSideToApron_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingOutCountMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingOutCountLoopMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingInOut_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingInOrApronToRing_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReverseDirectionInput_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestRollOut_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplayState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReferee_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecuperabilityMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPullUpMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayingMiniGame_N(bool& Out_IsPlaying) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingLadderMiniGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaceRing_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPinOrPullUpDistance_Impl(const AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinchMoveReach_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPin() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOverTheTopRopeHangRopePlayDamageSituation_N(bool& bEnable, bool& bCorner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverTheTopRopeHangRopeLoopMotion_N(const UAnimMontage* Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOutOfSyncMovement() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObstructionMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoAbilityReactionMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationMontage_N(UPARAM(Ref) UAnimMontage*& Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigation_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNaviDirStartAndLoop_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNaviDirEnd_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMomentumMeterRemoveStop_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInterferedMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManager_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsMainMontage_N(UAnimMontage* Montage, bool& bValue) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLongDownMotion_N(UPARAM(Ref) UAnimMontage*& Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastRiseUpAttack_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastChainWrestlingPositionChange_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastChainWrestlingDefence_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastChainWrestlingAttack_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderTopLoopMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderMiniGameForceSuccess() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderMidTiltDamageReaction_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderMidTilt_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderMidEndure_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderClimbStartMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKneekingLoopMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsKickCatchLoopMotion_N(bool& bAttacker, bool& bDefencer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIWThrow_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIrishWhipRunState_N(bool bCheckOnlyMontage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInvincible_Impl() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHideGuideHudCornerTurnOver_N();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsHandsInPocketMotion_N();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroggyMove_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroggyLoop_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroggy_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappleGuardPose_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrontChainAll_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrontBackChainAllMontage_N(UAnimMontage* Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsForceSyncMovement() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExplodingOvertheTopRopeMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnvGroggy_N() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableWeightDetection_N(EBodyWeightType& AtkBodyWeightType, EBodyWeightType& DefBodyWeightType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableUpperBodyBlend_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTutorialTrainingMode(FName TutorialName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableTutorialStrikeReversal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableTutorialGrappleReversal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTutorial() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSyncBarrierCollision();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_TraningMode_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_TornadoTag_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_TagMove_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Submission_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_StrikeFight_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_SoloBattleRoyale_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_RingOnly_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_RingEscape_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Pin_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_OvertheTopRope_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_ManualTarget_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_LightsOut_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Ladder_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_KnockOut_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Interval_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Indicator_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_HostOnlyPinSub_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_HostDeadQuitMatch_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_GuideHUD_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_GroupBattleRoyale_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Gauntlet_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_ExplodingBarbedWireDeathMatch_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_DQ_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_DoubleTeamMove_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_DispTargetLine_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_Combination_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_ChopBattle_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_ChainWrestring_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_BattleRoyale_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_AnywhereSubmission_N();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRule_AnywherePin_N();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnablePinSituationTarget_Impl(const AELCharacter_Native* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsEnablePassiveSkillSituation_N(const FStFEquipPassiveSkillData& EquipData, const FStPassiveSkillSrcParam& SrcParam, bool& Enable, bool& TimerEffect, float& TimerRemain) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHeightAdjust_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableFootIK() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAOn_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableActionSkill_N(EActionSkillType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDQCautionMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownPainReactionMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownMontage_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownJumpOver_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownFaceUp_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownFaceDown_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDivingSyncDamage_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDivingSyncAttack_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDivingInterceptionDamage_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDivingInterception_N(UPARAM(Ref) UAnimMontage*& Montage) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiving_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashRingOut_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageReaction_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerTopOrRiseMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerTop_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerSetupMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerGroggyFront_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerGroggyBack_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerGroggy_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCornerChain_N(bool& bFront) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChainWrestlingLoop_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsChainWrestling_N(bool& Out_Value) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChainState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChainGrappleTagPartnerAttackReaction_Attacker_N() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void IsChainGrappleMove_N(bool bIncludeEndMotion, bool& bChainGrappleMove, bool& bFront, bool& bPush);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChainGrappleCancelMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChainCheckMotion_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockPose_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockLoopPose_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleRoyaleRingInRun_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleRoyaleEntrance_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarricadeClimbLoop_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoSignatureFlow_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoPinFlow_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoFinisherFlow_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachWeapon_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApronWalk_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApronToRingChain_N(bool& bFront) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApronToRing_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnyLadderMotion_N();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyApron_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowAutoTrackingMotion_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIController_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetWrestlerVoiceID_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELWrestlerProfile GetWrestlerProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELWrestlerNameProfileParam GetWrestlerNameProfileParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWrestlerName(bool Capital) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWrestlerListIndex_Impl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EWrestlerID_N GetWrestlerID_Native() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWorkHipOffsetForCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTouchLeaveRingTimeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTouchLeaveRing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor_N() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetSyncJAAnimNotifyMontage_N(const UAnimSequenceBase* AnimSequence);
    
    UFUNCTION(BlueprintCallable)
    TArray<AELCharacter_Native*> GetSyncCharArray();
    
protected:
    UFUNCTION(BlueprintCallable)
    AELCharacter_Native* GetSyncChar_N();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELMiniGameBase* GetSubmissionMiniGame_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSocketTransform_N(const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace, FTransform& Transform) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELShockCounter* GetShockCounter_Impl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELSeesawSystem* GetSeesawSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRollOutDownState_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetRefereeClonedMesh() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCharacter_Native* GetReferee_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex_N(int32 ControllerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor_N(int32 ControllerId, bool bAIController) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELMiniGameBase* GetPinMiniGame_N() const;
    
    UFUNCTION(BlueprintCallable)
    FStPassiveSkillSrcParam GetPassiveSkillSrcParam_N();
    
    UFUNCTION(BlueprintCallable)
    void GetPassiveSkillMomentumAddRate_N(const TArray<EPassiveSkillTriggerType>& Triggers, float& AddRate);
    
    UFUNCTION(BlueprintCallable)
    UELAnimInstance_PartIK* GetPartIK_N();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOverlappingActorTag_N(TSubclassOf<AActor> ClassFilter, FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOverlappingActor_N(TSubclassOf<AActor> ClassFilter) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetOtherTargetNearest_N(AELCharacter_Native*& NearrestTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOtherCharaHitInApron_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOpponentManager_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOldAIController() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetNowApronToRingYaw_Impl(bool& OutFindYaw, float& OutYaw) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetNeckHormingTargetPlayerCore_N() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNearestTagPartner_N(AELCharacter_Native*& NearrestPartner);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMoveWorldDirectionWithCamera_N(FVector& Forward, FVector& Right) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovedDistance() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetMotionEndAnimNotifyMontage_N(const UAnimSequenceBase* AnimSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELMomentumMeterBase* GetMomentumMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMiniGameMashSpeed_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeshHeight_N() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FStMatchRule GetMatchRule_N();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStLimbHP GetLimbHPPercent_N() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPPercent_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPLevelImpl(const TArray<float>& PercentArray, const float HPPercent) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetHipOffsetForCutscene();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayCharIndex_N() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FFootCtrlParam GetFootIKParam_N();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugOption_Idle_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELMatchResultType GetDeadReason() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCrossingDistance_Impl() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControllerID_N() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetColllidionSurfaceDirection_N(const UPrimitiveComponent* Collision, FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UMatineeCameraShake> GetCameraShake_Impl(int32 Damagev) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELFootIK* GetBP_FootIKImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBeforeInputMoveValue_N(FVector& Out_Move) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetAOnDamageANS_N(EAttackCollision_N CollisionType, bool bForWeapon, FStAOnDamage& Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetAnimationUpdateParam_N(const float& Delta, const float& SrcNaviValue, const float& SrcLookAtAlpha, const FVector& SrcLokAtLocation, const float& SrcUpperBlendWeight, float& DstNaviValue, FVector& DstHipOffset, FVector& DstLookAtLocation, float& DstLookAtAlpha, float& DstUpperBlendWeight);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetAimingCenterForReferee_N(FVector& outCenter, bool& outEnableAim);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAIFightStyle_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAIDifficulty_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UELAchievementObserver* GetAchievementObserver_Impl() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GeneratePercent(float Numerator, float Denominator, float Max, float Min) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishRopeIK_N(bool bBoth, bool bRightOnly, float BlendSec);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteOverlap(UPrimitiveComponent* InPrimitive);
    
    UFUNCTION(BlueprintCallable)
    void ExcuteEndOverlapPlayerCapsule_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExcuteEndOverlapPlayerCapsule_Impl(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ExcuteBeginOverlapPlayerCapsule_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExcuteBeginOverlapPlayerCapsule_Impl(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void ExcuteBeginOverlapPlayerBarrier_N(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_WeaponSpecial_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_WeaponSpecial_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_WeaponPickup_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_WeaponPickup_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Up_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Up_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Right_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Right_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Left_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Left_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Down_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Taunt_Down_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Up_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Up_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Right_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Right_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Left_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Left_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Down_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_TargetChange_Down_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_StrikeReversal_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_StrikeReversal_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Strike_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Strike_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Strike_Kick_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Strike_Kick_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_StealFinisher_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_StealFinisher_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Sprint_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Sprint_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Special_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Special_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_RingCornerUpDown_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_RingCornerUpDown_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PullUp_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PullUp_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PositionChange_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PositionChange_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PinCombo_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_PinCombo_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Pin_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Pin_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_MiniGameMash_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_MiniGameMash_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_MiniGameCancel_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_MiniGameCancel_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_IrishWhip_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_IrishWhip_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_GrappleReversal_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_GrappleReversal_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Grapple_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_Grapple_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_AnalogL_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_AnalogL_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap_HitCol_N(const AActor* OtherActor, const UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void DisableAttackCollisionList_N();
    
    UFUNCTION(BlueprintCallable)
    void DetachPartIK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckUpperBodyBlendCondition_PassiveSkill_N(const FStUpperBodyBlendUpdateInfo& UpdateParam, const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, bool& Enable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckUpperBodyBlendCondition_HP_N(const FStUpperBodyBlendUpdateInfo& UpdateParam, const float& CoreHP, const float& HeadHP, const float& ArmHP, const float& BodyHP, const float& LegHP, const float& Momentum, const bool& SpecialState, bool& Enable) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckTutorial_AddMomentumMeter();
    
    UFUNCTION(BlueprintCallable)
    void CheckRinginOutCollisionOperate_N(bool& bOperate, bool& bRingIn, bool& bRIngOut, bool& QuickDistance, UPrimitiveComponent*& Collision, AELCharacter_Native*& HitOtherPlayer, const FVector& MovementInput, const bool bCheckInCollisionOtherApronChara, const float OverwriteOperateAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckPassiveSkill_Under(const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const int32& SkillNo, const float& Time, bool& Enable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckPassiveSkill_Over(const TArray<FStFEquipPassiveSkillData>& EquipArray, const FStPassiveSkillSrcParam& SrcParam, const int32& SkillNo, const float& Time, bool& Enable) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckOtherTargetDistance_N(const float CheckDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckMainMontage_N(const TArray<UAnimMontage*>& Montages, bool& bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMainMontage(const TArray<UAnimMontage*>& Montages) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeMesh(const FELWrestlerMeshParam WrestlerMeshParam);
    
    UFUNCTION(BlueprintCallable)
    void ChangedTagWait(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void CE_M_SetORMovement_N(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpperBodyBlend_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTutorialAllComplete_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTopLadderOperate_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRunStrikeOperate_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeChainActionOperate_N() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanRise_N();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayApronSingleAvoid_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOperateDownPinchMove_N() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanNaviOperate_N();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CanEnvironmentActionOperate_N(const AELCharacter_Native* TargetPlayer, const bool bUseReserved, const bool bIgnoreApron, const bool bIgnoreBarricade, const bool CheckBarricadeConditionForceStandard, const bool bUseUserInputVector, const FVector UserInputVector, bool& Value, float& Direction, UPrimitiveComponent*& Collision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCornerChainActionOperate_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChainStateActionOperate_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChainGrappleActionOperate_N() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelChainGrappleInSyncBlocking_Impl();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApronChainActionOperate_N() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanAllOtherTargetDown_N();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindNativeCapsuleComponentOverlapEvent();
    
    UFUNCTION(BlueprintCallable)
    void BindDynamicMaterial(USkeletalMeshComponent* SkeletalMeshComponent, UMaterialInterface* OverrideMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap_HitCol_N(const AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void AimTarget_N();
    
};

