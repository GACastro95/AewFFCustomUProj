// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftPlayerSession_Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftPlayerSession_Response() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftPlayerSession_Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftPlayerSession_Response"), sizeof(FGameLiftPlayerSession_Response), Get_Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftPlayerSession_Response>()
{
	return FGameLiftPlayerSession_Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftPlayerSession_Response(FGameLiftPlayerSession_Response::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftPlayerSession_Response"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerSession_Response
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerSession_Response()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftPlayerSession_Response>(FName(TEXT("GameLiftPlayerSession_Response")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerSession_Response;
	struct Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftPlayerSession_Response>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerSessionId = { "playerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, playerSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_gameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetId = { "fleetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, fleetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetArn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetArn = { "fleetArn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, fleetArn), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetArn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetArn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_creationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_creationTime = { "creationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, creationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_creationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_creationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_terminationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_terminationTime = { "terminationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, terminationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_terminationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_terminationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_ipAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, ipAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_dnsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_dnsName = { "dnsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, dnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_dnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_dnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_PlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerSession_Response" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerSession_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerSession_Response, PlayerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_fleetArn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_creationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_terminationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_dnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::NewProp_PlayerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftPlayerSession_Response",
		sizeof(FGameLiftPlayerSession_Response),
		alignof(FGameLiftPlayerSession_Response),
		Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftPlayerSession_Response"), sizeof(FGameLiftPlayerSession_Response), Get_Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response_Hash() { return 4018374891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif