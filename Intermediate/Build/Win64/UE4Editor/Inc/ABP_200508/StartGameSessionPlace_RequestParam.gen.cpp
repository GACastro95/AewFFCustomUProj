// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StartGameSessionPlace_RequestParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartGameSessionPlace_RequestParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameProperty();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerLatency();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession();
// End Cross Module References
class UScriptStruct* FStartGameSessionPlace_RequestParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StartGameSessionPlace_RequestParam"), sizeof(FStartGameSessionPlace_RequestParam), Get_Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStartGameSessionPlace_RequestParam>()
{
	return FStartGameSessionPlace_RequestParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartGameSessionPlace_RequestParam(FStartGameSessionPlace_RequestParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StartGameSessionPlace_RequestParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStartGameSessionPlace_RequestParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStartGameSessionPlace_RequestParam()
	{
		UScriptStruct::DeferCppStructOps<FStartGameSessionPlace_RequestParam>(FName(TEXT("StartGameSessionPlace_RequestParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStartGameSessionPlace_RequestParam;
	struct Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maximumPlayerSessionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maximumPlayerSessionCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerLatencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLatencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerLatencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_desiredPlayerSessions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredPlayerSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_desiredPlayerSessions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartGameSessionPlace_RequestParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_PlacementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_PlacementId = { "PlacementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, PlacementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_PlacementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_PlacementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionQueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionQueueName = { "gameSessionQueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, gameSessionQueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionQueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionQueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_maximumPlayerSessionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_maximumPlayerSessionCount = { "maximumPlayerSessionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, maximumPlayerSessionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_maximumPlayerSessionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_maximumPlayerSessionCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties_Inner = { "gameProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftGameProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties = { "gameProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, gameProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionName = { "gameSessionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, gameSessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies_Inner = { "playerLatencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftPlayerLatency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies = { "playerLatencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, playerLatencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions_Inner = { "desiredPlayerSessions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions = { "desiredPlayerSessions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, desiredPlayerSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartGameSessionPlace_RequestParam" },
		{ "ModuleRelativePath", "Public/StartGameSessionPlace_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionData = { "gameSessionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartGameSessionPlace_RequestParam, gameSessionData), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_PlacementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionQueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_maximumPlayerSessionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_playerLatencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_desiredPlayerSessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::NewProp_gameSessionData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"StartGameSessionPlace_RequestParam",
		sizeof(FStartGameSessionPlace_RequestParam),
		alignof(FStartGameSessionPlace_RequestParam),
		Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartGameSessionPlace_RequestParam"), sizeof(FStartGameSessionPlace_RequestParam), Get_Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartGameSessionPlace_RequestParam_Hash() { return 980597974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
