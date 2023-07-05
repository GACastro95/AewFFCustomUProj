// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSRound : uint8;
class AELSSStorm;
struct FSSRoundParam;
class AActor;
#ifdef ABP_200508_ELSSRoundManager_generated_h
#error "ELSSRoundManager.generated.h already included, missing '#pragma once' in ELSSRoundManager.h"
#endif
#define ABP_200508_ELSSRoundManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_RPC_WRAPPERS \
	virtual void OnBeginRound_Implementation(FSSRoundParam const& inRoundParam); \
	virtual void OnEndRound_Implementation(FSSRoundParam const& inRoundParam); \
	virtual void OnTickRound_Implementation(FSSRoundParam const& inRoundParam, float inNewRoundTime, float inPrevRoundTime); \
 \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetStorm); \
	DECLARE_FUNCTION(execIsRoundFinal); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnRep_ElapsedTime); \
	DECLARE_FUNCTION(execOnRep_RoundTotalTime); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSetUIManagerActor); \
	DECLARE_FUNCTION(execStartReadyState); \
	DECLARE_FUNCTION(execStartRound0);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBeginRound_Implementation(FSSRoundParam const& inRoundParam); \
	virtual void OnEndRound_Implementation(FSSRoundParam const& inRoundParam); \
	virtual void OnTickRound_Implementation(FSSRoundParam const& inRoundParam, float inNewRoundTime, float inPrevRoundTime); \
 \
	DECLARE_FUNCTION(execGetCurrentRound); \
	DECLARE_FUNCTION(execGetStorm); \
	DECLARE_FUNCTION(execIsRoundFinal); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnRep_ElapsedTime); \
	DECLARE_FUNCTION(execOnRep_RoundTotalTime); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSetUIManagerActor); \
	DECLARE_FUNCTION(execStartReadyState); \
	DECLARE_FUNCTION(execStartRound0);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_EVENT_PARMS \
	struct ELSSRoundManager_eventOnBeginRound_Parms \
	{ \
		FSSRoundParam inRoundParam; \
	}; \
	struct ELSSRoundManager_eventOnEndRound_Parms \
	{ \
		FSSRoundParam inRoundParam; \
	}; \
	struct ELSSRoundManager_eventOnTickRound_Parms \
	{ \
		FSSRoundParam inRoundParam; \
		float inNewRoundTime; \
		float inPrevRoundTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSRoundManager(); \
	friend struct Z_Construct_UClass_AELSSRoundManager_Statics; \
public: \
	DECLARE_CLASS(AELSSRoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSRoundManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSRoundManager*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StormRandomSeed=NETFIELD_REP_START, \
		ElapsedTimeRep, \
		RoundTotalTimeRep, \
		RoundSpeed, \
		NETFIELD_REP_END=RoundSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAELSSRoundManager(); \
	friend struct Z_Construct_UClass_AELSSRoundManager_Statics; \
public: \
	DECLARE_CLASS(AELSSRoundManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSRoundManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSRoundManager*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StormRandomSeed=NETFIELD_REP_START, \
		ElapsedTimeRep, \
		RoundTotalTimeRep, \
		RoundSpeed, \
		NETFIELD_REP_END=RoundSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSRoundManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSRoundManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSRoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSRoundManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSRoundManager(AELSSRoundManager&&); \
	NO_API AELSSRoundManager(const AELSSRoundManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSRoundManager(AELSSRoundManager&&); \
	NO_API AELSSRoundManager(const AELSSRoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSRoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSRoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSRoundManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventOnBeginRound() { return STRUCT_OFFSET(AELSSRoundManager, EventOnBeginRound); } \
	FORCEINLINE static uint32 __PPO__EventOnEndRound() { return STRUCT_OFFSET(AELSSRoundManager, EventOnEndRound); } \
	FORCEINLINE static uint32 __PPO__EventOnTickRound() { return STRUCT_OFFSET(AELSSRoundManager, EventOnTickRound); } \
	FORCEINLINE static uint32 __PPO__StormActor() { return STRUCT_OFFSET(AELSSRoundManager, StormActor); } \
	FORCEINLINE static uint32 __PPO__StormActorClass() { return STRUCT_OFFSET(AELSSRoundManager, StormActorClass); } \
	FORCEINLINE static uint32 __PPO__StormRandomSeed() { return STRUCT_OFFSET(AELSSRoundManager, StormRandomSeed); } \
	FORCEINLINE static uint32 __PPO__ElapsedTimeRep() { return STRUCT_OFFSET(AELSSRoundManager, ElapsedTimeRep); } \
	FORCEINLINE static uint32 __PPO__ElapsedTimeLocal() { return STRUCT_OFFSET(AELSSRoundManager, ElapsedTimeLocal); } \
	FORCEINLINE static uint32 __PPO__RoundTotalTimeRep() { return STRUCT_OFFSET(AELSSRoundManager, RoundTotalTimeRep); } \
	FORCEINLINE static uint32 __PPO__RoundTotalTimeLocal() { return STRUCT_OFFSET(AELSSRoundManager, RoundTotalTimeLocal); } \
	FORCEINLINE static uint32 __PPO__CurrentRoundParam() { return STRUCT_OFFSET(AELSSRoundManager, CurrentRoundParam); } \
	FORCEINLINE static uint32 __PPO__CurrentRoundIndex() { return STRUCT_OFFSET(AELSSRoundManager, CurrentRoundIndex); } \
	FORCEINLINE static uint32 __PPO__RoundState() { return STRUCT_OFFSET(AELSSRoundManager, RoundState); } \
	FORCEINLINE static uint32 __PPO__RoundBeginTime() { return STRUCT_OFFSET(AELSSRoundManager, RoundBeginTime); } \
	FORCEINLINE static uint32 __PPO__RoundParams() { return STRUCT_OFFSET(AELSSRoundManager, RoundParams); } \
	FORCEINLINE static uint32 __PPO__AdjustParam() { return STRUCT_OFFSET(AELSSRoundManager, AdjustParam); } \
	FORCEINLINE static uint32 __PPO__RoundSpeed() { return STRUCT_OFFSET(AELSSRoundManager, RoundSpeed); } \
	FORCEINLINE static uint32 __PPO__UIManagerActor() { return STRUCT_OFFSET(AELSSRoundManager, UIManagerActor); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSRoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSRoundManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
