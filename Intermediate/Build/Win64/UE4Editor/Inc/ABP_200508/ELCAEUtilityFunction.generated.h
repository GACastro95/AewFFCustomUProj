// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJukeBoxParam;
class UELUnlockableItemManagerBase;
enum class EWrestlerID_N : uint8;
struct FELCAEMenuItemInfo;
struct FELRefUnlockableItemInfo;
class UDataTable;
class UObject;
#ifdef ABP_200508_ELCAEUtilityFunction_generated_h
#error "ELCAEUtilityFunction.generated.h already included, missing '#pragma once' in ELCAEUtilityFunction.h"
#endif
#define ABP_200508_ELCAEUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanSelectableMusic); \
	DECLARE_FUNCTION(execGetUnlockableItemInfo); \
	DECLARE_FUNCTION(execMakeSelectableAnimationList); \
	DECLARE_FUNCTION(execMakeSelectableMusicList); \
	DECLARE_FUNCTION(execSortUnlockableItems);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanSelectableMusic); \
	DECLARE_FUNCTION(execGetUnlockableItemInfo); \
	DECLARE_FUNCTION(execMakeSelectableAnimationList); \
	DECLARE_FUNCTION(execMakeSelectableMusicList); \
	DECLARE_FUNCTION(execSortUnlockableItems);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCAEUtilityFunction(); \
	friend struct Z_Construct_UClass_UELCAEUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELCAEUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCAEUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELCAEUtilityFunction(); \
	friend struct Z_Construct_UClass_UELCAEUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELCAEUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCAEUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCAEUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCAEUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAEUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAEUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAEUtilityFunction(UELCAEUtilityFunction&&); \
	NO_API UELCAEUtilityFunction(const UELCAEUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAEUtilityFunction(UELCAEUtilityFunction&&); \
	NO_API UELCAEUtilityFunction(const UELCAEUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAEUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAEUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCAEUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_14_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCAEUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCAEUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
