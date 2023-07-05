// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
struct FRotator;
class ACharacter;
struct FAnimNotifyEvent;
class UAnimSequenceBase;
class UAnimNotify;
class UAnimMontage;
class UAnimNotifyState;
struct FTransform;
#ifdef ABP_200508_MotionUtilityFunctionLibrary_generated_h
#error "MotionUtilityFunctionLibrary.generated.h already included, missing '#pragma once' in MotionUtilityFunctionLibrary.h"
#endif
#define ABP_200508_MotionUtilityFunctionLibrary_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallRefreshBoneTransforms); \
	DECLARE_FUNCTION(execConvertMotionBuilderEulerToUnrealEngineEuler); \
	DECLARE_FUNCTION(execDisableRootMotion); \
	DECLARE_FUNCTION(execFindAnimNotify); \
	DECLARE_FUNCTION(execFindAnimNotifyInSlot); \
	DECLARE_FUNCTION(execFindAnimNotifyInSlotAll); \
	DECLARE_FUNCTION(execFindAnimNotifyNearestPosition); \
	DECLARE_FUNCTION(execFindAnimNotifys); \
	DECLARE_FUNCTION(execFindAnimNotifyState); \
	DECLARE_FUNCTION(execGetAnimNotifyStateDuration); \
	DECLARE_FUNCTION(execGetMontageDirection); \
	DECLARE_FUNCTION(execGetMontageLocation); \
	DECLARE_FUNCTION(execGetMontageMoveDirection); \
	DECLARE_FUNCTION(execGetMontageRootTransform); \
	DECLARE_FUNCTION(execGetMontageTransform); \
	DECLARE_FUNCTION(execIsExistAnimNotify); \
	DECLARE_FUNCTION(execIsExistAnimNotifyState);


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallRefreshBoneTransforms); \
	DECLARE_FUNCTION(execConvertMotionBuilderEulerToUnrealEngineEuler); \
	DECLARE_FUNCTION(execDisableRootMotion); \
	DECLARE_FUNCTION(execFindAnimNotify); \
	DECLARE_FUNCTION(execFindAnimNotifyInSlot); \
	DECLARE_FUNCTION(execFindAnimNotifyInSlotAll); \
	DECLARE_FUNCTION(execFindAnimNotifyNearestPosition); \
	DECLARE_FUNCTION(execFindAnimNotifys); \
	DECLARE_FUNCTION(execFindAnimNotifyState); \
	DECLARE_FUNCTION(execGetAnimNotifyStateDuration); \
	DECLARE_FUNCTION(execGetMontageDirection); \
	DECLARE_FUNCTION(execGetMontageLocation); \
	DECLARE_FUNCTION(execGetMontageMoveDirection); \
	DECLARE_FUNCTION(execGetMontageRootTransform); \
	DECLARE_FUNCTION(execGetMontageTransform); \
	DECLARE_FUNCTION(execIsExistAnimNotify); \
	DECLARE_FUNCTION(execIsExistAnimNotifyState);


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMotionUtilityFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMotionUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMotionUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMotionUtilityFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionUtilityFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionUtilityFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionUtilityFunctionLibrary(UMotionUtilityFunctionLibrary&&); \
	NO_API UMotionUtilityFunctionLibrary(const UMotionUtilityFunctionLibrary&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionUtilityFunctionLibrary(UMotionUtilityFunctionLibrary&&); \
	NO_API UMotionUtilityFunctionLibrary(const UMotionUtilityFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionUtilityFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionUtilityFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UMotionUtilityFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MotionUtilityFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
