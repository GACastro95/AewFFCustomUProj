// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class AELSSPlayer;
#ifdef ABP_200508_ELSSAIController_generated_h
#error "ELSSAIController.generated.h already included, missing '#pragma once' in ELSSAIController.h"
#endif
#define ABP_200508_ELSSAIController_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_RPC_WRAPPERS \
	virtual void SetupAI_Implementation(); \
 \
	DECLARE_FUNCTION(execCalcNewAITargetByHate); \
	DECLARE_FUNCTION(execClearHateActors); \
	DECLARE_FUNCTION(execCommandAbility); \
	DECLARE_FUNCTION(execCommandDashGrapple); \
	DECLARE_FUNCTION(execCommandGrapple); \
	DECLARE_FUNCTION(execCommandGuard); \
	DECLARE_FUNCTION(execCommandInteract); \
	DECLARE_FUNCTION(execCommandJump); \
	DECLARE_FUNCTION(execCommandKoFinisher); \
	DECLARE_FUNCTION(execCommandMoveCurrentInventory); \
	DECLARE_FUNCTION(execCommandStrike1); \
	DECLARE_FUNCTION(execCommandStrike2); \
	DECLARE_FUNCTION(execCommandTaunt); \
	DECLARE_FUNCTION(execCommandUseItem); \
	DECLARE_FUNCTION(execCommandWeaponGunFire); \
	DECLARE_FUNCTION(execCommandWeaponThrow); \
	DECLARE_FUNCTION(execCommandWeaponTrap); \
	DECLARE_FUNCTION(execGetAddMovementInputToActorForwardTimer); \
	DECLARE_FUNCTION(execSetAddMovementInputToActorForward); \
	DECLARE_FUNCTION(execSetDisableAI); \
	DECLARE_FUNCTION(execSetupAI); \
	DECLARE_FUNCTION(execUpdateHateActors);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupAI_Implementation(); \
 \
	DECLARE_FUNCTION(execCalcNewAITargetByHate); \
	DECLARE_FUNCTION(execClearHateActors); \
	DECLARE_FUNCTION(execCommandAbility); \
	DECLARE_FUNCTION(execCommandDashGrapple); \
	DECLARE_FUNCTION(execCommandGrapple); \
	DECLARE_FUNCTION(execCommandGuard); \
	DECLARE_FUNCTION(execCommandInteract); \
	DECLARE_FUNCTION(execCommandJump); \
	DECLARE_FUNCTION(execCommandKoFinisher); \
	DECLARE_FUNCTION(execCommandMoveCurrentInventory); \
	DECLARE_FUNCTION(execCommandStrike1); \
	DECLARE_FUNCTION(execCommandStrike2); \
	DECLARE_FUNCTION(execCommandTaunt); \
	DECLARE_FUNCTION(execCommandUseItem); \
	DECLARE_FUNCTION(execCommandWeaponGunFire); \
	DECLARE_FUNCTION(execCommandWeaponThrow); \
	DECLARE_FUNCTION(execCommandWeaponTrap); \
	DECLARE_FUNCTION(execGetAddMovementInputToActorForwardTimer); \
	DECLARE_FUNCTION(execSetAddMovementInputToActorForward); \
	DECLARE_FUNCTION(execSetDisableAI); \
	DECLARE_FUNCTION(execSetupAI); \
	DECLARE_FUNCTION(execUpdateHateActors);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_EVENT_PARMS \
	struct ELSSAIController_eventGetAITargetActor_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSAIController_eventGetAITargetActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSAIController_eventGetAITargetLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSAIController_eventGetAITargetLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSAIController_eventGetAITargetPlayer_Parms \
	{ \
		AELSSPlayer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSAIController_eventGetAITargetPlayer_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSAIController(); \
	friend struct Z_Construct_UClass_AELSSAIController_Statics; \
public: \
	DECLARE_CLASS(AELSSAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSAIController(); \
	friend struct Z_Construct_UClass_AELSSAIController_Statics; \
public: \
	DECLARE_CLASS(AELSSAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSAIController(AELSSAIController&&); \
	NO_API AELSSAIController(const AELSSAIController&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSAIController(AELSSAIController&&); \
	NO_API AELSSAIController(const AELSSAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSAIController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HateActors() { return STRUCT_OFFSET(AELSSAIController, HateActors); } \
	FORCEINLINE static uint32 __PPO__HateActorsMax() { return STRUCT_OFFSET(AELSSAIController, HateActorsMax); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
