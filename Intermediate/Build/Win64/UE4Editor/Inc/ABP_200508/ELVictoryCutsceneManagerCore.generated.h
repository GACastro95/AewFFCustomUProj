// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCharacter_Native;
class UAnimMontage;
struct FVector;
struct FRotator;
enum class EELVictoryCutsceneType : uint8;
class USkeletalMeshComponent;
class ALevelSequenceActor;
#ifdef ABP_200508_ELVictoryCutsceneManagerCore_generated_h
#error "ELVictoryCutsceneManagerCore.generated.h already included, missing '#pragma once' in ELVictoryCutsceneManagerCore.h"
#endif
#define ABP_200508_ELVictoryCutsceneManagerCore_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLoser); \
	DECLARE_FUNCTION(execGetMontageParameter); \
	DECLARE_FUNCTION(execGetMontageParameterForReferee); \
	DECLARE_FUNCTION(execGetWinner); \
	DECLARE_FUNCTION(execLoadAsset); \
	DECLARE_FUNCTION(execOnEndVictoryMotion_N); \
	DECLARE_FUNCTION(execSetCastInfo); \
	DECLARE_FUNCTION(execSetCharacters); \
	DECLARE_FUNCTION(execStartVictoryMotion); \
	DECLARE_FUNCTION(execUnloadAssets);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLoser); \
	DECLARE_FUNCTION(execGetMontageParameter); \
	DECLARE_FUNCTION(execGetMontageParameterForReferee); \
	DECLARE_FUNCTION(execGetWinner); \
	DECLARE_FUNCTION(execLoadAsset); \
	DECLARE_FUNCTION(execOnEndVictoryMotion_N); \
	DECLARE_FUNCTION(execSetCastInfo); \
	DECLARE_FUNCTION(execSetCharacters); \
	DECLARE_FUNCTION(execStartVictoryMotion); \
	DECLARE_FUNCTION(execUnloadAssets);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELVictoryCutsceneManagerCore(); \
	friend struct Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics; \
public: \
	DECLARE_CLASS(AELVictoryCutsceneManagerCore, AELNetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELVictoryCutsceneManagerCore)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELVictoryCutsceneManagerCore(); \
	friend struct Z_Construct_UClass_AELVictoryCutsceneManagerCore_Statics; \
public: \
	DECLARE_CLASS(AELVictoryCutsceneManagerCore, AELNetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELVictoryCutsceneManagerCore)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELVictoryCutsceneManagerCore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELVictoryCutsceneManagerCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELVictoryCutsceneManagerCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELVictoryCutsceneManagerCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELVictoryCutsceneManagerCore(AELVictoryCutsceneManagerCore&&); \
	NO_API AELVictoryCutsceneManagerCore(const AELVictoryCutsceneManagerCore&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELVictoryCutsceneManagerCore(AELVictoryCutsceneManagerCore&&); \
	NO_API AELVictoryCutsceneManagerCore(const AELVictoryCutsceneManagerCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELVictoryCutsceneManagerCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELVictoryCutsceneManagerCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELVictoryCutsceneManagerCore)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELVictoryCutsceneManagerCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManagerCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
