// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameSessionPlacement_Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameSessionPlacement_Response() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftSessionServerProperties();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerLatency();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession();
// End Cross Module References
class UScriptStruct* FGameLiftGameSessionPlacement_Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftGameSessionPlacement_Response"), sizeof(FGameLiftGameSessionPlacement_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftGameSessionPlacement_Response>()
{
	return FGameLiftGameSessionPlacement_Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftGameSessionPlacement_Response(FGameLiftGameSessionPlacement_Response::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftGameSessionPlacement_Response"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionPlacement_Response
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionPlacement_Response()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftGameSessionPlacement_Response>(FName(TEXT("GameLiftGameSessionPlacement_Response")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionPlacement_Response;
	struct Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlacementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionQueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionQueueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maximumPlayerSessionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maximumPlayerSessionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionArn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionArn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionRegion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerLatencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLatencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerLatencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dnsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dnsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_placedPlayerSessions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_placedPlayerSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_placedPlayerSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchmakerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchmakerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftGameSessionPlacement_Response>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_PlacementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_PlacementId = { "PlacementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, PlacementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_PlacementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_PlacementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionQueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionQueueName = { "gameSessionQueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionQueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionQueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionQueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties_Inner = { "gameProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftSessionServerProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties = { "gameProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_maximumPlayerSessionCount = { "maximumPlayerSessionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, maximumPlayerSessionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionName = { "gameSessionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionArn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionArn = { "gameSessionArn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionArn), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionArn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionArn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionRegion = { "gameSessionRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionRegion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies_Inner = { "playerLatencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftPlayerLatency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies = { "playerLatencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, playerLatencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_dnsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_dnsName = { "dnsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, dnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_dnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_dnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_ipAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, ipAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions_Inner = { "placedPlayerSessions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions = { "placedPlayerSessions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, placedPlayerSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionData = { "gameSessionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, gameSessionData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_matchmakerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionPlacement_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionPlacement_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_matchmakerData = { "matchmakerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionPlacement_Response, matchmakerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_matchmakerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_matchmakerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_PlacementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionQueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_maximumPlayerSessionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionArn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_playerLatencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_dnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_placedPlayerSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_gameSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::NewProp_matchmakerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftGameSessionPlacement_Response",
		sizeof(FGameLiftGameSessionPlacement_Response),
		alignof(FGameLiftGameSessionPlacement_Response),
		Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftGameSessionPlacement_Response"), sizeof(FGameLiftGameSessionPlacement_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionPlacement_Response_Hash() { return 2968603206U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
