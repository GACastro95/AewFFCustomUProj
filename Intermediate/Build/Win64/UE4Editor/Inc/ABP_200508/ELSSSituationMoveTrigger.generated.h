// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
class USceneComponent;
class AELSSPlayer;
class UBoxComponent;
#ifdef ABP_200508_ELSSSituationMoveTrigger_generated_h
#error "ELSSSituationMoveTrigger.generated.h already included, missing '#pragma once' in ELSSSituationMoveTrigger.h"
#endif
#define ABP_200508_ELSSSituationMoveTrigger_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_RPC_WRAPPERS \
	virtual void ExecuteSituation_Implementation(); \
	virtual USceneComponent* GetIdealLocationComponent_Implementation(int32 inMoveId) const; \
	virtual FTransform GetIdealTransform_Implementation(FTransform const& inReceiverTransform, int32 inMoveId) const; \
	virtual int32 GetMoveId_Implementation(AELSSPlayer* inAttackPlayer, AELSSPlayer* inReceivePlayer) const; \
 \
	DECLARE_FUNCTION(execExecuteSituation); \
	DECLARE_FUNCTION(execGetCameraOffset); \
	DECLARE_FUNCTION(execGetIdealLocation); \
	DECLARE_FUNCTION(execGetIdealLocationComponent); \
	DECLARE_FUNCTION(execGetIdealTransform); \
	DECLARE_FUNCTION(execGetMoveId); \
	DECLARE_FUNCTION(execGetTriggerCollision); \
	DECLARE_FUNCTION(execGetWaitReactionRowName); \
	DECLARE_FUNCTION(execIsDisableCamera);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteSituation_Implementation(); \
	virtual USceneComponent* GetIdealLocationComponent_Implementation(int32 inMoveId) const; \
	virtual FTransform GetIdealTransform_Implementation(FTransform const& inReceiverTransform, int32 inMoveId) const; \
	virtual int32 GetMoveId_Implementation(AELSSPlayer* inAttackPlayer, AELSSPlayer* inReceivePlayer) const; \
 \
	DECLARE_FUNCTION(execExecuteSituation); \
	DECLARE_FUNCTION(execGetCameraOffset); \
	DECLARE_FUNCTION(execGetIdealLocation); \
	DECLARE_FUNCTION(execGetIdealLocationComponent); \
	DECLARE_FUNCTION(execGetIdealTransform); \
	DECLARE_FUNCTION(execGetMoveId); \
	DECLARE_FUNCTION(execGetTriggerCollision); \
	DECLARE_FUNCTION(execGetWaitReactionRowName); \
	DECLARE_FUNCTION(execIsDisableCamera);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_EVENT_PARMS \
	struct ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms \
	{ \
		int32 inMoveId; \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSSituationMoveTrigger_eventGetIdealTransform_Parms \
	{ \
		FTransform inReceiverTransform; \
		int32 inMoveId; \
		FTransform ReturnValue; \
	}; \
	struct ELSSSituationMoveTrigger_eventGetMoveId_Parms \
	{ \
		AELSSPlayer* inAttackPlayer; \
		AELSSPlayer* inReceivePlayer; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSSituationMoveTrigger_eventGetMoveId_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSSituationMoveTrigger(); \
	friend struct Z_Construct_UClass_AELSSSituationMoveTrigger_Statics; \
public: \
	DECLARE_CLASS(AELSSSituationMoveTrigger, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSituationMoveTrigger)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELSSSituationMoveTrigger(); \
	friend struct Z_Construct_UClass_AELSSSituationMoveTrigger_Statics; \
public: \
	DECLARE_CLASS(AELSSSituationMoveTrigger, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSituationMoveTrigger)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSSituationMoveTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSSituationMoveTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSituationMoveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSituationMoveTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSituationMoveTrigger(AELSSSituationMoveTrigger&&); \
	NO_API AELSSSituationMoveTrigger(const AELSSSituationMoveTrigger&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSituationMoveTrigger(AELSSSituationMoveTrigger&&); \
	NO_API AELSSSituationMoveTrigger(const AELSSSituationMoveTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSituationMoveTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSituationMoveTrigger); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSSituationMoveTrigger)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerCollision() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, TriggerCollision); } \
	FORCEINLINE static uint32 __PPO__IdealLocation() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, IdealLocation); } \
	FORCEINLINE static uint32 __PPO__MoveIdNormal() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdNormal); } \
	FORCEINLINE static uint32 __PPO__MoveIdNormalBackDamage() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdNormalBackDamage); } \
	FORCEINLINE static uint32 __PPO__MoveIdHighFly() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdHighFly); } \
	FORCEINLINE static uint32 __PPO__MoveIdHighFlyBackDamage() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdHighFlyBackDamage); } \
	FORCEINLINE static uint32 __PPO__MoveIdPower() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdPower); } \
	FORCEINLINE static uint32 __PPO__MoveIdPowerBackDamage() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdPowerBackDamage); } \
	FORCEINLINE static uint32 __PPO__DisableCamera() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, DisableCamera); } \
	FORCEINLINE static uint32 __PPO__WaitReactionRowName() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, WaitReactionRowName); } \
	FORCEINLINE static uint32 __PPO__OffsetToReceiverY() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, OffsetToReceiverY); } \
	FORCEINLINE static uint32 __PPO__OffsetCamera() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, OffsetCamera); } \
	FORCEINLINE static uint32 __PPO__DisableIdealLocation() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, DisableIdealLocation); } \
	FORCEINLINE static uint32 __PPO__DisableCameraLocator() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, DisableCameraLocator); } \
	FORCEINLINE static uint32 __PPO__DisableForwardCheck() { return STRUCT_OFFSET(AELSSSituationMoveTrigger, DisableForwardCheck); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSSituationMoveTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSituationMoveTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
