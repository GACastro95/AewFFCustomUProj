// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TemplateScoutParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateScoutParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateScoutParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FTemplateScoutParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTemplateScoutParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateScoutParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TemplateScoutParam"), sizeof(FTemplateScoutParam), Get_Z_Construct_UScriptStruct_FTemplateScoutParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTemplateScoutParam>()
{
	return FTemplateScoutParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateScoutParam(FTemplateScoutParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TemplateScoutParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTemplateScoutParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTemplateScoutParam()
	{
		UScriptStruct::DeferCppStructOps<FTemplateScoutParam>(FName(TEXT("TemplateScoutParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTemplateScoutParam;
	struct Z_Construct_UScriptStruct_FTemplateScoutParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CaptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DetailText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailSelect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateScoutParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_CaptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutParam" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_CaptionText = { "CaptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateScoutParam, CaptionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_CaptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_CaptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_DetailText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutParam" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_DetailText = { "DetailText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateScoutParam, DetailText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_DetailText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_DetailText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutParam" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateScoutParam, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_ThumbnailSelect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutParam" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_ThumbnailSelect = { "ThumbnailSelect", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateScoutParam, ThumbnailSelect), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_ThumbnailSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_ThumbnailSelect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutParam" },
		{ "ModuleRelativePath", "Public/TemplateScoutParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateScoutParam, SourceAsset), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_SourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_SourceAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_CaptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_DetailText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_ThumbnailSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::NewProp_SourceAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TemplateScoutParam",
		sizeof(FTemplateScoutParam),
		alignof(FTemplateScoutParam),
		Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateScoutParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateScoutParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateScoutParam"), sizeof(FTemplateScoutParam), Get_Z_Construct_UScriptStruct_FTemplateScoutParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateScoutParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateScoutParam_Hash() { return 3951895248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
