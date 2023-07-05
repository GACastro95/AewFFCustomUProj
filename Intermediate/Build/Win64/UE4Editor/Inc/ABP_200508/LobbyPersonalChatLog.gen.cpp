// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPersonalChatLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPersonalChatLog() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPersonalChatLog();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatLogData();
// End Cross Module References
class UScriptStruct* FLobbyPersonalChatLog::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPersonalChatLog, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LobbyPersonalChatLog"), sizeof(FLobbyPersonalChatLog), Get_Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLobbyPersonalChatLog>()
{
	return FLobbyPersonalChatLog::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyPersonalChatLog(FLobbyPersonalChatLog::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LobbyPersonalChatLog"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPersonalChatLog
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPersonalChatLog()
	{
		UScriptStruct::DeferCppStructOps<FLobbyPersonalChatLog>(FName(TEXT("LobbyPersonalChatLog")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLobbyPersonalChatLog;
	struct Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastReadTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatLog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyPersonalChatLog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPersonalChatLog>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_LastReadTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPersonalChatLog" },
		{ "ModuleRelativePath", "Public/LobbyPersonalChatLog.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_LastReadTime = { "LastReadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPersonalChatLog, LastReadTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_LastReadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_LastReadTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog_Inner = { "ChatLog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLobbyChatLogData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPersonalChatLog" },
		{ "ModuleRelativePath", "Public/LobbyPersonalChatLog.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog = { "ChatLog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyPersonalChatLog, ChatLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_LastReadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::NewProp_ChatLog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"LobbyPersonalChatLog",
		sizeof(FLobbyPersonalChatLog),
		alignof(FLobbyPersonalChatLog),
		Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPersonalChatLog()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyPersonalChatLog"), sizeof(FLobbyPersonalChatLog), Get_Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyPersonalChatLog_Hash() { return 3059688589U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
