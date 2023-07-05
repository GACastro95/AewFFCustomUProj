// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCategoryInfoParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategoryInfoParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCategoryInfoParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategoryInfoParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCategoryInfoParam"), sizeof(FAtomCategoryInfoParam), Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCategoryInfoParam>()
{
	return FAtomCategoryInfoParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCategoryInfoParam(FAtomCategoryInfoParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCategoryInfoParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomCategoryInfoParam>(FName(TEXT("AtomCategoryInfoParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam;
	struct Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_category_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_no_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_group_no;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPaused_MetaData[];
#endif
		static void NewProp_IsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategoryInfoParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id = { "category_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, category_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no = { "group_no", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, group_no), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_SetBit(void* Obj)
	{
		((FAtomCategoryInfoParam*)Obj)->IsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused = { "IsPaused", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCategoryInfoParam), &Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCategoryInfoParam",
		sizeof(FAtomCategoryInfoParam),
		alignof(FAtomCategoryInfoParam),
		Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCategoryInfoParam"), sizeof(FAtomCategoryInfoParam), Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash() { return 2849409446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
