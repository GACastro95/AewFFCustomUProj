// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_AtomEntranceVolume_generated_h
#error "AtomEntranceVolume.generated.h already included, missing '#pragma once' in AtomEntranceVolume.h"
#endif
#define CRIWARERUNTIME_AtomEntranceVolume_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetPriority);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomEntranceVolume(); \
	friend struct Z_Construct_UClass_AAtomEntranceVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomEntranceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomEntranceVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NeighbourhoodAudioVolumeArray, \
		NETFIELD_REP_END=NeighbourhoodAudioVolumeArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAAtomEntranceVolume(); \
	friend struct Z_Construct_UClass_AAtomEntranceVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomEntranceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomEntranceVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NeighbourhoodAudioVolumeArray, \
		NETFIELD_REP_END=NeighbourhoodAudioVolumeArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomEntranceVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomEntranceVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomEntranceVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomEntranceVolume(AAtomEntranceVolume&&); \
	NO_API AAtomEntranceVolume(const AAtomEntranceVolume&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomEntranceVolume(AAtomEntranceVolume&&); \
	NO_API AAtomEntranceVolume(const AAtomEntranceVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomEntranceVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomEntranceVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAtomEntranceVolume)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomEntranceVolume, Priority); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_8_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomEntranceVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
