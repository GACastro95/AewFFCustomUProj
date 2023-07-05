// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchMakeSystemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchMakeSystemData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchMakeSystemData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessions_Response();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response();
// End Cross Module References
class UScriptStruct* FMatchMakeSystemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchMakeSystemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchMakeSystemData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchMakeSystemData"), sizeof(FMatchMakeSystemData), Get_Z_Construct_UScriptStruct_FMatchMakeSystemData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchMakeSystemData>()
{
	return FMatchMakeSystemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchMakeSystemData(FMatchMakeSystemData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchMakeSystemData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchMakeSystemData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchMakeSystemData()
	{
		UScriptStruct::DeferCppStructOps<FMatchMakeSystemData>(FName(TEXT("MatchMakeSystemData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchMakeSystemData;
	struct Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinGameSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoinGameSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchGameSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_searchGameSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinPlayerSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoinPlayerSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchMakeSystemData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchMakeSystemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinGameSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchMakeSystemData" },
		{ "ModuleRelativePath", "Public/MatchMakeSystemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinGameSession = { "JoinGameSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchMakeSystemData, JoinGameSession), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinGameSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinGameSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_searchGameSessions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchMakeSystemData" },
		{ "ModuleRelativePath", "Public/MatchMakeSystemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_searchGameSessions = { "searchGameSessions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchMakeSystemData, searchGameSessions), Z_Construct_UScriptStruct_FGameLiftGameSessions_Response, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_searchGameSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_searchGameSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinPlayerSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchMakeSystemData" },
		{ "ModuleRelativePath", "Public/MatchMakeSystemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinPlayerSession = { "JoinPlayerSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchMakeSystemData, JoinPlayerSession), Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinPlayerSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinPlayerSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinGameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_searchGameSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::NewProp_JoinPlayerSession,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MatchMakeSystemData",
		sizeof(FMatchMakeSystemData),
		alignof(FMatchMakeSystemData),
		Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchMakeSystemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchMakeSystemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchMakeSystemData"), sizeof(FMatchMakeSystemData), Get_Z_Construct_UScriptStruct_FMatchMakeSystemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchMakeSystemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchMakeSystemData_Hash() { return 772095266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
