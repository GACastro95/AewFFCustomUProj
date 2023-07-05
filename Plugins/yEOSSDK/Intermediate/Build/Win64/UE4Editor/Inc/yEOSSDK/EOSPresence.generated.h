// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UEOSCommunityInfoBase;
enum class EEOSPresenceStatus : uint8;
#ifdef YEOSSDK_EOSPresence_generated_h
#error "EOSPresence.generated.h already included, missing '#pragma once' in EOSPresence.h"
#endif
#define YEOSSDK_EOSPresence_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestDeleteData); \
	DECLARE_FUNCTION(execRequestSetData); \
	DECLARE_FUNCTION(execRequestSetPresence); \
	DECLARE_FUNCTION(execRequestSetSession); \
	DECLARE_FUNCTION(execRequestSetStatus);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestDeleteData); \
	DECLARE_FUNCTION(execRequestSetData); \
	DECLARE_FUNCTION(execRequestSetPresence); \
	DECLARE_FUNCTION(execRequestSetSession); \
	DECLARE_FUNCTION(execRequestSetStatus);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSPresence(); \
	friend struct Z_Construct_UClass_UEOSPresence_Statics; \
public: \
	DECLARE_CLASS(UEOSPresence, UEOSPresenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSPresence)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSPresence(); \
	friend struct Z_Construct_UClass_UEOSPresence_Statics; \
public: \
	DECLARE_CLASS(UEOSPresence, UEOSPresenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSPresence)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSPresence(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSPresence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSPresence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSPresence(UEOSPresence&&); \
	NO_API UEOSPresence(const UEOSPresence&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSPresence(UEOSPresence&&); \
	NO_API UEOSPresence(const UEOSPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSPresence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSPresence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSPresence)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
