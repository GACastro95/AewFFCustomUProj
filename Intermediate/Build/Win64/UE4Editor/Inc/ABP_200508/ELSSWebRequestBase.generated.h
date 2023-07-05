// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSSRequestData;
enum class yEnDialogBoxResult : uint8;
#ifdef ABP_200508_ELSSWebRequestBase_generated_h
#error "ELSSWebRequestBase.generated.h already included, missing '#pragma once' in ELSSWebRequestBase.h"
#endif
#define ABP_200508_ELSSWebRequestBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnyRequestWebAPI); \
	DECLARE_FUNCTION(execErrorDialogEnd); \
	DECLARE_FUNCTION(execGetRequestURL); \
	DECLARE_FUNCTION(execRequestCancel); \
	DECLARE_FUNCTION(execRequestWebAPI);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnyRequestWebAPI); \
	DECLARE_FUNCTION(execErrorDialogEnd); \
	DECLARE_FUNCTION(execGetRequestURL); \
	DECLARE_FUNCTION(execRequestCancel); \
	DECLARE_FUNCTION(execRequestWebAPI);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWebRequestBase(); \
	friend struct Z_Construct_UClass_UELSSWebRequestBase_Statics; \
public: \
	DECLARE_CLASS(UELSSWebRequestBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWebRequestBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWebRequestBase(); \
	friend struct Z_Construct_UClass_UELSSWebRequestBase_Statics; \
public: \
	DECLARE_CLASS(UELSSWebRequestBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWebRequestBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWebRequestBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWebRequestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWebRequestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWebRequestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWebRequestBase(UELSSWebRequestBase&&); \
	NO_API UELSSWebRequestBase(const UELSSWebRequestBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWebRequestBase(UELSSWebRequestBase&&); \
	NO_API UELSSWebRequestBase(const UELSSWebRequestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWebRequestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWebRequestBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWebRequestBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__requestAPIType() { return STRUCT_OFFSET(UELSSWebRequestBase, requestAPIType); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWebRequestBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWebRequestBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
