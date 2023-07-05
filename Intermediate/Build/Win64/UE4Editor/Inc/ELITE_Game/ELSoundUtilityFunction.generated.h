// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
enum class ECrowdChantType_N : uint8;
class USoundAtomCue;
struct FAtomCueMusic;
class UObject;
class UAtomComponent;
struct FVector;
class USceneComponent;
class USkeletalMeshComponent;
#ifdef ELITE_GAME_ELSoundUtilityFunction_generated_h
#error "ELSoundUtilityFunction.generated.h already included, missing '#pragma once' in ELSoundUtilityFunction.h"
#endif
#define ELITE_GAME_ELSoundUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrowdChantCue); \
	DECLARE_FUNCTION(execGetMusicRowNames); \
	DECLARE_FUNCTION(execGetMusicTabaleCueList); \
	DECLARE_FUNCTION(execPlaySound2D_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySound2D_ForID); \
	DECLARE_FUNCTION(execPlaySound2D_ForString); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForID); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForString); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForID); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForString); \
	DECLARE_FUNCTION(execPlayVoice_ForCueEvent); \
	DECLARE_FUNCTION(execPlayVoice_ForID); \
	DECLARE_FUNCTION(execPlayVoice_ForString); \
	DECLARE_FUNCTION(execSetDebugDisableSound);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrowdChantCue); \
	DECLARE_FUNCTION(execGetMusicRowNames); \
	DECLARE_FUNCTION(execGetMusicTabaleCueList); \
	DECLARE_FUNCTION(execPlaySound2D_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySound2D_ForID); \
	DECLARE_FUNCTION(execPlaySound2D_ForString); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForID); \
	DECLARE_FUNCTION(execPlaySoundAtLocation_ForString); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForCueEvent); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForID); \
	DECLARE_FUNCTION(execPlaySoundAttached_ForString); \
	DECLARE_FUNCTION(execPlayVoice_ForCueEvent); \
	DECLARE_FUNCTION(execPlayVoice_ForID); \
	DECLARE_FUNCTION(execPlayVoice_ForString); \
	DECLARE_FUNCTION(execSetDebugDisableSound);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSoundUtilityFunction(); \
	friend struct Z_Construct_UClass_UELSoundUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELSoundUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELSoundUtilityFunction)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELSoundUtilityFunction(); \
	friend struct Z_Construct_UClass_UELSoundUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELSoundUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELSoundUtilityFunction)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSoundUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSoundUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSoundUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSoundUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSoundUtilityFunction(UELSoundUtilityFunction&&); \
	NO_API UELSoundUtilityFunction(const UELSoundUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSoundUtilityFunction(UELSoundUtilityFunction&&); \
	NO_API UELSoundUtilityFunction(const UELSoundUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSoundUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSoundUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSoundUtilityFunction)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_16_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELSoundUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELSoundUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
