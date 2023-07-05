// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class APlayerController;
class UELPauseMenuBase;
#ifdef ABP_200508_ELPauseMenuBase_generated_h
#error "ELPauseMenuBase.generated.h already included, missing '#pragma once' in ELPauseMenuBase.h"
#endif
#define ABP_200508_ELPauseMenuBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnyKey); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execClearChildMenu); \
	DECLARE_FUNCTION(execCursorLoopWithRepeat); \
	DECLARE_FUNCTION(execDecision); \
	DECLARE_FUNCTION(execFaceButtonLeft); \
	DECLARE_FUNCTION(execFaceButtonUp); \
	DECLARE_FUNCTION(execFindPlayer); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUp); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execOpenChildMenu); \
	DECLARE_FUNCTION(execSecondTabLeft); \
	DECLARE_FUNCTION(execSecondTabRight); \
	DECLARE_FUNCTION(execSpecialRight); \
	DECLARE_FUNCTION(execTabLeft); \
	DECLARE_FUNCTION(execTabRight);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnyKey); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execClearChildMenu); \
	DECLARE_FUNCTION(execCursorLoopWithRepeat); \
	DECLARE_FUNCTION(execDecision); \
	DECLARE_FUNCTION(execFaceButtonLeft); \
	DECLARE_FUNCTION(execFaceButtonUp); \
	DECLARE_FUNCTION(execFindPlayer); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveLeft); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveUp); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execOpenChildMenu); \
	DECLARE_FUNCTION(execSecondTabLeft); \
	DECLARE_FUNCTION(execSecondTabRight); \
	DECLARE_FUNCTION(execSpecialRight); \
	DECLARE_FUNCTION(execTabLeft); \
	DECLARE_FUNCTION(execTabRight);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_EVENT_PARMS \
	struct ELPauseMenuBase_eventOnAnyKey_Parms \
	{ \
		FKey InKey; \
	}; \
	struct ELPauseMenuBase_eventOnDecision_Parms \
	{ \
		APlayerController* PlayerController; \
	}; \
	struct ELPauseMenuBase_eventOnMoveDown_Parms \
	{ \
		bool Repeat; \
	}; \
	struct ELPauseMenuBase_eventOnMoveLeft_Parms \
	{ \
		bool Repeat; \
	}; \
	struct ELPauseMenuBase_eventOnMoveRight_Parms \
	{ \
		bool Repeat; \
	}; \
	struct ELPauseMenuBase_eventOnMoveUp_Parms \
	{ \
		bool Repeat; \
	}; \
	struct ELPauseMenuBase_eventOnTabLeft_Parms \
	{ \
		bool Repeat; \
	}; \
	struct ELPauseMenuBase_eventOnTabRight_Parms \
	{ \
		bool Repeat; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPauseMenuBase(); \
	friend struct Z_Construct_UClass_UELPauseMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELPauseMenuBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPauseMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELPauseMenuBase(); \
	friend struct Z_Construct_UClass_UELPauseMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELPauseMenuBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPauseMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPauseMenuBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPauseMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPauseMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPauseMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPauseMenuBase(UELPauseMenuBase&&); \
	NO_API UELPauseMenuBase(const UELPauseMenuBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPauseMenuBase(UELPauseMenuBase&&); \
	NO_API UELPauseMenuBase(const UELPauseMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPauseMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPauseMenuBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELPauseMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsPadPause() { return STRUCT_OFFSET(UELPauseMenuBase, IsPadPause); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPauseMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPauseMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
