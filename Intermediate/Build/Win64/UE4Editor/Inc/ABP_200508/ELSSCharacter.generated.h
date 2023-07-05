// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
enum class EEditPartsSlot : uint8;
class UAnimMontage;
struct FELWrestlerProfile;
class USkeletalMesh;
class ACharacter;
enum class EWrestlerID_N : uint8;
struct FSSWrestlerSetupParam;
#ifdef ABP_200508_ELSSCharacter_generated_h
#error "ELSSCharacter.generated.h already included, missing '#pragma once' in ELSSCharacter.h"
#endif
#define ABP_200508_ELSSCharacter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySourceMeshMaterials); \
	DECLARE_FUNCTION(execGetActiveMontage); \
	DECLARE_FUNCTION(execGetWrestlerProfile); \
	DECLARE_FUNCTION(execMergeMeshes); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execReductionBodyMaterial); \
	DECLARE_FUNCTION(execSetEnableVisibleMergedMesh); \
	DECLARE_FUNCTION(execSetExtraMeshes); \
	DECLARE_FUNCTION(execSetHairMesh); \
	DECLARE_FUNCTION(execSetInsignificateMeshes); \
	DECLARE_FUNCTION(execSetSpawnedMeshChara); \
	DECLARE_FUNCTION(execSetSrcMeshComponentsToMerge); \
	DECLARE_FUNCTION(execSetWrestlerProfile); \
	DECLARE_FUNCTION(execShouldPlayFootstepSound);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySourceMeshMaterials); \
	DECLARE_FUNCTION(execGetActiveMontage); \
	DECLARE_FUNCTION(execGetWrestlerProfile); \
	DECLARE_FUNCTION(execMergeMeshes); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execReductionBodyMaterial); \
	DECLARE_FUNCTION(execSetEnableVisibleMergedMesh); \
	DECLARE_FUNCTION(execSetExtraMeshes); \
	DECLARE_FUNCTION(execSetHairMesh); \
	DECLARE_FUNCTION(execSetInsignificateMeshes); \
	DECLARE_FUNCTION(execSetSpawnedMeshChara); \
	DECLARE_FUNCTION(execSetSrcMeshComponentsToMerge); \
	DECLARE_FUNCTION(execSetWrestlerProfile); \
	DECLARE_FUNCTION(execShouldPlayFootstepSound);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_EVENT_PARMS \
	struct ELSSCharacter_eventGetVoiceId_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSCharacter_eventGetVoiceId_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSCharacter_eventSetupCharacterMesh_Parms \
	{ \
		EWrestlerID_N inWrestlerId; \
		FSSWrestlerSetupParam inWrestlerSetupParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSCharacter(); \
	friend struct Z_Construct_UClass_AELSSCharacter_Statics; \
public: \
	DECLARE_CLASS(AELSSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAELSSCharacter(); \
	friend struct Z_Construct_UClass_AELSSCharacter_Statics; \
public: \
	DECLARE_CLASS(AELSSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSCharacter(AELSSCharacter&&); \
	NO_API AELSSCharacter(const AELSSCharacter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSCharacter(AELSSCharacter&&); \
	NO_API AELSSCharacter(const AELSSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BuildBody() { return STRUCT_OFFSET(AELSSCharacter, BuildBody); } \
	FORCEINLINE static uint32 __PPO__SpawnedMeshChara() { return STRUCT_OFFSET(AELSSCharacter, SpawnedMeshChara); } \
	FORCEINLINE static uint32 __PPO__ExtraMeshes() { return STRUCT_OFFSET(AELSSCharacter, ExtraMeshes); } \
	FORCEINLINE static uint32 __PPO__InsignificateMeshes() { return STRUCT_OFFSET(AELSSCharacter, InsignificateMeshes); } \
	FORCEINLINE static uint32 __PPO__HairMesh() { return STRUCT_OFFSET(AELSSCharacter, HairMesh); } \
	FORCEINLINE static uint32 __PPO__WrestlerProfile() { return STRUCT_OFFSET(AELSSCharacter, WrestlerProfile); } \
	FORCEINLINE static uint32 __PPO__CharacterProfilesClass() { return STRUCT_OFFSET(AELSSCharacter, CharacterProfilesClass); } \
	FORCEINLINE static uint32 __PPO__CharacterProfiles() { return STRUCT_OFFSET(AELSSCharacter, CharacterProfiles); } \
	FORCEINLINE static uint32 __PPO__SrcMeshesToMerge() { return STRUCT_OFFSET(AELSSCharacter, SrcMeshesToMerge); } \
	FORCEINLINE static uint32 __PPO__SrcMeshComponentsToMerge() { return STRUCT_OFFSET(AELSSCharacter, SrcMeshComponentsToMerge); } \
	FORCEINLINE static uint32 __PPO__MergedMeshComp() { return STRUCT_OFFSET(AELSSCharacter, MergedMeshComp); } \
	FORCEINLINE static uint32 __PPO__bVisibleMergedMesh() { return STRUCT_OFFSET(AELSSCharacter, bVisibleMergedMesh); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_17_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
