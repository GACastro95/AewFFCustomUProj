// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraConfigParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraConfigParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraConfigParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraConfigParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraConfigParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraConfigParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraConfigParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraConfigParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraConfigParam"), sizeof(FSSCameraConfigParam), Get_Z_Construct_UScriptStruct_FSSCameraConfigParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraConfigParam>()
{
	return FSSCameraConfigParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraConfigParam(FSSCameraConfigParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraConfigParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraConfigParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraConfigParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraConfigParam>(FName(TEXT("SSCameraConfigParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraConfigParam;
	struct Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraConfigParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraConfigParam>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraConfigParam",
		sizeof(FSSCameraConfigParam),
		alignof(FSSCameraConfigParam),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraConfigParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraConfigParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraConfigParam"), sizeof(FSSCameraConfigParam), Get_Z_Construct_UScriptStruct_FSSCameraConfigParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraConfigParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraConfigParam_Hash() { return 4156231588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
