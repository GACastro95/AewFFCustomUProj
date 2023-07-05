// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWrestlerID_N : uint8;
#ifdef ABP_200508_ELSSOnlineTestCharacter_generated_h
#error "ELSSOnlineTestCharacter.generated.h already included, missing '#pragma once' in ELSSOnlineTestCharacter.h"
#endif
#define ABP_200508_ELSSOnlineTestCharacter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_RPC_WRAPPERS \
	virtual void Damage_Implementation(int32 NewDamage); \
	virtual void ForceHPDead_Implementation(); \
	virtual void SpawnAttackProjectile_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execDamage); \
	DECLARE_FUNCTION(execDamageLocal); \
	DECLARE_FUNCTION(execForceHPDead); \
	DECLARE_FUNCTION(execGetJoinID); \
	DECLARE_FUNCTION(execIsDeadForDestroy); \
	DECLARE_FUNCTION(execIsHPDead); \
	DECLARE_FUNCTION(execIsInputMove); \
	DECLARE_FUNCTION(execOnRep_HP); \
	DECLARE_FUNCTION(execSetJoinID); \
	DECLARE_FUNCTION(execSetWrestlerMeshParam); \
	DECLARE_FUNCTION(execSpawnAttackProjectile_RPC);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Damage_Implementation(int32 NewDamage); \
	virtual void ForceHPDead_Implementation(); \
	virtual void SpawnAttackProjectile_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execDamage); \
	DECLARE_FUNCTION(execDamageLocal); \
	DECLARE_FUNCTION(execForceHPDead); \
	DECLARE_FUNCTION(execGetJoinID); \
	DECLARE_FUNCTION(execIsDeadForDestroy); \
	DECLARE_FUNCTION(execIsHPDead); \
	DECLARE_FUNCTION(execIsInputMove); \
	DECLARE_FUNCTION(execOnRep_HP); \
	DECLARE_FUNCTION(execSetJoinID); \
	DECLARE_FUNCTION(execSetWrestlerMeshParam); \
	DECLARE_FUNCTION(execSpawnAttackProjectile_RPC);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_EVENT_PARMS \
	struct ELSSOnlineTestCharacter_eventDamage_Parms \
	{ \
		int32 NewDamage; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSOnlineTestCharacter(); \
	friend struct Z_Construct_UClass_AELSSOnlineTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AELSSOnlineTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOnlineTestCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WrestlerID=NETFIELD_REP_START, \
		joinID, \
		HP, \
		NETFIELD_REP_END=HP	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELSSOnlineTestCharacter(); \
	friend struct Z_Construct_UClass_AELSSOnlineTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AELSSOnlineTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOnlineTestCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WrestlerID=NETFIELD_REP_START, \
		joinID, \
		HP, \
		NETFIELD_REP_END=HP	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSOnlineTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSOnlineTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOnlineTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOnlineTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOnlineTestCharacter(AELSSOnlineTestCharacter&&); \
	NO_API AELSSOnlineTestCharacter(const AELSSOnlineTestCharacter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOnlineTestCharacter(AELSSOnlineTestCharacter&&); \
	NO_API AELSSOnlineTestCharacter(const AELSSOnlineTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOnlineTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOnlineTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSOnlineTestCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WrestlerID() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, WrestlerID); } \
	FORCEINLINE static uint32 __PPO__CostumeID() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, CostumeID); } \
	FORCEINLINE static uint32 __PPO__joinID() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, joinID); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, HP); } \
	FORCEINLINE static uint32 __PPO__LocalHP() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, LocalHP); } \
	FORCEINLINE static uint32 __PPO__maxHP() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, maxHP); } \
	FORCEINLINE static uint32 __PPO__dead() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, dead); } \
	FORCEINLINE static uint32 __PPO__AttackProjectileType() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, AttackProjectileType); } \
	FORCEINLINE static uint32 __PPO__AttackProjectileOffset() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, AttackProjectileOffset); } \
	FORCEINLINE static uint32 __PPO__AfterDeadDuration() { return STRUCT_OFFSET(AELSSOnlineTestCharacter, AfterDeadDuration); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSOnlineTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
