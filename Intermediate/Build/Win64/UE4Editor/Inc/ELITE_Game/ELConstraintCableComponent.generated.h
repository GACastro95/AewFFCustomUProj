// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UAnimMontage;
class AActor;
struct FVector;
struct FRopeConstraintParam;
#ifdef ELITE_GAME_ELConstraintCableComponent_generated_h
#error "ELConstraintCableComponent.generated.h already included, missing '#pragma once' in ELConstraintCableComponent.h"
#endif
#define ELITE_GAME_ELConstraintCableComponent_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_RPC_WRAPPERS \
	virtual void OnMontageEnded_Implementation(UAnimMontage* Montage, bool bInterrupted); \
	virtual void UpdateConstraintLocation_Implementation(const FName SocketName, const FVector SocketLocation, const AActor* Actor, bool bDirX); \
 \
	DECLARE_FUNCTION(execAllConstraint_Finish); \
	DECLARE_FUNCTION(execAutoConstraintFinish); \
	DECLARE_FUNCTION(execConstraint_Finish); \
	DECLARE_FUNCTION(execConstraint_FinishArray); \
	DECLARE_FUNCTION(execConstraint_Start); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execUpdateConstraintLocation);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMontageEnded_Implementation(UAnimMontage* Montage, bool bInterrupted); \
	virtual void UpdateConstraintLocation_Implementation(const FName SocketName, const FVector SocketLocation, const AActor* Actor, bool bDirX); \
 \
	DECLARE_FUNCTION(execAllConstraint_Finish); \
	DECLARE_FUNCTION(execAutoConstraintFinish); \
	DECLARE_FUNCTION(execConstraint_Finish); \
	DECLARE_FUNCTION(execConstraint_FinishArray); \
	DECLARE_FUNCTION(execConstraint_Start); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execUpdateConstraintLocation);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_EVENT_PARMS \
	struct ELConstraintCableComponent_eventOnConstraintFinished_Parms \
	{ \
		const AActor* Actor; \
		FName SocketName; \
	}; \
	struct ELConstraintCableComponent_eventOnConstraintStarted_Parms \
	{ \
		FName SocketName; \
		FRopeConstraintParam Param; \
	}; \
	struct ELConstraintCableComponent_eventOnMontageEnded_Parms \
	{ \
		UAnimMontage* Montage; \
		bool bInterrupted; \
	}; \
	struct ELConstraintCableComponent_eventUpdateConstraintLocation_Parms \
	{ \
		FName SocketName; \
		FVector SocketLocation; \
		const AActor* Actor; \
		bool bDirX; \
	};


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELConstraintCableComponent(); \
	friend struct Z_Construct_UClass_UELConstraintCableComponent_Statics; \
public: \
	DECLARE_CLASS(UELConstraintCableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELConstraintCableComponent)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELConstraintCableComponent(); \
	friend struct Z_Construct_UClass_UELConstraintCableComponent_Statics; \
public: \
	DECLARE_CLASS(UELConstraintCableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELConstraintCableComponent)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELConstraintCableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELConstraintCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELConstraintCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELConstraintCableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELConstraintCableComponent(UELConstraintCableComponent&&); \
	NO_API UELConstraintCableComponent(const UELConstraintCableComponent&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELConstraintCableComponent(UELConstraintCableComponent&&); \
	NO_API UELConstraintCableComponent(const UELConstraintCableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELConstraintCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELConstraintCableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELConstraintCableComponent)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Constraints() { return STRUCT_OFFSET(UELConstraintCableComponent, Constraints); } \
	FORCEINLINE static uint32 __PPO__TriggerNotifyStateClasses() { return STRUCT_OFFSET(UELConstraintCableComponent, TriggerNotifyStateClasses); } \
	FORCEINLINE static uint32 __PPO__bCheckInsideOfMontageAnimNotifyState() { return STRUCT_OFFSET(UELConstraintCableComponent, bCheckInsideOfMontageAnimNotifyState); } \
	FORCEINLINE static uint32 __PPO__KeyNamePrefix() { return STRUCT_OFFSET(UELConstraintCableComponent, KeyNamePrefix); }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_13_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELConstraintCableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELConstraintCableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
