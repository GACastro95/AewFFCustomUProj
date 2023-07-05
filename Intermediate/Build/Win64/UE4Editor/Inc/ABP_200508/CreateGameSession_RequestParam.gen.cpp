// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CreateGameSession_RequestParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateGameSession_RequestParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateGameSession_RequestParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftSessionServerProperties();
// End Cross Module References
class UScriptStruct* FCreateGameSession_RequestParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CreateGameSession_RequestParam"), sizeof(FCreateGameSession_RequestParam), Get_Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCreateGameSession_RequestParam>()
{
	return FCreateGameSession_RequestParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCreateGameSession_RequestParam(FCreateGameSession_RequestParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CreateGameSession_RequestParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCreateGameSession_RequestParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCreateGameSession_RequestParam()
	{
		UScriptStruct::DeferCppStructOps<FCreateGameSession_RequestParam>(FName(TEXT("CreateGameSession_RequestParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCreateGameSession_RequestParam;
	struct Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fleetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fleetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_creatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idempotencyToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_idempotencyToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameSessionProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameSessionProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateGameSession_RequestParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_aliasID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, aliasID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_aliasID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_fleetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_fleetId = { "fleetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, fleetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_fleetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_fleetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_creatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_creatorId = { "creatorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, creatorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_creatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_creatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_idempotencyToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_idempotencyToken = { "idempotencyToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, idempotencyToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_idempotencyToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_idempotencyToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionData = { "gameSessionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, gameSessionData), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties_Inner = { "gameSessionProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameLiftSessionServerProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateGameSession_RequestParam" },
		{ "ModuleRelativePath", "Public/CreateGameSession_RequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties = { "gameSessionProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateGameSession_RequestParam, gameSessionProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_aliasID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_fleetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_creatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_idempotencyToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::NewProp_gameSessionProperties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CreateGameSession_RequestParam",
		sizeof(FCreateGameSession_RequestParam),
		alignof(FCreateGameSession_RequestParam),
		Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateGameSession_RequestParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CreateGameSession_RequestParam"), sizeof(FCreateGameSession_RequestParam), Get_Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCreateGameSession_RequestParam_Hash() { return 2587907900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
