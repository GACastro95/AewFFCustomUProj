// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELGameVersions_generated_h
#error "ELGameVersions.generated.h already included, missing '#pragma once' in ELGameVersions.h"
#endif
#define ABP_200508_ELGameVersions_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebug_SetOverrideOnlineVersionName); \
	DECLARE_FUNCTION(execDebug_SetOverrideTitleVersionName); \
	DECLARE_FUNCTION(execGetBuildVersion); \
	DECLARE_FUNCTION(execGetBuildVersionName); \
	DECLARE_FUNCTION(execGetOnlineVersion); \
	DECLARE_FUNCTION(execGetOnlineVersionName); \
	DECLARE_FUNCTION(execGetSSModeVersion); \
	DECLARE_FUNCTION(execGetSSModeVersionName); \
	DECLARE_FUNCTION(execGetTitleVersionName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebug_SetOverrideOnlineVersionName); \
	DECLARE_FUNCTION(execDebug_SetOverrideTitleVersionName); \
	DECLARE_FUNCTION(execGetBuildVersion); \
	DECLARE_FUNCTION(execGetBuildVersionName); \
	DECLARE_FUNCTION(execGetOnlineVersion); \
	DECLARE_FUNCTION(execGetOnlineVersionName); \
	DECLARE_FUNCTION(execGetSSModeVersion); \
	DECLARE_FUNCTION(execGetSSModeVersionName); \
	DECLARE_FUNCTION(execGetTitleVersionName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGameVersions(); \
	friend struct Z_Construct_UClass_UELGameVersions_Statics; \
public: \
	DECLARE_CLASS(UELGameVersions, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameVersions) \
	static const TCHAR* StaticConfigName() {return TEXT("GameVersion");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELGameVersions(); \
	friend struct Z_Construct_UClass_UELGameVersions_Statics; \
public: \
	DECLARE_CLASS(UELGameVersions, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameVersions) \
	static const TCHAR* StaticConfigName() {return TEXT("GameVersion");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGameVersions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGameVersions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameVersions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameVersions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameVersions(UELGameVersions&&); \
	NO_API UELGameVersions(const UELGameVersions&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameVersions(UELGameVersions&&); \
	NO_API UELGameVersions(const UELGameVersions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameVersions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameVersions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGameVersions)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGameVersions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameVersions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
