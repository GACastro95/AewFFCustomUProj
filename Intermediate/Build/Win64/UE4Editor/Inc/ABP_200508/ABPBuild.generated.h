// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UABPBuild;
#ifdef ABP_200508_ABPBuild_generated_h
#error "ABPBuild.generated.h already included, missing '#pragma once' in ABPBuild.h"
#endif
#define ABP_200508_ABPBuild_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateABPBuild); \
	DECLARE_FUNCTION(execGetBuildDate); \
	DECLARE_FUNCTION(execGetBuildDate_Numeric); \
	DECLARE_FUNCTION(execGetBuildTime); \
	DECLARE_FUNCTION(execGetMajorVersion); \
	DECLARE_FUNCTION(execGetMinorVersion); \
	DECLARE_FUNCTION(execGetSubMinorVersion); \
	DECLARE_FUNCTION(execGetVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateABPBuild); \
	DECLARE_FUNCTION(execGetBuildDate); \
	DECLARE_FUNCTION(execGetBuildDate_Numeric); \
	DECLARE_FUNCTION(execGetBuildTime); \
	DECLARE_FUNCTION(execGetMajorVersion); \
	DECLARE_FUNCTION(execGetMinorVersion); \
	DECLARE_FUNCTION(execGetSubMinorVersion); \
	DECLARE_FUNCTION(execGetVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABPBuild(); \
	friend struct Z_Construct_UClass_UABPBuild_Statics; \
public: \
	DECLARE_CLASS(UABPBuild, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UABPBuild)


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUABPBuild(); \
	friend struct Z_Construct_UClass_UABPBuild_Statics; \
public: \
	DECLARE_CLASS(UABPBuild, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UABPBuild)


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABPBuild(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABPBuild) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABPBuild); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPBuild); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABPBuild(UABPBuild&&); \
	NO_API UABPBuild(const UABPBuild&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABPBuild(UABPBuild&&); \
	NO_API UABPBuild(const UABPBuild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABPBuild); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABPBuild); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABPBuild)


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UABPBuild>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ABPBuild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
