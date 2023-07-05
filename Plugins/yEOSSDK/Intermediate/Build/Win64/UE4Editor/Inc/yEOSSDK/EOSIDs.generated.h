// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSAuth;
enum class EEOSUserType : uint8;
class UEOSIDs;
#ifdef YEOSSDK_EOSIDs_generated_h
#error "EOSIDs.generated.h already included, missing '#pragma once' in EOSIDs.h"
#endif
#define YEOSSDK_EOSIDs_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEOSAuth); \
	DECLARE_FUNCTION(execGetStringOfEpicAccountID); \
	DECLARE_FUNCTION(execGetStringOfLocalAccountID); \
	DECLARE_FUNCTION(execGetStringOfProductUserID); \
	DECLARE_FUNCTION(execGetUserType); \
	DECLARE_FUNCTION(execSetIDs); \
	DECLARE_FUNCTION(execSetIDsWithAuth); \
	DECLARE_FUNCTION(execSetIDsWithInst);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEOSAuth); \
	DECLARE_FUNCTION(execGetStringOfEpicAccountID); \
	DECLARE_FUNCTION(execGetStringOfLocalAccountID); \
	DECLARE_FUNCTION(execGetStringOfProductUserID); \
	DECLARE_FUNCTION(execGetUserType); \
	DECLARE_FUNCTION(execSetIDs); \
	DECLARE_FUNCTION(execSetIDsWithAuth); \
	DECLARE_FUNCTION(execSetIDsWithInst);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSIDs(); \
	friend struct Z_Construct_UClass_UEOSIDs_Statics; \
public: \
	DECLARE_CLASS(UEOSIDs, UEOSInstanceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSIDs)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSIDs(); \
	friend struct Z_Construct_UClass_UEOSIDs_Statics; \
public: \
	DECLARE_CLASS(UEOSIDs, UEOSInstanceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSIDs)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSIDs(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSIDs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSIDs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSIDs(UEOSIDs&&); \
	NO_API UEOSIDs(const UEOSIDs&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSIDs(UEOSIDs&&); \
	NO_API UEOSIDs(const UEOSIDs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSIDs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSIDs); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSIDs)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcAuth() { return STRUCT_OFFSET(UEOSIDs, m_pcAuth); } \
	FORCEINLINE static uint32 __PPO__m_pcRefAuth() { return STRUCT_OFFSET(UEOSIDs, m_pcRefAuth); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSIDs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSIDs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
