// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStateTransitParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStateTransitParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStateTransitParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSFallReason();
// End Cross Module References
class UScriptStruct* FSSStateTransitParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStateTransitParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStateTransitParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStateTransitParam"), sizeof(FSSStateTransitParam), Get_Z_Construct_UScriptStruct_FSSStateTransitParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStateTransitParam>()
{
	return FSSStateTransitParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStateTransitParam(FSSStateTransitParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStateTransitParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStateTransitParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStateTransitParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStateTransitParam>(FName(TEXT("SSStateTransitParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStateTransitParam;
	struct Z_Construct_UScriptStruct_FSSStateTransitParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_StateHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTransitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ServerTransitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveCommand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RequestID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedBottomLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartedBottomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartedRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdealLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAdjustStateHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MovementAdjustStateHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAdjustPlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAdjustPlayTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FallReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FallReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedInAir_MetaData[];
#endif
		static void NewProp_StartedInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartedInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falling_MetaData[];
#endif
		static void NewProp_Falling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Falling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBlendOut_MetaData[];
#endif
		static void NewProp_DisableBlendOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingStarted_MetaData[];
#endif
		static void NewProp_LandingStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LandingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipAutonomousRestart_MetaData[];
#endif
		static void NewProp_SkipAutonomousRestart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipAutonomousRestart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStateTransitParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StateHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StateHash = { "StateHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, StateHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StateHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StateHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_ServerTransitId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_ServerTransitId = { "ServerTransitId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, ServerTransitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_ServerTransitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_ServerTransitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, MoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand = { "MoveCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, MoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_RequestID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, RequestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_RequestID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedBottomLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedBottomLocation = { "StartedBottomLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, StartedBottomLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedBottomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedBottomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedRotationYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedRotationYaw = { "StartedRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, StartedRotationYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedVelocity = { "StartedVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, StartedVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealLocation = { "IdealLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, IdealLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealRotationYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealRotationYaw = { "IdealRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, IdealRotationYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DesiredYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DesiredYaw = { "DesiredYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, DesiredYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DesiredYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DesiredYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SpeedRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SpeedRate = { "SpeedRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, SpeedRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustStateHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustStateHash = { "MovementAdjustStateHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, MovementAdjustStateHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustStateHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustStateHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustPlayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustPlayTime = { "MovementAdjustPlayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, MovementAdjustPlayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustPlayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustPlayTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason = { "FallReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateTransitParam, FallReason), Z_Construct_UEnum_ABP_200508_ESSFallReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir_SetBit(void* Obj)
	{
		((FSSStateTransitParam*)Obj)->StartedInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir = { "StartedInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSStateTransitParam), &Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling_SetBit(void* Obj)
	{
		((FSSStateTransitParam*)Obj)->Falling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling = { "Falling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSStateTransitParam), &Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut_SetBit(void* Obj)
	{
		((FSSStateTransitParam*)Obj)->DisableBlendOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut = { "DisableBlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSStateTransitParam), &Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted_SetBit(void* Obj)
	{
		((FSSStateTransitParam*)Obj)->LandingStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted = { "LandingStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSStateTransitParam), &Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateTransitParam" },
		{ "ModuleRelativePath", "Public/SSStateTransitParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart_SetBit(void* Obj)
	{
		((FSSStateTransitParam*)Obj)->SkipAutonomousRestart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart = { "SkipAutonomousRestart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSStateTransitParam), &Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StateHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_ServerTransitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_RequestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedBottomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_IdealRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DesiredYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustStateHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_MovementAdjustPlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_FallReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_StartedInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_Falling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_DisableBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_LandingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::NewProp_SkipAutonomousRestart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSStateTransitParam",
		sizeof(FSSStateTransitParam),
		alignof(FSSStateTransitParam),
		Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStateTransitParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStateTransitParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStateTransitParam"), sizeof(FSSStateTransitParam), Get_Z_Construct_UScriptStruct_FSSStateTransitParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStateTransitParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStateTransitParam_Hash() { return 3030778045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
