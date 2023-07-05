// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELMatchScore_StarData;
struct FELWrestlerSelectParamForNative;
enum class EELAchievementList : uint8;
#ifdef ABP_200508_ELMatchResultUpdaterBase_generated_h
#error "ELMatchResultUpdaterBase.generated.h already included, missing '#pragma once' in ELMatchResultUpdaterBase.h"
#endif
#define ABP_200508_ELMatchResultUpdaterBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheck_AchievementStatus); \
	DECLARE_FUNCTION(execGetStarEvaluation); \
	DECLARE_FUNCTION(execIsCompetitor); \
	DECLARE_FUNCTION(execOnShowMatchResultMenuEvent_Native); \
	DECLARE_FUNCTION(execPushUnlockAchievement); \
	DECLARE_FUNCTION(execSetupCommonParameters_Native); \
	DECLARE_FUNCTION(execUpdate_GlobalStat); \
	DECLARE_FUNCTION(execUpdate_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheck_AchievementStatus); \
	DECLARE_FUNCTION(execGetStarEvaluation); \
	DECLARE_FUNCTION(execIsCompetitor); \
	DECLARE_FUNCTION(execOnShowMatchResultMenuEvent_Native); \
	DECLARE_FUNCTION(execPushUnlockAchievement); \
	DECLARE_FUNCTION(execSetupCommonParameters_Native); \
	DECLARE_FUNCTION(execUpdate_GlobalStat); \
	DECLARE_FUNCTION(execUpdate_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_EVENT_PARMS \
	struct ELMatchResultUpdaterBase_eventAddDefeatComStat_Impl_Parms \
	{ \
		int32 InAIDifficulty; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELMatchResultUpdaterBase(); \
	friend struct Z_Construct_UClass_AELMatchResultUpdaterBase_Statics; \
public: \
	DECLARE_CLASS(AELMatchResultUpdaterBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMatchResultUpdaterBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELMatchResultUpdaterBase(); \
	friend struct Z_Construct_UClass_AELMatchResultUpdaterBase_Statics; \
public: \
	DECLARE_CLASS(AELMatchResultUpdaterBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMatchResultUpdaterBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELMatchResultUpdaterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELMatchResultUpdaterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMatchResultUpdaterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMatchResultUpdaterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMatchResultUpdaterBase(AELMatchResultUpdaterBase&&); \
	NO_API AELMatchResultUpdaterBase(const AELMatchResultUpdaterBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMatchResultUpdaterBase(AELMatchResultUpdaterBase&&); \
	NO_API AELMatchResultUpdaterBase(const AELMatchResultUpdaterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMatchResultUpdaterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMatchResultUpdaterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELMatchResultUpdaterBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsCareer() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, IsCareer); } \
	FORCEINLINE static uint32 __PPO__Is1on1Match() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, Is1on1Match); } \
	FORCEINLINE static uint32 __PPO__CompetitorCount() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, CompetitorCount); } \
	FORCEINLINE static uint32 __PPO__WinTeamNo() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, WinTeamNo); } \
	FORCEINLINE static uint32 __PPO__IsOnline() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, IsOnline); } \
	FORCEINLINE static uint32 __PPO__IsTagRule() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, IsTagRule); } \
	FORCEINLINE static uint32 __PPO__HostPadNo() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, HostPadNo); } \
	FORCEINLINE static uint32 __PPO__HostTeamNo() { return STRUCT_OFFSET(AELMatchResultUpdaterBase, HostTeamNo); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELMatchResultUpdaterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultUpdaterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
