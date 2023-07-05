// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaTexture;
class UManaSource;
#ifdef CRIWARERUNTIME_ManaTexture_generated_h
#error "ManaTexture.generated.h already included, missing '#pragma once' in ManaTexture.h"
#endif
#define CRIWARERUNTIME_ManaTexture_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_19_DELEGATE \
struct ManaTexture_eventOnTextureUpdated_Parms \
{ \
	UManaTexture* ManaTexture; \
}; \
static inline void FOnTextureUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTextureUpdated, UManaTexture* ManaTexture) \
{ \
	ManaTexture_eventOnTextureUpdated_Parms Parms; \
	Parms.ManaTexture=ManaTexture; \
	OnTextureUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMovieSource);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMovieSource);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaTexture(); \
	friend struct Z_Construct_UClass_UManaTexture_Statics; \
public: \
	DECLARE_CLASS(UManaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaTexture)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUManaTexture(); \
	friend struct Z_Construct_UClass_UManaTexture_Statics; \
public: \
	DECLARE_CLASS(UManaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaTexture)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaTexture(UManaTexture&&); \
	NO_API UManaTexture(const UManaTexture&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaTexture(UManaTexture&&); \
	NO_API UManaTexture(const UManaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaTexture)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovieSource() { return STRUCT_OFFSET(UManaTexture, MovieSource); } \
	FORCEINLINE static uint32 __PPO__MovieFilePath() { return STRUCT_OFFSET(UManaTexture, MovieFilePath); } \
	FORCEINLINE static uint32 __PPO__ComponentTextures() { return STRUCT_OFFSET(UManaTexture, ComponentTextures); } \
	FORCEINLINE static uint32 __PPO__AlphaComponentTextures() { return STRUCT_OFFSET(UManaTexture, AlphaComponentTextures); } \
	FORCEINLINE static uint32 __PPO__ManaPlayer() { return STRUCT_OFFSET(UManaTexture, ManaPlayer); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_15_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
