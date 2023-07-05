// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StTargettingParamDPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStTargettingParamDPad() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStTargettingParamDPad();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStTargettingParamDPad>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStTargettingParamDPad cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStTargettingParamDPad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStTargettingParamDPad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStTargettingParamDPad, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StTargettingParamDPad"), sizeof(FStTargettingParamDPad), Get_Z_Construct_UScriptStruct_FStTargettingParamDPad_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStTargettingParamDPad>()
{
	return FStTargettingParamDPad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStTargettingParamDPad(FStTargettingParamDPad::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StTargettingParamDPad"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParamDPad
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParamDPad()
	{
		UScriptStruct::DeferCppStructOps<FStTargettingParamDPad>(FName(TEXT("StTargettingParamDPad")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStTargettingParamDPad;
	struct Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnglePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnglePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistancePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistancePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStTargettingParamDPad>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParamDPad" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FStTargettingParamDPad*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStTargettingParamDPad), &Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_PadAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParamDPad" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_PadAngle = { "PadAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParamDPad, PadAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_PadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_PadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_BasePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParamDPad" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_BasePoint = { "BasePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParamDPad, BasePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_BasePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_BasePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_AnglePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParamDPad" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_AnglePoint = { "AnglePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParamDPad, AnglePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_AnglePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_AnglePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_DistancePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTargettingParamDPad" },
		{ "ModuleRelativePath", "Public/StTargettingParamDPad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_DistancePoint = { "DistancePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTargettingParamDPad, DistancePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_DistancePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_DistancePoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_PadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_BasePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_AnglePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::NewProp_DistancePoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StTargettingParamDPad",
		sizeof(FStTargettingParamDPad),
		alignof(FStTargettingParamDPad),
		Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStTargettingParamDPad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStTargettingParamDPad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StTargettingParamDPad"), sizeof(FStTargettingParamDPad), Get_Z_Construct_UScriptStruct_FStTargettingParamDPad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStTargettingParamDPad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStTargettingParamDPad_Hash() { return 377772851U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
