// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSItemBoxType : uint8;
struct FVector;
class AActor;
enum class ESSDamageReason : uint8;
class UMeshComponent;
enum class ESSRarity : uint8;
#ifdef ABP_200508_ELSSItemBox_generated_h
#error "ELSSItemBox.generated.h already included, missing '#pragma once' in ELSSItemBox.h"
#endif
#define ABP_200508_ELSSItemBox_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_RPC_WRAPPERS \
	virtual bool IsInteractableObject_Implementation() const; \
	virtual void SpawnItems_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyLocationToTransform); \
	DECLARE_FUNCTION(execGetItemBoxType); \
	DECLARE_FUNCTION(execIsInteractableObject); \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execOnRep_BlockCollisionEnabled); \
	DECLARE_FUNCTION(execOnRep_OpenedTime); \
	DECLARE_FUNCTION(execOnRep_SpawnPickupSE); \
	DECLARE_FUNCTION(execOpenBox_Native); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execSetBlockCollision); \
	DECLARE_FUNCTION(execSetBoxLocation); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSpawnItems); \
	DECLARE_FUNCTION(execUpdateFalling_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsInteractableObject_Implementation() const; \
	virtual void SpawnItems_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyLocationToTransform); \
	DECLARE_FUNCTION(execGetItemBoxType); \
	DECLARE_FUNCTION(execIsInteractableObject); \
	DECLARE_FUNCTION(execIsOpened); \
	DECLARE_FUNCTION(execOnRep_BlockCollisionEnabled); \
	DECLARE_FUNCTION(execOnRep_OpenedTime); \
	DECLARE_FUNCTION(execOnRep_SpawnPickupSE); \
	DECLARE_FUNCTION(execOpenBox_Native); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execSetBlockCollision); \
	DECLARE_FUNCTION(execSetBoxLocation); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSpawnItems); \
	DECLARE_FUNCTION(execUpdateFalling_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_EVENT_PARMS \
	struct ELSSItemBox_eventGetMeshForPlaySE_Parms \
	{ \
		UMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSItemBox_eventGetMeshForPlaySE_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSItemBox_eventIsInteractableObject_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSItemBox_eventIsInteractableObject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSItemBox_eventPlaySpawnPickupSE_Parms \
	{ \
		ESSRarity inRarity; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSItemBox(); \
	friend struct Z_Construct_UClass_AELSSItemBox_Statics; \
public: \
	DECLARE_CLASS(AELSSItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemBox) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSItemBox*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetLocation=NETFIELD_REP_START, \
		LandLocationZ, \
		TargetRotationYaw, \
		SkipAnim, \
		SpawnedTime, \
		OpenedTime, \
		SpawnPickupSE, \
		BlockCollisionEnabled, \
		NETFIELD_REP_END=BlockCollisionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAELSSItemBox(); \
	friend struct Z_Construct_UClass_AELSSItemBox_Statics; \
public: \
	DECLARE_CLASS(AELSSItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemBox) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSItemBox*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TargetLocation=NETFIELD_REP_START, \
		LandLocationZ, \
		TargetRotationYaw, \
		SkipAnim, \
		SpawnedTime, \
		OpenedTime, \
		SpawnPickupSE, \
		BlockCollisionEnabled, \
		NETFIELD_REP_END=BlockCollisionEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSItemBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSItemBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemBox(AELSSItemBox&&); \
	NO_API AELSSItemBox(const AELSSItemBox&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemBox(AELSSItemBox&&); \
	NO_API AELSSItemBox(const AELSSItemBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSItemBox)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceScale() { return STRUCT_OFFSET(AELSSItemBox, HitEffectLineTraceScale); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(AELSSItemBox, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__ItemBoxType() { return STRUCT_OFFSET(AELSSItemBox, ItemBoxType); } \
	FORCEINLINE static uint32 __PPO__SpawnDuration() { return STRUCT_OFFSET(AELSSItemBox, SpawnDuration); } \
	FORCEINLINE static uint32 __PPO__ItemSpawnOffset() { return STRUCT_OFFSET(AELSSItemBox, ItemSpawnOffset); } \
	FORCEINLINE static uint32 __PPO__CeilCheckOffset() { return STRUCT_OFFSET(AELSSItemBox, CeilCheckOffset); } \
	FORCEINLINE static uint32 __PPO__StartLocationOffsetZ() { return STRUCT_OFFSET(AELSSItemBox, StartLocationOffsetZ); } \
	FORCEINLINE static uint32 __PPO__CeilCheckOffsetZ() { return STRUCT_OFFSET(AELSSItemBox, CeilCheckOffsetZ); } \
	FORCEINLINE static uint32 __PPO__LandCheckOffsetZ() { return STRUCT_OFFSET(AELSSItemBox, LandCheckOffsetZ); } \
	FORCEINLINE static uint32 __PPO__Location() { return STRUCT_OFFSET(AELSSItemBox, Location); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(AELSSItemBox, Rotation); } \
	FORCEINLINE static uint32 __PPO__InteractUIOffset() { return STRUCT_OFFSET(AELSSItemBox, InteractUIOffset); } \
	FORCEINLINE static uint32 __PPO__DotIconLocationOffset() { return STRUCT_OFFSET(AELSSItemBox, DotIconLocationOffset); } \
	FORCEINLINE static uint32 __PPO__DotIconBaseLocationOffsetZ() { return STRUCT_OFFSET(AELSSItemBox, DotIconBaseLocationOffsetZ); } \
	FORCEINLINE static uint32 __PPO__LifeTimeInDamageArea() { return STRUCT_OFFSET(AELSSItemBox, LifeTimeInDamageArea); } \
	FORCEINLINE static uint32 __PPO__DelayDestroyTime() { return STRUCT_OFFSET(AELSSItemBox, DelayDestroyTime); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(AELSSItemBox, TargetLocation); } \
	FORCEINLINE static uint32 __PPO__LandLocationZ() { return STRUCT_OFFSET(AELSSItemBox, LandLocationZ); } \
	FORCEINLINE static uint32 __PPO__TargetRotation() { return STRUCT_OFFSET(AELSSItemBox, TargetRotation); } \
	FORCEINLINE static uint32 __PPO__TargetRotationYaw() { return STRUCT_OFFSET(AELSSItemBox, TargetRotationYaw); } \
	FORCEINLINE static uint32 __PPO__SkipAnim() { return STRUCT_OFFSET(AELSSItemBox, SkipAnim); } \
	FORCEINLINE static uint32 __PPO__SpawnedTime() { return STRUCT_OFFSET(AELSSItemBox, SpawnedTime); } \
	FORCEINLINE static uint32 __PPO__OpenedTime() { return STRUCT_OFFSET(AELSSItemBox, OpenedTime); } \
	FORCEINLINE static uint32 __PPO__SpawnPickupSE() { return STRUCT_OFFSET(AELSSItemBox, SpawnPickupSE); } \
	FORCEINLINE static uint32 __PPO__BlockCollisionEnabled() { return STRUCT_OFFSET(AELSSItemBox, BlockCollisionEnabled); } \
	FORCEINLINE static uint32 __PPO__LandCheckCapsuleHeight() { return STRUCT_OFFSET(AELSSItemBox, LandCheckCapsuleHeight); } \
	FORCEINLINE static uint32 __PPO__LandCheckCapsuleRadius() { return STRUCT_OFFSET(AELSSItemBox, LandCheckCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO__FallingAccel() { return STRUCT_OFFSET(AELSSItemBox, FallingAccel); } \
	FORCEINLINE static uint32 __PPO__FallingSpeed() { return STRUCT_OFFSET(AELSSItemBox, FallingSpeed); } \
	FORCEINLINE static uint32 __PPO__LandCheckTraceObjectTypes() { return STRUCT_OFFSET(AELSSItemBox, LandCheckTraceObjectTypes); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_18_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSItemBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
