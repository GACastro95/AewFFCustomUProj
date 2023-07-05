// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETrainingReversalKind : uint8;
class AELCharacter_Native;
#ifdef ABP_200508_ELTrainingBase_generated_h
#error "ELTrainingBase.generated.h already included, missing '#pragma once' in ELTrainingBase.h"
#endif
#define ABP_200508_ELTrainingBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChangedLastHitMovesSituationIndex); \
	DECLARE_FUNCTION(execOnChangedReversalKind); \
	DECLARE_FUNCTION(execSetTargetCharacter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChangedLastHitMovesSituationIndex); \
	DECLARE_FUNCTION(execOnChangedReversalKind); \
	DECLARE_FUNCTION(execSetTargetCharacter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_EVENT_PARMS \
	struct ELTrainingBase_eventOnChangedLastHitMovesSituationIndex_BP_Parms \
	{ \
		int32 MovesSituationIndex; \
	}; \
	struct ELTrainingBase_eventOnChangedReversalKind_BP_Parms \
	{ \
		ETrainingReversalKind Kind; \
	}; \
	struct ELTrainingBase_eventTick_UpdateTargetCharacter_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELTrainingBase_eventTick_UpdateTargetCharacter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELTrainingBase(); \
	friend struct Z_Construct_UClass_UELTrainingBase_Statics; \
public: \
	DECLARE_CLASS(UELTrainingBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTrainingBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELTrainingBase(); \
	friend struct Z_Construct_UClass_UELTrainingBase_Statics; \
public: \
	DECLARE_CLASS(UELTrainingBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTrainingBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELTrainingBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELTrainingBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTrainingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTrainingBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTrainingBase(UELTrainingBase&&); \
	NO_API UELTrainingBase(const UELTrainingBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTrainingBase(UELTrainingBase&&); \
	NO_API UELTrainingBase(const UELTrainingBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTrainingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTrainingBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELTrainingBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELTrainingBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTrainingBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
