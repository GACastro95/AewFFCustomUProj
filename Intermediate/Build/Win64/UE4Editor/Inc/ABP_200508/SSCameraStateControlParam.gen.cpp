// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraStateControlParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraStateControlParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateControlParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraStateControlParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraStateControlParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraStateControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateControlParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraStateControlParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraStateControlParam"), sizeof(FSSCameraStateControlParam), Get_Z_Construct_UScriptStruct_FSSCameraStateControlParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraStateControlParam>()
{
	return FSSCameraStateControlParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraStateControlParam(FSSCameraStateControlParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraStateControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateControlParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateControlParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraStateControlParam>(FName(TEXT("SSCameraStateControlParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraStateControlParam;
	struct Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpingDown_BeginHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpingDown_BeginHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStateMoving_MetaData[];
#endif
		static void NewProp_UseStateMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStateMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMovingConditionSpeedKph_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleMovingConditionSpeedKph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseMovingConditionSpeedKph_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorseMovingConditionSpeedKph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraStateControlParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraStateControlParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_JumpingDown_BeginHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateControlParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateControlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_JumpingDown_BeginHeight = { "JumpingDown_BeginHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateControlParam, JumpingDown_BeginHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_JumpingDown_BeginHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_JumpingDown_BeginHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateControlParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateControlParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving_SetBit(void* Obj)
	{
		((FSSCameraStateControlParam*)Obj)->UseStateMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving = { "UseStateMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraStateControlParam), &Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_VehicleMovingConditionSpeedKph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateControlParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateControlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_VehicleMovingConditionSpeedKph = { "VehicleMovingConditionSpeedKph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateControlParam, VehicleMovingConditionSpeedKph), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_VehicleMovingConditionSpeedKph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_VehicleMovingConditionSpeedKph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_HorseMovingConditionSpeedKph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraStateControlParam" },
		{ "ModuleRelativePath", "Public/SSCameraStateControlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_HorseMovingConditionSpeedKph = { "HorseMovingConditionSpeedKph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraStateControlParam, HorseMovingConditionSpeedKph), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_HorseMovingConditionSpeedKph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_HorseMovingConditionSpeedKph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_JumpingDown_BeginHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_UseStateMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_VehicleMovingConditionSpeedKph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::NewProp_HorseMovingConditionSpeedKph,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraStateControlParam",
		sizeof(FSSCameraStateControlParam),
		alignof(FSSCameraStateControlParam),
		Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateControlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateControlParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraStateControlParam"), sizeof(FSSCameraStateControlParam), Get_Z_Construct_UScriptStruct_FSSCameraStateControlParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraStateControlParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraStateControlParam_Hash() { return 2087961490U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
