// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
class AELSSPlayer;
class UPrimitiveComponent;
struct FSSHorseAttackInfo;
struct FVector_NetQuantize10;
struct FHitResult;
struct FVector;
enum class ESSDamageReason : uint8;
#ifdef ABP_200508_ELSSHorse_generated_h
#error "ELSSHorse.generated.h already included, missing '#pragma once' in ELSSHorse.h"
#endif
#define ABP_200508_ELSSHorse_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_RPC_WRAPPERS \
	virtual void GetOff_Multicast_Implementation(AELSSPlayer* Player); \
	virtual void NeighMulticast_Implementation(FVector_NetQuantize10 InLocation); \
	virtual void OnMovementPreUpdated_Implementation(); \
	virtual void OnMovementUpdated_Implementation(FVector const& OldLocation); \
	virtual void ServerNeigh_Implementation(); \
	virtual void Setup_Implementation(); \
	virtual void SuicideVehicleOwner_Implementation(); \
	virtual void TryGetOff_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execAttachToVehicle); \
	DECLARE_FUNCTION(execCanGetOff); \
	DECLARE_FUNCTION(execCanGetOn); \
	DECLARE_FUNCTION(execCheckAllowPawnControll); \
	DECLARE_FUNCTION(execClearNeighAttack); \
	DECLARE_FUNCTION(execCorrectDetachedOwner); \
	DECLARE_FUNCTION(execDetachFromVehicle); \
	DECLARE_FUNCTION(execGetAttachRelativeTransform); \
	DECLARE_FUNCTION(execGetCurrentFloorPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetOff_Multicast); \
	DECLARE_FUNCTION(execGetVehicleOwner); \
	DECLARE_FUNCTION(execGetVehicleOwnerCollision); \
	DECLARE_FUNCTION(execIsOverturn); \
	DECLARE_FUNCTION(execNeighAttack); \
	DECLARE_FUNCTION(execNeighMulticast); \
	DECLARE_FUNCTION(execOnBeginOverlapBreakObject); \
	DECLARE_FUNCTION(execOnGetOnBeginOverlap); \
	DECLARE_FUNCTION(execOnGetOnEndOverlap); \
	DECLARE_FUNCTION(execOnMovementPreUpdated); \
	DECLARE_FUNCTION(execOnMovementUpdated); \
	DECLARE_FUNCTION(execOnNeighBeginOverlap); \
	DECLARE_FUNCTION(execOnNeighEndOverlap); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execOnRunOverBeginOverlap); \
	DECLARE_FUNCTION(execOnRunOverEndOverlap); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execServerNeigh); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSuicideVehicleOwner); \
	DECLARE_FUNCTION(execTickAddAttention); \
	DECLARE_FUNCTION(execTryGetOff_Server); \
	DECLARE_FUNCTION(execTryTramp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetOff_Multicast_Implementation(AELSSPlayer* Player); \
	virtual void NeighMulticast_Implementation(FVector_NetQuantize10 InLocation); \
	virtual void OnMovementPreUpdated_Implementation(); \
	virtual void OnMovementUpdated_Implementation(FVector const& OldLocation); \
	virtual void ServerNeigh_Implementation(); \
	virtual void Setup_Implementation(); \
	virtual void SuicideVehicleOwner_Implementation(); \
	virtual void TryGetOff_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execAttachToVehicle); \
	DECLARE_FUNCTION(execCanGetOff); \
	DECLARE_FUNCTION(execCanGetOn); \
	DECLARE_FUNCTION(execCheckAllowPawnControll); \
	DECLARE_FUNCTION(execClearNeighAttack); \
	DECLARE_FUNCTION(execCorrectDetachedOwner); \
	DECLARE_FUNCTION(execDetachFromVehicle); \
	DECLARE_FUNCTION(execGetAttachRelativeTransform); \
	DECLARE_FUNCTION(execGetCurrentFloorPhysicalSurfaceType); \
	DECLARE_FUNCTION(execGetOff_Multicast); \
	DECLARE_FUNCTION(execGetVehicleOwner); \
	DECLARE_FUNCTION(execGetVehicleOwnerCollision); \
	DECLARE_FUNCTION(execIsOverturn); \
	DECLARE_FUNCTION(execNeighAttack); \
	DECLARE_FUNCTION(execNeighMulticast); \
	DECLARE_FUNCTION(execOnBeginOverlapBreakObject); \
	DECLARE_FUNCTION(execOnGetOnBeginOverlap); \
	DECLARE_FUNCTION(execOnGetOnEndOverlap); \
	DECLARE_FUNCTION(execOnMovementPreUpdated); \
	DECLARE_FUNCTION(execOnMovementUpdated); \
	DECLARE_FUNCTION(execOnNeighBeginOverlap); \
	DECLARE_FUNCTION(execOnNeighEndOverlap); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execOnRunOverBeginOverlap); \
	DECLARE_FUNCTION(execOnRunOverEndOverlap); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execServerNeigh); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSuicideVehicleOwner); \
	DECLARE_FUNCTION(execTickAddAttention); \
	DECLARE_FUNCTION(execTryGetOff_Server); \
	DECLARE_FUNCTION(execTryTramp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_EVENT_PARMS \
	struct ELSSHorse_eventGetOff_Multicast_Parms \
	{ \
		AELSSPlayer* Player; \
	}; \
	struct ELSSHorse_eventNeighMulticast_Parms \
	{ \
		FVector_NetQuantize10 InLocation; \
	}; \
	struct ELSSHorse_eventOnMovementUpdated_Parms \
	{ \
		FVector OldLocation; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSHorse(); \
	friend struct Z_Construct_UClass_AELSSHorse_Statics; \
public: \
	DECLARE_CLASS(AELSSHorse, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSHorse) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSHorse*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForwardYaw=NETFIELD_REP_START, \
		BackMoving, \
		VehicleOwner, \
		RemainDurability, \
		NETFIELD_REP_END=RemainDurability	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAELSSHorse(); \
	friend struct Z_Construct_UClass_AELSSHorse_Statics; \
public: \
	DECLARE_CLASS(AELSSHorse, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSHorse) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSHorse*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForwardYaw=NETFIELD_REP_START, \
		BackMoving, \
		VehicleOwner, \
		RemainDurability, \
		NETFIELD_REP_END=RemainDurability	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSHorse(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSHorse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSHorse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSHorse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSHorse(AELSSHorse&&); \
	NO_API AELSSHorse(const AELSSHorse&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSHorse(AELSSHorse&&); \
	NO_API AELSSHorse(const AELSSHorse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSHorse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSHorse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSHorse)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GetOffLocation() { return STRUCT_OFFSET(AELSSHorse, GetOffLocation); } \
	FORCEINLINE static uint32 __PPO__HitCollision_1() { return STRUCT_OFFSET(AELSSHorse, HitCollision_1); } \
	FORCEINLINE static uint32 __PPO__HitCollision_2() { return STRUCT_OFFSET(AELSSHorse, HitCollision_2); } \
	FORCEINLINE static uint32 __PPO__GetOnCollision() { return STRUCT_OFFSET(AELSSHorse, GetOnCollision); } \
	FORCEINLINE static uint32 __PPO__RunOverCollision() { return STRUCT_OFFSET(AELSSHorse, RunOverCollision); } \
	FORCEINLINE static uint32 __PPO__PhysicsOverlapDetectionComponent() { return STRUCT_OFFSET(AELSSHorse, PhysicsOverlapDetectionComponent); } \
	FORCEINLINE static uint32 __PPO__VehicleOwnerCollision() { return STRUCT_OFFSET(AELSSHorse, VehicleOwnerCollision); } \
	FORCEINLINE static uint32 __PPO__NeighAttackCollision() { return STRUCT_OFFSET(AELSSHorse, NeighAttackCollision); } \
	FORCEINLINE static uint32 __PPO__VehicleOwner() { return STRUCT_OFFSET(AELSSHorse, VehicleOwner); } \
	FORCEINLINE static uint32 __PPO__AttachGetOnSocketName() { return STRUCT_OFFSET(AELSSHorse, AttachGetOnSocketName); } \
	FORCEINLINE static uint32 __PPO__AttachRelativeTransform() { return STRUCT_OFFSET(AELSSHorse, AttachRelativeTransform); } \
	FORCEINLINE static uint32 __PPO__GetOffCheckOffsetVertical() { return STRUCT_OFFSET(AELSSHorse, GetOffCheckOffsetVertical); } \
	FORCEINLINE static uint32 __PPO__GetOffCheckOffsetHorizontal() { return STRUCT_OFFSET(AELSSHorse, GetOffCheckOffsetHorizontal); } \
	FORCEINLINE static uint32 __PPO__InteractUIOffset() { return STRUCT_OFFSET(AELSSHorse, InteractUIOffset); } \
	FORCEINLINE static uint32 __PPO__VehicleUIOffset() { return STRUCT_OFFSET(AELSSHorse, VehicleUIOffset); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Hit() { return STRUCT_OFFSET(AELSSHorse, SoundCue_Hit); } \
	FORCEINLINE static uint32 __PPO__FootStepTraceDistance() { return STRUCT_OFFSET(AELSSHorse, FootStepTraceDistance); } \
	FORCEINLINE static uint32 __PPO__FootStepFrontOffset() { return STRUCT_OFFSET(AELSSHorse, FootStepFrontOffset); } \
	FORCEINLINE static uint32 __PPO__FootStepRearOffset() { return STRUCT_OFFSET(AELSSHorse, FootStepRearOffset); } \
	FORCEINLINE static uint32 __PPO__RemoveDamageToVehicleOwnerMoveId() { return STRUCT_OFFSET(AELSSHorse, RemoveDamageToVehicleOwnerMoveId); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(AELSSHorse, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSHorse, RemainDurability); } \
	FORCEINLINE static uint32 __PPO__MaxDurability() { return STRUCT_OFFSET(AELSSHorse, MaxDurability); } \
	FORCEINLINE static uint32 __PPO__ClashImpulseSize() { return STRUCT_OFFSET(AELSSHorse, ClashImpulseSize); } \
	FORCEINLINE static uint32 __PPO__ReduceDurabilityValueWhenClash() { return STRUCT_OFFSET(AELSSHorse, ReduceDurabilityValueWhenClash); } \
	FORCEINLINE static uint32 __PPO__IsEnableRunOver() { return STRUCT_OFFSET(AELSSHorse, IsEnableRunOver); } \
	FORCEINLINE static uint32 __PPO__RunOverOverlapActors() { return STRUCT_OFFSET(AELSSHorse, RunOverOverlapActors); } \
	FORCEINLINE static uint32 __PPO__RunOverSpeed() { return STRUCT_OFFSET(AELSSHorse, RunOverSpeed); } \
	FORCEINLINE static uint32 __PPO__RunOverMoveIds() { return STRUCT_OFFSET(AELSSHorse, RunOverMoveIds); } \
	FORCEINLINE static uint32 __PPO__ReduceDurabilityValueWhenRunOver() { return STRUCT_OFFSET(AELSSHorse, ReduceDurabilityValueWhenRunOver); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationOffset() { return STRUCT_OFFSET(AELSSHorse, CameraBasisLocationOffset); } \
	FORCEINLINE static uint32 __PPO__LimitActionSpeed() { return STRUCT_OFFSET(AELSSHorse, LimitActionSpeed); } \
	FORCEINLINE static uint32 __PPO__NeighMontage() { return STRUCT_OFFSET(AELSSHorse, NeighMontage); } \
	FORCEINLINE static uint32 __PPO__NeighCharaMontage() { return STRUCT_OFFSET(AELSSHorse, NeighCharaMontage); } \
	FORCEINLINE static uint32 __PPO__NeighMoveId() { return STRUCT_OFFSET(AELSSHorse, NeighMoveId); } \
	FORCEINLINE static uint32 __PPO__CurrentAttackInfo() { return STRUCT_OFFSET(AELSSHorse, CurrentAttackInfo); } \
	FORCEINLINE static uint32 __PPO__ReserveActionTimeMax() { return STRUCT_OFFSET(AELSSHorse, ReserveActionTimeMax); } \
	FORCEINLINE static uint32 __PPO__ReserveAction() { return STRUCT_OFFSET(AELSSHorse, ReserveAction); } \
	FORCEINLINE static uint32 __PPO__ReserveActionRemainTime() { return STRUCT_OFFSET(AELSSHorse, ReserveActionRemainTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_26_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSHorse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
