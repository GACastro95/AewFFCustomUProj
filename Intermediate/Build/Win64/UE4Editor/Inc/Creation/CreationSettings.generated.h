// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGender : uint8;
class USkeletalMesh;
#ifdef CREATION_CreationSettings_generated_h
#error "CreationSettings.generated.h already included, missing '#pragma once' in CreationSettings.h"
#endif
#define CREATION_CreationSettings_generated_h

#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCustomBodyAsset);


#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomBodyAsset);


#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreationSettings(); \
	friend struct Z_Construct_UClass_UCreationSettings_Statics; \
public: \
	DECLARE_CLASS(UCreationSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UCreationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCreationSettings(); \
	friend struct Z_Construct_UClass_UCreationSettings_Statics; \
public: \
	DECLARE_CLASS(UCreationSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UCreationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreationSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreationSettings(UCreationSettings&&); \
	NO_API UCreationSettings(const UCreationSettings&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreationSettings(UCreationSettings&&); \
	NO_API UCreationSettings(const UCreationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCreationSettings)


#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_11_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_CreationSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UCreationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_CreationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
