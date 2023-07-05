// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
struct FSSItemParam;
class AActor;
#ifdef ABP_200508_ELSSItemBase_generated_h
#error "ELSSItemBase.generated.h already included, missing '#pragma once' in ELSSItemBase.h"
#endif
#define ABP_200508_ELSSItemBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_RPC_WRAPPERS \
	virtual void Setup_Implementation(FSSItemParam const& ItemParam); \
 \
	DECLARE_FUNCTION(execAddStock); \
	DECLARE_FUNCTION(execGetIsUsedItem); \
	DECLARE_FUNCTION(execOnEndPerformAbsorbMovement); \
	DECLARE_FUNCTION(execOnRep_AbsorbMoveTo); \
	DECLARE_FUNCTION(execPerformAbsorbMovement); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartAbsorbMovement); \
	DECLARE_FUNCTION(execUseItem);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Setup_Implementation(FSSItemParam const& ItemParam); \
 \
	DECLARE_FUNCTION(execAddStock); \
	DECLARE_FUNCTION(execGetIsUsedItem); \
	DECLARE_FUNCTION(execOnEndPerformAbsorbMovement); \
	DECLARE_FUNCTION(execOnRep_AbsorbMoveTo); \
	DECLARE_FUNCTION(execPerformAbsorbMovement); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStartAbsorbMovement); \
	DECLARE_FUNCTION(execUseItem);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_EVENT_PARMS \
	struct ELSSItemBase_eventSetup_Parms \
	{ \
		FSSItemParam ItemParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSItemBase(); \
	friend struct Z_Construct_UClass_AELSSItemBase_Statics; \
public: \
	DECLARE_CLASS(AELSSItemBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsUsedItem=NETFIELD_REP_START, \
		AbsorbMoveTo, \
		NETFIELD_REP_END=AbsorbMoveTo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAELSSItemBase(); \
	friend struct Z_Construct_UClass_AELSSItemBase_Statics; \
public: \
	DECLARE_CLASS(AELSSItemBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsUsedItem=NETFIELD_REP_START, \
		AbsorbMoveTo, \
		NETFIELD_REP_END=AbsorbMoveTo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemBase(AELSSItemBase&&); \
	NO_API AELSSItemBase(const AELSSItemBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemBase(AELSSItemBase&&); \
	NO_API AELSSItemBase(const AELSSItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSItemBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AELSSItemBase, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSItemBase, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__DefaultMeshScale() { return STRUCT_OFFSET(AELSSItemBase, DefaultMeshScale); } \
	FORCEINLINE static uint32 __PPO__ScaleWhenDrop() { return STRUCT_OFFSET(AELSSItemBase, ScaleWhenDrop); } \
	FORCEINLINE static uint32 __PPO__IsEnableAbsorbMovement() { return STRUCT_OFFSET(AELSSItemBase, IsEnableAbsorbMovement); } \
	FORCEINLINE static uint32 __PPO__IsPerformAbsorbMovement() { return STRUCT_OFFSET(AELSSItemBase, IsPerformAbsorbMovement); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementDelay() { return STRUCT_OFFSET(AELSSItemBase, AbsorbMovementDelay); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementDuration() { return STRUCT_OFFSET(AELSSItemBase, AbsorbMovementDuration); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementTimer() { return STRUCT_OFFSET(AELSSItemBase, AbsorbMovementTimer); } \
	FORCEINLINE static uint32 __PPO__PickupStartLocation() { return STRUCT_OFFSET(AELSSItemBase, PickupStartLocation); } \
	FORCEINLINE static uint32 __PPO__OriginalScale() { return STRUCT_OFFSET(AELSSItemBase, OriginalScale); } \
	FORCEINLINE static uint32 __PPO__AbsorbMovementEndScale() { return STRUCT_OFFSET(AELSSItemBase, AbsorbMovementEndScale); } \
	FORCEINLINE static uint32 __PPO__AbsorbMoveTo() { return STRUCT_OFFSET(AELSSItemBase, AbsorbMoveTo); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
