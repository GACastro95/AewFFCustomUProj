// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELDebugMenuCallbackBase;
class UWorld;
class UGameInstance;
class UELDebugMenuRootBase;
class UELDebugMenuManager;
struct FELDebugMenuSimpleUIParamBase;
#ifdef ABP_200508_ELDebugMenuCallbackBase_generated_h
#error "ELDebugMenuCallbackBase.generated.h already included, missing '#pragma once' in ELDebugMenuCallbackBase.h"
#endif
#define ABP_200508_ELDebugMenuCallbackBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_RPC_WRAPPERS \
	virtual void Initialize_Implementation(UGameInstance* GameInstance, UELDebugMenuRootBase* IngameDebugMenu, UELDebugMenuManager* DebugMenuManager); \
 \
	DECLARE_FUNCTION(execBindClickUI); \
	DECLARE_FUNCTION(execBindResetUI); \
	DECLARE_FUNCTION(execBindSetupUI); \
	DECLARE_FUNCTION(execBindUIValueChanged); \
	DECLARE_FUNCTION(execCreateELDebugMenuCallbackInstance); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execReleaseCallbackInstance); \
	DECLARE_FUNCTION(execRequestExit);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Initialize_Implementation(UGameInstance* GameInstance, UELDebugMenuRootBase* IngameDebugMenu, UELDebugMenuManager* DebugMenuManager); \
 \
	DECLARE_FUNCTION(execBindClickUI); \
	DECLARE_FUNCTION(execBindResetUI); \
	DECLARE_FUNCTION(execBindSetupUI); \
	DECLARE_FUNCTION(execBindUIValueChanged); \
	DECLARE_FUNCTION(execCreateELDebugMenuCallbackInstance); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execReleaseCallbackInstance); \
	DECLARE_FUNCTION(execRequestExit);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_EVENT_PARMS \
	struct ELDebugMenuCallbackBase_eventInitialize_Parms \
	{ \
		UGameInstance* GameInstance; \
		UELDebugMenuRootBase* IngameDebugMenu; \
		UELDebugMenuManager* DebugMenuManager; \
	}; \
	struct ELDebugMenuCallbackBase_eventOnClickUI_Parms \
	{ \
		FELDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct ELDebugMenuCallbackBase_eventOnResetUI_Parms \
	{ \
		FELDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct ELDebugMenuCallbackBase_eventOnSetupUI_Parms \
	{ \
		FELDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct ELDebugMenuCallbackBase_eventOnUIValueChanged_Parms \
	{ \
		FELDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct ELDebugMenuCallbackBase_eventSetDispDebug_Parms \
	{ \
		bool IsDisp; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDebugMenuCallbackBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuCallbackBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuCallbackBase, UELDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuCallbackBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELDebugMenuCallbackBase(); \
	friend struct Z_Construct_UClass_UELDebugMenuCallbackBase_Statics; \
public: \
	DECLARE_CLASS(UELDebugMenuCallbackBase, UELDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELDebugMenuCallbackBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDebugMenuCallbackBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDebugMenuCallbackBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuCallbackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuCallbackBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuCallbackBase(UELDebugMenuCallbackBase&&); \
	NO_API UELDebugMenuCallbackBase(const UELDebugMenuCallbackBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDebugMenuCallbackBase(UELDebugMenuCallbackBase&&); \
	NO_API UELDebugMenuCallbackBase(const UELDebugMenuCallbackBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDebugMenuCallbackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDebugMenuCallbackBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELDebugMenuCallbackBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELDebugMenuCallbackBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELDebugMenuCallbackBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
