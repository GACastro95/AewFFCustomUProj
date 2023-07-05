// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSShieldParam;
class AActor;
#ifdef ABP_200508_ELSSShieldBase_generated_h
#error "ELSSShieldBase.generated.h already included, missing '#pragma once' in ELSSShieldBase.h"
#endif
#define ABP_200508_ELSSShieldBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_RPC_WRAPPERS \
	virtual void Setup_Implementation(FSSShieldParam const& shieldParam); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execGetRemainDurabilityRatio); \
	DECLARE_FUNCTION(execOnEndPerformAbsorbMovement); \
	DECLARE_FUNCTION(execOnRep_AbsorbMoveTo); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execPerformAbsorbMovement); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartAbsorbMovement);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Setup_Implementation(FSSShieldParam const& shieldParam); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execAddDurabilityByRate); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execGetRemainDurabilityRatio); \
	DECLARE_FUNCTION(execOnEndPerformAbsorbMovement); \
	DECLARE_FUNCTION(execOnRep_AbsorbMoveTo); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execPerformAbsorbMovement); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartAbsorbMovement);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_EVENT_PARMS \
	struct ELSSShieldBase_eventSetup_Parms \
	{ \
		FSSShieldParam shieldParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSShieldBase(); \
	friend struct Z_Construct_UClass_AELSSShieldBase_Statics; \
public: \
	DECLARE_CLASS(AELSSShieldBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSShieldBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemainDurability=NETFIELD_REP_START, \
		AbsorbMoveTo, \
		NETFIELD_REP_END=AbsorbMoveTo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELSSShieldBase(); \
	friend struct Z_Construct_UClass_AELSSShieldBase_Statics; \
public: \
	DECLARE_CLASS(AELSSShieldBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSShieldBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemainDurability=NETFIELD_REP_START, \
		AbsorbMoveTo, \
		NETFIELD_REP_END=AbsorbMoveTo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSShieldBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSShieldBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSShieldBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSShieldBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSShieldBase(AELSSShieldBase&&); \
	NO_API AELSSShieldBase(const AELSSShieldBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSShieldBase(AELSSShieldBase&&); \
	NO_API AELSSShieldBase(const AELSSShieldBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSShieldBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSShieldBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSShieldBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSShieldBase, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__MaxDurability() { return STRUCT_OFFSET(AELSSShieldBase, MaxDurability); } \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSShieldBase, RemainDurability); } \
	FORCEINLINE static uint32 __PPO__IsEnableAbsorbMovement() { return STRUCT_OFFSET(AELSSShieldBase, IsEnableAbsorbMovement); } \
	FORCEINLINE static uint32 __PPO__IsPerformAbsorbMovement() { return STRUCT_OFFSET(AELSSShieldBase, IsPerformAbsorbMovement); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementDelay() { return STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementDelay); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementDuration() { return STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementDuration); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementTimer() { return STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementTimer); } \
	FORCEINLINE static uint32 __PPO__PickupStartLocation() { return STRUCT_OFFSET(AELSSShieldBase, PickupStartLocation); } \
	FORCEINLINE static uint32 __PPO__OriginalScale() { return STRUCT_OFFSET(AELSSShieldBase, OriginalScale); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementEndScale() { return STRUCT_OFFSET(AELSSShieldBase, AbsorbMovementEndScale); } \
	FORCEINLINE static uint32 __PPO__AbsorbMoveTo() { return STRUCT_OFFSET(AELSSShieldBase, AbsorbMoveTo); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSShieldBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSShieldBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
