// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef ABP_200508_Sample_ThirdPersonCharacter_generated_h
#error "Sample_ThirdPersonCharacter.generated.h already included, missing '#pragma once' in Sample_ThirdPersonCharacter.h"
#endif
#define ABP_200508_Sample_ThirdPersonCharacter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_RPC_WRAPPERS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetHealthRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execOnHealthUpdate); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execTakeDamage);


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetHealthRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execOnHealthUpdate); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execTakeDamage);


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASample_ThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_ASample_ThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(ASample_ThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ASample_ThirdPersonCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASample_ThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_ASample_ThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(ASample_ThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ASample_ThirdPersonCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASample_ThirdPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASample_ThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASample_ThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASample_ThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASample_ThirdPersonCharacter(ASample_ThirdPersonCharacter&&); \
	NO_API ASample_ThirdPersonCharacter(const ASample_ThirdPersonCharacter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASample_ThirdPersonCharacter(ASample_ThirdPersonCharacter&&); \
	NO_API ASample_ThirdPersonCharacter(const ASample_ThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASample_ThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASample_ThirdPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASample_ThirdPersonCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ASample_ThirdPersonCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(ASample_ThirdPersonCharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ASample_ThirdPersonCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ASample_ThirdPersonCharacter, FireRate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class ASample_ThirdPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_Sample_ThirdPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
