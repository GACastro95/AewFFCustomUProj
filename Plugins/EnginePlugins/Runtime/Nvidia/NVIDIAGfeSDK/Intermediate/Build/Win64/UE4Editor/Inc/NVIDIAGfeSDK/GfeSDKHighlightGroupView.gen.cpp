// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKHighlightGroupView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKHighlightGroupView() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance();
// End Cross Module References
class UScriptStruct* FGfeSDKHighlightGroupView::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKHighlightGroupView"), sizeof(FGfeSDKHighlightGroupView), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKHighlightGroupView>()
{
	return FGfeSDKHighlightGroupView::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKHighlightGroupView(FGfeSDKHighlightGroupView::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKHighlightGroupView"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightGroupView
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightGroupView()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKHighlightGroupView>(FName(TEXT("GfeSDKHighlightGroupView")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightGroupView;
	struct Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagsFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagsFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignificanceFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignificanceFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightGroupView.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKHighlightGroupView>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightGroupView" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightGroupView.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightGroupView, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_GroupId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightGroupView" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightGroupView.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter = { "TagsFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightGroupView, TagsFilter), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightGroupView" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightGroupView.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter = { "SignificanceFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightGroupView, SignificanceFilter), Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_TagsFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::NewProp_SignificanceFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKHighlightGroupView",
		sizeof(FGfeSDKHighlightGroupView),
		alignof(FGfeSDKHighlightGroupView),
		Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKHighlightGroupView"), sizeof(FGfeSDKHighlightGroupView), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightGroupView_Hash() { return 3291795078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
