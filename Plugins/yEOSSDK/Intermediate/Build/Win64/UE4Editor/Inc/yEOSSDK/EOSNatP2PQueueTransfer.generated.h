// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSNatP2PPacketBase;
enum class EEOSPacketReliability : uint8;
#ifdef YEOSSDK_EOSNatP2PQueueTransfer_generated_h
#error "EOSNatP2PQueueTransfer.generated.h already included, missing '#pragma once' in EOSNatP2PQueueTransfer.h"
#endif
#define YEOSSDK_EOSNatP2PQueueTransfer_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToSendPacketQueue);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToSendPacketQueue);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSNatP2PQueueTransfer(); \
	friend struct Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PQueueTransfer, UEOSNatP2PCachedTransfer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PQueueTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSNatP2PQueueTransfer(); \
	friend struct Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2PQueueTransfer, UEOSNatP2PCachedTransfer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2PQueueTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSNatP2PQueueTransfer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSNatP2PQueueTransfer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PQueueTransfer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PQueueTransfer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PQueueTransfer(UEOSNatP2PQueueTransfer&&); \
	NO_API UEOSNatP2PQueueTransfer(const UEOSNatP2PQueueTransfer&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2PQueueTransfer(UEOSNatP2PQueueTransfer&&); \
	NO_API UEOSNatP2PQueueTransfer(const UEOSNatP2PQueueTransfer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2PQueueTransfer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2PQueueTransfer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSNatP2PQueueTransfer)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcPacketQueue() { return STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_pcPacketQueue); } \
	FORCEINLINE static uint32 __PPO__m_bSendPacketFromQueueOnUpdate() { return STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_bSendPacketFromQueueOnUpdate); } \
	FORCEINLINE static uint32 __PPO__m_sSendPacketNumMaxPerTick() { return STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_sSendPacketNumMaxPerTick); } \
	FORCEINLINE static uint32 __PPO__m_sSendPacketSizeMaxPerTick() { return STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_sSendPacketSizeMaxPerTick); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSNatP2PQueueTransfer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PQueueTransfer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS