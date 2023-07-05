// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TutorialArchiveCategoryResourceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialArchiveCategoryResourceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam();
// End Cross Module References
class UScriptStruct* FTutorialArchiveCategoryResourceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TutorialArchiveCategoryResourceParam"), sizeof(FTutorialArchiveCategoryResourceParam), Get_Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTutorialArchiveCategoryResourceParam>()
{
	return FTutorialArchiveCategoryResourceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialArchiveCategoryResourceParam(FTutorialArchiveCategoryResourceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TutorialArchiveCategoryResourceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialArchiveCategoryResourceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialArchiveCategoryResourceParam()
	{
		UScriptStruct::DeferCppStructOps<FTutorialArchiveCategoryResourceParam>(FName(TEXT("TutorialArchiveCategoryResourceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTutorialArchiveCategoryResourceParam;
	struct Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResourceList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TutorialArchiveCategoryResourceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialArchiveCategoryResourceParam>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList_Inner = { "ResourceList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExecuteTutorialDialogParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialArchiveCategoryResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialArchiveCategoryResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList = { "ResourceList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialArchiveCategoryResourceParam, ResourceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::NewProp_ResourceList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TutorialArchiveCategoryResourceParam",
		sizeof(FTutorialArchiveCategoryResourceParam),
		alignof(FTutorialArchiveCategoryResourceParam),
		Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialArchiveCategoryResourceParam"), sizeof(FTutorialArchiveCategoryResourceParam), Get_Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialArchiveCategoryResourceParam_Hash() { return 579401230U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
