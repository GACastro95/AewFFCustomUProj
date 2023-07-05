// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSSuccessMatchData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSSuccessMatchData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSuccessMatchData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSSuccessMatchData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSSuccessMatchData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSSuccessMatchData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSSuccessMatchData"), sizeof(FSSSuccessMatchData), Get_Z_Construct_UScriptStruct_FSSSuccessMatchData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSSuccessMatchData>()
{
	return FSSSuccessMatchData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSSuccessMatchData(FSSSuccessMatchData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSSuccessMatchData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSSuccessMatchData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSSuccessMatchData()
	{
		UScriptStruct::DeferCppStructOps<FSSSuccessMatchData>(FName(TEXT("SSSuccessMatchData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSSuccessMatchData;
	struct Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlexMatchTicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlexMatchTicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlexMatchStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlexMatchStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSSuccessMatchData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchTicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchTicketId = { "FlexMatchTicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, FlexMatchTicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchTicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchTicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchStatus = { "FlexMatchStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, FlexMatchStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_gameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerSessionId = { "playerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, playerSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, ServerAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_ServerAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_ServerAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSuccessMatchData" },
		{ "ModuleRelativePath", "Public/SSSuccessMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSuccessMatchData, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchTicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_FlexMatchStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_ServerAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::NewProp_playerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSSuccessMatchData",
		sizeof(FSSSuccessMatchData),
		alignof(FSSSuccessMatchData),
		Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSSuccessMatchData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSSuccessMatchData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSSuccessMatchData"), sizeof(FSSSuccessMatchData), Get_Z_Construct_UScriptStruct_FSSSuccessMatchData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSSuccessMatchData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSSuccessMatchData_Hash() { return 2165461296U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
