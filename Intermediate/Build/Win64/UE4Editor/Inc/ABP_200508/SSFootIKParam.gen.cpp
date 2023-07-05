// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSFootIKParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSFootIKParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFootIKParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSFootIKParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSFootIKParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSFootIKParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSFootIKParam"), sizeof(FSSFootIKParam), Get_Z_Construct_UScriptStruct_FSSFootIKParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSFootIKParam>()
{
	return FSSFootIKParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSFootIKParam(FSSFootIKParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSFootIKParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSFootIKParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSFootIKParam()
	{
		UScriptStruct::DeferCppStructOps<FSSFootIKParam>(FName(TEXT("SSFootIKParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSFootIKParam;
	struct Z_Construct_UScriptStruct_FSSFootIKParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipHeightDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipHeightDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHeightDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHeightDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHeightDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHeightDiff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFootIKParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSFootIKParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSFootIKParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_HipHeightDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFootIKParam" },
		{ "ModuleRelativePath", "Public/SSFootIKParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_HipHeightDiff = { "HipHeightDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFootIKParam, HipHeightDiff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_HipHeightDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_HipHeightDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_LeftHeightDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFootIKParam" },
		{ "ModuleRelativePath", "Public/SSFootIKParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_LeftHeightDiff = { "LeftHeightDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFootIKParam, LeftHeightDiff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_LeftHeightDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_LeftHeightDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_RightHeightDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFootIKParam" },
		{ "ModuleRelativePath", "Public/SSFootIKParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_RightHeightDiff = { "RightHeightDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFootIKParam, RightHeightDiff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_RightHeightDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_RightHeightDiff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSFootIKParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_HipHeightDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_LeftHeightDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFootIKParam_Statics::NewProp_RightHeightDiff,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSFootIKParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSFootIKParam",
		sizeof(FSSFootIKParam),
		alignof(FSSFootIKParam),
		Z_Construct_UScriptStruct_FSSFootIKParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFootIKParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSFootIKParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSFootIKParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSFootIKParam"), sizeof(FSSFootIKParam), Get_Z_Construct_UScriptStruct_FSSFootIKParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSFootIKParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSFootIKParam_Hash() { return 644106591U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
