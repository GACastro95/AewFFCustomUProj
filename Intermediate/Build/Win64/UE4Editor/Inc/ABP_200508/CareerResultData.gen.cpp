// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerResultData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerResultData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerResultType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerResultData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerResultData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerResultData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerResultData"), sizeof(FCareerResultData), Get_Z_Construct_UScriptStruct_FCareerResultData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerResultData>()
{
	return FCareerResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerResultData(FCareerResultData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerResultData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerResultData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerResultData()
	{
		UScriptStruct::DeferCppStructOps<FCareerResultData>(FName(TEXT("CareerResultData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerResultData;
	struct Z_Construct_UScriptStruct_FCareerResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resultType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecordsInfo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RecordsInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResultBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRankAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ResultRankAssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerResultData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerResultData" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerResultData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerResultData" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerResultData, resultType), Z_Construct_UEnum_ABP_200508_ECareerResultType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerResultData" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo = { "RecordsInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerResultData, RecordsInfo), Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultBorder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerResultData" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultBorder = { "ResultBorder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerResultData, ResultBorder), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultRankAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerResultData" },
		{ "ModuleRelativePath", "Public/CareerResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultRankAssetPath = { "ResultRankAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerResultData, ResultRankAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultRankAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultRankAssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_resultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_RecordsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerResultData_Statics::NewProp_ResultRankAssetPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerResultData",
		sizeof(FCareerResultData),
		alignof(FCareerResultData),
		Z_Construct_UScriptStruct_FCareerResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerResultData"), sizeof(FCareerResultData), Get_Z_Construct_UScriptStruct_FCareerResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerResultData_Hash() { return 741671659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
