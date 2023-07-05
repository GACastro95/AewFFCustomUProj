// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUnavailableDlcData;
class UMyWrestlerDataObject;
#ifdef ELITE_ELAdjustDlcObjectForCustomWrestler_generated_h
#error "ELAdjustDlcObjectForCustomWrestler.generated.h already included, missing '#pragma once' in ELAdjustDlcObjectForCustomWrestler.h"
#endif
#define ELITE_ELAdjustDlcObjectForCustomWrestler_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_RPC_WRAPPERS \
	virtual void InitCheckList_Implementation(FUnavailableDlcData const& UnavailableDlcData); \
	virtual void OnCheckRoster_Implementation(UMyWrestlerDataObject* Object); \
	virtual void OnCheckScout_Implementation(UMyWrestlerDataObject* Object); \
 \
	DECLARE_FUNCTION(execInitCheckList); \
	DECLARE_FUNCTION(execOnCheckRoster); \
	DECLARE_FUNCTION(execOnCheckScout);


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitCheckList_Implementation(FUnavailableDlcData const& UnavailableDlcData); \
	virtual void OnCheckRoster_Implementation(UMyWrestlerDataObject* Object); \
	virtual void OnCheckScout_Implementation(UMyWrestlerDataObject* Object); \
 \
	DECLARE_FUNCTION(execInitCheckList); \
	DECLARE_FUNCTION(execOnCheckRoster); \
	DECLARE_FUNCTION(execOnCheckScout);


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_EVENT_PARMS \
	struct ELAdjustDlcObjectForCustomWrestler_eventInitCheckList_Parms \
	{ \
		FUnavailableDlcData UnavailableDlcData; \
	}; \
	struct ELAdjustDlcObjectForCustomWrestler_eventOnCheckRoster_Parms \
	{ \
		UMyWrestlerDataObject* Object; \
	}; \
	struct ELAdjustDlcObjectForCustomWrestler_eventOnCheckScout_Parms \
	{ \
		UMyWrestlerDataObject* Object; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAdjustDlcObjectForCustomWrestler(); \
	friend struct Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics; \
public: \
	DECLARE_CLASS(UELAdjustDlcObjectForCustomWrestler, UELAdjustDlcSaveDataAccessObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELAdjustDlcObjectForCustomWrestler)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELAdjustDlcObjectForCustomWrestler(); \
	friend struct Z_Construct_UClass_UELAdjustDlcObjectForCustomWrestler_Statics; \
public: \
	DECLARE_CLASS(UELAdjustDlcObjectForCustomWrestler, UELAdjustDlcSaveDataAccessObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELAdjustDlcObjectForCustomWrestler)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAdjustDlcObjectForCustomWrestler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAdjustDlcObjectForCustomWrestler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAdjustDlcObjectForCustomWrestler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAdjustDlcObjectForCustomWrestler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAdjustDlcObjectForCustomWrestler(UELAdjustDlcObjectForCustomWrestler&&); \
	NO_API UELAdjustDlcObjectForCustomWrestler(const UELAdjustDlcObjectForCustomWrestler&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAdjustDlcObjectForCustomWrestler(UELAdjustDlcObjectForCustomWrestler&&); \
	NO_API UELAdjustDlcObjectForCustomWrestler(const UELAdjustDlcObjectForCustomWrestler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAdjustDlcObjectForCustomWrestler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAdjustDlcObjectForCustomWrestler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELAdjustDlcObjectForCustomWrestler)


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Template_M01_Object() { return STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_M01_Object); } \
	FORCEINLINE static uint32 __PPO__Template_F01_Object() { return STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, Template_F01_Object); } \
	FORCEINLINE static uint32 __PPO__MovesAdjust() { return STRUCT_OFFSET(UELAdjustDlcObjectForCustomWrestler, MovesAdjust); }


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_11_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELAdjustDlcObjectForCustomWrestler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELAdjustDlcObjectForCustomWrestler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
