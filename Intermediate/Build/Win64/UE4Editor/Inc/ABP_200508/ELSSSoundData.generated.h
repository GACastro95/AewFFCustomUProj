// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
enum class ESSDamageSE : uint8;
enum class ESSSpawnPickupSE : uint8;
class AActor;
enum class ESSHitGroundSE : uint8;
class UMeshComponent;
enum class ESSAnnounce : uint8;
#ifdef ABP_200508_ELSSSoundData_generated_h
#error "ELSSSoundData.generated.h already included, missing '#pragma once' in ELSSSoundData.h"
#endif
#define ABP_200508_ELSSSoundData_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_RPC_WRAPPERS \
	virtual USoundAtomCue* GetSoundAtomCue_Damage_Implementation(ESSDamageSE inDamageSE) const; \
 \
	DECLARE_FUNCTION(execGetSoundAtomCue_Damage); \
	DECLARE_FUNCTION(execGetSoundAtomCue_SpawnPickup); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetOwner);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USoundAtomCue* GetSoundAtomCue_Damage_Implementation(ESSDamageSE inDamageSE) const; \
 \
	DECLARE_FUNCTION(execGetSoundAtomCue_Damage); \
	DECLARE_FUNCTION(execGetSoundAtomCue_SpawnPickup); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetOwner);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_EVENT_PARMS \
	struct ELSSSoundData_eventGetSoundAtomCue_Damage_Parms \
	{ \
		ESSDamageSE inDamageSE; \
		USoundAtomCue* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundData_eventGetSoundAtomCue_Damage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms \
	{ \
		ESSHitGroundSE inHitGroundSE; \
		UMeshComponent* inMeshComponent; \
		USoundAtomCue* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSoundData_eventGetSoundAtomCue_HitGround_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSSoundData_eventPlayAnnounce_Parms \
	{ \
		ESSAnnounce inAnnounce; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSSoundData(); \
	friend struct Z_Construct_UClass_UELSSSoundData_Statics; \
public: \
	DECLARE_CLASS(UELSSSoundData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSSoundData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUELSSSoundData(); \
	friend struct Z_Construct_UClass_UELSSSoundData_Statics; \
public: \
	DECLARE_CLASS(UELSSSoundData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSSoundData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSSoundData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSSoundData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSSoundData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSSoundData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSSoundData(UELSSSoundData&&); \
	NO_API UELSSSoundData(const UELSSSoundData&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSSoundData(UELSSSoundData&&); \
	NO_API UELSSSoundData(const UELSSSoundData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSSoundData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSSoundData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSSoundData)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerActor() { return STRUCT_OFFSET(UELSSSoundData, OwnerActor); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_17_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSSoundData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSoundData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
