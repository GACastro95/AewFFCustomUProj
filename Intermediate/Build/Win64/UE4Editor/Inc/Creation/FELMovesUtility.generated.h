// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELMoves;
class UAnimMontage;
class UDataTable;
struct FELMoves_Finisher;
struct FELMoves_Finisher_Part;
class APlayerStart;
#ifdef CREATION_FELMovesUtility_generated_h
#error "FELMovesUtility.generated.h already included, missing '#pragma once' in FELMovesUtility.h"
#endif
#define CREATION_FELMovesUtility_generated_h

#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertArray); \
	DECLARE_FUNCTION(execGetRateScale); \
	DECLARE_FUNCTION(execSaveMovesData); \
	DECLARE_FUNCTION(execSaveMovesDataTable); \
	DECLARE_FUNCTION(execSetFinisherValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execSortPlayerStartArray);


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertArray); \
	DECLARE_FUNCTION(execGetRateScale); \
	DECLARE_FUNCTION(execSaveMovesData); \
	DECLARE_FUNCTION(execSaveMovesDataTable); \
	DECLARE_FUNCTION(execSetFinisherValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execSortPlayerStartArray);


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFELMovesUtility(); \
	friend struct Z_Construct_UClass_UFELMovesUtility_Statics; \
public: \
	DECLARE_CLASS(UFELMovesUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UFELMovesUtility)


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFELMovesUtility(); \
	friend struct Z_Construct_UClass_UFELMovesUtility_Statics; \
public: \
	DECLARE_CLASS(UFELMovesUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UFELMovesUtility)


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFELMovesUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFELMovesUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFELMovesUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFELMovesUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFELMovesUtility(UFELMovesUtility&&); \
	NO_API UFELMovesUtility(const UFELMovesUtility&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFELMovesUtility(UFELMovesUtility&&); \
	NO_API UFELMovesUtility(const UFELMovesUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFELMovesUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFELMovesUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFELMovesUtility)


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_13_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UFELMovesUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_FELMovesUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
