// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSPlatformNetworkData;
enum class EELApplicationStatus : uint8;
enum class EELNetworkConnectionStatus : uint8;
enum class EELServerType : uint8;
enum class EELNetworkStatus : uint8;
enum class EELNetworkType : uint8;
enum class eSSRequestResultType : uint8;
enum class ESSOnlineErrorType : uint8;
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
#ifdef ABP_200508_ELSSOnlineError_generated_h
#error "ELSSOnlineError.generated.h already included, missing '#pragma once' in ELSSOnlineError.h"
#endif
#define ABP_200508_ELSSOnlineError_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddErrDialogData); \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execClearReservedDialog); \
	DECLARE_FUNCTION(execEndErrDialogData); \
	DECLARE_FUNCTION(execErrorProcessEnd); \
	DECLARE_FUNCTION(execFilteringNetworkError); \
	DECLARE_FUNCTION(execGetAllNetworkErrorText); \
	DECLARE_FUNCTION(execGetErrDialogData); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsErrorProcessStop); \
	DECLARE_FUNCTION(execIsNetworkErrorEnable); \
	DECLARE_FUNCTION(execIsReservedDialog); \
	DECLARE_FUNCTION(execNetworkConnectionStatusChange); \
	DECLARE_FUNCTION(execNetworkErrorReset); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOpenReservedDialog); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execReserveErrorDialog); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetDialogReserveMode); \
	DECLARE_FUNCTION(execSSMode_RequestResult); \
	DECLARE_FUNCTION(execStartErrorCorrespond); \
	DECLARE_FUNCTION(execStartErrorEvent); \
	DECLARE_FUNCTION(execStartPlatformErrorEvent); \
	DECLARE_FUNCTION(execStartUniqueErrorEvent); \
	DECLARE_FUNCTION(execStartup); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execYGS2API_RequestResult);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddErrDialogData); \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execClearReservedDialog); \
	DECLARE_FUNCTION(execEndErrDialogData); \
	DECLARE_FUNCTION(execErrorProcessEnd); \
	DECLARE_FUNCTION(execFilteringNetworkError); \
	DECLARE_FUNCTION(execGetAllNetworkErrorText); \
	DECLARE_FUNCTION(execGetErrDialogData); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsErrorProcessStop); \
	DECLARE_FUNCTION(execIsNetworkErrorEnable); \
	DECLARE_FUNCTION(execIsReservedDialog); \
	DECLARE_FUNCTION(execNetworkConnectionStatusChange); \
	DECLARE_FUNCTION(execNetworkErrorReset); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOpenReservedDialog); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execReserveErrorDialog); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetDialogReserveMode); \
	DECLARE_FUNCTION(execSSMode_RequestResult); \
	DECLARE_FUNCTION(execStartErrorCorrespond); \
	DECLARE_FUNCTION(execStartErrorEvent); \
	DECLARE_FUNCTION(execStartPlatformErrorEvent); \
	DECLARE_FUNCTION(execStartUniqueErrorEvent); \
	DECLARE_FUNCTION(execStartup); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execYGS2API_RequestResult);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSOnlineError(); \
	friend struct Z_Construct_UClass_UELSSOnlineError_Statics; \
public: \
	DECLARE_CLASS(UELSSOnlineError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSOnlineError)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUELSSOnlineError(); \
	friend struct Z_Construct_UClass_UELSSOnlineError_Statics; \
public: \
	DECLARE_CLASS(UELSSOnlineError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSOnlineError)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSOnlineError(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSOnlineError) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSOnlineError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSOnlineError); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSOnlineError(UELSSOnlineError&&); \
	NO_API UELSSOnlineError(const UELSSOnlineError&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSOnlineError(UELSSOnlineError&&); \
	NO_API UELSSOnlineError(const UELSSOnlineError&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSOnlineError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSOnlineError); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSOnlineError)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_20_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSOnlineError>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineError_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
