// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UEliteGameSettings;
#ifdef ELITE_GAME_EliteGameSettings_generated_h
#error "EliteGameSettings.generated.h already included, missing '#pragma once' in EliteGameSettings.h"
#endif
#define ELITE_GAME_EliteGameSettings_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHomeTownTable); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetMusicListTable); \
	DECLARE_FUNCTION(execGetRingAnnounceBaseTable); \
	DECLARE_FUNCTION(execGetRingAnnounceCustomNameTable); \
	DECLARE_FUNCTION(execGetRingAnnounceTeamNameTable); \
	DECLARE_FUNCTION(execGetRingAnnounceWrestlerNameTable); \
	DECLARE_FUNCTION(execGetSfxListTable);


#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHomeTownTable); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execGetMusicListTable); \
	DECLARE_FUNCTION(execGetRingAnnounceBaseTable); \
	DECLARE_FUNCTION(execGetRingAnnounceCustomNameTable); \
	DECLARE_FUNCTION(execGetRingAnnounceTeamNameTable); \
	DECLARE_FUNCTION(execGetRingAnnounceWrestlerNameTable); \
	DECLARE_FUNCTION(execGetSfxListTable);


#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEliteGameSettings(); \
	friend struct Z_Construct_UClass_UEliteGameSettings_Statics; \
public: \
	DECLARE_CLASS(UEliteGameSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UEliteGameSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEliteGameSettings(); \
	friend struct Z_Construct_UClass_UEliteGameSettings_Statics; \
public: \
	DECLARE_CLASS(UEliteGameSettings, UELDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UEliteGameSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEliteGameSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEliteGameSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEliteGameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEliteGameSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEliteGameSettings(UEliteGameSettings&&); \
	NO_API UEliteGameSettings(const UEliteGameSettings&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEliteGameSettings(UEliteGameSettings&&); \
	NO_API UEliteGameSettings(const UEliteGameSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEliteGameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEliteGameSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEliteGameSettings)


#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_12_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UEliteGameSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EliteGameSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
