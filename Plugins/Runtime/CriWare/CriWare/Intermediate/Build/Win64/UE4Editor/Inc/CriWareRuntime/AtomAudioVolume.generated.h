// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSnapshotSwitchSettings;
#ifdef CRIWARERUNTIME_AtomAudioVolume_generated_h
#error "AtomAudioVolume.generated.h already included, missing '#pragma once' in AtomAudioVolume.h"
#endif
#define CRIWARERUNTIME_AtomAudioVolume_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableAllAudioVolume); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetReverbSettings);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableAllAudioVolume); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetReverbSettings);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomAudioVolume(); \
	friend struct Z_Construct_UClass_AAtomAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAtomAudioVolume(); \
	friend struct Z_Construct_UClass_AAtomAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAudioVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAudioVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAudioVolume(AAtomAudioVolume&&); \
	NO_API AAtomAudioVolume(const AAtomAudioVolume&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAudioVolume(AAtomAudioVolume&&); \
	NO_API AAtomAudioVolume(const AAtomAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAudioVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAtomAudioVolume)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomAudioVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(AAtomAudioVolume, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__bAutoSettingEntranceVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bAutoSettingEntranceVolume); } \
	FORCEINLINE static uint32 __PPO__bAutoSettingNeighbourAudioVolumeToEntranceVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bAutoSettingNeighbourAudioVolumeToEntranceVolume); } \
	FORCEINLINE static uint32 __PPO__AudioVolumeTags() { return STRUCT_OFFSET(AAtomAudioVolume, AudioVolumeTags); } \
	FORCEINLINE static uint32 __PPO__bOverrideAtomAudioVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bOverrideAtomAudioVolume); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_11_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomAudioVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAudioVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
