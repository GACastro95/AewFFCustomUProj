// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FYGS2SSMasterData;
#ifdef ABP_200508_ELSSMasterDataLoaderForBotClient_generated_h
#error "ELSSMasterDataLoaderForBotClient.generated.h already included, missing '#pragma once' in ELSSMasterDataLoaderForBotClient.h"
#endif
#define ABP_200508_ELSSMasterDataLoaderForBotClient_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestGetSSMasterData); \
	DECLARE_FUNCTION(execSetVersionInfo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestGetSSMasterData); \
	DECLARE_FUNCTION(execSetVersionInfo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_EVENT_PARMS \
	struct ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms \
	{ \
		bool inExistsData; \
		FYGS2SSMasterData inResponseData; \
	}; \
	struct ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms \
	{ \
		bool inExistsData; \
		FYGS2SSMasterData inResponseData; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSMasterDataLoaderForBotClient(); \
	friend struct Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics; \
public: \
	DECLARE_CLASS(AELSSMasterDataLoaderForBotClient, AELSSMasterDataLoader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSMasterDataLoaderForBotClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELSSMasterDataLoaderForBotClient(); \
	friend struct Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics; \
public: \
	DECLARE_CLASS(AELSSMasterDataLoaderForBotClient, AELSSMasterDataLoader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSMasterDataLoaderForBotClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSMasterDataLoaderForBotClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSMasterDataLoaderForBotClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSMasterDataLoaderForBotClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSMasterDataLoaderForBotClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSMasterDataLoaderForBotClient(AELSSMasterDataLoaderForBotClient&&); \
	NO_API AELSSMasterDataLoaderForBotClient(const AELSSMasterDataLoaderForBotClient&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSMasterDataLoaderForBotClient(AELSSMasterDataLoaderForBotClient&&); \
	NO_API AELSSMasterDataLoaderForBotClient(const AELSSMasterDataLoaderForBotClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSMasterDataLoaderForBotClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSMasterDataLoaderForBotClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSMasterDataLoaderForBotClient)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxRetryCount() { return STRUCT_OFFSET(AELSSMasterDataLoaderForBotClient, MaxRetryCount); } \
	FORCEINLINE static uint32 __PPO__DataVersion() { return STRUCT_OFFSET(AELSSMasterDataLoaderForBotClient, DataVersion); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSMasterDataLoaderForBotClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSMasterDataLoaderForBotClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
