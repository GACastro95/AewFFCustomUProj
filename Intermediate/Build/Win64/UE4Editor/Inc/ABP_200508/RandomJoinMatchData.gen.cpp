// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/RandomJoinMatchData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomJoinMatchData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FRandomJoinMatchData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FRandomJoinMatchData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FRandomJoinMatchData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomJoinMatchData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("RandomJoinMatchData"), sizeof(FRandomJoinMatchData), Get_Z_Construct_UScriptStruct_FRandomJoinMatchData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FRandomJoinMatchData>()
{
	return FRandomJoinMatchData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRandomJoinMatchData(FRandomJoinMatchData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("RandomJoinMatchData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFRandomJoinMatchData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFRandomJoinMatchData()
	{
		UScriptStruct::DeferCppStructOps<FRandomJoinMatchData>(FName(TEXT("RandomJoinMatchData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFRandomJoinMatchData;
	struct Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxJoinPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxJoinPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minJoinPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minJoinPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secMatchTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secMatchTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyForceEndLimitiTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lobbyForceEndLimitiTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinSessionTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinSessionTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomJoinMatchData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_maxJoinPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_maxJoinPlayer = { "maxJoinPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, maxJoinPlayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_maxJoinPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_maxJoinPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_minJoinPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_minJoinPlayer = { "minJoinPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, minJoinPlayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_minJoinPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_minJoinPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_secMatchTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_secMatchTimer = { "secMatchTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, secMatchTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_secMatchTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_secMatchTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_lobbyForceEndLimitiTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_lobbyForceEndLimitiTimer = { "lobbyForceEndLimitiTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, lobbyForceEndLimitiTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_lobbyForceEndLimitiTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_lobbyForceEndLimitiTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_joinSessionTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_joinSessionTitle = { "joinSessionTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, joinSessionTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_joinSessionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_joinSessionTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_aliasID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomJoinMatchData" },
		{ "ModuleRelativePath", "Public/RandomJoinMatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomJoinMatchData, aliasID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_aliasID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_maxJoinPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_minJoinPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_secMatchTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_lobbyForceEndLimitiTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_joinSessionTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::NewProp_aliasID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"RandomJoinMatchData",
		sizeof(FRandomJoinMatchData),
		alignof(FRandomJoinMatchData),
		Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRandomJoinMatchData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRandomJoinMatchData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RandomJoinMatchData"), sizeof(FRandomJoinMatchData), Get_Z_Construct_UScriptStruct_FRandomJoinMatchData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRandomJoinMatchData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRandomJoinMatchData_Hash() { return 3695613931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
