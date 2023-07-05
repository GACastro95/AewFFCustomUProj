// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ColorAdjustParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorAdjustParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorAdjustParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FColorAdjustParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FColorAdjustParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorAdjustParam, Z_Construct_UPackage__Script_Creation(), TEXT("ColorAdjustParam"), sizeof(FColorAdjustParam), Get_Z_Construct_UScriptStruct_FColorAdjustParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FColorAdjustParam>()
{
	return FColorAdjustParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorAdjustParam(FColorAdjustParam::StaticStruct, TEXT("/Script/Creation"), TEXT("ColorAdjustParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFColorAdjustParam
{
	FScriptStruct_Creation_StaticRegisterNativesFColorAdjustParam()
	{
		UScriptStruct::DeferCppStructOps<FColorAdjustParam>(FName(TEXT("ColorAdjustParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFColorAdjustParam;
	struct Z_Construct_UScriptStruct_FColorAdjustParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Desaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Luminous_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Luminous;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorAdjustParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ColorAdjustParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorAdjustParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Desaturation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorAdjustParam" },
		{ "ModuleRelativePath", "Public/ColorAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Desaturation = { "Desaturation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorAdjustParam, Desaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Desaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Desaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Hue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorAdjustParam" },
		{ "ModuleRelativePath", "Public/ColorAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Hue = { "Hue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorAdjustParam, Hue), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Hue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Hue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Luminous_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorAdjustParam" },
		{ "ModuleRelativePath", "Public/ColorAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Luminous = { "Luminous", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorAdjustParam, Luminous), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Luminous_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Luminous_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Desaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Hue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorAdjustParam_Statics::NewProp_Luminous,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorAdjustParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"ColorAdjustParam",
		sizeof(FColorAdjustParam),
		alignof(FColorAdjustParam),
		Z_Construct_UScriptStruct_FColorAdjustParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorAdjustParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorAdjustParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorAdjustParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorAdjustParam"), sizeof(FColorAdjustParam), Get_Z_Construct_UScriptStruct_FColorAdjustParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorAdjustParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorAdjustParam_Hash() { return 807288382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
