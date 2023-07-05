// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStationalCameraParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStationalCameraParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam();
// End Cross Module References

static_assert(std::is_polymorphic<FSSStationalCameraParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSStationalCameraParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSStationalCameraParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStationalCameraParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStationalCameraParam"), sizeof(FSSStationalCameraParam), Get_Z_Construct_UScriptStruct_FSSStationalCameraParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStationalCameraParam>()
{
	return FSSStationalCameraParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStationalCameraParam(FSSStationalCameraParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStationalCameraParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStationalCameraParam>(FName(TEXT("SSStationalCameraParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraParam;
	struct Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStationalCameraParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStationalCameraParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewProp_Param_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraParam, Param), Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::NewProp_Param,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSStationalCameraParam",
		sizeof(FSSStationalCameraParam),
		alignof(FSSStationalCameraParam),
		Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStationalCameraParam"), sizeof(FSSStationalCameraParam), Get_Z_Construct_UScriptStruct_FSSStationalCameraParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStationalCameraParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraParam_Hash() { return 2975642211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
