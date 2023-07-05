// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BodyAdjustParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyAdjustParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBodyAdjustParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FBodyAdjustParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBodyAdjustParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyAdjustParam, Z_Construct_UPackage__Script_Creation(), TEXT("BodyAdjustParam"), sizeof(FBodyAdjustParam), Get_Z_Construct_UScriptStruct_FBodyAdjustParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBodyAdjustParam>()
{
	return FBodyAdjustParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyAdjustParam(FBodyAdjustParam::StaticStruct, TEXT("/Script/Creation"), TEXT("BodyAdjustParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBodyAdjustParam
{
	FScriptStruct_Creation_StaticRegisterNativesFBodyAdjustParam()
	{
		UScriptStruct::DeferCppStructOps<FBodyAdjustParam>(FName(TEXT("BodyAdjustParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBodyAdjustParam;
	struct Z_Construct_UScriptStruct_FBodyAdjustParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muscle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Muscle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyAdjustParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyAdjustParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyAdjustParam" },
		{ "ModuleRelativePath", "Public/BodyAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyAdjustParam, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyAdjustParam" },
		{ "ModuleRelativePath", "Public/BodyAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyAdjustParam, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Muscle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyAdjustParam" },
		{ "ModuleRelativePath", "Public/BodyAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Muscle = { "Muscle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyAdjustParam, Muscle), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Muscle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Muscle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::NewProp_Muscle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"BodyAdjustParam",
		sizeof(FBodyAdjustParam),
		alignof(FBodyAdjustParam),
		Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyAdjustParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyAdjustParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyAdjustParam"), sizeof(FBodyAdjustParam), Get_Z_Construct_UScriptStruct_FBodyAdjustParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyAdjustParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyAdjustParam_Hash() { return 3024810015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
