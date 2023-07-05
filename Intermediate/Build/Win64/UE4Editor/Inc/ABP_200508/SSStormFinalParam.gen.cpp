// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStormFinalParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStormFinalParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormFinalParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSStormFinalParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSStormFinalParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSStormFinalParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStormFinalParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStormFinalParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStormFinalParam"), sizeof(FSSStormFinalParam), Get_Z_Construct_UScriptStruct_FSSStormFinalParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStormFinalParam>()
{
	return FSSStormFinalParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStormFinalParam(FSSStormFinalParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStormFinalParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormFinalParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormFinalParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStormFinalParam>(FName(TEXT("SSStormFinalParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStormFinalParam;
	struct Z_Construct_UScriptStruct_FSSStormFinalParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_activeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_intervalDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_intervalDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveRangeMeter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveRangeMeter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStormFinalParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStormFinalParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_activeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormFinalParam" },
		{ "ModuleRelativePath", "Public/SSStormFinalParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_activeDuration = { "activeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormFinalParam, activeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_activeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_activeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_intervalDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormFinalParam" },
		{ "ModuleRelativePath", "Public/SSStormFinalParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_intervalDuration = { "intervalDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormFinalParam, intervalDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_intervalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_intervalDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_radiusScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormFinalParam" },
		{ "ModuleRelativePath", "Public/SSStormFinalParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_radiusScale = { "radiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormFinalParam, radiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_radiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_radiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_moveRangeMeter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormFinalParam" },
		{ "ModuleRelativePath", "Public/SSStormFinalParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_moveRangeMeter = { "moveRangeMeter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormFinalParam, moveRangeMeter), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_moveRangeMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_moveRangeMeter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_activeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_intervalDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_radiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::NewProp_moveRangeMeter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSStormFinalParam",
		sizeof(FSSStormFinalParam),
		alignof(FSSStormFinalParam),
		Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStormFinalParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStormFinalParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStormFinalParam"), sizeof(FSSStormFinalParam), Get_Z_Construct_UScriptStruct_FSSStormFinalParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStormFinalParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStormFinalParam_Hash() { return 2008989736U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
