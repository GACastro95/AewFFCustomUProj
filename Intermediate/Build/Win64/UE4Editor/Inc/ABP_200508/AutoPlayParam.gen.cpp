// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AutoPlayParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoPlayParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoPlayParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FAutoPlayParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAutoPlayParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoPlayParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AutoPlayParam"), sizeof(FAutoPlayParam), Get_Z_Construct_UScriptStruct_FAutoPlayParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAutoPlayParam>()
{
	return FAutoPlayParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoPlayParam(FAutoPlayParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AutoPlayParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAutoPlayParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAutoPlayParam()
	{
		UScriptStruct::DeferCppStructOps<FAutoPlayParam>(FName(TEXT("AutoPlayParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAutoPlayParam;
	struct Z_Construct_UScriptStruct_FAutoPlayParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PadInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPlayParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutoPlayParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoPlayParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_PadInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoPlayParam" },
		{ "ModuleRelativePath", "Public/AutoPlayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_PadInfo = { "PadInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoPlayParam, PadInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_PadInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_PadInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoPlayParam" },
		{ "ModuleRelativePath", "Public/AutoPlayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoPlayParam, Widget), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_TableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoPlayParam" },
		{ "ModuleRelativePath", "Public/AutoPlayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoPlayParam, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_TableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Info_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoPlayParam" },
		{ "ModuleRelativePath", "Public/AutoPlayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoPlayParam, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoPlayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_PadInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoPlayParam_Statics::NewProp_Info,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoPlayParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"AutoPlayParam",
		sizeof(FAutoPlayParam),
		alignof(FAutoPlayParam),
		Z_Construct_UScriptStruct_FAutoPlayParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoPlayParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoPlayParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoPlayParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoPlayParam"), sizeof(FAutoPlayParam), Get_Z_Construct_UScriptStruct_FAutoPlayParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoPlayParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoPlayParam_Hash() { return 1763011425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
