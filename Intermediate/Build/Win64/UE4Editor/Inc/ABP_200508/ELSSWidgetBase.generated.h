// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ABP_200508_ELSSWidgetBase_generated_h
#error "ELSSWidgetBase.generated.h already included, missing '#pragma once' in ELSSWidgetBase.h"
#endif
#define ABP_200508_ELSSWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_RPC_WRAPPERS \
	virtual void OnFinalize_Implementation(); \
	virtual void OnInitialize_Implementation(APlayerController* Controller); \
	virtual void OnUpdate_Implementation(float DeltaTime); \
	virtual void SetVisible_Implementation(bool inIsVisible); \
 \
	DECLARE_FUNCTION(execOnFinalize); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execOnUpdate); \
	DECLARE_FUNCTION(execSetVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFinalize_Implementation(); \
	virtual void OnInitialize_Implementation(APlayerController* Controller); \
	virtual void OnUpdate_Implementation(float DeltaTime); \
	virtual void SetVisible_Implementation(bool inIsVisible); \
 \
	DECLARE_FUNCTION(execOnFinalize); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execOnUpdate); \
	DECLARE_FUNCTION(execSetVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_EVENT_PARMS \
	struct ELSSWidgetBase_eventOnInitialize_Parms \
	{ \
		APlayerController* Controller; \
	}; \
	struct ELSSWidgetBase_eventOnUpdate_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct ELSSWidgetBase_eventSetVisible_Parms \
	{ \
		bool inIsVisible; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetBase(); \
	friend struct Z_Construct_UClass_UELSSWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetBase(); \
	friend struct Z_Construct_UClass_UELSSWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetBase(UELSSWidgetBase&&); \
	NO_API UELSSWidgetBase(const UELSSWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetBase(UELSSWidgetBase&&); \
	NO_API UELSSWidgetBase(const UELSSWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
