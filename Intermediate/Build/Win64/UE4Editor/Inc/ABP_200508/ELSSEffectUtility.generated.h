// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AELSSPoolDecalBase;
struct FVector;
struct FRotator;
class USceneComponent;
struct FTransform;
class UMeshComponent;
class AActor;
enum class ESSHitEffectType : uint8;
#ifdef ABP_200508_ELSSEffectUtility_generated_h
#error "ELSSEffectUtility.generated.h already included, missing '#pragma once' in ELSSEffectUtility.h"
#endif
#define ABP_200508_ELSSEffectUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayDecalAtLocationFromPool); \
	DECLARE_FUNCTION(execPlayDecalAttachedFromPool); \
	DECLARE_FUNCTION(execPlayEffectFromPoolToTransformWithLoopSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolToTransformWithSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolWithLoopSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolWithSE); \
	DECLARE_FUNCTION(execPlayHitEffectFromPoolToTransform); \
	DECLARE_FUNCTION(execStopDecalAndSinkToPool); \
	DECLARE_FUNCTION(execStopEffectAndSinkToPool);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayDecalAtLocationFromPool); \
	DECLARE_FUNCTION(execPlayDecalAttachedFromPool); \
	DECLARE_FUNCTION(execPlayEffectFromPoolToTransformWithLoopSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolToTransformWithSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolWithLoopSE); \
	DECLARE_FUNCTION(execPlayEffectFromPoolWithSE); \
	DECLARE_FUNCTION(execPlayHitEffectFromPoolToTransform); \
	DECLARE_FUNCTION(execStopDecalAndSinkToPool); \
	DECLARE_FUNCTION(execStopEffectAndSinkToPool);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSEffectUtility(); \
	friend struct Z_Construct_UClass_UELSSEffectUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSEffectUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSEffectUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUELSSEffectUtility(); \
	friend struct Z_Construct_UClass_UELSSEffectUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSEffectUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSEffectUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSEffectUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSEffectUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSEffectUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSEffectUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSEffectUtility(UELSSEffectUtility&&); \
	NO_API UELSSEffectUtility(const UELSSEffectUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSEffectUtility(UELSSEffectUtility&&); \
	NO_API UELSSEffectUtility(const UELSSEffectUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSEffectUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSEffectUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSEffectUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSEffectUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSEffectUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
