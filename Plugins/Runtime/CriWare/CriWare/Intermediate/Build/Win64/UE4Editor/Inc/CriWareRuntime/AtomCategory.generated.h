// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomAisacInfo;
#ifdef CRIWARERUNTIME_AtomCategory_generated_h
#error "AtomCategory.generated.h already included, missing '#pragma once' in AtomCategory.h"
#endif
#define CRIWARERUNTIME_AtomCategory_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttachedAisacInfoById); \
	DECLARE_FUNCTION(execGetAttachedAisacInfoByName); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueById); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueByName); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsById); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsByName); \
	DECLARE_FUNCTION(execGetVolumeByName); \
	DECLARE_FUNCTION(execIsPausedByName); \
	DECLARE_FUNCTION(execPauseByName); \
	DECLARE_FUNCTION(execResetAllAisacControlById); \
	DECLARE_FUNCTION(execResetAllAisacControlByName); \
	DECLARE_FUNCTION(execSetAisacControlByName); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetVolumeByName); \
	DECLARE_FUNCTION(execStopByName);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttachedAisacInfoById); \
	DECLARE_FUNCTION(execGetAttachedAisacInfoByName); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueById); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueByName); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsById); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsByName); \
	DECLARE_FUNCTION(execGetVolumeByName); \
	DECLARE_FUNCTION(execIsPausedByName); \
	DECLARE_FUNCTION(execPauseByName); \
	DECLARE_FUNCTION(execResetAllAisacControlById); \
	DECLARE_FUNCTION(execResetAllAisacControlByName); \
	DECLARE_FUNCTION(execSetAisacControlByName); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetVolumeByName); \
	DECLARE_FUNCTION(execStopByName);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCategory(); \
	friend struct Z_Construct_UClass_UAtomCategory_Statics; \
public: \
	DECLARE_CLASS(UAtomCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCategory)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAtomCategory(); \
	friend struct Z_Construct_UClass_UAtomCategory_Statics; \
public: \
	DECLARE_CLASS(UAtomCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCategory)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCategory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCategory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCategory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCategory(UAtomCategory&&); \
	NO_API UAtomCategory(const UAtomCategory&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCategory(UAtomCategory&&); \
	NO_API UAtomCategory(const UAtomCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCategory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomCategory)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_7_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCategory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
