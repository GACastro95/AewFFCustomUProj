// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsData() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsData();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
// End Cross Module References
class UScriptStruct* FEditPartsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsData, Z_Construct_UPackage__Script_Creation(), TEXT("EditPartsData"), sizeof(FEditPartsData), Get_Z_Construct_UScriptStruct_FEditPartsData_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPartsData>()
{
	return FEditPartsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsData(FEditPartsData::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPartsData"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPartsData
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPartsData()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsData>(FName(TEXT("EditPartsData")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPartsData;
	struct Z_Construct_UScriptStruct_FEditPartsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_AssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsData" },
		{ "ModuleRelativePath", "Public/EditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsData, AssetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsData" },
		{ "ModuleRelativePath", "Public/EditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsData, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsData" },
		{ "ModuleRelativePath", "Public/EditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsData, MeshIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_MeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_MeshIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_ColorIDList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsData" },
		{ "ModuleRelativePath", "Public/EditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_ColorIDList = { "ColorIDList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsData, ColorIDList), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_ColorIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_ColorIDList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPartsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_MeshIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsData_Statics::NewProp_ColorIDList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditPartsData",
		sizeof(FEditPartsData),
		alignof(FEditPartsData),
		Z_Construct_UScriptStruct_FEditPartsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsData"), sizeof(FEditPartsData), Get_Z_Construct_UScriptStruct_FEditPartsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsData_Hash() { return 1444194588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
