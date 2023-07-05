// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPartyChatLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPartyChatLog() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPartyChatLog();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatLogData();
// End Cross Module References
class UScriptStruct* FLobbyPartyChatLog::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatLog_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPartyChatLog, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LobbyPartyChatLog"), sizeof(FLobbyPartyChatLog), Get_Z_Construct_UScriptStruct_FLobbyPartyChatLog_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLobbyPartyChatLog>()
{
	return FLobbyPartyChatLog::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyPartyChatLog(FLobbyPartyChatLog::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LobbyPartyChatLog"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatLog
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatLog()
	{
		UScriptStruct::DeferCppStructOps<FLobbyPartyChatLog>(FName(TEXT("LobbyPartyChatLog")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPartyChatLog;
	struct Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastReadTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatLog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatLog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPartyChatLog>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_LastReadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatLog" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_LastReadTime = { "LastReadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatLog, LastReadTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_LastReadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_LastReadTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_ValueProp = { "PlayerData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyPartyChatPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_Key_KeyProp = { "PlayerData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatLog" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatLog.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatLog, PlayerData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog_Inner = { "ChatLog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLobbyChatLogData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPartyChatLog" },
		{ "ModuleRelativePath", "Public/LobbyPartyChatLog.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog = { "ChatLog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPartyChatLog, ChatLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_LastReadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::NewProp_ChatLog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"LobbyPartyChatLog",
		sizeof(FLobbyPartyChatLog),
		alignof(FLobbyPartyChatLog),
		Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPartyChatLog()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatLog_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyPartyChatLog"), sizeof(FLobbyPartyChatLog), Get_Z_Construct_UScriptStruct_FLobbyPartyChatLog_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyPartyChatLog_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyPartyChatLog_Hash() { return 2436408224U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
