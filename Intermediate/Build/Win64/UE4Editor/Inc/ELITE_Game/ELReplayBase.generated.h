// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELHighlightReplayParam;
struct FPoseSnapshot;
struct FTransform;
class UParticleSystem;
#ifdef ELITE_GAME_ELReplayBase_generated_h
#error "ELReplayBase.generated.h already included, missing '#pragma once' in ELReplayBase.h"
#endif
#define ELITE_GAME_ELReplayBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertReplayIndex_N); \
	DECLARE_FUNCTION(execGetDamageTime); \
	DECLARE_FUNCTION(execGetHighlightReplayParam); \
	DECLARE_FUNCTION(execGetReplayParam); \
	DECLARE_FUNCTION(execGetTotalRecordTime); \
	DECLARE_FUNCTION(execIsPlayReplay); \
	DECLARE_FUNCTION(execIsSlowTime); \
	DECLARE_FUNCTION(execRequestBackupRecord); \
	DECLARE_FUNCTION(execRequestPlayReplay); \
	DECLARE_FUNCTION(execResolveReplay); \
	DECLARE_FUNCTION(execSetDamageLv); \
	DECLARE_FUNCTION(execSetHighlightReplayParam); \
	DECLARE_FUNCTION(execSetHitParticle); \
	DECLARE_FUNCTION(execSetSnapshotPoseTransform_N); \
	DECLARE_FUNCTION(execStartRec); \
	DECLARE_FUNCTION(execStopReplay);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertReplayIndex_N); \
	DECLARE_FUNCTION(execGetDamageTime); \
	DECLARE_FUNCTION(execGetHighlightReplayParam); \
	DECLARE_FUNCTION(execGetReplayParam); \
	DECLARE_FUNCTION(execGetTotalRecordTime); \
	DECLARE_FUNCTION(execIsPlayReplay); \
	DECLARE_FUNCTION(execIsSlowTime); \
	DECLARE_FUNCTION(execRequestBackupRecord); \
	DECLARE_FUNCTION(execRequestPlayReplay); \
	DECLARE_FUNCTION(execResolveReplay); \
	DECLARE_FUNCTION(execSetDamageLv); \
	DECLARE_FUNCTION(execSetHighlightReplayParam); \
	DECLARE_FUNCTION(execSetHitParticle); \
	DECLARE_FUNCTION(execSetSnapshotPoseTransform_N); \
	DECLARE_FUNCTION(execStartRec); \
	DECLARE_FUNCTION(execStopReplay);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELReplayBase(); \
	friend struct Z_Construct_UClass_UELReplayBase_Statics; \
public: \
	DECLARE_CLASS(UELReplayBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELReplayBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELReplayBase(); \
	friend struct Z_Construct_UClass_UELReplayBase_Statics; \
public: \
	DECLARE_CLASS(UELReplayBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELReplayBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELReplayBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELReplayBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELReplayBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELReplayBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELReplayBase(UELReplayBase&&); \
	NO_API UELReplayBase(const UELReplayBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELReplayBase(UELReplayBase&&); \
	NO_API UELReplayBase(const UELReplayBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELReplayBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELReplayBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELReplayBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TickTime() { return STRUCT_OFFSET(UELReplayBase, TickTime); }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELReplayBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELReplayBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
