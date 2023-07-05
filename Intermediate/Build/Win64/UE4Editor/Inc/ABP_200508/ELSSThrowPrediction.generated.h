// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPredictProjectilePathResult;
enum class ESSThrowPredictionType : uint8;
struct FVector;
#ifdef ABP_200508_ELSSThrowPrediction_generated_h
#error "ELSSThrowPrediction.generated.h already included, missing '#pragma once' in ELSSThrowPrediction.h"
#endif
#define ABP_200508_ELSSThrowPrediction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadiusAndUnderCheckHeight); \
	DECLARE_FUNCTION(execUpdatePrediction_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadiusAndUnderCheckHeight); \
	DECLARE_FUNCTION(execUpdatePrediction_Native);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_EVENT_PARMS \
	struct ELSSThrowPrediction_eventApplyRadiusToMesh_Parms \
	{ \
		float inRadius; \
	}; \
	struct ELSSThrowPrediction_eventBeginPrediction_Parms \
	{ \
		ESSThrowPredictionType InType; \
	}; \
	struct ELSSThrowPrediction_eventSetEffectCircle_Parms \
	{ \
		FVector InLoc; \
		float inRadius; \
		bool inOnlyFloor; \
	}; \
	struct ELSSThrowPrediction_eventUpdatePrediction_Parms \
	{ \
		FPredictProjectilePathResult InParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSThrowPrediction(); \
	friend struct Z_Construct_UClass_AELSSThrowPrediction_Statics; \
public: \
	DECLARE_CLASS(AELSSThrowPrediction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSThrowPrediction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELSSThrowPrediction(); \
	friend struct Z_Construct_UClass_AELSSThrowPrediction_Statics; \
public: \
	DECLARE_CLASS(AELSSThrowPrediction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSThrowPrediction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSThrowPrediction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSThrowPrediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSThrowPrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSThrowPrediction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSThrowPrediction(AELSSThrowPrediction&&); \
	NO_API AELSSThrowPrediction(const AELSSThrowPrediction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSThrowPrediction(AELSSThrowPrediction&&); \
	NO_API AELSSThrowPrediction(const AELSSThrowPrediction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSThrowPrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSThrowPrediction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSThrowPrediction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CircleRadius() { return STRUCT_OFFSET(AELSSThrowPrediction, CircleRadius); } \
	FORCEINLINE static uint32 __PPO__UnderCheckHeight() { return STRUCT_OFFSET(AELSSThrowPrediction, UnderCheckHeight); } \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(AELSSThrowPrediction, Points); } \
	FORCEINLINE static uint32 __PPO__CircleEffect() { return STRUCT_OFFSET(AELSSThrowPrediction, CircleEffect); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(AELSSThrowPrediction, Type); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSThrowPrediction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSThrowPrediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
