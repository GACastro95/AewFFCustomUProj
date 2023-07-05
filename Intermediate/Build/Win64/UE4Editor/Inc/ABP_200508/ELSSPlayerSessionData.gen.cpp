// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPlayerSessionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPlayerSessionData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSPlayerSessionData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSPlayerData();
// End Cross Module References
class UScriptStruct* FELSSPlayerSessionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSPlayerSessionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSPlayerSessionData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSPlayerSessionData"), sizeof(FELSSPlayerSessionData), Get_Z_Construct_UScriptStruct_FELSSPlayerSessionData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSPlayerSessionData>()
{
	return FELSSPlayerSessionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSPlayerSessionData(FELSSPlayerSessionData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSPlayerSessionData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSPlayerSessionData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSPlayerSessionData()
	{
		UScriptStruct::DeferCppStructOps<FELSSPlayerSessionData>(FName(TEXT("ELSSPlayerSessionData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSPlayerSessionData;
	struct Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSPlayerSessionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSPlayerSessionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_PlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerSessionData" },
		{ "ModuleRelativePath", "Public/ELSSPlayerSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSPlayerSessionData, PlayerData), Z_Construct_UScriptStruct_FELSSPlayerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_PlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerSessionData" },
		{ "ModuleRelativePath", "Public/ELSSPlayerSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSPlayerSessionData, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerSessionData" },
		{ "ModuleRelativePath", "Public/ELSSPlayerSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerSessionId = { "playerSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSPlayerSessionData, playerSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerSessionData" },
		{ "ModuleRelativePath", "Public/ELSSPlayerSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSPlayerSessionData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_playerSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSPlayerSessionData",
		sizeof(FELSSPlayerSessionData),
		alignof(FELSSPlayerSessionData),
		Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSPlayerSessionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSPlayerSessionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSPlayerSessionData"), sizeof(FELSSPlayerSessionData), Get_Z_Construct_UScriptStruct_FELSSPlayerSessionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSPlayerSessionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSPlayerSessionData_Hash() { return 3044712442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
