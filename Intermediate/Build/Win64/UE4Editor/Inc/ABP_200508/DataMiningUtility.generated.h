// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FCareerPlayData;
struct FMatchPlayData;
struct FMiniGamePlayData;
#ifdef ABP_200508_DataMiningUtility_generated_h
#error "DataMiningUtility.generated.h already included, missing '#pragma once' in DataMiningUtility.h"
#endif
#define ABP_200508_DataMiningUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendCareerPlayData); \
	DECLARE_FUNCTION(execSendMatchPlayData); \
	DECLARE_FUNCTION(execSendMiniGamePlayData); \
	DECLARE_FUNCTION(execWriteCareerPlayData); \
	DECLARE_FUNCTION(execWriteMatchPlayData); \
	DECLARE_FUNCTION(execWriteMiniGamePlayData);


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendCareerPlayData); \
	DECLARE_FUNCTION(execSendMatchPlayData); \
	DECLARE_FUNCTION(execSendMiniGamePlayData); \
	DECLARE_FUNCTION(execWriteCareerPlayData); \
	DECLARE_FUNCTION(execWriteMatchPlayData); \
	DECLARE_FUNCTION(execWriteMiniGamePlayData);


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataMiningUtility(); \
	friend struct Z_Construct_UClass_UDataMiningUtility_Statics; \
public: \
	DECLARE_CLASS(UDataMiningUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UDataMiningUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDataMiningUtility(); \
	friend struct Z_Construct_UClass_UDataMiningUtility_Statics; \
public: \
	DECLARE_CLASS(UDataMiningUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UDataMiningUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataMiningUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataMiningUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataMiningUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataMiningUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataMiningUtility(UDataMiningUtility&&); \
	NO_API UDataMiningUtility(const UDataMiningUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataMiningUtility(UDataMiningUtility&&); \
	NO_API UDataMiningUtility(const UDataMiningUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataMiningUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataMiningUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataMiningUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UDataMiningUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DataMiningUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
