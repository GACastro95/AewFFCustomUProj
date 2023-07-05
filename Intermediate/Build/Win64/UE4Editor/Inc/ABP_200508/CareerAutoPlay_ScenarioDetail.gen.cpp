// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAutoPlay_ScenarioDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAutoPlay_ScenarioDetail() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_Choice();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerAutoPlay_ScenarioDetail>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerAutoPlay_ScenarioDetail cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerAutoPlay_ScenarioDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAutoPlay_ScenarioDetail"), sizeof(FCareerAutoPlay_ScenarioDetail), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAutoPlay_ScenarioDetail>()
{
	return FCareerAutoPlay_ScenarioDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAutoPlay_ScenarioDetail(FCareerAutoPlay_ScenarioDetail::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAutoPlay_ScenarioDetail"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioDetail
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioDetail()
	{
		UScriptStruct::DeferCppStructOps<FCareerAutoPlay_ScenarioDetail>(FName(TEXT("CareerAutoPlay_ScenarioDetail")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioDetail;
	struct Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckScenario_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckScenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckScenario;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultWeek1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWeek1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultWeek1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultWeek2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWeek2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultWeek2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultWeek3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWeek3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultWeek3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultWeek4_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWeek4_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultWeek4;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultWeek4EX_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultWeek4EX_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultWeek4EX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choice1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Choice1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choice2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Choice2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choice3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Choice3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Choice4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Choice4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAutoPlay_ScenarioDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario = { "CheckScenario", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, CheckScenario), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1 = { "ResultWeek1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, ResultWeek1), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2 = { "ResultWeek2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, ResultWeek2), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3 = { "ResultWeek3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, ResultWeek3), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4 = { "ResultWeek4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, ResultWeek4), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX = { "ResultWeek4EX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, ResultWeek4EX), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, Choice1), Z_Construct_UScriptStruct_FCareerAutoPlay_Choice, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, Choice2), Z_Construct_UScriptStruct_FCareerAutoPlay_Choice, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice3 = { "Choice3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, Choice3), Z_Construct_UScriptStruct_FCareerAutoPlay_Choice, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioDetail" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice4 = { "Choice4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioDetail, Choice4), Z_Construct_UScriptStruct_FCareerAutoPlay_Choice, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_CheckScenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_ResultWeek4EX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::NewProp_Choice4,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerAutoPlay_ScenarioDetail",
		sizeof(FCareerAutoPlay_ScenarioDetail),
		alignof(FCareerAutoPlay_ScenarioDetail),
		Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAutoPlay_ScenarioDetail"), sizeof(FCareerAutoPlay_ScenarioDetail), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail_Hash() { return 4012120578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
