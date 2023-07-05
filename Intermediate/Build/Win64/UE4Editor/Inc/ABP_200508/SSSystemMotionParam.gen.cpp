// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSSystemMotionParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSSystemMotionParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionMapping();
// End Cross Module References

static_assert(std::is_polymorphic<FSSSystemMotionParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSSystemMotionParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSSystemMotionParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSSystemMotionParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSSystemMotionParam"), sizeof(FSSSystemMotionParam), Get_Z_Construct_UScriptStruct_FSSSystemMotionParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSSystemMotionParam>()
{
	return FSSSystemMotionParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSSystemMotionParam(FSSSystemMotionParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSSystemMotionParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionParam()
	{
		UScriptStruct::DeferCppStructOps<FSSSystemMotionParam>(FName(TEXT("SSSystemMotionParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionParam;
	struct Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSSystemMotionParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSSystemMotionParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewProp_Mapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionParam" },
		{ "ModuleRelativePath", "Public/SSSystemMotionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionParam, Mapping), Z_Construct_UScriptStruct_FSSSystemMotionMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewProp_Mapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewProp_Mapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::NewProp_Mapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSSystemMotionParam",
		sizeof(FSSSystemMotionParam),
		alignof(FSSSystemMotionParam),
		Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSSystemMotionParam"), sizeof(FSSSystemMotionParam), Get_Z_Construct_UScriptStruct_FSSSystemMotionParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSSystemMotionParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionParam_Hash() { return 1407774909U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
