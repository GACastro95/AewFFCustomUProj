// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESSWheeledVehicleDrivingPose : uint8;
class AELSSPlayer;
class UPrimitiveComponent;
struct FHitResult;
struct FVector;
enum class ESSDamageReason : uint8;
enum class ESSWheeledVehicleDamagedState : uint8;
#ifdef ABP_200508_ELSSWheeledVehicle_generated_h
#error "ELSSWheeledVehicle.generated.h already included, missing '#pragma once' in ELSSWheeledVehicle.h"
#endif
#define ABP_200508_ELSSWheeledVehicle_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_RPC_WRAPPERS \
	virtual void GetOff_Multicast_Implementation(AELSSPlayer* Player); \
	virtual void OnChangeDamagedState_DamagedLv1_Implementation(); \
	virtual void OnChangeDamagedState_DamagedMax_Implementation(); \
	virtual void OnChangeDamagedState_None_Implementation(); \
	virtual void PerformKlaxon_Multicast_Implementation(); \
	virtual void Setup_Implementation(); \
	virtual void SuicideVehicleOwner_Implementation(); \
	virtual void TryGetOff_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execApplyExplosionDamage); \
	DECLARE_FUNCTION(execAttachToVehicle); \
	DECLARE_FUNCTION(execCanGetOff); \
	DECLARE_FUNCTION(execCanGetOn); \
	DECLARE_FUNCTION(execCheckAllowPawnControll); \
	DECLARE_FUNCTION(execCorrectDetachedOwner); \
	DECLARE_FUNCTION(execDetachFromVehicle); \
	DECLARE_FUNCTION(execExplosion); \
	DECLARE_FUNCTION(execGetDrivingPose); \
	DECLARE_FUNCTION(execGetEngineRotationRatio); \
	DECLARE_FUNCTION(execGetOff_Multicast); \
	DECLARE_FUNCTION(execGetVehicleOwner); \
	DECLARE_FUNCTION(execGetVehicleOwnerCollision); \
	DECLARE_FUNCTION(execIsOverturn); \
	DECLARE_FUNCTION(execOnBeginOverlapBreakObject); \
	DECLARE_FUNCTION(execOnBodyHit); \
	DECLARE_FUNCTION(execOnChangeDamagedState_DamagedLv1); \
	DECLARE_FUNCTION(execOnChangeDamagedState_DamagedMax); \
	DECLARE_FUNCTION(execOnChangeDamagedState_None); \
	DECLARE_FUNCTION(execOnEndOverlapBreakObject); \
	DECLARE_FUNCTION(execOnGetOnBeginOverlap); \
	DECLARE_FUNCTION(execOnGetOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execOnRunOverBeginOverlap); \
	DECLARE_FUNCTION(execOnRunOverEndOverlap); \
	DECLARE_FUNCTION(execPerformKlaxon_Multicast); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execPlayKlaxonSound); \
	DECLARE_FUNCTION(execRemainDurabilityToDamagedState); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartEngineSE); \
	DECLARE_FUNCTION(execStopEngineSE); \
	DECLARE_FUNCTION(execSuicideVehicleOwner); \
	DECLARE_FUNCTION(execTakeExplosionDamageToAny); \
	DECLARE_FUNCTION(execTakeExplosionDamageToVehicleOwner); \
	DECLARE_FUNCTION(execTickAddAttention); \
	DECLARE_FUNCTION(execTickEngineSE); \
	DECLARE_FUNCTION(execTryGetOff_Server); \
	DECLARE_FUNCTION(execUpdateDamagedState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetOff_Multicast_Implementation(AELSSPlayer* Player); \
	virtual void OnChangeDamagedState_DamagedLv1_Implementation(); \
	virtual void OnChangeDamagedState_DamagedMax_Implementation(); \
	virtual void OnChangeDamagedState_None_Implementation(); \
	virtual void PerformKlaxon_Multicast_Implementation(); \
	virtual void Setup_Implementation(); \
	virtual void SuicideVehicleOwner_Implementation(); \
	virtual void TryGetOff_Server_Implementation(); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execApplyExplosionDamage); \
	DECLARE_FUNCTION(execAttachToVehicle); \
	DECLARE_FUNCTION(execCanGetOff); \
	DECLARE_FUNCTION(execCanGetOn); \
	DECLARE_FUNCTION(execCheckAllowPawnControll); \
	DECLARE_FUNCTION(execCorrectDetachedOwner); \
	DECLARE_FUNCTION(execDetachFromVehicle); \
	DECLARE_FUNCTION(execExplosion); \
	DECLARE_FUNCTION(execGetDrivingPose); \
	DECLARE_FUNCTION(execGetEngineRotationRatio); \
	DECLARE_FUNCTION(execGetOff_Multicast); \
	DECLARE_FUNCTION(execGetVehicleOwner); \
	DECLARE_FUNCTION(execGetVehicleOwnerCollision); \
	DECLARE_FUNCTION(execIsOverturn); \
	DECLARE_FUNCTION(execOnBeginOverlapBreakObject); \
	DECLARE_FUNCTION(execOnBodyHit); \
	DECLARE_FUNCTION(execOnChangeDamagedState_DamagedLv1); \
	DECLARE_FUNCTION(execOnChangeDamagedState_DamagedMax); \
	DECLARE_FUNCTION(execOnChangeDamagedState_None); \
	DECLARE_FUNCTION(execOnEndOverlapBreakObject); \
	DECLARE_FUNCTION(execOnGetOnBeginOverlap); \
	DECLARE_FUNCTION(execOnGetOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execOnRunOverBeginOverlap); \
	DECLARE_FUNCTION(execOnRunOverEndOverlap); \
	DECLARE_FUNCTION(execPerformKlaxon_Multicast); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execPlayKlaxonSound); \
	DECLARE_FUNCTION(execRemainDurabilityToDamagedState); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartEngineSE); \
	DECLARE_FUNCTION(execStopEngineSE); \
	DECLARE_FUNCTION(execSuicideVehicleOwner); \
	DECLARE_FUNCTION(execTakeExplosionDamageToAny); \
	DECLARE_FUNCTION(execTakeExplosionDamageToVehicleOwner); \
	DECLARE_FUNCTION(execTickAddAttention); \
	DECLARE_FUNCTION(execTickEngineSE); \
	DECLARE_FUNCTION(execTryGetOff_Server); \
	DECLARE_FUNCTION(execUpdateDamagedState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_EVENT_PARMS \
	struct ELSSWheeledVehicle_eventGetOff_Multicast_Parms \
	{ \
		AELSSPlayer* Player; \
	}; \
	struct ELSSWheeledVehicle_eventUpdateEngineSE_Parms \
	{ \
		float engineRatio; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWheeledVehicle(); \
	friend struct Z_Construct_UClass_AELSSWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AELSSWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWheeledVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWheeledVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VehicleOwner=NETFIELD_REP_START, \
		RemainDurability, \
		IsExploded, \
		NETFIELD_REP_END=IsExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWheeledVehicle(); \
	friend struct Z_Construct_UClass_AELSSWheeledVehicle_Statics; \
public: \
	DECLARE_CLASS(AELSSWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWheeledVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWheeledVehicle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VehicleOwner=NETFIELD_REP_START, \
		RemainDurability, \
		IsExploded, \
		NETFIELD_REP_END=IsExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWheeledVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWheeledVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWheeledVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWheeledVehicle(AELSSWheeledVehicle&&); \
	NO_API AELSSWheeledVehicle(const AELSSWheeledVehicle&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWheeledVehicle(AELSSWheeledVehicle&&); \
	NO_API AELSSWheeledVehicle(const AELSSWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWheeledVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWheeledVehicle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GetOffLocation() { return STRUCT_OFFSET(AELSSWheeledVehicle, GetOffLocation); } \
	FORCEINLINE static uint32 __PPO__GetOnCollision() { return STRUCT_OFFSET(AELSSWheeledVehicle, GetOnCollision); } \
	FORCEINLINE static uint32 __PPO__RunOverCollision() { return STRUCT_OFFSET(AELSSWheeledVehicle, RunOverCollision); } \
	FORCEINLINE static uint32 __PPO__PhysicsOverlapDetectionComponent() { return STRUCT_OFFSET(AELSSWheeledVehicle, PhysicsOverlapDetectionComponent); } \
	FORCEINLINE static uint32 __PPO__VehicleOwnerCollision() { return STRUCT_OFFSET(AELSSWheeledVehicle, VehicleOwnerCollision); } \
	FORCEINLINE static uint32 __PPO__PawnAvoidCollision() { return STRUCT_OFFSET(AELSSWheeledVehicle, PawnAvoidCollision); } \
	FORCEINLINE static uint32 __PPO__SSVehicleMovement() { return STRUCT_OFFSET(AELSSWheeledVehicle, SSVehicleMovement); } \
	FORCEINLINE static uint32 __PPO__VehicleOwner() { return STRUCT_OFFSET(AELSSWheeledVehicle, VehicleOwner); } \
	FORCEINLINE static uint32 __PPO__AttachGetOnSocketName() { return STRUCT_OFFSET(AELSSWheeledVehicle, AttachGetOnSocketName); } \
	FORCEINLINE static uint32 __PPO__GetOffCheckOffsetVertical() { return STRUCT_OFFSET(AELSSWheeledVehicle, GetOffCheckOffsetVertical); } \
	FORCEINLINE static uint32 __PPO__GetOffCheckOffsetHorizontal() { return STRUCT_OFFSET(AELSSWheeledVehicle, GetOffCheckOffsetHorizontal); } \
	FORCEINLINE static uint32 __PPO__InteractUIOffset() { return STRUCT_OFFSET(AELSSWheeledVehicle, InteractUIOffset); } \
	FORCEINLINE static uint32 __PPO__DotIconLocationOffset() { return STRUCT_OFFSET(AELSSWheeledVehicle, DotIconLocationOffset); } \
	FORCEINLINE static uint32 __PPO__DotIconBaseLocationOffsetZ() { return STRUCT_OFFSET(AELSSWheeledVehicle, DotIconBaseLocationOffsetZ); } \
	FORCEINLINE static uint32 __PPO__VehicleUIOffset() { return STRUCT_OFFSET(AELSSWheeledVehicle, VehicleUIOffset); } \
	FORCEINLINE static uint32 __PPO__SoundCue_ImpactToField() { return STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_ImpactToField); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Hit() { return STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Hit); } \
	FORCEINLINE static uint32 __PPO__DrivingPose() { return STRUCT_OFFSET(AELSSWheeledVehicle, DrivingPose); } \
	FORCEINLINE static uint32 __PPO__InputInvalidRangeX() { return STRUCT_OFFSET(AELSSWheeledVehicle, InputInvalidRangeX); } \
	FORCEINLINE static uint32 __PPO__InputInvalidRangeY() { return STRUCT_OFFSET(AELSSWheeledVehicle, InputInvalidRangeY); } \
	FORCEINLINE static uint32 __PPO__UnderfootCheckTraceObjectTypes() { return STRUCT_OFFSET(AELSSWheeledVehicle, UnderfootCheckTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__DefaultFrictionScale() { return STRUCT_OFFSET(AELSSWheeledVehicle, DefaultFrictionScale); } \
	FORCEINLINE static uint32 __PPO__SlipFrictionScale() { return STRUCT_OFFSET(AELSSWheeledVehicle, SlipFrictionScale); } \
	FORCEINLINE static uint32 __PPO__damagedState() { return STRUCT_OFFSET(AELSSWheeledVehicle, damagedState); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(AELSSWheeledVehicle, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSWheeledVehicle, RemainDurability); } \
	FORCEINLINE static uint32 __PPO__MaxDurability() { return STRUCT_OFFSET(AELSSWheeledVehicle, MaxDurability); } \
	FORCEINLINE static uint32 __PPO__ClashImpulseSize() { return STRUCT_OFFSET(AELSSWheeledVehicle, ClashImpulseSize); } \
	FORCEINLINE static uint32 __PPO__CrashEventIntervalSec() { return STRUCT_OFFSET(AELSSWheeledVehicle, CrashEventIntervalSec); } \
	FORCEINLINE static uint32 __PPO__CrashEventIntervalTimer() { return STRUCT_OFFSET(AELSSWheeledVehicle, CrashEventIntervalTimer); } \
	FORCEINLINE static uint32 __PPO__ReduceDurabilityValueWhenClash() { return STRUCT_OFFSET(AELSSWheeledVehicle, ReduceDurabilityValueWhenClash); } \
	FORCEINLINE static uint32 __PPO__CrashDamageToVehicleMoveId() { return STRUCT_OFFSET(AELSSWheeledVehicle, CrashDamageToVehicleMoveId); } \
	FORCEINLINE static uint32 __PPO__IsEnableRunOver() { return STRUCT_OFFSET(AELSSWheeledVehicle, IsEnableRunOver); } \
	FORCEINLINE static uint32 __PPO__RunOverOverlapActors() { return STRUCT_OFFSET(AELSSWheeledVehicle, RunOverOverlapActors); } \
	FORCEINLINE static uint32 __PPO__RunOverSpeed() { return STRUCT_OFFSET(AELSSWheeledVehicle, RunOverSpeed); } \
	FORCEINLINE static uint32 __PPO__RunOverMoveIds() { return STRUCT_OFFSET(AELSSWheeledVehicle, RunOverMoveIds); } \
	FORCEINLINE static uint32 __PPO__ReduceDurabilityValueWhenRunOver() { return STRUCT_OFFSET(AELSSWheeledVehicle, ReduceDurabilityValueWhenRunOver); } \
	FORCEINLINE static uint32 __PPO__ExplosionDelayTime() { return STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDelayTime); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageRadius() { return STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageMoveId() { return STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageMoveId); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamageToVehicleOwnerMoveId() { return STRUCT_OFFSET(AELSSWheeledVehicle, ExplosionDamageToVehicleOwnerMoveId); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Klaxon() { return STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Klaxon); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Engine() { return STRUCT_OFFSET(AELSSWheeledVehicle, SoundCue_Engine); } \
	FORCEINLINE static uint32 __PPO__EngineRotationRatioThreshold() { return STRUCT_OFFSET(AELSSWheeledVehicle, EngineRotationRatioThreshold); } \
	FORCEINLINE static uint32 __PPO__EngineRatioMin() { return STRUCT_OFFSET(AELSSWheeledVehicle, EngineRatioMin); } \
	FORCEINLINE static uint32 __PPO__AtomComponent_Engine() { return STRUCT_OFFSET(AELSSWheeledVehicle, AtomComponent_Engine); } \
	FORCEINLINE static uint32 __PPO__EngineSEUniqueId() { return STRUCT_OFFSET(AELSSWheeledVehicle, EngineSEUniqueId); } \
	FORCEINLINE static uint32 __PPO__CameraBasisLocationOffset() { return STRUCT_OFFSET(AELSSWheeledVehicle, CameraBasisLocationOffset); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_24_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWheeledVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
