// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2SSMasterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2SSMasterData() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2SSMasterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2SSMasterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2SSMasterData, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2SSMasterData"), sizeof(FYGS2SSMasterData), Get_Z_Construct_UScriptStruct_FYGS2SSMasterData_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2SSMasterData>()
{
	return FYGS2SSMasterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2SSMasterData(FYGS2SSMasterData::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2SSMasterData"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2SSMasterData
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2SSMasterData()
	{
		UScriptStruct::DeferCppStructOps<FYGS2SSMasterData>(FName(TEXT("YGS2SSMasterData")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2SSMasterData;
	struct Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2SSMasterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2SSMasterData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2SSMasterData",
		sizeof(FYGS2SSMasterData),
		alignof(FYGS2SSMasterData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2SSMasterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2SSMasterData"), sizeof(FYGS2SSMasterData), Get_Z_Construct_UScriptStruct_FYGS2SSMasterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2SSMasterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2SSMasterData_Hash() { return 1826929695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
