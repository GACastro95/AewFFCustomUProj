// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEOSUserContentsBase;
enum class EExternalAccountType : uint8;
enum class EEOSNatP2PConnectionStatus : uint8;
struct FEOSUserInfoAPIVersionSettings;
#ifdef YEOSSDK_EOSUserBase_generated_h
#error "EOSUserBase.generated.h already included, missing '#pragma once' in EOSUserBase.h"
#endif
#define YEOSSDK_EOSUserBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckSendPacket); \
	DECLARE_FUNCTION(execFindCustomData); \
	DECLARE_FUNCTION(execGetAccountDisplayName); \
	DECLARE_FUNCTION(execGetEOSUserContent); \
	DECLARE_FUNCTION(execGetEpicAccountDisplayName); \
	DECLARE_FUNCTION(execGetExternalAccountId); \
	DECLARE_FUNCTION(execGetExternalDisplayName); \
	DECLARE_FUNCTION(execGetExternalPlatformType); \
	DECLARE_FUNCTION(execGetP2PConnectionState); \
	DECLARE_FUNCTION(execHasExternalDisplayName); \
	DECLARE_FUNCTION(execIsSameExternalPlatformType); \
	DECLARE_FUNCTION(execRequestGetInfo); \
	DECLARE_FUNCTION(execSetAccountDisplayName); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetCustomData); \
	DECLARE_FUNCTION(execSetExternalAccountId); \
	DECLARE_FUNCTION(execSetExternalDisplayName); \
	DECLARE_FUNCTION(execSetExternalPlatformType);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckSendPacket); \
	DECLARE_FUNCTION(execFindCustomData); \
	DECLARE_FUNCTION(execGetAccountDisplayName); \
	DECLARE_FUNCTION(execGetEOSUserContent); \
	DECLARE_FUNCTION(execGetEpicAccountDisplayName); \
	DECLARE_FUNCTION(execGetExternalAccountId); \
	DECLARE_FUNCTION(execGetExternalDisplayName); \
	DECLARE_FUNCTION(execGetExternalPlatformType); \
	DECLARE_FUNCTION(execGetP2PConnectionState); \
	DECLARE_FUNCTION(execHasExternalDisplayName); \
	DECLARE_FUNCTION(execIsSameExternalPlatformType); \
	DECLARE_FUNCTION(execRequestGetInfo); \
	DECLARE_FUNCTION(execSetAccountDisplayName); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetCustomData); \
	DECLARE_FUNCTION(execSetExternalAccountId); \
	DECLARE_FUNCTION(execSetExternalDisplayName); \
	DECLARE_FUNCTION(execSetExternalPlatformType);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSUserBase(); \
	friend struct Z_Construct_UClass_UEOSUserBase_Statics; \
public: \
	DECLARE_CLASS(UEOSUserBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSUserBase(); \
	friend struct Z_Construct_UClass_UEOSUserBase_Statics; \
public: \
	DECLARE_CLASS(UEOSUserBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSUserBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSUserBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserBase(UEOSUserBase&&); \
	NO_API UEOSUserBase(const UEOSUserBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserBase(UEOSUserBase&&); \
	NO_API UEOSUserBase(const UEOSUserBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSUserBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strDisplayName() { return STRUCT_OFFSET(UEOSUserBase, m_strDisplayName); } \
	FORCEINLINE static uint32 __PPO__m_strExternalAccountId() { return STRUCT_OFFSET(UEOSUserBase, m_strExternalAccountId); } \
	FORCEINLINE static uint32 __PPO__m_strExternalDisplayName() { return STRUCT_OFFSET(UEOSUserBase, m_strExternalDisplayName); } \
	FORCEINLINE static uint32 __PPO__m_sExternalPlatformType() { return STRUCT_OFFSET(UEOSUserBase, m_sExternalPlatformType); } \
	FORCEINLINE static uint32 __PPO__m_pcContents() { return STRUCT_OFFSET(UEOSUserBase, m_pcContents); } \
	FORCEINLINE static uint32 __PPO__m_cCustomData() { return STRUCT_OFFSET(UEOSUserBase, m_cCustomData); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSUserBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
