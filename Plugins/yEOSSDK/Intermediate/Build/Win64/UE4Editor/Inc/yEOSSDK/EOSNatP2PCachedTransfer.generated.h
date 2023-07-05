// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class UEOSNatP2PBinary;
enum class EEOSPacketReliability : uint8;
class UEOSUserContentBinary;
class UEOSNatP2PPacketBase;
class UEOSNatP2P;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
#ifdef YEOSSDK_EOSNatP2PCachedTransfer_generated_h
#error "EOSNatP2PCachedTransfer.generated.h already included, missing '#pragma once' in EOSNatP2PCachedTransfer.h"
#endif
#define YEOSSDK_EOSNatP2PCachedTransfer_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddUser); \
	DECLARE_FUNCTION(execClearPacketQueue); \
	DECLARE_FUNCTION(execContainsUser); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetStringOfOwnerProductUserID); \
	DECLARE_FUNCTION(execIsSameSocketID); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execRemoveAllUsers); \
	DECLARE_FUNCTION(execRemoveUser); \
	DECLARE_FUNCTION(execSendArray); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendContentBinary); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUsers); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddUser); \
	DECLARE_FUNCTION(execClearPacketQueue); \
	DECLARE_FUNCTION(execContainsUser); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetStringOfOwnerProductUserID); \
	DECLARE_FUNCTION(execIsSameSocketID); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execRemoveAllUsers); \
	DECLARE_FUNCTION(execRemoveUser); \
	DECLARE_FUNCTION(execSendArray); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendContentBinary); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUsers); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSNatP2PCachedTransfer(); \
	friend struct Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PCachedTransfer, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PCachedTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEOSNatP2PCachedTransfer(); \
	friend struct Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PCachedTransfer, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PCachedTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSNatP2PCachedTransfer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSNatP2PCachedTransfer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PCachedTransfer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PCachedTransfer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PCachedTransfer(UEOSNatP2PCachedTransfer&&); \
	NO_API UEOSNatP2PCachedTransfer(const UEOSNatP2PCachedTransfer&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PCachedTransfer(UEOSNatP2PCachedTransfer&&); \
	NO_API UEOSNatP2PCachedTransfer(const UEOSNatP2PCachedTransfer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PCachedTransfer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PCachedTransfer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSNatP2PCachedTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cUsers() { return STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_cUsers); } \
	FORCEINLINE static uint32 __PPO__m_pcReceiveBuffer() { return STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcReceiveBuffer); } \
	FORCEINLINE static uint32 __PPO__m_pcNatP2P() { return STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcNatP2P); } \
	FORCEINLINE static uint32 __PPO__m_pcCommnuityBase() { return STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcCommnuityBase); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_18_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSNatP2PCachedTransfer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PCachedTransfer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
