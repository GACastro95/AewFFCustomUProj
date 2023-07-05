// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAbilityKindParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAbilityKindParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityKindParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAbilityKindParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAbilityKindParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAbilityKindParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAbilityKindParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAbilityKindParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAbilityKindParam"), sizeof(FSSAbilityKindParam), Get_Z_Construct_UScriptStruct_FSSAbilityKindParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAbilityKindParam>()
{
	return FSSAbilityKindParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAbilityKindParam(FSSAbilityKindParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAbilityKindParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityKindParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityKindParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAbilityKindParam>(FName(TEXT("SSAbilityKindParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityKindParam;
	struct Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CalcMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalcMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CalcMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAbilityKindParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAbilityKindParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityKindParam" },
		{ "ModuleRelativePath", "Public/SSAbilityKindParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityKindParam, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityKindParam" },
		{ "ModuleRelativePath", "Public/SSAbilityKindParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod = { "CalcMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityKindParam, CalcMethod), Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::NewProp_CalcMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAbilityKindParam",
		sizeof(FSSAbilityKindParam),
		alignof(FSSAbilityKindParam),
		Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityKindParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAbilityKindParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAbilityKindParam"), sizeof(FSSAbilityKindParam), Get_Z_Construct_UScriptStruct_FSSAbilityKindParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAbilityKindParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAbilityKindParam_Hash() { return 950669921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
