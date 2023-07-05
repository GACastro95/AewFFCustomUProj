// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CREATION_ELAnimInstance_BuildBody_generated_h
#error "ELAnimInstance_BuildBody.generated.h already included, missing '#pragma once' in ELAnimInstance_BuildBody.h"
#endif
#define CREATION_ELAnimInstance_BuildBody_generated_h

#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_RPC_WRAPPERS \
	virtual void OnUpdateParam_Implementation(bool bForce); \
	virtual void OnUpdateState_Implementation(); \
 \
	DECLARE_FUNCTION(execOnUpdateParam); \
	DECLARE_FUNCTION(execOnUpdateState); \
	DECLARE_FUNCTION(execPostInitProperties); \
	DECLARE_FUNCTION(execUpdateParam); \
	DECLARE_FUNCTION(execUpdateState);


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUpdateParam_Implementation(bool bForce); \
	virtual void OnUpdateState_Implementation(); \
 \
	DECLARE_FUNCTION(execOnUpdateParam); \
	DECLARE_FUNCTION(execOnUpdateState); \
	DECLARE_FUNCTION(execPostInitProperties); \
	DECLARE_FUNCTION(execUpdateParam); \
	DECLARE_FUNCTION(execUpdateState);


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_EVENT_PARMS \
	struct ELAnimInstance_BuildBody_eventOnUpdateParam_Parms \
	{ \
		bool bForce; \
	};


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAnimInstance_BuildBody(); \
	friend struct Z_Construct_UClass_UELAnimInstance_BuildBody_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_BuildBody, UELAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_BuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELAnimInstance_BuildBody(); \
	friend struct Z_Construct_UClass_UELAnimInstance_BuildBody_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_BuildBody, UELAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_BuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAnimInstance_BuildBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAnimInstance_BuildBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_BuildBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_BuildBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_BuildBody(UELAnimInstance_BuildBody&&); \
	NO_API UELAnimInstance_BuildBody(const UELAnimInstance_BuildBody&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_BuildBody(UELAnimInstance_BuildBody&&); \
	NO_API UELAnimInstance_BuildBody(const UELAnimInstance_BuildBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_BuildBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_BuildBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELAnimInstance_BuildBody)


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_8_PROLOG \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UELAnimInstance_BuildBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_ELAnimInstance_BuildBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
