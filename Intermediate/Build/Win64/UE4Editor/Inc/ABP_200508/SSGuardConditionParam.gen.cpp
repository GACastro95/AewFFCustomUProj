// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGuardConditionParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGuardConditionParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGuardConditionParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardReactionType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSGuardConditionParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSGuardConditionParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSGuardConditionParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGuardConditionParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGuardConditionParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGuardConditionParam"), sizeof(FSSGuardConditionParam), Get_Z_Construct_UScriptStruct_FSSGuardConditionParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGuardConditionParam>()
{
	return FSSGuardConditionParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGuardConditionParam(FSSGuardConditionParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGuardConditionParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardConditionParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardConditionParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGuardConditionParam>(FName(TEXT("SSGuardConditionParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardConditionParam;
	struct Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardLv1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardLv1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardLv1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardLv2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardLv2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardLv2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardLv3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardLv3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardLv3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardLv4_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardLv4_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardLv4;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardLv5_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardLv5_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardLv5;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGuardConditionParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardConditionParam" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1 = { "GuardLv1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardConditionParam, GuardLv1), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardConditionParam" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2 = { "GuardLv2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardConditionParam, GuardLv2), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardConditionParam" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3 = { "GuardLv3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardConditionParam, GuardLv3), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardConditionParam" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4 = { "GuardLv4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardConditionParam, GuardLv4), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardConditionParam" },
		{ "ModuleRelativePath", "Public/SSGuardConditionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5 = { "GuardLv5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardConditionParam, GuardLv5), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::NewProp_GuardLv5,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSGuardConditionParam",
		sizeof(FSSGuardConditionParam),
		alignof(FSSGuardConditionParam),
		Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGuardConditionParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGuardConditionParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGuardConditionParam"), sizeof(FSSGuardConditionParam), Get_Z_Construct_UScriptStruct_FSSGuardConditionParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGuardConditionParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGuardConditionParam_Hash() { return 3043353480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
