// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CostumeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCostumeParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
// End Cross Module References
class UScriptStruct* FCostumeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FCostumeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCostumeParam, Z_Construct_UPackage__Script_Creation(), TEXT("CostumeParam"), sizeof(FCostumeParam), Get_Z_Construct_UScriptStruct_FCostumeParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FCostumeParam>()
{
	return FCostumeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCostumeParam(FCostumeParam::StaticStruct, TEXT("/Script/Creation"), TEXT("CostumeParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFCostumeParam
{
	FScriptStruct_Creation_StaticRegisterNativesFCostumeParam()
	{
		UScriptStruct::DeferCppStructOps<FCostumeParam>(FName(TEXT("CostumeParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFCostumeParam;
	struct Z_Construct_UScriptStruct_FCostumeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemID_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemID_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrintID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrintID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostumeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CostumeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCostumeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCostumeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CostumeParam" },
		{ "ModuleRelativePath", "Public/CostumeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Ring = { "ItemID_Ring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostumeParam, ItemID_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CostumeParam" },
		{ "ModuleRelativePath", "Public/CostumeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Entrance = { "ItemID_Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostumeParam, ItemID_Entrance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_PrintID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CostumeParam" },
		{ "ModuleRelativePath", "Public/CostumeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_PrintID = { "PrintID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostumeParam, PrintID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_PrintID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_PrintID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ColorIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CostumeParam" },
		{ "ModuleRelativePath", "Public/CostumeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ColorIDs = { "ColorIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostumeParam, ColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ColorIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCostumeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ItemID_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_PrintID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostumeParam_Statics::NewProp_ColorIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCostumeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"CostumeParam",
		sizeof(FCostumeParam),
		alignof(FCostumeParam),
		Z_Construct_UScriptStruct_FCostumeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCostumeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCostumeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCostumeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CostumeParam"), sizeof(FCostumeParam), Get_Z_Construct_UScriptStruct_FCostumeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCostumeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCostumeParam_Hash() { return 4252684129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
