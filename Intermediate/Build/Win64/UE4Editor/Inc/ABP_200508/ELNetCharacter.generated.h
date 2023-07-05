// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELReplicationManager;
struct FELNetworkGUID;
struct FVector;
class UPrimitiveComponent;
#ifdef ABP_200508_ELNetCharacter_generated_h
#error "ELNetCharacter.generated.h already included, missing '#pragma once' in ELNetCharacter.h"
#endif
#define ABP_200508_ELNetCharacter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_RPC_WRAPPERS \
	virtual int32 AddComponentsToReplication_Implementation(UELReplicationManager* ReplicationManager, const FELNetworkGUID BaseGuid); \
	virtual void ELClientMove_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDual_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDualNoBase_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual void ELClientMoveNoBase_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual void ELClientMoveOld_Implementation(float OldTimeStamp, FVector OldAccel, FVector OldVelocity, uint8 OldMoveFlags); \
	virtual int32 GetSyncMotionIndex_Implementation() const; \
	virtual int32 GetSyncMotionPriority_Implementation() const; \
	virtual bool IsSyncMotionActive_Implementation() const; \
 \
	DECLARE_FUNCTION(execAddComponentsToReplication); \
	DECLARE_FUNCTION(execELClientMove); \
	DECLARE_FUNCTION(execELClientMoveDual); \
	DECLARE_FUNCTION(execELClientMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execELClientMoveDualNoBase); \
	DECLARE_FUNCTION(execELClientMoveNoBase); \
	DECLARE_FUNCTION(execELClientMoveOld); \
	DECLARE_FUNCTION(execGetNextGuid); \
	DECLARE_FUNCTION(execGetNextReplicationGuid); \
	DECLARE_FUNCTION(execGetSyncMotionIndex); \
	DECLARE_FUNCTION(execGetSyncMotionPriority); \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execIsDebugLogEnabled); \
	DECLARE_FUNCTION(execIsInELNetModeBP); \
	DECLARE_FUNCTION(execIsSyncMotionActive); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 AddComponentsToReplication_Implementation(UELReplicationManager* ReplicationManager, const FELNetworkGUID BaseGuid); \
	virtual void ELClientMove_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDual_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual void ELClientMoveDualNoBase_Implementation(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual void ELClientMoveNoBase_Implementation(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual void ELClientMoveOld_Implementation(float OldTimeStamp, FVector OldAccel, FVector OldVelocity, uint8 OldMoveFlags); \
	virtual int32 GetSyncMotionIndex_Implementation() const; \
	virtual int32 GetSyncMotionPriority_Implementation() const; \
	virtual bool IsSyncMotionActive_Implementation() const; \
 \
	DECLARE_FUNCTION(execAddComponentsToReplication); \
	DECLARE_FUNCTION(execELClientMove); \
	DECLARE_FUNCTION(execELClientMoveDual); \
	DECLARE_FUNCTION(execELClientMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execELClientMoveDualNoBase); \
	DECLARE_FUNCTION(execELClientMoveNoBase); \
	DECLARE_FUNCTION(execELClientMoveOld); \
	DECLARE_FUNCTION(execGetNextGuid); \
	DECLARE_FUNCTION(execGetNextReplicationGuid); \
	DECLARE_FUNCTION(execGetSyncMotionIndex); \
	DECLARE_FUNCTION(execGetSyncMotionPriority); \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execIsDebugLogEnabled); \
	DECLARE_FUNCTION(execIsInELNetModeBP); \
	DECLARE_FUNCTION(execIsSyncMotionActive); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_EVENT_PARMS \
	struct ELNetCharacter_eventAddComponentsToReplication_Parms \
	{ \
		UELReplicationManager* ReplicationManager; \
		FELNetworkGUID BaseGuid; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELNetCharacter_eventAddComponentsToReplication_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELNetCharacter_eventELClientMove_Parms \
	{ \
		float Timestamp; \
		FVector InAccel; \
		FVector InVelocity; \
		FVector ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct ELNetCharacter_eventELClientMoveDual_Parms \
	{ \
		float TimeStamp0; \
		FVector InAccel0; \
		FVector InVelocity0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float Timestamp; \
		FVector InAccel; \
		FVector InVelocity; \
		FVector ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector InAccel0; \
		FVector InVelocity0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float Timestamp; \
		FVector InAccel; \
		FVector InVelocity; \
		FVector ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct ELNetCharacter_eventELClientMoveDualNoBase_Parms \
	{ \
		float TimeStamp0; \
		FVector InAccel0; \
		FVector InVelocity0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float Timestamp; \
		FVector InAccel; \
		FVector InVelocity; \
		FVector ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct ELNetCharacter_eventELClientMoveNoBase_Parms \
	{ \
		float Timestamp; \
		FVector InAccel; \
		FVector InVelocity; \
		FVector ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		uint8 ClientMovementMode; \
	}; \
	struct ELNetCharacter_eventELClientMoveOld_Parms \
	{ \
		float OldTimeStamp; \
		FVector OldAccel; \
		FVector OldVelocity; \
		uint8 OldMoveFlags; \
	}; \
	struct ELNetCharacter_eventGetSyncMotionIndex_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELNetCharacter_eventGetSyncMotionIndex_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELNetCharacter_eventGetSyncMotionPriority_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELNetCharacter_eventGetSyncMotionPriority_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELNetCharacter_eventIsSyncMotionActive_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELNetCharacter_eventIsSyncMotionActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELNetCharacter(); \
	friend struct Z_Construct_UClass_AELNetCharacter_Statics; \
public: \
	DECLARE_CLASS(AELNetCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RandomStream=NETFIELD_REP_START, \
		NETFIELD_REP_END=RandomStream	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAELNetCharacter(); \
	friend struct Z_Construct_UClass_AELNetCharacter_Statics; \
public: \
	DECLARE_CLASS(AELNetCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RandomStream=NETFIELD_REP_START, \
		NETFIELD_REP_END=RandomStream	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELNetCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELNetCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetCharacter(AELNetCharacter&&); \
	NO_API AELNetCharacter(const AELNetCharacter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetCharacter(AELNetCharacter&&); \
	NO_API AELNetCharacter(const AELNetCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELNetCharacter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GuidOffset() { return STRUCT_OFFSET(AELNetCharacter, GuidOffset); } \
	FORCEINLINE static uint32 __PPO__ReplicationGuid() { return STRUCT_OFFSET(AELNetCharacter, ReplicationGuid); } \
	FORCEINLINE static uint32 __PPO__RandomStream() { return STRUCT_OFFSET(AELNetCharacter, RandomStream); } \
	FORCEINLINE static uint32 __PPO__ELNetRole() { return STRUCT_OFFSET(AELNetCharacter, ELNetRole); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELNetCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
