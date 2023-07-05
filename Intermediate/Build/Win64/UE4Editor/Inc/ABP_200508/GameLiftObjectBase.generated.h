// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSTitleStorageEvent : uint8;
class UEOSTitleStorageBase;
struct FEOSTitleStorageProgress;
#ifdef ABP_200508_GameLiftObjectBase_generated_h
#error "GameLiftObjectBase.generated.h already included, missing '#pragma once' in GameLiftObjectBase.h"
#endif
#define ABP_200508_GameLiftObjectBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDownloadingSSModeServiceParam); \
	DECLARE_FUNCTION(execIsRegionInfoEnd); \
	DECLARE_FUNCTION(execIsRegionLatencyUpdateEnd); \
	DECLARE_FUNCTION(execOnEnterSSMode); \
	DECLARE_FUNCTION(execOnExitSSMode); \
	DECLARE_FUNCTION(execOnTitleStorageEvent); \
	DECLARE_FUNCTION(execOnUpdateSSModeServiceParam); \
	DECLARE_FUNCTION(execRequestDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execStartTargetRegionLatencyData); \
	DECLARE_FUNCTION(execUpdateTargetRegionLatencyData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDownloadingSSModeServiceParam); \
	DECLARE_FUNCTION(execIsRegionInfoEnd); \
	DECLARE_FUNCTION(execIsRegionLatencyUpdateEnd); \
	DECLARE_FUNCTION(execOnEnterSSMode); \
	DECLARE_FUNCTION(execOnExitSSMode); \
	DECLARE_FUNCTION(execOnTitleStorageEvent); \
	DECLARE_FUNCTION(execOnUpdateSSModeServiceParam); \
	DECLARE_FUNCTION(execRequestDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execStartTargetRegionLatencyData); \
	DECLARE_FUNCTION(execUpdateTargetRegionLatencyData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameLiftObjectBase(); \
	friend struct Z_Construct_UClass_UGameLiftObjectBase_Statics; \
public: \
	DECLARE_CLASS(UGameLiftObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameLiftObjectBase(); \
	friend struct Z_Construct_UClass_UGameLiftObjectBase_Statics; \
public: \
	DECLARE_CLASS(UGameLiftObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameLiftObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameLiftObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftObjectBase(UGameLiftObjectBase&&); \
	NO_API UGameLiftObjectBase(const UGameLiftObjectBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftObjectBase(UGameLiftObjectBase&&); \
	NO_API UGameLiftObjectBase(const UGameLiftObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftObjectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameLiftObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastTitleStorageEvent() { return STRUCT_OFFSET(UGameLiftObjectBase, LastTitleStorageEvent); }


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGameLiftObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GameLiftObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
