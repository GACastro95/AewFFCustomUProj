// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BlendSocketParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSocketParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSocketParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FBlendSocketParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBlendSocketParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSocketParam, Z_Construct_UPackage__Script_Creation(), TEXT("BlendSocketParam"), sizeof(FBlendSocketParam), Get_Z_Construct_UScriptStruct_FBlendSocketParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBlendSocketParam>()
{
	return FBlendSocketParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendSocketParam(FBlendSocketParam::StaticStruct, TEXT("/Script/Creation"), TEXT("BlendSocketParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBlendSocketParam
{
	FScriptStruct_Creation_StaticRegisterNativesFBlendSocketParam()
	{
		UScriptStruct::DeferCppStructOps<FBlendSocketParam>(FName(TEXT("BlendSocketParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBlendSocketParam;
	struct Z_Construct_UScriptStruct_FBlendSocketParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Heavy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muscular_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Muscular;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSocketParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlendSocketParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSocketParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Slim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlendSocketParam" },
		{ "ModuleRelativePath", "Public/BlendSocketParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Slim = { "Slim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSocketParam, Slim), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Slim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Slim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Heavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlendSocketParam" },
		{ "ModuleRelativePath", "Public/BlendSocketParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Heavy = { "Heavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSocketParam, Heavy), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Heavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Heavy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Muscular_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlendSocketParam" },
		{ "ModuleRelativePath", "Public/BlendSocketParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Muscular = { "Muscular", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendSocketParam, Muscular), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Muscular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Muscular_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSocketParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Slim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Heavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSocketParam_Statics::NewProp_Muscular,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSocketParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"BlendSocketParam",
		sizeof(FBlendSocketParam),
		alignof(FBlendSocketParam),
		Z_Construct_UScriptStruct_FBlendSocketParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSocketParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSocketParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendSocketParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendSocketParam"), sizeof(FBlendSocketParam), Get_Z_Construct_UScriptStruct_FBlendSocketParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendSocketParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendSocketParam_Hash() { return 1006748086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
