// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameSessions_Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameSessions_Response() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessions_Response();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response();
// End Cross Module References
class UScriptStruct* FGameLiftGameSessions_Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftGameSessions_Response"), sizeof(FGameLiftGameSessions_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftGameSessions_Response>()
{
	return FGameLiftGameSessions_Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftGameSessions_Response(FGameLiftGameSessions_Response::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftGameSessions_Response"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessions_Response
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessions_Response()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftGameSessions_Response>(FName(TEXT("GameLiftGameSessions_Response")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessions_Response;
	struct Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextToken;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameSessionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameSessionList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessions_Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftGameSessions_Response>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_nextToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessions_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessions_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_nextToken = { "nextToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessions_Response, nextToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_nextToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_nextToken_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList_Inner = { "gameSessionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessions_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessions_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList = { "gameSessionList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessions_Response, gameSessionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_nextToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::NewProp_gameSessionList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftGameSessions_Response",
		sizeof(FGameLiftGameSessions_Response),
		alignof(FGameLiftGameSessions_Response),
		Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessions_Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftGameSessions_Response"), sizeof(FGameLiftGameSessions_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessions_Response_Hash() { return 1246984961U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
