// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPinchMovesParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPinchMovesParameter() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesParameter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPinchMovesParameter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPinchMovesParameter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPinchMovesParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPinchMovesParameter, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPinchMovesParameter"), sizeof(FStPinchMovesParameter), Get_Z_Construct_UScriptStruct_FStPinchMovesParameter_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPinchMovesParameter>()
{
	return FStPinchMovesParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPinchMovesParameter(FStPinchMovesParameter::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPinchMovesParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesParameter
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesParameter()
	{
		UScriptStruct::DeferCppStructOps<FStPinchMovesParameter>(FName(TEXT("StPinchMovesParameter")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesParameter;
	struct Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageLv_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageLv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Momentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Momentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static void NewProp_Pin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PinIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPinchMovesParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPinchMovesParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_DamageLv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesParameter" },
		{ "ModuleRelativePath", "Public/StPinchMovesParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_DamageLv = { "DamageLv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesParameter, DamageLv), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_DamageLv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_DamageLv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Momentum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesParameter" },
		{ "ModuleRelativePath", "Public/StPinchMovesParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Momentum = { "Momentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesParameter, Momentum), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Momentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Momentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesParameter" },
		{ "ModuleRelativePath", "Public/StPinchMovesParameter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin_SetBit(void* Obj)
	{
		((FStPinchMovesParameter*)Obj)->Pin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPinchMovesParameter), &Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_PinIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesParameter" },
		{ "ModuleRelativePath", "Public/StPinchMovesParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_PinIndex = { "PinIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesParameter, PinIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_PinIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_PinIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_DamageLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Momentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_Pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::NewProp_PinIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPinchMovesParameter",
		sizeof(FStPinchMovesParameter),
		alignof(FStPinchMovesParameter),
		Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPinchMovesParameter"), sizeof(FStPinchMovesParameter), Get_Z_Construct_UScriptStruct_FStPinchMovesParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPinchMovesParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesParameter_Hash() { return 325116717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
