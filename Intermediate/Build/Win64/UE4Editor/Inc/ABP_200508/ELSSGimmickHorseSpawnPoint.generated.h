// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
class UMeshComponent;
struct FTransform;
#ifdef ABP_200508_ELSSGimmickHorseSpawnPoint_generated_h
#error "ELSSGimmickHorseSpawnPoint.generated.h already included, missing '#pragma once' in ELSSGimmickHorseSpawnPoint.h"
#endif
#define ABP_200508_ELSSGimmickHorseSpawnPoint_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_RPC_WRAPPERS \
	virtual void OnSpawned_Multicast_Implementation(); \
	virtual void SpawnVehicle_Server_Implementation(AELSSPlayer* inInteractPlayer); \
 \
	DECLARE_FUNCTION(execOnRep_IsSpawned); \
	DECLARE_FUNCTION(execOnSpawned_Multicast); \
	DECLARE_FUNCTION(execSetIsSpawned); \
	DECLARE_FUNCTION(execSpawnVehicle); \
	DECLARE_FUNCTION(execSpawnVehicle_Server);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSpawned_Multicast_Implementation(); \
	virtual void SpawnVehicle_Server_Implementation(AELSSPlayer* inInteractPlayer); \
 \
	DECLARE_FUNCTION(execOnRep_IsSpawned); \
	DECLARE_FUNCTION(execOnSpawned_Multicast); \
	DECLARE_FUNCTION(execSetIsSpawned); \
	DECLARE_FUNCTION(execSpawnVehicle); \
	DECLARE_FUNCTION(execSpawnVehicle_Server);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_EVENT_PARMS \
	struct ELSSGimmickHorseSpawnPoint_eventGetMesh_Parms \
	{ \
		UMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGimmickHorseSpawnPoint_eventGetMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSGimmickHorseSpawnPoint_eventGetSpawnTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct ELSSGimmickHorseSpawnPoint_eventSetEnableGimmick_Parms \
	{ \
		bool Enable; \
	}; \
	struct ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Server_Parms \
	{ \
		AELSSPlayer* inInteractPlayer; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGimmickHorseSpawnPoint(); \
	friend struct Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickHorseSpawnPoint, AELSSGimmickInteractable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickHorseSpawnPoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		isSpawned=NETFIELD_REP_START, \
		NETFIELD_REP_END=isSpawned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGimmickHorseSpawnPoint(); \
	friend struct Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickHorseSpawnPoint, AELSSGimmickInteractable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickHorseSpawnPoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		isSpawned=NETFIELD_REP_START, \
		NETFIELD_REP_END=isSpawned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGimmickHorseSpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGimmickHorseSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickHorseSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickHorseSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickHorseSpawnPoint(AELSSGimmickHorseSpawnPoint&&); \
	NO_API AELSSGimmickHorseSpawnPoint(const AELSSGimmickHorseSpawnPoint&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickHorseSpawnPoint(AELSSGimmickHorseSpawnPoint&&); \
	NO_API AELSSGimmickHorseSpawnPoint(const AELSSGimmickHorseSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickHorseSpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickHorseSpawnPoint); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSGimmickHorseSpawnPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractDuration() { return STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, InteractDuration); } \
	FORCEINLINE static uint32 __PPO__SpawnVehicleId() { return STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnVehicleId); } \
	FORCEINLINE static uint32 __PPO__SpawnedEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnedEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__isSpawned() { return STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, isSpawned); } \
	FORCEINLINE static uint32 __PPO__SpawnedSound() { return STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnedSound); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGimmickHorseSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickHorseSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
