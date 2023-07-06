// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSNatP2PContentPacket;
class UEOSUserContentBinary;
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
class UEOSNatP2PBinary;
#ifdef YEOSSDK_EOSNatP2PContentPacket_generated_h
#error "EOSNatP2PContentPacket.generated.h already included, missing '#pragma once' in EOSNatP2PContentPacket.h"
#endif
#define YEOSSDK_EOSNatP2PContentPacket_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateContentPacket); \
	DECLARE_FUNCTION(execCreateContentPacketWithNatP2PCachedTransfer); \
	DECLARE_FUNCTION(execCreateContentPacketWithUserAndNatP2PCachedTransfer); \
	DECLARE_FUNCTION(execCreateUserContentBinary); \
	DECLARE_FUNCTION(execSetContentBinary);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateContentPacket); \
	DECLARE_FUNCTION(execCreateContentPacketWithNatP2PCachedTransfer); \
	DECLARE_FUNCTION(execCreateContentPacketWithUserAndNatP2PCachedTransfer); \
	DECLARE_FUNCTION(execCreateUserContentBinary); \
	DECLARE_FUNCTION(execSetContentBinary);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSNatP2PContentPacket(); \
	friend struct Z_Construct_UClass_UEOSNatP2PContentPacket_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PContentPacket, UEOSNatP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PContentPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEOSNatP2PContentPacket(); \
	friend struct Z_Construct_UClass_UEOSNatP2PContentPacket_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PContentPacket, UEOSNatP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PContentPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSNatP2PContentPacket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSNatP2PContentPacket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PContentPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PContentPacket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PContentPacket(UEOSNatP2PContentPacket&&); \
	NO_API UEOSNatP2PContentPacket(const UEOSNatP2PContentPacket&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PContentPacket(UEOSNatP2PContentPacket&&); \
	NO_API UEOSNatP2PContentPacket(const UEOSNatP2PContentPacket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PContentPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PContentPacket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSNatP2PContentPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcBinary() { return STRUCT_OFFSET(UEOSNatP2PContentPacket, m_pcBinary); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_12_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSNatP2PContentPacket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PContentPacket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS