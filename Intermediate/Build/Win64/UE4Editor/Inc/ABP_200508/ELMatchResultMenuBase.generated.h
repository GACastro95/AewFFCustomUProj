// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELMatchScore_MatchType : uint8;
class UTexture2D;
struct FELMatchScore_StarData;
struct FChallengeProgressDetailInfo;
#ifdef ABP_200508_ELMatchResultMenuBase_generated_h
#error "ELMatchResultMenuBase.generated.h already included, missing '#pragma once' in ELMatchResultMenuBase.h"
#endif
#define ABP_200508_ELMatchResultMenuBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHPEvaluationTexture); \
	DECLARE_FUNCTION(execGetMatchEvaluationTexture); \
	DECLARE_FUNCTION(execGetMovesEvaluationTexture); \
	DECLARE_FUNCTION(execGetStarEvaluation); \
	DECLARE_FUNCTION(execGetTimeEvaluationTexture); \
	DECLARE_FUNCTION(execMakeChallengeList); \
	DECLARE_FUNCTION(execMoveChallengeCursor); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execStartDelay);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHPEvaluationTexture); \
	DECLARE_FUNCTION(execGetMatchEvaluationTexture); \
	DECLARE_FUNCTION(execGetMovesEvaluationTexture); \
	DECLARE_FUNCTION(execGetStarEvaluation); \
	DECLARE_FUNCTION(execGetTimeEvaluationTexture); \
	DECLARE_FUNCTION(execMakeChallengeList); \
	DECLARE_FUNCTION(execMoveChallengeCursor); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execStartDelay);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_EVENT_PARMS \
	struct ELMatchResultMenuBase_eventOnPressDown_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressL1_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressL2_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressLeft_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressR1_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressR2_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressRight_Parms \
	{ \
		bool IsRepeat; \
	}; \
	struct ELMatchResultMenuBase_eventOnPressUp_Parms \
	{ \
		bool IsRepeat; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMatchResultMenuBase(); \
	friend struct Z_Construct_UClass_UELMatchResultMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELMatchResultMenuBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMatchResultMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELMatchResultMenuBase(); \
	friend struct Z_Construct_UClass_UELMatchResultMenuBase_Statics; \
public: \
	DECLARE_CLASS(UELMatchResultMenuBase, UELUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMatchResultMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMatchResultMenuBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMatchResultMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMatchResultMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMatchResultMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMatchResultMenuBase(UELMatchResultMenuBase&&); \
	NO_API UELMatchResultMenuBase(const UELMatchResultMenuBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMatchResultMenuBase(UELMatchResultMenuBase&&); \
	NO_API UELMatchResultMenuBase(const UELMatchResultMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMatchResultMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMatchResultMenuBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMatchResultMenuBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMatchResultMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMatchResultMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
