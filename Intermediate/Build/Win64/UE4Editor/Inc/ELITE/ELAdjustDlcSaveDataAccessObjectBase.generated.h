// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataType : uint8;
class UObject;
struct FUnavailableDlcData;
class UELAdjustDlcSaveDataAccessObjectBase;
#ifdef ELITE_ELAdjustDlcSaveDataAccessObjectBase_generated_h
#error "ELAdjustDlcSaveDataAccessObjectBase.generated.h already included, missing '#pragma once' in ELAdjustDlcSaveDataAccessObjectBase.h"
#endif
#define ELITE_ELAdjustDlcSaveDataAccessObjectBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_RPC_WRAPPERS \
	virtual void OnStartCheck_Implementation(FUnavailableDlcData _unavailableDlcData); \
 \
	DECLARE_FUNCTION(execCheckAdjustDlcSaveData); \
	DECLARE_FUNCTION(execCreateAdjustDlcSaveDataAccessObject); \
	DECLARE_FUNCTION(execEndCheck); \
	DECLARE_FUNCTION(execOnStartCheck); \
	DECLARE_FUNCTION(execStartCheck);


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStartCheck_Implementation(FUnavailableDlcData _unavailableDlcData); \
 \
	DECLARE_FUNCTION(execCheckAdjustDlcSaveData); \
	DECLARE_FUNCTION(execCreateAdjustDlcSaveDataAccessObject); \
	DECLARE_FUNCTION(execEndCheck); \
	DECLARE_FUNCTION(execOnStartCheck); \
	DECLARE_FUNCTION(execStartCheck);


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_EVENT_PARMS \
	struct ELAdjustDlcSaveDataAccessObjectBase_eventOnStartCheck_Parms \
	{ \
		FUnavailableDlcData _unavailableDlcData; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAdjustDlcSaveDataAccessObjectBase(); \
	friend struct Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics; \
public: \
	DECLARE_CLASS(UELAdjustDlcSaveDataAccessObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELAdjustDlcSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELAdjustDlcSaveDataAccessObjectBase(); \
	friend struct Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics; \
public: \
	DECLARE_CLASS(UELAdjustDlcSaveDataAccessObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELAdjustDlcSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAdjustDlcSaveDataAccessObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAdjustDlcSaveDataAccessObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAdjustDlcSaveDataAccessObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAdjustDlcSaveDataAccessObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAdjustDlcSaveDataAccessObjectBase(UELAdjustDlcSaveDataAccessObjectBase&&); \
	NO_API UELAdjustDlcSaveDataAccessObjectBase(const UELAdjustDlcSaveDataAccessObjectBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAdjustDlcSaveDataAccessObjectBase(UELAdjustDlcSaveDataAccessObjectBase&&); \
	NO_API UELAdjustDlcSaveDataAccessObjectBase(const UELAdjustDlcSaveDataAccessObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAdjustDlcSaveDataAccessObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAdjustDlcSaveDataAccessObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELAdjustDlcSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdjustedDelegate() { return STRUCT_OFFSET(UELAdjustDlcSaveDataAccessObjectBase, AdjustedDelegate); } \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UELAdjustDlcSaveDataAccessObjectBase, World); }


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_12_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELAdjustDlcSaveDataAccessObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcSaveDataAccessObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
