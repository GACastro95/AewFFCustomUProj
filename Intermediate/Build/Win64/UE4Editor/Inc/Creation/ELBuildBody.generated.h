// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGender : uint8;
enum class EBodyType : uint8;
struct FBaseBodyTypeParam;
struct FEditBodyParam;
#ifdef CREATION_ELBuildBody_generated_h
#error "ELBuildBody.generated.h already included, missing '#pragma once' in ELBuildBody.h"
#endif
#define CREATION_ELBuildBody_generated_h

#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBodyTypeParam); \
	DECLARE_FUNCTION(execGetHeightRatio); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetupBuildBody);


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBodyTypeParam); \
	DECLARE_FUNCTION(execGetHeightRatio); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetupBuildBody);


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELBuildBody(); \
	friend struct Z_Construct_UClass_UELBuildBody_Statics; \
public: \
	DECLARE_CLASS(UELBuildBody, UELCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELBuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELBuildBody(); \
	friend struct Z_Construct_UClass_UELBuildBody_Statics; \
public: \
	DECLARE_CLASS(UELBuildBody, UELCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELBuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELBuildBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELBuildBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELBuildBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELBuildBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELBuildBody(UELBuildBody&&); \
	NO_API UELBuildBody(const UELBuildBody&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELBuildBody(UELBuildBody&&); \
	NO_API UELBuildBody(const UELBuildBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELBuildBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELBuildBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELBuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UpdateDate() { return STRUCT_OFFSET(UELBuildBody, UpdateDate); } \
	FORCEINLINE static uint32 __PPO__HipCurve0() { return STRUCT_OFFSET(UELBuildBody, HipCurve0); } \
	FORCEINLINE static uint32 __PPO__HipCurve1() { return STRUCT_OFFSET(UELBuildBody, HipCurve1); } \
	FORCEINLINE static uint32 __PPO__Spine1Curve0() { return STRUCT_OFFSET(UELBuildBody, Spine1Curve0); } \
	FORCEINLINE static uint32 __PPO__Spine1Curve1() { return STRUCT_OFFSET(UELBuildBody, Spine1Curve1); } \
	FORCEINLINE static uint32 __PPO__ShoulderCurve0() { return STRUCT_OFFSET(UELBuildBody, ShoulderCurve0); } \
	FORCEINLINE static uint32 __PPO__ShoulderCurve1() { return STRUCT_OFFSET(UELBuildBody, ShoulderCurve1); } \
	FORCEINLINE static uint32 __PPO__LegCurve0() { return STRUCT_OFFSET(UELBuildBody, LegCurve0); } \
	FORCEINLINE static uint32 __PPO__LegCurve1() { return STRUCT_OFFSET(UELBuildBody, LegCurve1); } \
	FORCEINLINE static uint32 __PPO__FootWareOffset_Male() { return STRUCT_OFFSET(UELBuildBody, FootWareOffset_Male); } \
	FORCEINLINE static uint32 __PPO__FootWareOffset_Female() { return STRUCT_OFFSET(UELBuildBody, FootWareOffset_Female); }


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_14_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UELBuildBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_ELBuildBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
