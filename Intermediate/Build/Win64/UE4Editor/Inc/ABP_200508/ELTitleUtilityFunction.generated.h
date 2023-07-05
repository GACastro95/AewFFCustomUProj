// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class EELBelt : uint8;
enum class EWrestlerID_N : uint8;
struct FEditPersonParam;
class UObject;
struct FELBeltParam;
enum class EELDisplayBeltType : uint8;
enum class EGender : uint8;
struct FELTitleHolder;
struct FELTitleWrestlerSelectParam;
#ifdef ABP_200508_ELTitleUtilityFunction_generated_h
#error "ELTitleUtilityFunction.generated.h already included, missing '#pragma once' in ELTitleUtilityFunction.h"
#endif
#define ABP_200508_ELTitleUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreakupTeam); \
	DECLARE_FUNCTION(execCanChallengedTheTitle); \
	DECLARE_FUNCTION(execCanChallengedTheTitleAtEditWrestler); \
	DECLARE_FUNCTION(execCheckChangedMyWrestlerEditParam); \
	DECLARE_FUNCTION(execClearTitleHolder); \
	DECLARE_FUNCTION(execDefendTitleHolder); \
	DECLARE_FUNCTION(execDeleteTeam); \
	DECLARE_FUNCTION(execExecuteFailSafeTitleHolder); \
	DECLARE_FUNCTION(execGetBeltParam); \
	DECLARE_FUNCTION(execGetDefendCount); \
	DECLARE_FUNCTION(execGetDisplayTitleHolderText); \
	DECLARE_FUNCTION(execGetEnableBeltList); \
	DECLARE_FUNCTION(execGetHighestPriorityBelt); \
	DECLARE_FUNCTION(execGetTitleHolder); \
	DECLARE_FUNCTION(execGetTitleList); \
	DECLARE_FUNCTION(execGetWrestlerAttachedBelts); \
	DECLARE_FUNCTION(execIsSameTitleHolderParam); \
	DECLARE_FUNCTION(execIsValidBelt); \
	DECLARE_FUNCTION(execMakeBeltInfoForUpdateTitleHolder); \
	DECLARE_FUNCTION(execMakeBeltInfoForUpdateTitleHolder_Tag); \
	DECLARE_FUNCTION(execSetTitleHolder); \
	DECLARE_FUNCTION(execSetTitleHolder_Single); \
	DECLARE_FUNCTION(execSetTitleHolder_Tag); \
	DECLARE_FUNCTION(execSetTitleHolderAtEditWrestler); \
	DECLARE_FUNCTION(execSortByPriority);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreakupTeam); \
	DECLARE_FUNCTION(execCanChallengedTheTitle); \
	DECLARE_FUNCTION(execCanChallengedTheTitleAtEditWrestler); \
	DECLARE_FUNCTION(execCheckChangedMyWrestlerEditParam); \
	DECLARE_FUNCTION(execClearTitleHolder); \
	DECLARE_FUNCTION(execDefendTitleHolder); \
	DECLARE_FUNCTION(execDeleteTeam); \
	DECLARE_FUNCTION(execExecuteFailSafeTitleHolder); \
	DECLARE_FUNCTION(execGetBeltParam); \
	DECLARE_FUNCTION(execGetDefendCount); \
	DECLARE_FUNCTION(execGetDisplayTitleHolderText); \
	DECLARE_FUNCTION(execGetEnableBeltList); \
	DECLARE_FUNCTION(execGetHighestPriorityBelt); \
	DECLARE_FUNCTION(execGetTitleHolder); \
	DECLARE_FUNCTION(execGetTitleList); \
	DECLARE_FUNCTION(execGetWrestlerAttachedBelts); \
	DECLARE_FUNCTION(execIsSameTitleHolderParam); \
	DECLARE_FUNCTION(execIsValidBelt); \
	DECLARE_FUNCTION(execMakeBeltInfoForUpdateTitleHolder); \
	DECLARE_FUNCTION(execMakeBeltInfoForUpdateTitleHolder_Tag); \
	DECLARE_FUNCTION(execSetTitleHolder); \
	DECLARE_FUNCTION(execSetTitleHolder_Single); \
	DECLARE_FUNCTION(execSetTitleHolder_Tag); \
	DECLARE_FUNCTION(execSetTitleHolderAtEditWrestler); \
	DECLARE_FUNCTION(execSortByPriority);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELTitleUtilityFunction(); \
	friend struct Z_Construct_UClass_UELTitleUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELTitleUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTitleUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUELTitleUtilityFunction(); \
	friend struct Z_Construct_UClass_UELTitleUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELTitleUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTitleUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELTitleUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELTitleUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTitleUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTitleUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTitleUtilityFunction(UELTitleUtilityFunction&&); \
	NO_API UELTitleUtilityFunction(const UELTitleUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTitleUtilityFunction(UELTitleUtilityFunction&&); \
	NO_API UELTitleUtilityFunction(const UELTitleUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTitleUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTitleUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELTitleUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELTitleUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTitleUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
