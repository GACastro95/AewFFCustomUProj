// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FyStSoundAssetDataTable;
struct FyStSoundPlayInfo;
#ifdef ELITE_GAME_ELSoundInfo_generated_h
#error "ELSoundInfo.generated.h already included, missing '#pragma once' in ELSoundInfo.h"
#endif
#define ELITE_GAME_ELSoundInfo_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSoundAssetDataTables); \
	DECLARE_FUNCTION(execGetSoundPlayInfo); \
	DECLARE_FUNCTION(execIsStackPlaySound); \
	DECLARE_FUNCTION(execSetSoundAssetDataTables); \
	DECLARE_FUNCTION(execSetSoundPlayInfo); \
	DECLARE_FUNCTION(execSetStackPlaySound);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSoundAssetDataTables); \
	DECLARE_FUNCTION(execGetSoundPlayInfo); \
	DECLARE_FUNCTION(execIsStackPlaySound); \
	DECLARE_FUNCTION(execSetSoundAssetDataTables); \
	DECLARE_FUNCTION(execSetSoundPlayInfo); \
	DECLARE_FUNCTION(execSetStackPlaySound);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSoundInfo(); \
	friend struct Z_Construct_UClass_UELSoundInfo_Statics; \
public: \
	DECLARE_CLASS(UELSoundInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELSoundInfo)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELSoundInfo(); \
	friend struct Z_Construct_UClass_UELSoundInfo_Statics; \
public: \
	DECLARE_CLASS(UELSoundInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELSoundInfo)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSoundInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSoundInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSoundInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSoundInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSoundInfo(UELSoundInfo&&); \
	NO_API UELSoundInfo(const UELSoundInfo&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSoundInfo(UELSoundInfo&&); \
	NO_API UELSoundInfo(const UELSoundInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSoundInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSoundInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSoundInfo)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_8_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELSoundInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
