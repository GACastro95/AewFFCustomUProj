// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasPanel;
class UELSSWidgetBase;
#ifdef ABP_200508_ELSSPanelBase_generated_h
#error "ELSSPanelBase.generated.h already included, missing '#pragma once' in ELSSPanelBase.h"
#endif
#define ABP_200508_ELSSPanelBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_RPC_WRAPPERS \
	virtual bool GetVisible_Implementation(); \
	virtual void OnCreate_Implementation(int32 ZOrder); \
	virtual void OnDestroy_Implementation(); \
	virtual void OnUpdate_Implementation(float DeltaTime); \
	virtual void SetVisible_Implementation(bool inIsVisible); \
 \
	DECLARE_FUNCTION(execGetVisible); \
	DECLARE_FUNCTION(execOnClosePanelNative); \
	DECLARE_FUNCTION(execOnCreate); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnUpdate); \
	DECLARE_FUNCTION(execSetupChildren); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execSetZOrderInPanel);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetVisible_Implementation(); \
	virtual void OnCreate_Implementation(int32 ZOrder); \
	virtual void OnDestroy_Implementation(); \
	virtual void OnUpdate_Implementation(float DeltaTime); \
	virtual void SetVisible_Implementation(bool inIsVisible); \
 \
	DECLARE_FUNCTION(execGetVisible); \
	DECLARE_FUNCTION(execOnClosePanelNative); \
	DECLARE_FUNCTION(execOnCreate); \
	DECLARE_FUNCTION(execOnDestroy); \
	DECLARE_FUNCTION(execOnUpdate); \
	DECLARE_FUNCTION(execSetupChildren); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execSetZOrderInPanel);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_EVENT_PARMS \
	struct ELSSPanelBase_eventGetVisible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPanelBase_eventGetVisible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPanelBase_eventOnCreate_Parms \
	{ \
		int32 ZOrder; \
	}; \
	struct ELSSPanelBase_eventOnUpdate_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct ELSSPanelBase_eventSetVisible_Parms \
	{ \
		bool inIsVisible; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSPanelBase(); \
	friend struct Z_Construct_UClass_UELSSPanelBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSPanelBase(); \
	friend struct Z_Construct_UClass_UELSSPanelBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSPanelBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSPanelBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelBase(UELSSPanelBase&&); \
	NO_API UELSSPanelBase(const UELSSPanelBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelBase(UELSSPanelBase&&); \
	NO_API UELSSPanelBase(const UELSSPanelBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSPanelBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CommonLayoutWidget() { return STRUCT_OFFSET(UELSSPanelBase, CommonLayoutWidget); } \
	FORCEINLINE static uint32 __PPO__OnClosePanelEventDispatcher() { return STRUCT_OFFSET(UELSSPanelBase, OnClosePanelEventDispatcher); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSPanelBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
