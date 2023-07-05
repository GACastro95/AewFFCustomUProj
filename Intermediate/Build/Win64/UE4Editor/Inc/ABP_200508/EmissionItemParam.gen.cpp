// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EmissionItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmissionItemParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FEmissionItemParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateItemParam();
// End Cross Module References
class UScriptStruct* FEmissionItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FEmissionItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmissionItemParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EmissionItemParam"), sizeof(FEmissionItemParam), Get_Z_Construct_UScriptStruct_FEmissionItemParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FEmissionItemParam>()
{
	return FEmissionItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmissionItemParam(FEmissionItemParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("EmissionItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFEmissionItemParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFEmissionItemParam()
	{
		UScriptStruct::DeferCppStructOps<FEmissionItemParam>(FName(TEXT("EmissionItemParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFEmissionItemParam;
	struct Z_Construct_UScriptStruct_FEmissionItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParamMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemParamMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemParamMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmissionItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmissionItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmissionItemParam>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_ValueProp = { "ItemParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCrateItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_Key_KeyProp = { "ItemParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EmissionItemParam" },
		{ "ModuleRelativePath", "Public/EmissionItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap = { "ItemParamMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmissionItemParam, ItemParamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmissionItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmissionItemParam_Statics::NewProp_ItemParamMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmissionItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"EmissionItemParam",
		sizeof(FEmissionItemParam),
		alignof(FEmissionItemParam),
		Z_Construct_UScriptStruct_FEmissionItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmissionItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmissionItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmissionItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmissionItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmissionItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmissionItemParam"), sizeof(FEmissionItemParam), Get_Z_Construct_UScriptStruct_FEmissionItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmissionItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmissionItemParam_Hash() { return 4021311642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
