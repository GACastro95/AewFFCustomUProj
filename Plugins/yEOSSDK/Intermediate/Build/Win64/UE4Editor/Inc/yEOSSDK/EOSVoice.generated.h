// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSVoiceDeviceInfo;
struct FEOSVoiceAPIVersionSettings;
#ifdef YEOSSDK_EOSVoice_generated_h
#error "EOSVoice.generated.h already included, missing '#pragma once' in EOSVoice.h"
#endif
#define YEOSSDK_EOSVoice_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputDeviceId); \
	DECLARE_FUNCTION(execGetInputDeviceList); \
	DECLARE_FUNCTION(execGetInputVolume); \
	DECLARE_FUNCTION(execGetOutputDeviceId); \
	DECLARE_FUNCTION(execGetOutputDeviceList); \
	DECLARE_FUNCTION(execGetOutputVolume); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetInputDeviceId); \
	DECLARE_FUNCTION(execSetInputVolume); \
	DECLARE_FUNCTION(execSetOutputDeviceId); \
	DECLARE_FUNCTION(execSetOutputVolume);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputDeviceId); \
	DECLARE_FUNCTION(execGetInputDeviceList); \
	DECLARE_FUNCTION(execGetInputVolume); \
	DECLARE_FUNCTION(execGetOutputDeviceId); \
	DECLARE_FUNCTION(execGetOutputDeviceList); \
	DECLARE_FUNCTION(execGetOutputVolume); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetInputDeviceId); \
	DECLARE_FUNCTION(execSetInputVolume); \
	DECLARE_FUNCTION(execSetOutputDeviceId); \
	DECLARE_FUNCTION(execSetOutputVolume);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSVoice(); \
	friend struct Z_Construct_UClass_UEOSVoice_Statics; \
public: \
	DECLARE_CLASS(UEOSVoice, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSVoice)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEOSVoice(); \
	friend struct Z_Construct_UClass_UEOSVoice_Statics; \
public: \
	DECLARE_CLASS(UEOSVoice, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSVoice)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSVoice(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSVoice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSVoice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSVoice(UEOSVoice&&); \
	NO_API UEOSVoice(const UEOSVoice&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSVoice(UEOSVoice&&); \
	NO_API UEOSVoice(const UEOSVoice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSVoice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSVoice)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strServiceUserId() { return STRUCT_OFFSET(UEOSVoice, m_strServiceUserId); } \
	FORCEINLINE static uint32 __PPO__m_strInputDeviceId() { return STRUCT_OFFSET(UEOSVoice, m_strInputDeviceId); } \
	FORCEINLINE static uint32 __PPO__m_strOutputDeviceId() { return STRUCT_OFFSET(UEOSVoice, m_strOutputDeviceId); } \
	FORCEINLINE static uint32 __PPO__m_fInputVolume() { return STRUCT_OFFSET(UEOSVoice, m_fInputVolume); } \
	FORCEINLINE static uint32 __PPO__m_fOutputVolume() { return STRUCT_OFFSET(UEOSVoice, m_fOutputVolume); } \
	FORCEINLINE static uint32 __PPO__m_sUserIndex() { return STRUCT_OFFSET(UEOSVoice, m_sUserIndex); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_9_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSVoice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
