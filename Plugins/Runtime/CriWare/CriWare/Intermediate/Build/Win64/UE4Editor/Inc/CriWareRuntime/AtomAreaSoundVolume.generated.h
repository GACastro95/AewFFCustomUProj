// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UAtomComponent;
#ifdef CRIWARERUNTIME_AtomAreaSoundVolume_generated_h
#error "AtomAreaSoundVolume.generated.h already included, missing '#pragma once' in AtomAreaSoundVolume.h"
#endif
#define CRIWARERUNTIME_AtomAreaSoundVolume_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSounds); \
	DECLARE_FUNCTION(execDestroySounds); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSounds); \
	DECLARE_FUNCTION(execDestroySounds); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomAreaSoundVolume(); \
	friend struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAreaSoundVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAreaSoundVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAtomAreaSoundVolume(); \
	friend struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAreaSoundVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAreaSoundVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAreaSoundVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAreaSoundVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAreaSoundVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAreaSoundVolume(AAtomAreaSoundVolume&&); \
	NO_API AAtomAreaSoundVolume(const AAtomAreaSoundVolume&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAreaSoundVolume(AAtomAreaSoundVolume&&); \
	NO_API AAtomAreaSoundVolume(const AAtomAreaSoundVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAreaSoundVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAreaSoundVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAtomAreaSoundVolume)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomAreaSoundVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(AAtomAreaSoundVolume, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__SoundStopDistance() { return STRUCT_OFFSET(AAtomAreaSoundVolume, SoundStopDistance); } \
	FORCEINLINE static uint32 __PPO__bIsEnableAtomCompoentPack() { return STRUCT_OFFSET(AAtomAreaSoundVolume, bIsEnableAtomCompoentPack); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_10_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomAreaSoundVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
