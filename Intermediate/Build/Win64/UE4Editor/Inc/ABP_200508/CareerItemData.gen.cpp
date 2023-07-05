// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerItemData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerItemData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemNo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerItemData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerItemData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerItemData"), sizeof(FCareerItemData), Get_Z_Construct_UScriptStruct_FCareerItemData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerItemData>()
{
	return FCareerItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerItemData(FCareerItemData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerItemData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerItemData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerItemData()
	{
		UScriptStruct::DeferCppStructOps<FCareerItemData>(FName(TEXT("CareerItemData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerItemData;
	struct Z_Construct_UScriptStruct_FCareerItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_No_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Effect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Effect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisappearItemEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisappearItemEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisappearItemEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameStringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, No), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, Effect), Z_Construct_UEnum_ABP_200508_ECareerItemEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect = { "DisappearItemEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, DisappearItemEffect), Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_NameStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_NameStringID = { "NameStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, NameStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_NameStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_NameStringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DescriptionStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerItemData" },
		{ "ModuleRelativePath", "Public/CareerItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DescriptionStringID = { "DescriptionStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerItemData, DescriptionStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DescriptionStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DescriptionStringID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DisappearItemEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_NameStringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerItemData_Statics::NewProp_DescriptionStringID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerItemData",
		sizeof(FCareerItemData),
		alignof(FCareerItemData),
		Z_Construct_UScriptStruct_FCareerItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerItemData"), sizeof(FCareerItemData), Get_Z_Construct_UScriptStruct_FCareerItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerItemData_Hash() { return 2876068896U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
