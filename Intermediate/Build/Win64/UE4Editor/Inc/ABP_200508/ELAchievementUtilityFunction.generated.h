// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELAchievementList : uint8;
class UELGameInstance;
enum class ESaveDataProcResult : uint8;
#ifdef ABP_200508_ELAchievementUtilityFunction_generated_h
#error "ELAchievementUtilityFunction.generated.h already included, missing '#pragma once' in ELAchievementUtilityFunction.h"
#endif
#define ABP_200508_ELAchievementUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAchievementCount); \
	DECLARE_FUNCTION(execAddAchievementCountCommon); \
	DECLARE_FUNCTION(execCheckUnlockAchievement); \
	DECLARE_FUNCTION(execCheckUnlockAchievementCore); \
	DECLARE_FUNCTION(execCheckUnlockAddAchievementCount); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execClearAllAchievements); \
	DECLARE_FUNCTION(execGetAchievementCount); \
	DECLARE_FUNCTION(execGetAchievementCountCommon); \
	DECLARE_FUNCTION(execGetAchievementGameInstance); \
	DECLARE_FUNCTION(execGetAchievementStatus); \
	DECLARE_FUNCTION(execGetStackSaveAchievementArray); \
	DECLARE_FUNCTION(execIsEnableSaveAchievementInCareer); \
	DECLARE_FUNCTION(execIsEnableSavedata); \
	DECLARE_FUNCTION(execIsSaveCount); \
	DECLARE_FUNCTION(execIsUnlockSteamAchievement); \
	DECLARE_FUNCTION(execSaveRequestAchievementData); \
	DECLARE_FUNCTION(execSaveRequestAchievementDataCore); \
	DECLARE_FUNCTION(execSetAchievementCount); \
	DECLARE_FUNCTION(execSetAchievementCountCommon); \
	DECLARE_FUNCTION(execSetAchievementStatus); \
	DECLARE_FUNCTION(execSetStackSaveAchievementInfo); \
	DECLARE_FUNCTION(execSetupAchievementQuery); \
	DECLARE_FUNCTION(execStackAchievementCount); \
	DECLARE_FUNCTION(execUnlockAchievement); \
	DECLARE_FUNCTION(execUnlockAchievementCore); \
	DECLARE_FUNCTION(execUnlockCareerStackAchievment);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAchievementCount); \
	DECLARE_FUNCTION(execAddAchievementCountCommon); \
	DECLARE_FUNCTION(execCheckUnlockAchievement); \
	DECLARE_FUNCTION(execCheckUnlockAchievementCore); \
	DECLARE_FUNCTION(execCheckUnlockAddAchievementCount); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execClearAllAchievements); \
	DECLARE_FUNCTION(execGetAchievementCount); \
	DECLARE_FUNCTION(execGetAchievementCountCommon); \
	DECLARE_FUNCTION(execGetAchievementGameInstance); \
	DECLARE_FUNCTION(execGetAchievementStatus); \
	DECLARE_FUNCTION(execGetStackSaveAchievementArray); \
	DECLARE_FUNCTION(execIsEnableSaveAchievementInCareer); \
	DECLARE_FUNCTION(execIsEnableSavedata); \
	DECLARE_FUNCTION(execIsSaveCount); \
	DECLARE_FUNCTION(execIsUnlockSteamAchievement); \
	DECLARE_FUNCTION(execSaveRequestAchievementData); \
	DECLARE_FUNCTION(execSaveRequestAchievementDataCore); \
	DECLARE_FUNCTION(execSetAchievementCount); \
	DECLARE_FUNCTION(execSetAchievementCountCommon); \
	DECLARE_FUNCTION(execSetAchievementStatus); \
	DECLARE_FUNCTION(execSetStackSaveAchievementInfo); \
	DECLARE_FUNCTION(execSetupAchievementQuery); \
	DECLARE_FUNCTION(execStackAchievementCount); \
	DECLARE_FUNCTION(execUnlockAchievement); \
	DECLARE_FUNCTION(execUnlockAchievementCore); \
	DECLARE_FUNCTION(execUnlockCareerStackAchievment);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAchievementUtilityFunction(); \
	friend struct Z_Construct_UClass_UELAchievementUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELAchievementUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELAchievementUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELAchievementUtilityFunction(); \
	friend struct Z_Construct_UClass_UELAchievementUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELAchievementUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELAchievementUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAchievementUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAchievementUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAchievementUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAchievementUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAchievementUtilityFunction(UELAchievementUtilityFunction&&); \
	NO_API UELAchievementUtilityFunction(const UELAchievementUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAchievementUtilityFunction(UELAchievementUtilityFunction&&); \
	NO_API UELAchievementUtilityFunction(const UELAchievementUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAchievementUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAchievementUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELAchievementUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELAchievementUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELAchievementUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
