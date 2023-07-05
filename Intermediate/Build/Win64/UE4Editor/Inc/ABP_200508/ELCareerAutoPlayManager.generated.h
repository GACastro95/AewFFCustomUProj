// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerDebug_AutoPlayType : uint8;
enum class ECareerAutoPlay_MatchResult : uint8;
enum class ECareerScenario : uint8;
class UDataTable;
#ifdef ABP_200508_ELCareerAutoPlayManager_generated_h
#error "ELCareerAutoPlayManager.generated.h already included, missing '#pragma once' in ELCareerAutoPlayManager.h"
#endif
#define ABP_200508_ELCareerAutoPlayManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAutoPlayType); \
	DECLARE_FUNCTION(execGetScenarioDetailChoiceNo); \
	DECLARE_FUNCTION(execGetScenarioDetailWinInfo); \
	DECLARE_FUNCTION(execSetDataTable_Scenario_Detail); \
	DECLARE_FUNCTION(execSetDataTable_Scenario_Setting);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAutoPlayType); \
	DECLARE_FUNCTION(execGetScenarioDetailChoiceNo); \
	DECLARE_FUNCTION(execGetScenarioDetailWinInfo); \
	DECLARE_FUNCTION(execSetDataTable_Scenario_Detail); \
	DECLARE_FUNCTION(execSetDataTable_Scenario_Setting);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerAutoPlayManager(); \
	friend struct Z_Construct_UClass_UELCareerAutoPlayManager_Statics; \
public: \
	DECLARE_CLASS(UELCareerAutoPlayManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerAutoPlayManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerAutoPlayManager(); \
	friend struct Z_Construct_UClass_UELCareerAutoPlayManager_Statics; \
public: \
	DECLARE_CLASS(UELCareerAutoPlayManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerAutoPlayManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerAutoPlayManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerAutoPlayManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerAutoPlayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerAutoPlayManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerAutoPlayManager(UELCareerAutoPlayManager&&); \
	NO_API UELCareerAutoPlayManager(const UELCareerAutoPlayManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerAutoPlayManager(UELCareerAutoPlayManager&&); \
	NO_API UELCareerAutoPlayManager(const UELCareerAutoPlayManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerAutoPlayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerAutoPlayManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerAutoPlayManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_DataTable_AutoPlay_Scenario_Setting() { return STRUCT_OFFSET(UELCareerAutoPlayManager, m_DataTable_AutoPlay_Scenario_Setting); } \
	FORCEINLINE static uint32 __PPO__m_DataTable_AutoPlay_Scenario_Detail() { return STRUCT_OFFSET(UELCareerAutoPlayManager, m_DataTable_AutoPlay_Scenario_Detail); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerAutoPlayManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAutoPlayManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
