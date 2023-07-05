// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETipsLoadingCategory : uint8;
struct FTipsLoadingResourceInfo;
#ifdef ABP_200508_ELTipsLoadingManager_generated_h
#error "ELTipsLoadingManager.generated.h already included, missing '#pragma once' in ELTipsLoadingManager.h"
#endif
#define ABP_200508_ELTipsLoadingManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearOverrideNextLevel); \
	DECLARE_FUNCTION(execDebug_StartScreen); \
	DECLARE_FUNCTION(execEndScreen); \
	DECLARE_FUNCTION(execGetResourceInfo); \
	DECLARE_FUNCTION(execOnCompleteLoading); \
	DECLARE_FUNCTION(execSetOverrideNextLevel); \
	DECLARE_FUNCTION(execStartScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearOverrideNextLevel); \
	DECLARE_FUNCTION(execDebug_StartScreen); \
	DECLARE_FUNCTION(execEndScreen); \
	DECLARE_FUNCTION(execGetResourceInfo); \
	DECLARE_FUNCTION(execOnCompleteLoading); \
	DECLARE_FUNCTION(execSetOverrideNextLevel); \
	DECLARE_FUNCTION(execStartScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELTipsLoadingManager(); \
	friend struct Z_Construct_UClass_UELTipsLoadingManager_Statics; \
public: \
	DECLARE_CLASS(UELTipsLoadingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTipsLoadingManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELTipsLoadingManager(); \
	friend struct Z_Construct_UClass_UELTipsLoadingManager_Statics; \
public: \
	DECLARE_CLASS(UELTipsLoadingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTipsLoadingManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELTipsLoadingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELTipsLoadingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTipsLoadingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTipsLoadingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTipsLoadingManager(UELTipsLoadingManager&&); \
	NO_API UELTipsLoadingManager(const UELTipsLoadingManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTipsLoadingManager(UELTipsLoadingManager&&); \
	NO_API UELTipsLoadingManager(const UELTipsLoadingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTipsLoadingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTipsLoadingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELTipsLoadingManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UseOverrideNextLevel() { return STRUCT_OFFSET(UELTipsLoadingManager, UseOverrideNextLevel); } \
	FORCEINLINE static uint32 __PPO__OverrideNextLevel() { return STRUCT_OFFSET(UELTipsLoadingManager, OverrideNextLevel); } \
	FORCEINLINE static uint32 __PPO__OverrideNextLevelOption() { return STRUCT_OFFSET(UELTipsLoadingManager, OverrideNextLevelOption); } \
	FORCEINLINE static uint32 __PPO__CompleteDelegate() { return STRUCT_OFFSET(UELTipsLoadingManager, CompleteDelegate); } \
	FORCEINLINE static uint32 __PPO__m_ExecCountInfoMap() { return STRUCT_OFFSET(UELTipsLoadingManager, m_ExecCountInfoMap); } \
	FORCEINLINE static uint32 __PPO__m_pLoadingExecuteActor() { return STRUCT_OFFSET(UELTipsLoadingManager, m_pLoadingExecuteActor); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELTipsLoadingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
