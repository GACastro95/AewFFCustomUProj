// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECriFsBinderStatus : uint8;
#ifdef CRIWARERUNTIME_CriFsBinderComponent_generated_h
#error "CriFsBinderComponent.generated.h already included, missing '#pragma once' in CriFsBinderComponent.h"
#endif
#define CRIWARERUNTIME_CriFsBinderComponent_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_12_DELEGATE \
static inline void FOnBindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnBindCompleted) \
{ \
	OnBindCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_11_DELEGATE \
static inline void FOnBindError_DelegateWrapper(const FMulticastScriptDelegate& OnBindError) \
{ \
	OnBindError.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBind); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execStop);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBind); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execStop);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriFsBinderComponent(); \
	friend struct Z_Construct_UClass_UCriFsBinderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsBinderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsBinderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCriFsBinderComponent(); \
	friend struct Z_Construct_UClass_UCriFsBinderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsBinderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsBinderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriFsBinderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriFsBinderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsBinderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsBinderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsBinderComponent(UCriFsBinderComponent&&); \
	NO_API UCriFsBinderComponent(const UCriFsBinderComponent&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsBinderComponent(UCriFsBinderComponent&&); \
	NO_API UCriFsBinderComponent(const UCriFsBinderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsBinderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsBinderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriFsBinderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_7_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriFsBinderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
