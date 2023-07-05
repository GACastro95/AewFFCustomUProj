// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameSession_Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameSession_Response() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftSessionServerProperties();
// End Cross Module References
class UScriptStruct* FGameLiftGameSession_Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftGameSession_Response, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftGameSession_Response"), sizeof(FGameLiftGameSession_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftGameSession_Response>()
{
	return FGameLiftGameSession_Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftGameSession_Response(FGameLiftGameSession_Response::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftGameSession_Response"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSession_Response
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSession_Response()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftGameSession_Response>(FName(TEXT("GameLiftGameSession_Response")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSession_Response;
	struct Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fleetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fleetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fleetArn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fleetArn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_creationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_terminationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_terminationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPlayerSessionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentPlayerSessionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maximumPlayerSessionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maximumPlayerSessionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_statusReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dnsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dnsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionCreationPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerSessionCreationPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_creatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchmakerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchmakerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftGameSession_Response>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetId = { "fleetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, fleetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetArn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetArn = { "fleetArn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, fleetArn), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetArn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetArn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creationTime = { "creationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, creationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_terminationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_terminationTime = { "terminationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, terminationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_terminationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_terminationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_currentPlayerSessionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_currentPlayerSessionCount = { "currentPlayerSessionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, currentPlayerSessionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_currentPlayerSessionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_currentPlayerSessionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_maximumPlayerSessionCount = { "maximumPlayerSessionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, maximumPlayerSessionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_maximumPlayerSessionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_statusReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_statusReason = { "statusReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, statusReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_statusReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_statusReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_ipAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, ipAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_dnsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_dnsName = { "dnsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, dnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_dnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_dnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_playerSessionCreationPolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_playerSessionCreationPolicy = { "playerSessionCreationPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, playerSessionCreationPolicy), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_playerSessionCreationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_playerSessionCreationPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creatorId = { "creatorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, creatorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionData = { "gameSessionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, gameSessionData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_matchmakerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_matchmakerData = { "matchmakerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, matchmakerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_matchmakerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_matchmakerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties_Inner = { "gameProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftSessionServerProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties = { "gameProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSession_Response, gameProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_fleetArn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_terminationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_currentPlayerSessionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_maximumPlayerSessionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_statusReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_dnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_playerSessionCreationPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_creatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_matchmakerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::NewProp_gameProperties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftGameSession_Response",
		sizeof(FGameLiftGameSession_Response),
		alignof(FGameLiftGameSession_Response),
		Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftGameSession_Response"), sizeof(FGameLiftGameSession_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSession_Response_Hash() { return 373210219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
