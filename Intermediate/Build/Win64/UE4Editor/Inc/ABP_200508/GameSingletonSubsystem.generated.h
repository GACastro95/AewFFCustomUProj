// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_GameSingletonSubsystem_generated_h
#error "GameSingletonSubsystem.generated.h already included, missing '#pragma once' in GameSingletonSubsystem.h"
#endif
#define ABP_200508_GameSingletonSubsystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execReleaseInstance);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execReleaseInstance);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSingletonSubsystem(); \
	friend struct Z_Construct_UClass_UGameSingletonSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameSingletonSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameSingletonSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUGameSingletonSubsystem(); \
	friend struct Z_Construct_UClass_UGameSingletonSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameSingletonSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameSingletonSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSingletonSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSingletonSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSingletonSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSingletonSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSingletonSubsystem(UGameSingletonSubsystem&&); \
	NO_API UGameSingletonSubsystem(const UGameSingletonSubsystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSingletonSubsystem(UGameSingletonSubsystem&&); \
	NO_API UGameSingletonSubsystem(const UGameSingletonSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSingletonSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSingletonSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSingletonSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstanceMap() { return STRUCT_OFFSET(UGameSingletonSubsystem, InstanceMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGameSingletonSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GameSingletonSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
