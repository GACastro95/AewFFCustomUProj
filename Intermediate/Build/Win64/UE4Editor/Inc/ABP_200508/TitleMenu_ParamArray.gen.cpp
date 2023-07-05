// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TitleMenu_ParamArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleMenu_ParamArray() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_ParamArray();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_Param();
// End Cross Module References

static_assert(std::is_polymorphic<FTitleMenu_ParamArray>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTitleMenu_ParamArray cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTitleMenu_ParamArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTitleMenu_ParamArray, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TitleMenu_ParamArray"), sizeof(FTitleMenu_ParamArray), Get_Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTitleMenu_ParamArray>()
{
	return FTitleMenu_ParamArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTitleMenu_ParamArray(FTitleMenu_ParamArray::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TitleMenu_ParamArray"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_ParamArray
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_ParamArray()
	{
		UScriptStruct::DeferCppStructOps<FTitleMenu_ParamArray>(FName(TEXT("TitleMenu_ParamArray")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTitleMenu_ParamArray;
	struct Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TitleMenu_ParamArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTitleMenu_ParamArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params_Inner = { "m_Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTitleMenu_Param, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_ParamArray" },
		{ "ModuleRelativePath", "Public/TitleMenu_ParamArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params = { "m_Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTitleMenu_ParamArray, m_Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::NewProp_m_Params,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TitleMenu_ParamArray",
		sizeof(FTitleMenu_ParamArray),
		alignof(FTitleMenu_ParamArray),
		Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_ParamArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TitleMenu_ParamArray"), sizeof(FTitleMenu_ParamArray), Get_Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTitleMenu_ParamArray_Hash() { return 1641942903U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
