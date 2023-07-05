// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLobbyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLobbyData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSLobbyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSLobbyData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSLobbyData"), sizeof(FELSSLobbyData), Get_Z_Construct_UScriptStruct_FELSSLobbyData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSLobbyData>()
{
	return FELSSLobbyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSLobbyData(FELSSLobbyData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSLobbyData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyData()
	{
		UScriptStruct::DeferCppStructOps<FELSSLobbyData>(FName(TEXT("ELSSLobbyData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyData;
	struct Z_Construct_UScriptStruct_FELSSLobbyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectSpawnPointCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectSpawnPointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectSpawnPointCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSLobbyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSLobbyData>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount_Inner = { "selectSpawnPointCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyData" },
		{ "ModuleRelativePath", "Public/ELSSLobbyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount = { "selectSpawnPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyData, selectSpawnPointCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyData_Statics::NewProp_selectSpawnPointCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSLobbyData",
		sizeof(FELSSLobbyData),
		alignof(FELSSLobbyData),
		Z_Construct_UScriptStruct_FELSSLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSLobbyData"), sizeof(FELSSLobbyData), Get_Z_Construct_UScriptStruct_FELSSLobbyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSLobbyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyData_Hash() { return 2416389578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
