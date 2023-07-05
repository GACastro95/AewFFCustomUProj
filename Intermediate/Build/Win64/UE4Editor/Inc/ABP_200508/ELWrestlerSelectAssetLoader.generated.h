// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWrestlerSetupParam;
struct FSoftObjectPath;
enum class EWrestlerID_N : uint8;
struct FGuid;
#ifdef ABP_200508_ELWrestlerSelectAssetLoader_generated_h
#error "ELWrestlerSelectAssetLoader.generated.h already included, missing '#pragma once' in ELWrestlerSelectAssetLoader.h"
#endif
#define ABP_200508_ELWrestlerSelectAssetLoader_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoadedOnlineAsset); \
	DECLARE_FUNCTION(execLoadAsyncAssets); \
	DECLARE_FUNCTION(execLoadAsyncOnlineAssets); \
	DECLARE_FUNCTION(execReleaseAssets);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoadedOnlineAsset); \
	DECLARE_FUNCTION(execLoadAsyncAssets); \
	DECLARE_FUNCTION(execLoadAsyncOnlineAssets); \
	DECLARE_FUNCTION(execReleaseAssets);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELWrestlerSelectAssetLoader(); \
	friend struct Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics; \
public: \
	DECLARE_CLASS(UELWrestlerSelectAssetLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELWrestlerSelectAssetLoader)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELWrestlerSelectAssetLoader(); \
	friend struct Z_Construct_UClass_UELWrestlerSelectAssetLoader_Statics; \
public: \
	DECLARE_CLASS(UELWrestlerSelectAssetLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELWrestlerSelectAssetLoader)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELWrestlerSelectAssetLoader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELWrestlerSelectAssetLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELWrestlerSelectAssetLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELWrestlerSelectAssetLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELWrestlerSelectAssetLoader(UELWrestlerSelectAssetLoader&&); \
	NO_API UELWrestlerSelectAssetLoader(const UELWrestlerSelectAssetLoader&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELWrestlerSelectAssetLoader(UELWrestlerSelectAssetLoader&&); \
	NO_API UELWrestlerSelectAssetLoader(const UELWrestlerSelectAssetLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELWrestlerSelectAssetLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELWrestlerSelectAssetLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELWrestlerSelectAssetLoader)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_PositionIndex() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_PositionIndex); } \
	FORCEINLINE static uint32 __PPO__m_WrestlerID() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerID); } \
	FORCEINLINE static uint32 __PPO__m_WrestlerUID() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerUID); } \
	FORCEINLINE static uint32 __PPO__m_PresetIndex() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_PresetIndex); } \
	FORCEINLINE static uint32 __PPO__m_WrestlerSetupParam() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, m_WrestlerSetupParam); } \
	FORCEINLINE static uint32 __PPO__LoadCompleteDelegate() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, LoadCompleteDelegate); } \
	FORCEINLINE static uint32 __PPO__LoadOnlineCompleteDelegate() { return STRUCT_OFFSET(UELWrestlerSelectAssetLoader, LoadOnlineCompleteDelegate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELWrestlerSelectAssetLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSelectAssetLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
