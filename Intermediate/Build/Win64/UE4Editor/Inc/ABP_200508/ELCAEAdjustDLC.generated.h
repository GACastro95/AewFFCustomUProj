// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELWrestlerProfile_CutScene;
struct FUnavailableDlcData;
#ifdef ABP_200508_ELCAEAdjustDLC_generated_h
#error "ELCAEAdjustDLC.generated.h already included, missing '#pragma once' in ELCAEAdjustDLC.h"
#endif
#define ABP_200508_ELCAEAdjustDLC_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteDLCItem); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteDLCItem); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_EVENT_PARMS \
	struct ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms \
	{ \
		FELWrestlerProfile_CutScene BaseCutsceneProfile; \
		FUnavailableDlcData UnavailableDlcData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCAEAdjustDLC_eventIsDeleteDLCMovie_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCAEAdjustDLC(); \
	friend struct Z_Construct_UClass_UELCAEAdjustDLC_Statics; \
public: \
	DECLARE_CLASS(UELCAEAdjustDLC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCAEAdjustDLC)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELCAEAdjustDLC(); \
	friend struct Z_Construct_UClass_UELCAEAdjustDLC_Statics; \
public: \
	DECLARE_CLASS(UELCAEAdjustDLC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCAEAdjustDLC)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCAEAdjustDLC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCAEAdjustDLC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAEAdjustDLC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAEAdjustDLC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAEAdjustDLC(UELCAEAdjustDLC&&); \
	NO_API UELCAEAdjustDLC(const UELCAEAdjustDLC&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAEAdjustDLC(UELCAEAdjustDLC&&); \
	NO_API UELCAEAdjustDLC(const UELCAEAdjustDLC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAEAdjustDLC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAEAdjustDLC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCAEAdjustDLC)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCAEAdjustDLC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCAEAdjustDLC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
