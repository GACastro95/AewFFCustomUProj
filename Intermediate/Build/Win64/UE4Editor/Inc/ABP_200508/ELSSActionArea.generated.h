// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
#ifdef ABP_200508_ELSSActionArea_generated_h
#error "ELSSActionArea.generated.h already included, missing '#pragma once' in ELSSActionArea.h"
#endif
#define ABP_200508_ELSSActionArea_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execIsEnable); \
	DECLARE_FUNCTION(execSetEnable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execIsEnable); \
	DECLARE_FUNCTION(execSetEnable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSActionArea(); \
	friend struct Z_Construct_UClass_AELSSActionArea_Statics; \
public: \
	DECLARE_CLASS(AELSSActionArea, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSActionArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSActionArea(); \
	friend struct Z_Construct_UClass_AELSSActionArea_Statics; \
public: \
	DECLARE_CLASS(AELSSActionArea, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSActionArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSActionArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSActionArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSActionArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSActionArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSActionArea(AELSSActionArea&&); \
	NO_API AELSSActionArea(const AELSSActionArea&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSActionArea(AELSSActionArea&&); \
	NO_API AELSSActionArea(const AELSSActionArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSActionArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSActionArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSActionArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaCollision() { return STRUCT_OFFSET(AELSSActionArea, AreaCollision); } \
	FORCEINLINE static uint32 __PPO__Enabled() { return STRUCT_OFFSET(AELSSActionArea, Enabled); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSActionArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
