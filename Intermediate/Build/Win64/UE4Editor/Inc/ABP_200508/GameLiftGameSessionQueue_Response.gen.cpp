// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameSessionQueue_Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameSessionQueue_Response() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftFilterConfiguration();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration();
// End Cross Module References
class UScriptStruct* FGameLiftGameSessionQueue_Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftGameSessionQueue_Response"), sizeof(FGameLiftGameSessionQueue_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftGameSessionQueue_Response>()
{
	return FGameLiftGameSessionQueue_Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftGameSessionQueue_Response(FGameLiftGameSessionQueue_Response::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftGameSessionQueue_Response"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueue_Response
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueue_Response()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftGameSessionQueue_Response>(FName(TEXT("GameLiftGameSessionQueue_Response")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueue_Response;
	struct Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionQueueArn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionQueueArn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeoutInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeoutInSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerLatencyPolicies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLatencyPolicies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerLatencyPolicies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destinations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_destinations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filterConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_filterConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_priorityConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_priorityConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_customEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_notificationTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftGameSessionQueue_Response>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_gameSessionQueueArn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_gameSessionQueueArn = { "gameSessionQueueArn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, gameSessionQueueArn), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_gameSessionQueueArn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_gameSessionQueueArn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_timeoutInSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_timeoutInSeconds = { "timeoutInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, timeoutInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_timeoutInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_timeoutInSeconds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies_Inner = { "playerLatencyPolicies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftPlacePlayerSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies = { "playerLatencyPolicies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, playerLatencyPolicies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations_Inner = { "destinations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations = { "destinations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, destinations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_filterConfiguration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_filterConfiguration = { "filterConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, filterConfiguration), Z_Construct_UScriptStruct_FGameLiftFilterConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_filterConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_filterConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_priorityConfiguration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_priorityConfiguration = { "priorityConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, priorityConfiguration), Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_priorityConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_priorityConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_customEventData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_customEventData = { "customEventData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, customEventData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_customEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_customEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_notificationTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueue_Response" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueue_Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_notificationTarget = { "notificationTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueue_Response, notificationTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_notificationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_notificationTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_gameSessionQueueArn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_timeoutInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_playerLatencyPolicies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_destinations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_filterConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_priorityConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_customEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::NewProp_notificationTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftGameSessionQueue_Response",
		sizeof(FGameLiftGameSessionQueue_Response),
		alignof(FGameLiftGameSessionQueue_Response),
		Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftGameSessionQueue_Response"), sizeof(FGameLiftGameSessionQueue_Response), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueue_Response_Hash() { return 4108845672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
