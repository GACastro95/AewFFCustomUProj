// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
enum class EEOSPacketReliability : uint8;
class UEOSNatP2PCachedTransfer;
#ifdef YEOSSDK_EOSNatP2PPacketBase_generated_h
#error "EOSNatP2PPacketBase.generated.h already included, missing '#pragma once' in EOSNatP2PPacketBase.h"
#endif
#define YEOSSDK_EOSNatP2PPacketBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetUserBase); \
	DECLARE_FUNCTION(execIsNoTarget); \
	DECLARE_FUNCTION(execIsSameSocketID); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execSendAllUser); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupByCachedTransfer);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetUserBase); \
	DECLARE_FUNCTION(execIsNoTarget); \
	DECLARE_FUNCTION(execIsSameSocketID); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execSendAllUser); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetupByCachedTransfer);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSNatP2PPacketBase(); \
	friend struct Z_Construct_UClass_UEOSNatP2PPacketBase_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PPacketBase, UEOSNatP2PBinary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSNatP2PPacketBase(); \
	friend struct Z_Construct_UClass_UEOSNatP2PPacketBase_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PPacketBase, UEOSNatP2PBinary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSNatP2PPacketBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSNatP2PPacketBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PPacketBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PPacketBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PPacketBase(UEOSNatP2PPacketBase&&); \
	NO_API UEOSNatP2PPacketBase(const UEOSNatP2PPacketBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PPacketBase(UEOSNatP2PPacketBase&&); \
	NO_API UEOSNatP2PPacketBase(const UEOSNatP2PPacketBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PPacketBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PPacketBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSNatP2PPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcUserBase() { return STRUCT_OFFSET(UEOSNatP2PPacketBase, m_pcUserBase); } \
	FORCEINLINE static uint32 __PPO__m_pcCachedTransfer() { return STRUCT_OFFSET(UEOSNatP2PPacketBase, m_pcCachedTransfer); } \
	FORCEINLINE static uint32 __PPO__m_Reliability() { return STRUCT_OFFSET(UEOSNatP2PPacketBase, m_Reliability); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSNatP2PPacketBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PPacketBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
