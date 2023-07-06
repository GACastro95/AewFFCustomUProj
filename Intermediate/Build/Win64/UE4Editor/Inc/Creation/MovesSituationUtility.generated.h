// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
struct FMovesSituation;
class UObject; class UObject;
struct FELMoves_Finisher;
struct FELMoves_Finisher_Part;
enum class EMovesDataTable_Type : uint8;
enum class EMovesTag_AttackIndex : uint8;
enum class EMovesTag_DamagePartIndex : uint8;
enum class EMovesTag_FunctionIndex : uint8;
enum class EMovesTag_MovesIndex : uint8;
struct FMovesOutputData;
#ifdef CREATION_MovesSituationUtility_generated_h
#error "MovesSituationUtility.generated.h already included, missing '#pragma once' in MovesSituationUtility.h"
#endif
#define CREATION_MovesSituationUtility_generated_h

#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindSituationDataName); \
	DECLARE_FUNCTION(execGetAttackTagArray); \
	DECLARE_FUNCTION(execGetDamagePartTagArray); \
	DECLARE_FUNCTION(execGetEnableFinisherList); \
	DECLARE_FUNCTION(execGetFunctionTagArray); \
	DECLARE_FUNCTION(execGetMovesTagArray); \
	DECLARE_FUNCTION(execGetSituationMovesName); \
	DECLARE_FUNCTION(execIsAttackTagArray); \
	DECLARE_FUNCTION(execIsDamagePartTagArray); \
	DECLARE_FUNCTION(execIsFunctionTagArray); \
	DECLARE_FUNCTION(execIsMovesTagArray); \
	DECLARE_FUNCTION(execOutPutDataArray); \
	DECLARE_FUNCTION(execSaveMovesSituationData); \
	DECLARE_FUNCTION(execSearchDataArray_DataTable);


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindSituationDataName); \
	DECLARE_FUNCTION(execGetAttackTagArray); \
	DECLARE_FUNCTION(execGetDamagePartTagArray); \
	DECLARE_FUNCTION(execGetEnableFinisherList); \
	DECLARE_FUNCTION(execGetFunctionTagArray); \
	DECLARE_FUNCTION(execGetMovesTagArray); \
	DECLARE_FUNCTION(execGetSituationMovesName); \
	DECLARE_FUNCTION(execIsAttackTagArray); \
	DECLARE_FUNCTION(execIsDamagePartTagArray); \
	DECLARE_FUNCTION(execIsFunctionTagArray); \
	DECLARE_FUNCTION(execIsMovesTagArray); \
	DECLARE_FUNCTION(execOutPutDataArray); \
	DECLARE_FUNCTION(execSaveMovesSituationData); \
	DECLARE_FUNCTION(execSearchDataArray_DataTable);


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovesSituationUtility(); \
	friend struct Z_Construct_UClass_UMovesSituationUtility_Statics; \
public: \
	DECLARE_CLASS(UMovesSituationUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UMovesSituationUtility)


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovesSituationUtility(); \
	friend struct Z_Construct_UClass_UMovesSituationUtility_Statics; \
public: \
	DECLARE_CLASS(UMovesSituationUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UMovesSituationUtility)


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovesSituationUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovesSituationUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovesSituationUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovesSituationUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovesSituationUtility(UMovesSituationUtility&&); \
	NO_API UMovesSituationUtility(const UMovesSituationUtility&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovesSituationUtility(UMovesSituationUtility&&); \
	NO_API UMovesSituationUtility(const UMovesSituationUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovesSituationUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovesSituationUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovesSituationUtility)


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_17_PROLOG
#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UMovesSituationUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_MovesSituationUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
