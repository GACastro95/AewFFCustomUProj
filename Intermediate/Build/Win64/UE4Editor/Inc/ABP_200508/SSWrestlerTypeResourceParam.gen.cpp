// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerTypeResourceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerTypeResourceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWrestlerTypeResourceParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWrestlerTypeResourceParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWrestlerTypeResourceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerTypeResourceParam"), sizeof(FSSWrestlerTypeResourceParam), Get_Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerTypeResourceParam>()
{
	return FSSWrestlerTypeResourceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerTypeResourceParam(FSSWrestlerTypeResourceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerTypeResourceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeResourceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeResourceParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerTypeResourceParam>(FName(TEXT("SSWrestlerTypeResourceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeResourceParam;
	struct Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TauntAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeResourceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerTypeResourceParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeResourceParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeResourceParam, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_TauntAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeResourceParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_TauntAnimMontage = { "TauntAnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeResourceParam, TauntAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_TauntAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_TauntAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::NewProp_TauntAnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWrestlerTypeResourceParam",
		sizeof(FSSWrestlerTypeResourceParam),
		alignof(FSSWrestlerTypeResourceParam),
		Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerTypeResourceParam"), sizeof(FSSWrestlerTypeResourceParam), Get_Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam_Hash() { return 618630091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
