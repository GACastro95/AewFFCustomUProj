// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsRaw() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsRaw();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
// End Cross Module References
class UScriptStruct* FEditPartsRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsRaw, Z_Construct_UPackage__Script_Creation(), TEXT("EditPartsRaw"), sizeof(FEditPartsRaw), Get_Z_Construct_UScriptStruct_FEditPartsRaw_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPartsRaw>()
{
	return FEditPartsRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsRaw(FEditPartsRaw::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPartsRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPartsRaw
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPartsRaw()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsRaw>(FName(TEXT("EditPartsRaw")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPartsRaw;
	struct Z_Construct_UScriptStruct_FEditPartsRaw_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsRaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_AssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsRaw" },
		{ "ModuleRelativePath", "Public/EditPartsRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsRaw, AssetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsRaw" },
		{ "ModuleRelativePath", "Public/EditPartsRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsRaw, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_ColorIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsRaw" },
		{ "ModuleRelativePath", "Public/EditPartsRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_ColorIDs = { "ColorIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsRaw, ColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_ColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_ColorIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPartsRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsRaw_Statics::NewProp_ColorIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditPartsRaw",
		sizeof(FEditPartsRaw),
		alignof(FEditPartsRaw),
		Z_Construct_UScriptStruct_FEditPartsRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsRaw"), sizeof(FEditPartsRaw), Get_Z_Construct_UScriptStruct_FEditPartsRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsRaw_Hash() { return 784436454U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
