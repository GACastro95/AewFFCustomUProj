// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraPlaceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraPlaceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraPlaceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraPlaceParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraPlaceParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraPlaceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraPlaceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraPlaceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraPlaceParam"), sizeof(FSSCameraPlaceParam), Get_Z_Construct_UScriptStruct_FSSCameraPlaceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraPlaceParam>()
{
	return FSSCameraPlaceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraPlaceParam(FSSCameraPlaceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraPlaceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraPlaceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraPlaceParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraPlaceParam>(FName(TEXT("SSCameraPlaceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraPlaceParam;
	struct Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPlaceInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPlaceInterp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPitchScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPitchScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPitchScaleInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPitchScaleInterp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetLengthInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetLengthInterp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraPlaceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlace = { "TargetLengthOffsetByPlace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, TargetLengthOffsetByPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlaceInterp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlaceInterp = { "TargetLengthOffsetByPlaceInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, TargetLengthOffsetByPlaceInterp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlaceInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlaceInterp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScale = { "TargetLengthOffsetByPitchScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, TargetLengthOffsetByPitchScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScaleInterp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScaleInterp = { "TargetLengthOffsetByPitchScaleInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, TargetLengthOffsetByPitchScaleInterp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScaleInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScaleInterp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLength = { "MaxTargetLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, MaxTargetLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLengthInterp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraPlaceParam" },
		{ "ModuleRelativePath", "Public/SSCameraPlaceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLengthInterp = { "MaxTargetLengthInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraPlaceParam, MaxTargetLengthInterp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLengthInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLengthInterp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPlaceInterp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_TargetLengthOffsetByPitchScaleInterp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::NewProp_MaxTargetLengthInterp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraPlaceParam",
		sizeof(FSSCameraPlaceParam),
		alignof(FSSCameraPlaceParam),
		Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraPlaceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraPlaceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraPlaceParam"), sizeof(FSSCameraPlaceParam), Get_Z_Construct_UScriptStruct_FSSCameraPlaceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraPlaceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraPlaceParam_Hash() { return 1445556166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
