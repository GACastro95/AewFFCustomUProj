// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UBlendAPData;
class USkeletalMesh;
struct FBodyMorphParam;
struct FTransform;
#ifdef CREATION_BlendAPData_generated_h
#error "BlendAPData.generated.h already included, missing '#pragma once' in BlendAPData.h"
#endif
#define CREATION_BlendAPData_generated_h

#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyBlendAPData); \
	DECLARE_FUNCTION(execRebuild); \
	DECLARE_FUNCTION(execTryGetBlendAPData); \
	DECLARE_FUNCTION(execTryGetBlendedAPSocketTransform);


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyBlendAPData); \
	DECLARE_FUNCTION(execRebuild); \
	DECLARE_FUNCTION(execTryGetBlendAPData); \
	DECLARE_FUNCTION(execTryGetBlendedAPSocketTransform);


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendAPData(); \
	friend struct Z_Construct_UClass_UBlendAPData_Statics; \
public: \
	DECLARE_CLASS(UBlendAPData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UBlendAPData)


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlendAPData(); \
	friend struct Z_Construct_UClass_UBlendAPData_Statics; \
public: \
	DECLARE_CLASS(UBlendAPData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UBlendAPData)


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendAPData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendAPData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendAPData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendAPData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendAPData(UBlendAPData&&); \
	NO_API UBlendAPData(const UBlendAPData&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendAPData(UBlendAPData&&); \
	NO_API UBlendAPData(const UBlendAPData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendAPData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendAPData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlendAPData)


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_14_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_BlendAPData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UBlendAPData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_BlendAPData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
