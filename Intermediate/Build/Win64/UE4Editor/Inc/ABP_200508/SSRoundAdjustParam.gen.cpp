// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSRoundAdjustParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSRoundAdjustParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundAdjustParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSRoundAdjustParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSRoundAdjustParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSRoundAdjustParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSRoundAdjustParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSRoundAdjustParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSRoundAdjustParam"), sizeof(FSSRoundAdjustParam), Get_Z_Construct_UScriptStruct_FSSRoundAdjustParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSRoundAdjustParam>()
{
	return FSSRoundAdjustParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSRoundAdjustParam(FSSRoundAdjustParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSRoundAdjustParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundAdjustParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundAdjustParam()
	{
		UScriptStruct::DeferCppStructOps<FSSRoundAdjustParam>(FName(TEXT("SSRoundAdjustParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundAdjustParam;
	struct Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugRoundState_MetaData[];
#endif
		static void NewProp_DrawDebugRoundState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugRoundState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeforeShrinkAnnounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeforeShrinkAnnounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkAnnounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkAnnounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLagTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLagTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearSafeAreaDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearSafeAreaDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSRoundAdjustParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundAdjustParam" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState_SetBit(void* Obj)
	{
		((FSSRoundAdjustParam*)Obj)->DrawDebugRoundState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState = { "DrawDebugRoundState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSRoundAdjustParam), &Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_BeforeShrinkAnnounceDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundAdjustParam" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_BeforeShrinkAnnounceDuration = { "BeforeShrinkAnnounceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundAdjustParam, BeforeShrinkAnnounceDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_BeforeShrinkAnnounceDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_BeforeShrinkAnnounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_ShrinkAnnounceDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundAdjustParam" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_ShrinkAnnounceDuration = { "ShrinkAnnounceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundAdjustParam, ShrinkAnnounceDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_ShrinkAnnounceDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_ShrinkAnnounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_TimeLagTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundAdjustParam" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_TimeLagTolerance = { "TimeLagTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundAdjustParam, TimeLagTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_TimeLagTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_TimeLagTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_NearSafeAreaDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundAdjustParam" },
		{ "ModuleRelativePath", "Public/SSRoundAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_NearSafeAreaDistance = { "NearSafeAreaDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundAdjustParam, NearSafeAreaDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_NearSafeAreaDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_NearSafeAreaDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_DrawDebugRoundState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_BeforeShrinkAnnounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_ShrinkAnnounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_TimeLagTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::NewProp_NearSafeAreaDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSRoundAdjustParam",
		sizeof(FSSRoundAdjustParam),
		alignof(FSSRoundAdjustParam),
		Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSRoundAdjustParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSRoundAdjustParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSRoundAdjustParam"), sizeof(FSSRoundAdjustParam), Get_Z_Construct_UScriptStruct_FSSRoundAdjustParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSRoundAdjustParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSRoundAdjustParam_Hash() { return 3108905380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
