// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdjustDlcSaveDataParam;
struct FSaveDataAccessParam;
#ifdef ELITE_GameSettings_generated_h
#error "GameSettings.generated.h already included, missing '#pragma once' in GameSettings.h"
#endif
#define ELITE_GameSettings_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAdjustDlcSaveDataAccessParams); \
	DECLARE_FUNCTION(execGetSaveDataAccessParams); \
	DECLARE_FUNCTION(execGetSaveTitleNameFromFilenName); \
	DECLARE_FUNCTION(execInitExtendedSaveGameInfoDelegate); \
	DECLARE_FUNCTION(execIsValidSSmode);


#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdjustDlcSaveDataAccessParams); \
	DECLARE_FUNCTION(execGetSaveDataAccessParams); \
	DECLARE_FUNCTION(execGetSaveTitleNameFromFilenName); \
	DECLARE_FUNCTION(execInitExtendedSaveGameInfoDelegate); \
	DECLARE_FUNCTION(execIsValidSSmode);


#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSettings(); \
	friend struct Z_Construct_UClass_UGameSettings_Statics; \
public: \
	DECLARE_CLASS(UGameSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UGameSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameSettings(); \
	friend struct Z_Construct_UClass_UGameSettings_Statics; \
public: \
	DECLARE_CLASS(UGameSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UGameSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettings(UGameSettings&&); \
	NO_API UGameSettings(const UGameSettings&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSettings(UGameSettings&&); \
	NO_API UGameSettings(const UGameSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSettings)


#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_11_PROLOG
#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_GameSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UGameSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_GameSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
