// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameSessionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameSessionData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameSessionData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSGameSessionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSGameSessionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSGameSessionData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSGameSessionData"), sizeof(FELSSGameSessionData), Get_Z_Construct_UScriptStruct_FELSSGameSessionData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSGameSessionData>()
{
	return FELSSGameSessionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSGameSessionData(FELSSGameSessionData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSGameSessionData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameSessionData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameSessionData()
	{
		UScriptStruct::DeferCppStructOps<FELSSGameSessionData>(FName(TEXT("ELSSGameSessionData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameSessionData;
	struct Z_Construct_UScriptStruct_FELSSGameSessionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lobbyTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameSessionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSGameSessionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_PlayerMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameSessionData" },
		{ "ModuleRelativePath", "Public/ELSSGameSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameSessionData, PlayerMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_PlayerMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_PlayerMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_playerMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameSessionData" },
		{ "ModuleRelativePath", "Public/ELSSGameSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_playerMin = { "playerMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameSessionData, playerMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_playerMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_playerMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_lobbyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameSessionData" },
		{ "ModuleRelativePath", "Public/ELSSGameSessionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_lobbyTime = { "lobbyTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameSessionData, lobbyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_lobbyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_lobbyTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_PlayerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_playerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::NewProp_lobbyTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSGameSessionData",
		sizeof(FELSSGameSessionData),
		alignof(FELSSGameSessionData),
		Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSGameSessionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSGameSessionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSGameSessionData"), sizeof(FELSSGameSessionData), Get_Z_Construct_UScriptStruct_FELSSGameSessionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSGameSessionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSGameSessionData_Hash() { return 2312065351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
