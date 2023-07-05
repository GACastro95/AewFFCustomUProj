// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECriFsLoaderStatus : uint8;
#ifdef CRIWARERUNTIME_CriFsLoaderComponent_generated_h
#error "CriFsLoaderComponent.generated.h already included, missing '#pragma once' in CriFsLoaderComponent.h"
#endif
#define CRIWARERUNTIME_CriFsLoaderComponent_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_12_DELEGATE \
static inline void FOnLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted) \
{ \
	OnLoadCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_11_DELEGATE \
static inline void FOnLoadError_DelegateWrapper(const FMulticastScriptDelegate& OnLoadError) \
{ \
	OnLoadError.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataArray); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataArray); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend struct Z_Construct_UClass_UCriFsLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend struct Z_Construct_UClass_UCriFsLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriFsLoaderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriFsLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriFsLoaderComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_7_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriFsLoaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
