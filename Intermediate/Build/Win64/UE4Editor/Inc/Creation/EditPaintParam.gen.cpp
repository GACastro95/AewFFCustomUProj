// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPaintParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPaintParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaintParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
// End Cross Module References
class UScriptStruct* FEditPaintParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPaintParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPaintParam, Z_Construct_UPackage__Script_Creation(), TEXT("EditPaintParam"), sizeof(FEditPaintParam), Get_Z_Construct_UScriptStruct_FEditPaintParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPaintParam>()
{
	return FEditPaintParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPaintParam(FEditPaintParam::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPaintParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPaintParam
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPaintParam()
	{
		UScriptStruct::DeferCppStructOps<FEditPaintParam>(FName(TEXT("EditPaintParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPaintParam;
	struct Z_Construct_UScriptStruct_FEditPaintParam_Statics
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
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaintParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPaintParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPaintParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_AssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaintParam" },
		{ "ModuleRelativePath", "Public/EditPaintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaintParam, AssetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaintParam" },
		{ "ModuleRelativePath", "Public/EditPaintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaintParam, Asset), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_ColorIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPaintParam" },
		{ "ModuleRelativePath", "Public/EditPaintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_ColorIDs = { "ColorIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPaintParam, ColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_ColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_ColorIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPaintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPaintParam_Statics::NewProp_ColorIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPaintParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditPaintParam",
		sizeof(FEditPaintParam),
		alignof(FEditPaintParam),
		Z_Construct_UScriptStruct_FEditPaintParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaintParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPaintParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPaintParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPaintParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPaintParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPaintParam"), sizeof(FEditPaintParam), Get_Z_Construct_UScriptStruct_FEditPaintParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPaintParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPaintParam_Hash() { return 3246406993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif