// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StTargettingParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStTargettingParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStTargettingParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStTargettingParamDPad();
// End Cross Module References

static_assert(std::is_polymorphic<FStTargettingParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStTargettingParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStTargettingParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStTargettingParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStTargettingParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StTargettingParam"), sizeof(FStTargettingParam), Get_Z_Construct_UScriptStruct_FStTargettingParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStTargettingParam>()
{
	return FStTargettingParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStTargettingParam(FStTargettingParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StTargettingParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParam()
	{
		UScriptStruct::DeferCppStructOps<FStTargettingParam>(FName(TEXT("StTargettingParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParam;
	struct Z_Construct_UScriptStruct_FStTargettingParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_LS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle_LS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_Dash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle_Dash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMultiHoming_MetaData[];
#endif
		static void NewProp_EnableMultiHoming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMultiHoming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_R3_MetaData[];
#endif
		static void NewProp_Enable_R3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable_R3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPadOaram_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DPadOaram;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStTargettingParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_LS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_LS = { "Angle_LS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParam, Angle_LS), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_LS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_LS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_Dash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_Dash = { "Angle_Dash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParam, Angle_Dash), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_Dash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_Dash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming_SetBit(void* Obj)
	{
		((FStTargettingParam*)Obj)->EnableMultiHoming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming = { "EnableMultiHoming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStTargettingParam), &Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_AutoDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_AutoDistance = { "AutoDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParam, AutoDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_AutoDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_AutoDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3_SetBit(void* Obj)
	{
		((FStTargettingParam*)Obj)->Enable_R3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3 = { "Enable_R3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStTargettingParam), &Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_DPadOaram_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParam" },
		{ "ModuleRelativePath", "Public/StTargettingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_DPadOaram = { "DPadOaram", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParam, DPadOaram), Z_Construct_UScriptStruct_FStTargettingParamDPad, METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_DPadOaram_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_DPadOaram_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStTargettingParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_LS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Angle_Dash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_EnableMultiHoming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_AutoDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_Enable_R3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParam_Statics::NewProp_DPadOaram,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStTargettingParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StTargettingParam",
		sizeof(FStTargettingParam),
		alignof(FStTargettingParam),
		Z_Construct_UScriptStruct_FStTargettingParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStTargettingParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStTargettingParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StTargettingParam"), sizeof(FStTargettingParam), Get_Z_Construct_UScriptStruct_FStTargettingParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStTargettingParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStTargettingParam_Hash() { return 51169956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
