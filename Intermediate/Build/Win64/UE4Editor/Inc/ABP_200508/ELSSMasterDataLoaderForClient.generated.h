// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYGS2RequestBase;
struct FRequest_ErrSetupData;
enum class EYGS2ErrorType : uint8;
#ifdef ABP_200508_ELSSMasterDataLoaderForClient_generated_h
#error "ELSSMasterDataLoaderForClient.generated.h already included, missing '#pragma once' in ELSSMasterDataLoaderForClient.h"
#endif
#define ABP_200508_ELSSMasterDataLoaderForClient_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataVersionFromResponse); \
	DECLARE_FUNCTION(execGetDataVersionFromYGS2Response); \
	DECLARE_FUNCTION(execImportMasterDataFromResponse); \
	DECLARE_FUNCTION(execImportMasterDataFromYGS2Response); \
	DECLARE_FUNCTION(execOnErrorResponse_GetSSMasterData); \
	DECLARE_FUNCTION(execOnErrorResponse_GetSSMasterDataVersion); \
	DECLARE_FUNCTION(execRequest_GetSSMasterData); \
	DECLARE_FUNCTION(execRequest_GetSSMasterDataVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataVersionFromResponse); \
	DECLARE_FUNCTION(execGetDataVersionFromYGS2Response); \
	DECLARE_FUNCTION(execImportMasterDataFromResponse); \
	DECLARE_FUNCTION(execImportMasterDataFromYGS2Response); \
	DECLARE_FUNCTION(execOnErrorResponse_GetSSMasterData); \
	DECLARE_FUNCTION(execOnErrorResponse_GetSSMasterDataVersion); \
	DECLARE_FUNCTION(execRequest_GetSSMasterData); \
	DECLARE_FUNCTION(execRequest_GetSSMasterDataVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_EVENT_PARMS \
	struct ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms \
	{ \
		bool inSuccess; \
		UYGS2RequestBase* inRequest; \
	}; \
	struct ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterData_Parms \
	{ \
		EYGS2ErrorType inYGS2ErrorType; \
		UYGS2RequestBase* inRequest; \
	}; \
	struct ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterDataVersion_Parms \
	{ \
		EYGS2ErrorType inYGS2ErrorType; \
		UYGS2RequestBase* inRequest; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSMasterDataLoaderForClient(); \
	friend struct Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics; \
public: \
	DECLARE_CLASS(AELSSMasterDataLoaderForClient, AELSSMasterDataLoader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSMasterDataLoaderForClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSMasterDataLoaderForClient(); \
	friend struct Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics; \
public: \
	DECLARE_CLASS(AELSSMasterDataLoaderForClient, AELSSMasterDataLoader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSMasterDataLoaderForClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSMasterDataLoaderForClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSMasterDataLoaderForClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSMasterDataLoaderForClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSMasterDataLoaderForClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSMasterDataLoaderForClient(AELSSMasterDataLoaderForClient&&); \
	NO_API AELSSMasterDataLoaderForClient(const AELSSMasterDataLoaderForClient&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSMasterDataLoaderForClient(AELSSMasterDataLoaderForClient&&); \
	NO_API AELSSMasterDataLoaderForClient(const AELSSMasterDataLoaderForClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSMasterDataLoaderForClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSMasterDataLoaderForClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSMasterDataLoaderForClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSMasterDataLoaderForClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
