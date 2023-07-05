// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef ELITE_GAME_GameplayCamera_generated_h
#error "GameplayCamera.generated.h already included, missing '#pragma once' in GameplayCamera.h"
#endif
#define ELITE_GAME_GameplayCamera_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcCameraLocationByTargetPoints); \
	DECLARE_FUNCTION(execGetMinProjection);


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcCameraLocationByTargetPoints); \
	DECLARE_FUNCTION(execGetMinProjection);


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_EVENT_PARMS
#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCamera(); \
	friend struct Z_Construct_UClass_AGameplayCamera_Statics; \
public: \
	DECLARE_CLASS(AGameplayCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(AGameplayCamera)


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayCamera(); \
	friend struct Z_Construct_UClass_AGameplayCamera_Statics; \
public: \
	DECLARE_CLASS(AGameplayCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(AGameplayCamera)


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayCamera(AGameplayCamera&&); \
	NO_API AGameplayCamera(const AGameplayCamera&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayCamera(AGameplayCamera&&); \
	NO_API AGameplayCamera(const AGameplayCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameplayCamera)


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_8_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class AGameplayCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_GameplayCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
