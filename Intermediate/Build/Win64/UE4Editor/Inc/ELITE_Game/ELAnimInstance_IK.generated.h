// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELIKPartType : uint8;
enum class EWrestlerAP : uint8;
struct FVector;
struct FTransform;
struct FELCutsceneIKParameter;
class USkeletalMeshComponent;
struct FELAttachCondition;
#ifdef ELITE_GAME_ELAnimInstance_IK_generated_h
#error "ELAnimInstance_IK.generated.h already included, missing '#pragma once' in ELAnimInstance_IK.h"
#endif
#define ELITE_GAME_ELAnimInstance_IK_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertPartType2NodeName); \
	DECLARE_FUNCTION(execConvertWrestlerAP2NodeName); \
	DECLARE_FUNCTION(execFinishAllIK); \
	DECLARE_FUNCTION(execFinishConstraint); \
	DECLARE_FUNCTION(execFinishIK); \
	DECLARE_FUNCTION(execGetBone2NodeName); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetEffectBoneLocation); \
	DECLARE_FUNCTION(execGetIKParam); \
	DECLARE_FUNCTION(execGetPartParam); \
	DECLARE_FUNCTION(execIsControlIK); \
	DECLARE_FUNCTION(execIsSupportNodeName); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execStartConstraint); \
	DECLARE_FUNCTION(execStartConstraintBySocket); \
	DECLARE_FUNCTION(execStartConstraintByType); \
	DECLARE_FUNCTION(execStartLocationIK); \
	DECLARE_FUNCTION(execTransformBoneSpaceLocation);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertPartType2NodeName); \
	DECLARE_FUNCTION(execConvertWrestlerAP2NodeName); \
	DECLARE_FUNCTION(execFinishAllIK); \
	DECLARE_FUNCTION(execFinishConstraint); \
	DECLARE_FUNCTION(execFinishIK); \
	DECLARE_FUNCTION(execGetBone2NodeName); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetEffectBoneLocation); \
	DECLARE_FUNCTION(execGetIKParam); \
	DECLARE_FUNCTION(execGetPartParam); \
	DECLARE_FUNCTION(execIsControlIK); \
	DECLARE_FUNCTION(execIsSupportNodeName); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execStartConstraint); \
	DECLARE_FUNCTION(execStartConstraintBySocket); \
	DECLARE_FUNCTION(execStartConstraintByType); \
	DECLARE_FUNCTION(execStartLocationIK); \
	DECLARE_FUNCTION(execTransformBoneSpaceLocation);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_EVENT_PARMS \
	struct ELAnimInstance_IK_eventUpdateVector_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAnimInstance_IK(); \
	friend struct Z_Construct_UClass_UELAnimInstance_IK_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_IK, UAnimInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_IK) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELAnimInstance_IK(); \
	friend struct Z_Construct_UClass_UELAnimInstance_IK_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_IK, UAnimInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_IK) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAnimInstance_IK(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAnimInstance_IK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_IK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_IK); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_IK(UELAnimInstance_IK&&); \
	NO_API UELAnimInstance_IK(const UELAnimInstance_IK&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_IK(UELAnimInstance_IK&&); \
	NO_API UELAnimInstance_IK(const UELAnimInstance_IK&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_IK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_IK); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELAnimInstance_IK)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableIK() { return STRUCT_OFFSET(UELAnimInstance_IK, bEnableIK); } \
	FORCEINLINE static uint32 __PPO__bDisableUpdate() { return STRUCT_OFFSET(UELAnimInstance_IK, bDisableUpdate); } \
	FORCEINLINE static uint32 __PPO__IKParameters() { return STRUCT_OFFSET(UELAnimInstance_IK, IKParameters); } \
	FORCEINLINE static uint32 __PPO__EffectBoneList() { return STRUCT_OFFSET(UELAnimInstance_IK, EffectBoneList); } \
	FORCEINLINE static uint32 __PPO__AttachPointNameList() { return STRUCT_OFFSET(UELAnimInstance_IK, AttachPointNameList); }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_15_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELAnimInstance_IK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_IK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
