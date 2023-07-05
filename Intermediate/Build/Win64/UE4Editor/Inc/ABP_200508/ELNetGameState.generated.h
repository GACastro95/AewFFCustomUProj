// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELNetworkGUID;
class UELReplicationManager;
class AActor;
#ifdef ABP_200508_ELNetGameState_generated_h
#error "ELNetGameState.generated.h already included, missing '#pragma once' in ELNetGameState.h"
#endif
#define ABP_200508_ELNetGameState_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextReplicationGuid); \
	DECLARE_FUNCTION(execGetRealDeltaTime); \
	DECLARE_FUNCTION(execGetReplicationManager); \
	DECLARE_FUNCTION(execGetScaledRealDeltaTime); \
	DECLARE_FUNCTION(execGetWorldRealTimeSecondsFromStart); \
	DECLARE_FUNCTION(execGetWorldTimeSecondsFromStart); \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execInitializeWorldTimeSeconds); \
	DECLARE_FUNCTION(execIsInELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP); \
	DECLARE_FUNCTION(execSetNetActorTickOrder); \
	DECLARE_FUNCTION(execSetUseFixedFrameRate); \
	DECLARE_FUNCTION(execToggleUseFixedFrameRate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextReplicationGuid); \
	DECLARE_FUNCTION(execGetRealDeltaTime); \
	DECLARE_FUNCTION(execGetReplicationManager); \
	DECLARE_FUNCTION(execGetScaledRealDeltaTime); \
	DECLARE_FUNCTION(execGetWorldRealTimeSecondsFromStart); \
	DECLARE_FUNCTION(execGetWorldTimeSecondsFromStart); \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execInitializeWorldTimeSeconds); \
	DECLARE_FUNCTION(execIsInELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP); \
	DECLARE_FUNCTION(execSetNetActorTickOrder); \
	DECLARE_FUNCTION(execSetUseFixedFrameRate); \
	DECLARE_FUNCTION(execToggleUseFixedFrameRate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELNetGameState(); \
	friend struct Z_Construct_UClass_AELNetGameState_Statics; \
public: \
	DECLARE_CLASS(AELNetGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetGameState) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetGameState*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAELNetGameState(); \
	friend struct Z_Construct_UClass_AELNetGameState_Statics; \
public: \
	DECLARE_CLASS(AELNetGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetGameState) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetGameState*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELNetGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELNetGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetGameState(AELNetGameState&&); \
	NO_API AELNetGameState(const AELNetGameState&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetGameState(AELNetGameState&&); \
	NO_API AELNetGameState(const AELNetGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELNetGameState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELNetRole() { return STRUCT_OFFSET(AELNetGameState, ELNetRole); } \
	FORCEINLINE static uint32 __PPO__ReplicationRPCComponent() { return STRUCT_OFFSET(AELNetGameState, ReplicationRPCComponent); } \
	FORCEINLINE static uint32 __PPO__ReplicationPropertyComponent() { return STRUCT_OFFSET(AELNetGameState, ReplicationPropertyComponent); } \
	FORCEINLINE static uint32 __PPO__ReplicationManager() { return STRUCT_OFFSET(AELNetGameState, ReplicationManager); } \
	FORCEINLINE static uint32 __PPO__WorldTimeSecondsFromStart() { return STRUCT_OFFSET(AELNetGameState, WorldTimeSecondsFromStart); } \
	FORCEINLINE static uint32 __PPO__WorldRealTimeSecondsFromStart() { return STRUCT_OFFSET(AELNetGameState, WorldRealTimeSecondsFromStart); } \
	FORCEINLINE static uint32 __PPO__RealDeltaTime() { return STRUCT_OFFSET(AELNetGameState, RealDeltaTime); } \
	FORCEINLINE static uint32 __PPO__ScaledRealDeltaTime() { return STRUCT_OFFSET(AELNetGameState, ScaledRealDeltaTime); } \
	FORCEINLINE static uint32 __PPO__RealDeltaTimeAverageInner() { return STRUCT_OFFSET(AELNetGameState, RealDeltaTimeAverageInner); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELNetGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
