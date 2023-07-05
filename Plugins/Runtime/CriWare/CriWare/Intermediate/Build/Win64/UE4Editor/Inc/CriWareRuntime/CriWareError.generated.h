// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCriWareErrorInfo;
class UCriWareError;
#ifdef CRIWARERUNTIME_CriWareError_generated_h
#error "CriWareError.generated.h already included, missing '#pragma once' in CriWareError.h"
#endif
#define CRIWARERUNTIME_CriWareError_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_13_DELEGATE \
struct CriWareError_eventOnCriWareError_Parms \
{ \
	FCriWareErrorInfo ErrorInfo; \
}; \
static inline void FOnCriWareError_DelegateWrapper(const FMulticastScriptDelegate& OnCriWareError, FCriWareErrorInfo const& ErrorInfo) \
{ \
	CriWareError_eventOnCriWareError_Parms Parms; \
	Parms.ErrorInfo=ErrorInfo; \
	OnCriWareError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCriWareError);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCriWareError);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareError(); \
	friend struct Z_Construct_UClass_UCriWareError_Statics; \
public: \
	DECLARE_CLASS(UCriWareError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UCriWareError)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCriWareError(); \
	friend struct Z_Construct_UClass_UCriWareError_Statics; \
public: \
	DECLARE_CLASS(UCriWareError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UCriWareError)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UCriWareError(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriWareError) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UCriWareError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareError); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UCriWareError(UCriWareError&&); \
	CRIWARERUNTIME_API UCriWareError(const UCriWareError&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UCriWareError(UCriWareError&&); \
	CRIWARERUNTIME_API UCriWareError(const UCriWareError&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UCriWareError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareError); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriWareError)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_9_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriWareError>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
