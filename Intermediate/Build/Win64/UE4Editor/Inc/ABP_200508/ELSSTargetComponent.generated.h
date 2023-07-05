// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSCameraHomingParam;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
struct FVector;
#ifdef ABP_200508_ELSSTargetComponent_generated_h
#error "ELSSTargetComponent.generated.h already included, missing '#pragma once' in ELSSTargetComponent.h"
#endif
#define ABP_200508_ELSSTargetComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginCameraHoming); \
	DECLARE_FUNCTION(execEndCameraHoming); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execOnBeginOverlapTargetRange); \
	DECLARE_FUNCTION(execOnEndOverlapTargetRange); \
	DECLARE_FUNCTION(execSearchTargetFromDirection); \
	DECLARE_FUNCTION(execSearchTargetInteractAttack); \
	DECLARE_FUNCTION(execUpdateTargetOnAttack);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginCameraHoming); \
	DECLARE_FUNCTION(execEndCameraHoming); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execOnBeginOverlapTargetRange); \
	DECLARE_FUNCTION(execOnEndOverlapTargetRange); \
	DECLARE_FUNCTION(execSearchTargetFromDirection); \
	DECLARE_FUNCTION(execSearchTargetInteractAttack); \
	DECLARE_FUNCTION(execUpdateTargetOnAttack);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSTargetComponent(); \
	friend struct Z_Construct_UClass_UELSSTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSTargetComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELSSTargetComponent(); \
	friend struct Z_Construct_UClass_UELSSTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSTargetComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSTargetComponent(UELSSTargetComponent&&); \
	NO_API UELSSTargetComponent(const UELSSTargetComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSTargetComponent(UELSSTargetComponent&&); \
	NO_API UELSSTargetComponent(const UELSSTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSTargetComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetRangeCollision() { return STRUCT_OFFSET(UELSSTargetComponent, TargetRangeCollision); } \
	FORCEINLINE static uint32 __PPO__TargetableActors() { return STRUCT_OFFSET(UELSSTargetComponent, TargetableActors); } \
	FORCEINLINE static uint32 __PPO__TargetVector() { return STRUCT_OFFSET(UELSSTargetComponent, TargetVector); } \
	FORCEINLINE static uint32 __PPO__TargetVectorKeepTime() { return STRUCT_OFFSET(UELSSTargetComponent, TargetVectorKeepTime); } \
	FORCEINLINE static uint32 __PPO__SearchTargetDistance() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetDistance); } \
	FORCEINLINE static uint32 __PPO__SearchTargetAngle() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetAngle); } \
	FORCEINLINE static uint32 __PPO__SearchTargetHeight() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetHeight); } \
	FORCEINLINE static uint32 __PPO__SearchTargetDistanceDifficultyScale() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetDistanceDifficultyScale); } \
	FORCEINLINE static uint32 __PPO__SearchTargetAngleDifficultyScale() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetAngleDifficultyScale); } \
	FORCEINLINE static uint32 __PPO__SearchTargetPriorityDifficultyScale() { return STRUCT_OFFSET(UELSSTargetComponent, SearchTargetPriorityDifficultyScale); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSTargetComponent, TargetActor); } \
	FORCEINLINE static uint32 __PPO__CameraHomingParam() { return STRUCT_OFFSET(UELSSTargetComponent, CameraHomingParam); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
