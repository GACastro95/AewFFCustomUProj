// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaMovie;
#ifdef CRIWARERUNTIME_ManaPlaylist_generated_h
#error "ManaPlaylist.generated.h already included, missing '#pragma once' in ManaPlaylist.h"
#endif
#define CRIWARERUNTIME_ManaPlaylist_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execIsAlpha); \
	DECLARE_FUNCTION(execIsMixedTypes); \
	DECLARE_FUNCTION(execIsSeamless); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveAt);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execIsAlpha); \
	DECLARE_FUNCTION(execIsMixedTypes); \
	DECLARE_FUNCTION(execIsSeamless); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveAt);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaPlaylist(); \
	friend struct Z_Construct_UClass_UManaPlaylist_Statics; \
public: \
	DECLARE_CLASS(UManaPlaylist, UManaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlaylist)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUManaPlaylist(); \
	friend struct Z_Construct_UClass_UManaPlaylist_Statics; \
public: \
	DECLARE_CLASS(UManaPlaylist, UManaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlaylist)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaPlaylist(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaPlaylist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlaylist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlaylist(UManaPlaylist&&); \
	NO_API UManaPlaylist(const UManaPlaylist&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlaylist(UManaPlaylist&&); \
	NO_API UManaPlaylist(const UManaPlaylist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlaylist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaPlaylist)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Movies() { return STRUCT_OFFSET(UManaPlaylist, Movies); } \
	FORCEINLINE static uint32 __PPO__bIsAlpha() { return STRUCT_OFFSET(UManaPlaylist, bIsAlpha); } \
	FORCEINLINE static uint32 __PPO__bIsMixedTypes() { return STRUCT_OFFSET(UManaPlaylist, bIsMixedTypes); } \
	FORCEINLINE static uint32 __PPO__bIsSeamless() { return STRUCT_OFFSET(UManaPlaylist, bIsSeamless); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_8_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaPlaylist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
