// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYGS2RequestBase;
enum class EYGS2Api : uint8;
enum class EYGS2ErrorType : uint8;
 
class UObject;
enum class EYGS2RequestOptionType : uint8;
struct FYGS2ClientSetupParam;
#ifdef YGS2CLIENT_YGS2RequestBase_generated_h
#error "YGS2RequestBase.generated.h already included, missing '#pragma once' in YGS2RequestBase.h"
#endif
#define YGS2CLIENT_YGS2RequestBase_generated_h

#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRef); \
	DECLARE_FUNCTION(execClearYGS2AuthCache); \
	DECLARE_FUNCTION(execCreateYGS2Request); \
	DECLARE_FUNCTION(execGetErrorString); \
	DECLARE_FUNCTION(execGetErrorType); \
	DECLARE_FUNCTION(execGetListTotalNum); \
	DECLARE_FUNCTION(execGetRequestApi); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execIsAuthorizedUser); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsCanceled); \
	DECLARE_FUNCTION(execIsEnableClientParam); \
	DECLARE_FUNCTION(execIsRef); \
	DECLARE_FUNCTION(execIsSuccess); \
	DECLARE_FUNCTION(execOnBeginCreate); \
	DECLARE_FUNCTION(execOnBeginDelete); \
	DECLARE_FUNCTION(execOnBeginRead); \
	DECLARE_FUNCTION(execOnBeginUpdate); \
	DECLARE_FUNCTION(execOnEndCreate); \
	DECLARE_FUNCTION(execOnEndDelete); \
	DECLARE_FUNCTION(execOnEndRead); \
	DECLARE_FUNCTION(execOnEndUpdate); \
	DECLARE_FUNCTION(execRemRef); \
	DECLARE_FUNCTION(execRequest); \
	DECLARE_FUNCTION(execRequestCreate); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestRead); \
	DECLARE_FUNCTION(execRequestUpdate); \
	DECLARE_FUNCTION(execRequestWithArgs); \
	DECLARE_FUNCTION(execSetDisableSession); \
	DECLARE_FUNCTION(execSetMaxRetry); \
	DECLARE_FUNCTION(execSetOption); \
	DECLARE_FUNCTION(execSetOptionalURLArgument); \
	DECLARE_FUNCTION(execSetSSDebugForceError); \
	DECLARE_FUNCTION(execSetTimeout); \
	DECLARE_FUNCTION(execSetUserData); \
	DECLARE_FUNCTION(execSetYGS2AppAuthKey); \
	DECLARE_FUNCTION(execSetYGS2ClientSetupParam); \
	DECLARE_FUNCTION(execSetYGS2EOSIDs); \
	DECLARE_FUNCTION(execSetYGS2UserAuthKey); \
	DECLARE_FUNCTION(execYGS2GenIDForDebug);


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRef); \
	DECLARE_FUNCTION(execClearYGS2AuthCache); \
	DECLARE_FUNCTION(execCreateYGS2Request); \
	DECLARE_FUNCTION(execGetErrorString); \
	DECLARE_FUNCTION(execGetErrorType); \
	DECLARE_FUNCTION(execGetListTotalNum); \
	DECLARE_FUNCTION(execGetRequestApi); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execIsAuthorizedUser); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsCanceled); \
	DECLARE_FUNCTION(execIsEnableClientParam); \
	DECLARE_FUNCTION(execIsRef); \
	DECLARE_FUNCTION(execIsSuccess); \
	DECLARE_FUNCTION(execOnBeginCreate); \
	DECLARE_FUNCTION(execOnBeginDelete); \
	DECLARE_FUNCTION(execOnBeginRead); \
	DECLARE_FUNCTION(execOnBeginUpdate); \
	DECLARE_FUNCTION(execOnEndCreate); \
	DECLARE_FUNCTION(execOnEndDelete); \
	DECLARE_FUNCTION(execOnEndRead); \
	DECLARE_FUNCTION(execOnEndUpdate); \
	DECLARE_FUNCTION(execRemRef); \
	DECLARE_FUNCTION(execRequest); \
	DECLARE_FUNCTION(execRequestCreate); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestRead); \
	DECLARE_FUNCTION(execRequestUpdate); \
	DECLARE_FUNCTION(execRequestWithArgs); \
	DECLARE_FUNCTION(execSetDisableSession); \
	DECLARE_FUNCTION(execSetMaxRetry); \
	DECLARE_FUNCTION(execSetOption); \
	DECLARE_FUNCTION(execSetOptionalURLArgument); \
	DECLARE_FUNCTION(execSetSSDebugForceError); \
	DECLARE_FUNCTION(execSetTimeout); \
	DECLARE_FUNCTION(execSetUserData); \
	DECLARE_FUNCTION(execSetYGS2AppAuthKey); \
	DECLARE_FUNCTION(execSetYGS2ClientSetupParam); \
	DECLARE_FUNCTION(execSetYGS2EOSIDs); \
	DECLARE_FUNCTION(execSetYGS2UserAuthKey); \
	DECLARE_FUNCTION(execYGS2GenIDForDebug);


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYGS2RequestBase(); \
	friend struct Z_Construct_UClass_UYGS2RequestBase_Statics; \
public: \
	DECLARE_CLASS(UYGS2RequestBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yGS2Client"), NO_API) \
	DECLARE_SERIALIZER(UYGS2RequestBase)


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUYGS2RequestBase(); \
	friend struct Z_Construct_UClass_UYGS2RequestBase_Statics; \
public: \
	DECLARE_CLASS(UYGS2RequestBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yGS2Client"), NO_API) \
	DECLARE_SERIALIZER(UYGS2RequestBase)


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYGS2RequestBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYGS2RequestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2RequestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2RequestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2RequestBase(UYGS2RequestBase&&); \
	NO_API UYGS2RequestBase(const UYGS2RequestBase&); \
public:


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYGS2RequestBase(UYGS2RequestBase&&); \
	NO_API UYGS2RequestBase(const UYGS2RequestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYGS2RequestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYGS2RequestBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYGS2RequestBase)


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_15_PROLOG
#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_INCLASS \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YGS2CLIENT_API UClass* StaticClass<class UYGS2RequestBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_YGS2RequestBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
