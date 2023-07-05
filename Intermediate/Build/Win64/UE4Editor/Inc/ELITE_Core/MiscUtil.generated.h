// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGenderConditions : uint8;
enum class EGender : uint8;
#ifdef ELITE_CORE_MiscUtil_generated_h
#error "MiscUtil.generated.h already included, missing '#pragma once' in MiscUtil.h"
#endif
#define ELITE_CORE_MiscUtil_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEvaluateGenderConditions); \
	DECLARE_FUNCTION(execInchToFeet); \
	DECLARE_FUNCTION(execToCentimeter); \
	DECLARE_FUNCTION(execToCentimeterF); \
	DECLARE_FUNCTION(execToInch); \
	DECLARE_FUNCTION(execToInchText); \
	DECLARE_FUNCTION(execToKilogramText); \
	DECLARE_FUNCTION(execToMeterText);


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEvaluateGenderConditions); \
	DECLARE_FUNCTION(execInchToFeet); \
	DECLARE_FUNCTION(execToCentimeter); \
	DECLARE_FUNCTION(execToCentimeterF); \
	DECLARE_FUNCTION(execToInch); \
	DECLARE_FUNCTION(execToInchText); \
	DECLARE_FUNCTION(execToKilogramText); \
	DECLARE_FUNCTION(execToMeterText);


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiscUtil(); \
	friend struct Z_Construct_UClass_UMiscUtil_Statics; \
public: \
	DECLARE_CLASS(UMiscUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UMiscUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMiscUtil(); \
	friend struct Z_Construct_UClass_UMiscUtil_Statics; \
public: \
	DECLARE_CLASS(UMiscUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UMiscUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiscUtil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiscUtil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiscUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiscUtil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiscUtil(UMiscUtil&&); \
	NO_API UMiscUtil(const UMiscUtil&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiscUtil(UMiscUtil&&); \
	NO_API UMiscUtil(const UMiscUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiscUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiscUtil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMiscUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_8_PROLOG
#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UMiscUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_MiscUtil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
