// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BodyMorphParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyMorphParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBodyMorphParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FBodyMorphParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBodyMorphParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyMorphParam, Z_Construct_UPackage__Script_Creation(), TEXT("BodyMorphParam"), sizeof(FBodyMorphParam), Get_Z_Construct_UScriptStruct_FBodyMorphParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBodyMorphParam>()
{
	return FBodyMorphParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyMorphParam(FBodyMorphParam::StaticStruct, TEXT("/Script/Creation"), TEXT("BodyMorphParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBodyMorphParam
{
	FScriptStruct_Creation_StaticRegisterNativesFBodyMorphParam()
	{
		UScriptStruct::DeferCppStructOps<FBodyMorphParam>(FName(TEXT("BodyMorphParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBodyMorphParam;
	struct Z_Construct_UScriptStruct_FBodyMorphParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heavy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muscular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Muscular;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyMorphParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyMorphParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyMorphParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Slim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyMorphParam" },
		{ "ModuleRelativePath", "Public/BodyMorphParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Slim = { "Slim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyMorphParam, Slim), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Slim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Slim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Heavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyMorphParam" },
		{ "ModuleRelativePath", "Public/BodyMorphParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Heavy = { "Heavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyMorphParam, Heavy), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Heavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Heavy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Muscular_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyMorphParam" },
		{ "ModuleRelativePath", "Public/BodyMorphParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Muscular = { "Muscular", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyMorphParam, Muscular), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Muscular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Muscular_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyMorphParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Slim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Heavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyMorphParam_Statics::NewProp_Muscular,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyMorphParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"BodyMorphParam",
		sizeof(FBodyMorphParam),
		alignof(FBodyMorphParam),
		Z_Construct_UScriptStruct_FBodyMorphParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyMorphParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyMorphParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyMorphParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyMorphParam"), sizeof(FBodyMorphParam), Get_Z_Construct_UScriptStruct_FBodyMorphParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyMorphParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyMorphParam_Hash() { return 3689862309U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
