// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetCharacter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetCharacter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELNetworkGUID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetCharacter::execAddComponentsToReplication)
	{
		P_GET_OBJECT(UELReplicationManager,Z_Param_ReplicationManager);
		P_GET_STRUCT(FELNetworkGUID,Z_Param_BaseGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddComponentsToReplication_Implementation(Z_Param_ReplicationManager,Z_Param_BaseGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timestamp);
		P_GET_STRUCT(FVector,Z_Param_InAccel);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_GET_STRUCT(FVector,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_CompressedMoveFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMove_Implementation(Z_Param_Timestamp,Z_Param_InAccel,Z_Param_InVelocity,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMoveDual)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector,Z_Param_InAccel0);
		P_GET_STRUCT(FVector,Z_Param_InVelocity0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timestamp);
		P_GET_STRUCT(FVector,Z_Param_InAccel);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_GET_STRUCT(FVector,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_InVelocity0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_Timestamp,Z_Param_InAccel,Z_Param_InVelocity,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMoveDualHybridRootMotion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector,Z_Param_InAccel0);
		P_GET_STRUCT(FVector,Z_Param_InVelocity0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timestamp);
		P_GET_STRUCT(FVector,Z_Param_InAccel);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_GET_STRUCT(FVector,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_InVelocity0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_Timestamp,Z_Param_InAccel,Z_Param_InVelocity,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMoveDualNoBase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector,Z_Param_InAccel0);
		P_GET_STRUCT(FVector,Z_Param_InVelocity0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timestamp);
		P_GET_STRUCT(FVector,Z_Param_InAccel);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_GET_STRUCT(FVector,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMoveDualNoBase_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_InVelocity0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_Timestamp,Z_Param_InAccel,Z_Param_InVelocity,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMoveNoBase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timestamp);
		P_GET_STRUCT(FVector,Z_Param_InAccel);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_GET_STRUCT(FVector,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_CompressedMoveFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMoveNoBase_Implementation(Z_Param_Timestamp,Z_Param_InAccel,Z_Param_InVelocity,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execELClientMoveOld)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldTimeStamp);
		P_GET_STRUCT(FVector,Z_Param_OldAccel);
		P_GET_STRUCT(FVector,Z_Param_OldVelocity);
		P_GET_PROPERTY(FByteProperty,Z_Param_OldMoveFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ELClientMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldVelocity,Z_Param_OldMoveFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execGetNextGuid)
	{
		P_GET_STRUCT(FELNetworkGUID,Z_Param_BaseGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetNextGuid(Z_Param_BaseGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execGetNextReplicationGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetNextReplicationGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execGetSyncMotionIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSyncMotionIndex_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execGetSyncMotionPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSyncMotionPriority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execHasELNetAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execHasELNetExecAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetExecAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execIsDebugLogEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugLogLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugLogEnabled(Z_Param_DebugLogLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execIsInELNetModeBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInELNetModeBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execIsSyncMotionActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSyncMotionActive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execSetELNetAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execSetELNetModeBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetModeBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetCharacter::execSetELNetTemporaryAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetELNetTemporaryAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_AELNetCharacter_AddComponentsToReplication = FName(TEXT("AddComponentsToReplication"));
	int32 AELNetCharacter::AddComponentsToReplication(UELReplicationManager* ReplicationManager, const FELNetworkGUID BaseGuid)
	{
		ELNetCharacter_eventAddComponentsToReplication_Parms Parms;
		Parms.ReplicationManager=ReplicationManager;
		Parms.BaseGuid=BaseGuid;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_AddComponentsToReplication),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELNetCharacter_ELClientMove = FName(TEXT("ELClientMove"));
	void AELNetCharacter::ELClientMove(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		ELNetCharacter_eventELClientMove_Parms Parms;
		Parms.Timestamp=Timestamp;
		Parms.InAccel=InAccel;
		Parms.InVelocity=InVelocity;
		Parms.ClientLoc=ClientLoc;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMove),&Parms);
	}
	static FName NAME_AELNetCharacter_ELClientMoveDual = FName(TEXT("ELClientMoveDual"));
	void AELNetCharacter::ELClientMoveDual(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		ELNetCharacter_eventELClientMoveDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.InVelocity0=InVelocity0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.Timestamp=Timestamp;
		Parms.InAccel=InAccel;
		Parms.InVelocity=InVelocity;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMoveDual),&Parms);
	}
	static FName NAME_AELNetCharacter_ELClientMoveDualHybridRootMotion = FName(TEXT("ELClientMoveDualHybridRootMotion"));
	void AELNetCharacter::ELClientMoveDualHybridRootMotion(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.InVelocity0=InVelocity0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.Timestamp=Timestamp;
		Parms.InAccel=InAccel;
		Parms.InVelocity=InVelocity;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMoveDualHybridRootMotion),&Parms);
	}
	static FName NAME_AELNetCharacter_ELClientMoveDualNoBase = FName(TEXT("ELClientMoveDualNoBase"));
	void AELNetCharacter::ELClientMoveDualNoBase(float TimeStamp0, FVector InAccel0, FVector InVelocity0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode)
	{
		ELNetCharacter_eventELClientMoveDualNoBase_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.InVelocity0=InVelocity0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.Timestamp=Timestamp;
		Parms.InAccel=InAccel;
		Parms.InVelocity=InVelocity;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMoveDualNoBase),&Parms);
	}
	static FName NAME_AELNetCharacter_ELClientMoveNoBase = FName(TEXT("ELClientMoveNoBase"));
	void AELNetCharacter::ELClientMoveNoBase(float Timestamp, FVector InAccel, FVector InVelocity, FVector ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode)
	{
		ELNetCharacter_eventELClientMoveNoBase_Parms Parms;
		Parms.Timestamp=Timestamp;
		Parms.InAccel=InAccel;
		Parms.InVelocity=InVelocity;
		Parms.ClientLoc=ClientLoc;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMoveNoBase),&Parms);
	}
	static FName NAME_AELNetCharacter_ELClientMoveOld = FName(TEXT("ELClientMoveOld"));
	void AELNetCharacter::ELClientMoveOld(float OldTimeStamp, FVector OldAccel, FVector OldVelocity, uint8 OldMoveFlags)
	{
		ELNetCharacter_eventELClientMoveOld_Parms Parms;
		Parms.OldTimeStamp=OldTimeStamp;
		Parms.OldAccel=OldAccel;
		Parms.OldVelocity=OldVelocity;
		Parms.OldMoveFlags=OldMoveFlags;
		ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_ELClientMoveOld),&Parms);
	}
	static FName NAME_AELNetCharacter_GetSyncMotionIndex = FName(TEXT("GetSyncMotionIndex"));
	int32 AELNetCharacter::GetSyncMotionIndex() const
	{
		ELNetCharacter_eventGetSyncMotionIndex_Parms Parms;
		const_cast<AELNetCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_GetSyncMotionIndex),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELNetCharacter_GetSyncMotionPriority = FName(TEXT("GetSyncMotionPriority"));
	int32 AELNetCharacter::GetSyncMotionPriority() const
	{
		ELNetCharacter_eventGetSyncMotionPriority_Parms Parms;
		const_cast<AELNetCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_GetSyncMotionPriority),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELNetCharacter_IsSyncMotionActive = FName(TEXT("IsSyncMotionActive"));
	bool AELNetCharacter::IsSyncMotionActive() const
	{
		ELNetCharacter_eventIsSyncMotionActive_Parms Parms;
		const_cast<AELNetCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELNetCharacter_IsSyncMotionActive),&Parms);
		return !!Parms.ReturnValue;
	}
	void AELNetCharacter::StaticRegisterNativesAELNetCharacter()
	{
		UClass* Class = AELNetCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponentsToReplication", &AELNetCharacter::execAddComponentsToReplication },
			{ "ELClientMove", &AELNetCharacter::execELClientMove },
			{ "ELClientMoveDual", &AELNetCharacter::execELClientMoveDual },
			{ "ELClientMoveDualHybridRootMotion", &AELNetCharacter::execELClientMoveDualHybridRootMotion },
			{ "ELClientMoveDualNoBase", &AELNetCharacter::execELClientMoveDualNoBase },
			{ "ELClientMoveNoBase", &AELNetCharacter::execELClientMoveNoBase },
			{ "ELClientMoveOld", &AELNetCharacter::execELClientMoveOld },
			{ "GetNextGuid", &AELNetCharacter::execGetNextGuid },
			{ "GetNextReplicationGuid", &AELNetCharacter::execGetNextReplicationGuid },
			{ "GetSyncMotionIndex", &AELNetCharacter::execGetSyncMotionIndex },
			{ "GetSyncMotionPriority", &AELNetCharacter::execGetSyncMotionPriority },
			{ "HasELNetAuthorityBP", &AELNetCharacter::execHasELNetAuthorityBP },
			{ "HasELNetExecAuthorityBP", &AELNetCharacter::execHasELNetExecAuthorityBP },
			{ "IsDebugLogEnabled", &AELNetCharacter::execIsDebugLogEnabled },
			{ "IsInELNetModeBP", &AELNetCharacter::execIsInELNetModeBP },
			{ "IsSyncMotionActive", &AELNetCharacter::execIsSyncMotionActive },
			{ "SetELNetAuthorityBP", &AELNetCharacter::execSetELNetAuthorityBP },
			{ "SetELNetModeBP", &AELNetCharacter::execSetELNetModeBP },
			{ "SetELNetTemporaryAuthorityBP", &AELNetCharacter::execSetELNetTemporaryAuthorityBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_ReplicationManager = { "ReplicationManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventAddComponentsToReplication_Parms, ReplicationManager), Z_Construct_UClass_UELReplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventAddComponentsToReplication_Parms, BaseGuid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_BaseGuid_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventAddComponentsToReplication_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_ReplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_BaseGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "AddComponentsToReplication", nullptr, nullptr, sizeof(ELNetCharacter_eventAddComponentsToReplication_Parms), Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, InAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_CompressedMoveFlags = { "CompressedMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMove_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_CompressedMoveFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_View,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMove", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMove_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InVelocity0 = { "InVelocity0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, InVelocity0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_TimeStamp0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InVelocity0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_View,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMoveDual", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMoveDual_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InVelocity0 = { "InVelocity0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, InVelocity0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_TimeStamp0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InVelocity0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_View,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMoveDualHybridRootMotion", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMoveDualHybridRootMotion_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, InAccel0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InVelocity0 = { "InVelocity0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, InVelocity0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, InAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, View), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveDualNoBase_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_TimeStamp0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InAccel0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InVelocity0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_PendingFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_View0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_NewFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_View,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMoveDualNoBase", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMoveDualNoBase_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, InAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_CompressedMoveFlags = { "CompressedMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, View), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveNoBase_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_InAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_InVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_CompressedMoveFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_View,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMoveNoBase", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMoveNoBase_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldTimeStamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldAccel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldMoveFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldTimeStamp = { "OldTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveOld_Parms, OldTimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldAccel = { "OldAccel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveOld_Parms, OldAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveOld_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldMoveFlags = { "OldMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventELClientMoveOld_Parms, OldMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::NewProp_OldMoveFlags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "ELClientMoveOld", nullptr, nullptr, sizeof(ELNetCharacter_eventELClientMoveOld_Parms), Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics
	{
		struct ELNetCharacter_eventGetNextGuid_Parms
		{
			FELNetworkGUID BaseGuid;
			FELNetworkGUID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseGuid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_BaseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_BaseGuid = { "BaseGuid", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventGetNextGuid_Parms, BaseGuid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_BaseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_BaseGuid_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventGetNextGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_BaseGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "GetNextGuid", nullptr, nullptr, sizeof(ELNetCharacter_eventGetNextGuid_Parms), Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_GetNextGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_GetNextGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics
	{
		struct ELNetCharacter_eventGetNextReplicationGuid_Parms
		{
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventGetNextReplicationGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "GetNextReplicationGuid", nullptr, nullptr, sizeof(ELNetCharacter_eventGetNextReplicationGuid_Parms), Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventGetSyncMotionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "GetSyncMotionIndex", nullptr, nullptr, sizeof(ELNetCharacter_eventGetSyncMotionIndex_Parms), Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventGetSyncMotionPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "GetSyncMotionPriority", nullptr, nullptr, sizeof(ELNetCharacter_eventGetSyncMotionPriority_Parms), Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics
	{
		struct ELNetCharacter_eventHasELNetAuthorityBP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventHasELNetAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventHasELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "HasELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetCharacter_eventHasELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics
	{
		struct ELNetCharacter_eventHasELNetExecAuthorityBP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventHasELNetExecAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventHasELNetExecAuthorityBP_Parms), &Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "HasELNetExecAuthorityBP", nullptr, nullptr, sizeof(ELNetCharacter_eventHasELNetExecAuthorityBP_Parms), Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics
	{
		struct ELNetCharacter_eventIsDebugLogEnabled_Parms
		{
			int32 DebugLogLevel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugLogLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_DebugLogLevel = { "DebugLogLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetCharacter_eventIsDebugLogEnabled_Parms, DebugLogLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventIsDebugLogEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventIsDebugLogEnabled_Parms), &Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_DebugLogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "IsDebugLogEnabled", nullptr, nullptr, sizeof(ELNetCharacter_eventIsDebugLogEnabled_Parms), Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics
	{
		struct ELNetCharacter_eventIsInELNetModeBP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventIsInELNetModeBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventIsInELNetModeBP_Parms), &Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "IsInELNetModeBP", nullptr, nullptr, sizeof(ELNetCharacter_eventIsInELNetModeBP_Parms), Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventIsSyncMotionActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventIsSyncMotionActive_Parms), &Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "IsSyncMotionActive", nullptr, nullptr, sizeof(ELNetCharacter_eventIsSyncMotionActive_Parms), Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics
	{
		struct ELNetCharacter_eventSetELNetAuthorityBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetCharacter_eventSetELNetAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventSetELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "SetELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetCharacter_eventSetELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics
	{
		struct ELNetCharacter_eventSetELNetModeBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetCharacter_eventSetELNetModeBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventSetELNetModeBP_Parms), &Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "SetELNetModeBP", nullptr, nullptr, sizeof(ELNetCharacter_eventSetELNetModeBP_Parms), Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics
	{
		struct ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetCharacter, nullptr, "SetELNetTemporaryAuthorityBP", nullptr, nullptr, sizeof(ELNetCharacter_eventSetELNetTemporaryAuthorityBP_Parms), Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetCharacter_NoRegister()
	{
		return AELNetCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AELNetCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GuidOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicationGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELNetRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELNetRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELNetRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNetCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetCharacter_AddComponentsToReplication, "AddComponentsToReplication" }, // 650791783
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMove, "ELClientMove" }, // 1180571046
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMoveDual, "ELClientMoveDual" }, // 3422756877
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualHybridRootMotion, "ELClientMoveDualHybridRootMotion" }, // 2647605725
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMoveDualNoBase, "ELClientMoveDualNoBase" }, // 3353084547
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMoveNoBase, "ELClientMoveNoBase" }, // 3252550471
		{ &Z_Construct_UFunction_AELNetCharacter_ELClientMoveOld, "ELClientMoveOld" }, // 4222562643
		{ &Z_Construct_UFunction_AELNetCharacter_GetNextGuid, "GetNextGuid" }, // 1432468365
		{ &Z_Construct_UFunction_AELNetCharacter_GetNextReplicationGuid, "GetNextReplicationGuid" }, // 4095987254
		{ &Z_Construct_UFunction_AELNetCharacter_GetSyncMotionIndex, "GetSyncMotionIndex" }, // 342330107
		{ &Z_Construct_UFunction_AELNetCharacter_GetSyncMotionPriority, "GetSyncMotionPriority" }, // 4186682935
		{ &Z_Construct_UFunction_AELNetCharacter_HasELNetAuthorityBP, "HasELNetAuthorityBP" }, // 1684030673
		{ &Z_Construct_UFunction_AELNetCharacter_HasELNetExecAuthorityBP, "HasELNetExecAuthorityBP" }, // 3611969028
		{ &Z_Construct_UFunction_AELNetCharacter_IsDebugLogEnabled, "IsDebugLogEnabled" }, // 2842416664
		{ &Z_Construct_UFunction_AELNetCharacter_IsInELNetModeBP, "IsInELNetModeBP" }, // 2853201657
		{ &Z_Construct_UFunction_AELNetCharacter_IsSyncMotionActive, "IsSyncMotionActive" }, // 1591198999
		{ &Z_Construct_UFunction_AELNetCharacter_SetELNetAuthorityBP, "SetELNetAuthorityBP" }, // 779498021
		{ &Z_Construct_UFunction_AELNetCharacter_SetELNetModeBP, "SetELNetModeBP" }, // 1822194205
		{ &Z_Construct_UFunction_AELNetCharacter_SetELNetTemporaryAuthorityBP, "SetELNetTemporaryAuthorityBP" }, // 128037713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELNetCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetCharacter_Statics::NewProp_GuidOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacter" },
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELNetCharacter_Statics::NewProp_GuidOffset = { "GuidOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetCharacter, GuidOffset), METADATA_PARAMS(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_GuidOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_GuidOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ReplicationGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacter" },
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ReplicationGuid = { "ReplicationGuid", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetCharacter, ReplicationGuid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ReplicationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ReplicationGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetCharacter_Statics::NewProp_RandomStream_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacter" },
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELNetCharacter_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetCharacter, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetCharacter" },
		{ "ModuleRelativePath", "Public/ELNetCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole = { "ELNetRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetCharacter, ELNetRole), Z_Construct_UEnum_ABP_200508_EELNetRole, METADATA_PARAMS(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetCharacter_Statics::NewProp_GuidOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ReplicationGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetCharacter_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetCharacter_Statics::NewProp_ELNetRole,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELNetCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELNetObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELNetCharacter, IELNetObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetCharacter_Statics::ClassParams = {
		&AELNetCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetCharacter, 2557342047);
	template<> ABP_200508_API UClass* StaticClass<AELNetCharacter>()
	{
		return AELNetCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetCharacter(Z_Construct_UClass_AELNetCharacter, &AELNetCharacter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetCharacter"), false, nullptr, nullptr, nullptr);

	void AELNetCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RandomStream(TEXT("RandomStream"));

		const bool bIsValid = true
			&& Name_RandomStream == ClassReps[(int32)ENetFields_Private::RandomStream].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELNetCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
