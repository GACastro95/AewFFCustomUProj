// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
struct FSSServerEndpoint;
struct FSSModeServerParam;
struct FYGS2ClientSetupParam;
#ifdef ABP_200508_ELGameServerSelector_generated_h
#error "ELGameServerSelector.generated.h already included, missing '#pragma once' in ELGameServerSelector.h"
#endif
#define ABP_200508_ELGameServerSelector_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetServerId); \
	DECLARE_FUNCTION(execGetServerNum); \
	DECLARE_FUNCTION(execOnYGS2Response); \
	DECLARE_FUNCTION(execOverrideSSModeEndpointParam); \
	DECLARE_FUNCTION(execOverrideSSModeServerEnvData); \
	DECLARE_FUNCTION(execOverrideYGS2ClientSetupParam); \
	DECLARE_FUNCTION(execRequestCheckServer); \
	DECLARE_FUNCTION(execSetupServers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetServerId); \
	DECLARE_FUNCTION(execGetServerNum); \
	DECLARE_FUNCTION(execOnYGS2Response); \
	DECLARE_FUNCTION(execOverrideSSModeEndpointParam); \
	DECLARE_FUNCTION(execOverrideSSModeServerEnvData); \
	DECLARE_FUNCTION(execOverrideYGS2ClientSetupParam); \
	DECLARE_FUNCTION(execRequestCheckServer); \
	DECLARE_FUNCTION(execSetupServers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGameServerSelector(); \
	friend struct Z_Construct_UClass_UELGameServerSelector_Statics; \
public: \
	DECLARE_CLASS(UELGameServerSelector, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameServerSelector) \
	static const TCHAR* StaticConfigName() {return TEXT("OnlineServer");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELGameServerSelector(); \
	friend struct Z_Construct_UClass_UELGameServerSelector_Statics; \
public: \
	DECLARE_CLASS(UELGameServerSelector, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameServerSelector) \
	static const TCHAR* StaticConfigName() {return TEXT("OnlineServer");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGameServerSelector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGameServerSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameServerSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameServerSelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameServerSelector(UELGameServerSelector&&); \
	NO_API UELGameServerSelector(const UELGameServerSelector&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameServerSelector(UELGameServerSelector&&); \
	NO_API UELGameServerSelector(const UELGameServerSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameServerSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameServerSelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGameServerSelector)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGameServerSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameServerSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
