// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FExecuteTutorialDialogParam;
#ifdef ABP_200508_ELTutorialExecutorBase_generated_h
#error "ELTutorialExecutorBase.generated.h already included, missing '#pragma once' in ELTutorialExecutorBase.h"
#endif
#define ABP_200508_ELTutorialExecutorBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_RPC_WRAPPERS \
	virtual void OnStartTutorial_Implementation(FExecuteTutorialDialogParam _targetParam, bool _displayDecideBtn, bool _displayBottomHelp, bool _loadingAsset); \
 \
	DECLARE_FUNCTION(execEndTutorial); \
	DECLARE_FUNCTION(execOnStartTutorial); \
	DECLARE_FUNCTION(execStartWaitState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStartTutorial_Implementation(FExecuteTutorialDialogParam _targetParam, bool _displayDecideBtn, bool _displayBottomHelp, bool _loadingAsset); \
 \
	DECLARE_FUNCTION(execEndTutorial); \
	DECLARE_FUNCTION(execOnStartTutorial); \
	DECLARE_FUNCTION(execStartWaitState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_EVENT_PARMS \
	struct ELTutorialExecutorBase_eventOnPseudoChangePage_Parms \
	{ \
		bool isRight; \
	}; \
	struct ELTutorialExecutorBase_eventOnStartTutorial_Parms \
	{ \
		FExecuteTutorialDialogParam _targetParam; \
		bool _displayDecideBtn; \
		bool _displayBottomHelp; \
		bool _loadingAsset; \
	}; \
	struct ELTutorialExecutorBase_eventSetIntervalPseudoPushButtonOK_Parms \
	{ \
		float Interval; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELTutorialExecutorBase(); \
	friend struct Z_Construct_UClass_AELTutorialExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELTutorialExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELTutorialExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELTutorialExecutorBase(); \
	friend struct Z_Construct_UClass_AELTutorialExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELTutorialExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELTutorialExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELTutorialExecutorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELTutorialExecutorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELTutorialExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELTutorialExecutorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELTutorialExecutorBase(AELTutorialExecutorBase&&); \
	NO_API AELTutorialExecutorBase(const AELTutorialExecutorBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELTutorialExecutorBase(AELTutorialExecutorBase&&); \
	NO_API AELTutorialExecutorBase(const AELTutorialExecutorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELTutorialExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELTutorialExecutorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELTutorialExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompleteDelegate() { return STRUCT_OFFSET(AELTutorialExecutorBase, CompleteDelegate); } \
	FORCEINLINE static uint32 __PPO__StartWaitStateDelegate() { return STRUCT_OFFSET(AELTutorialExecutorBase, StartWaitStateDelegate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELTutorialExecutorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTutorialExecutorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
