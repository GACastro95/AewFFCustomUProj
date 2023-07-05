// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSSessionP2PAFGameFlowStep : uint8;
class IEOSSessionP2PAFGameFlowCallbackInterface;
#ifdef YEOSSDK_EOSSessionP2PAFGameFlowManager_generated_h
#error "EOSSessionP2PAFGameFlowManager.generated.h already included, missing '#pragma once' in EOSSessionP2PAFGameFlowManager.h"
#endif
#define YEOSSDK_EOSSessionP2PAFGameFlowManager_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangedGameFlowStepForAllPlayers); \
	DECLARE_FUNCTION(execGetGameFlowStep); \
	DECLARE_FUNCTION(execInitGameFlow); \
	DECLARE_FUNCTION(execIsPossibleChangeGameFlowStepForAllPlayers); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRegistGameFlowCallbackInterface); \
	DECLARE_FUNCTION(execRequestChangeGameFlow); \
	DECLARE_FUNCTION(execUnregistGameFlowCallbackInterface);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangedGameFlowStepForAllPlayers); \
	DECLARE_FUNCTION(execGetGameFlowStep); \
	DECLARE_FUNCTION(execInitGameFlow); \
	DECLARE_FUNCTION(execIsPossibleChangeGameFlowStepForAllPlayers); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRegistGameFlowCallbackInterface); \
	DECLARE_FUNCTION(execRequestChangeGameFlow); \
	DECLARE_FUNCTION(execUnregistGameFlowCallbackInterface);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PAFGameFlowManager(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PAFGameFlowManager, UEOSSessionP2PAdditionalFunctionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PAFGameFlowManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PAFGameFlowManager(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PAFGameFlowManager, UEOSSessionP2PAdditionalFunctionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PAFGameFlowManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PAFGameFlowManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PAFGameFlowManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFGameFlowManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFGameFlowManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFGameFlowManager(UEOSSessionP2PAFGameFlowManager&&); \
	NO_API UEOSSessionP2PAFGameFlowManager(const UEOSSessionP2PAFGameFlowManager&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFGameFlowManager(UEOSSessionP2PAFGameFlowManager&&); \
	NO_API UEOSSessionP2PAFGameFlowManager(const UEOSSessionP2PAFGameFlowManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFGameFlowManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFGameFlowManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionP2PAFGameFlowManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cGameFlowCallbacks() { return STRUCT_OFFSET(UEOSSessionP2PAFGameFlowManager, m_cGameFlowCallbacks); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PAFGameFlowManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
