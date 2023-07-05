// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraStateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraStateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraStateParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraStateParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraStateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraStateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraStateParam"), sizeof(FSSCameraStateParam), Get_Z_Construct_UScriptStruct_FSSCameraStateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraStateParam>()
{
	return FSSCameraStateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraStateParam(FSSCameraStateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraStateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraStateParam>(FName(TEXT("SSCameraStateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateParam;
	struct Z_Construct_UScriptStruct_FSSCameraStateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePitchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePitchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePitchOffsetInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePitchOffsetInterp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FovInterp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FovInterp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLength_InterpInc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLength_InterpInc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLength_InterpDec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLength_InterpDec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAutoOrientToForward_MetaData[];
#endif
		static void NewProp_UseAutoOrientToForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAutoOrientToForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoOrientToForward_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoOrientToForward_InterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraStateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffset = { "BasePitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, BasePitchOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffsetInterp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffsetInterp = { "BasePitchOffsetInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, BasePitchOffsetInterp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffsetInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffsetInterp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength = { "TargetLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, TargetLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FovInterp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FovInterp = { "FovInterp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, FovInterp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FovInterp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FovInterp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpInc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpInc = { "TargetLength_InterpInc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, TargetLength_InterpInc), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpInc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpInc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpDec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpDec = { "TargetLength_InterpDec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, TargetLength_InterpDec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpDec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpDec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward_SetBit(void* Obj)
	{
		((FSSCameraStateParam*)Obj)->UseAutoOrientToForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward = { "UseAutoOrientToForward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraStateParam), &Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_AutoOrientToForward_InterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_AutoOrientToForward_InterpSpeed = { "AutoOrientToForward_InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateParam, AutoOrientToForward_InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_AutoOrientToForward_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_AutoOrientToForward_InterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_BasePitchOffsetInterp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_FovInterp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpInc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_TargetLength_InterpDec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_UseAutoOrientToForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::NewProp_AutoOrientToForward_InterpSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraStateParam",
		sizeof(FSSCameraStateParam),
		alignof(FSSCameraStateParam),
		Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraStateParam"), sizeof(FSSCameraStateParam), Get_Z_Construct_UScriptStruct_FSSCameraStateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraStateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateParam_Hash() { return 4173178934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
