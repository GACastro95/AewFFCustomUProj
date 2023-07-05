// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ABP_200508_ELUserPrivilegesSubsystem_generated_h
#error "ELUserPrivilegesSubsystem.generated.h already included, missing '#pragma once' in ELUserPrivilegesSubsystem.h"
#endif
#define ABP_200508_ELUserPrivilegesSubsystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCanCommunicateOutsideXBoxUser); \
	DECLARE_FUNCTION(execIsCanCommunicateXBoxUser); \
	DECLARE_FUNCTION(execIsCanCrossPlay); \
	DECLARE_FUNCTION(execIsCanPlayOnline); \
	DECLARE_FUNCTION(execIsCanUseUserGeneratedContent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCanCommunicateOutsideXBoxUser); \
	DECLARE_FUNCTION(execIsCanCommunicateXBoxUser); \
	DECLARE_FUNCTION(execIsCanCrossPlay); \
	DECLARE_FUNCTION(execIsCanPlayOnline); \
	DECLARE_FUNCTION(execIsCanUseUserGeneratedContent);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELUserPrivilegesSubsystem(); \
	friend struct Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics; \
public: \
	DECLARE_CLASS(UELUserPrivilegesSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUserPrivilegesSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELUserPrivilegesSubsystem(); \
	friend struct Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics; \
public: \
	DECLARE_CLASS(UELUserPrivilegesSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUserPrivilegesSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELUserPrivilegesSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELUserPrivilegesSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUserPrivilegesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUserPrivilegesSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUserPrivilegesSubsystem(UELUserPrivilegesSubsystem&&); \
	NO_API UELUserPrivilegesSubsystem(const UELUserPrivilegesSubsystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUserPrivilegesSubsystem(UELUserPrivilegesSubsystem&&); \
	NO_API UELUserPrivilegesSubsystem(const UELUserPrivilegesSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUserPrivilegesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUserPrivilegesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELUserPrivilegesSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELUserPrivilegesSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELUserPrivilegesSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
