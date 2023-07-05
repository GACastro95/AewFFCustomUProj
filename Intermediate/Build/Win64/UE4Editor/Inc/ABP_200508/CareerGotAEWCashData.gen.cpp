// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerGotAEWCashData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerGotAEWCashData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerGotAEWCashData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerGotAEWCashData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerGotAEWCashData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerGotAEWCashData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerGotAEWCashData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerGotAEWCashData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerGotAEWCashData"), sizeof(FCareerGotAEWCashData), Get_Z_Construct_UScriptStruct_FCareerGotAEWCashData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerGotAEWCashData>()
{
	return FCareerGotAEWCashData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerGotAEWCashData(FCareerGotAEWCashData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerGotAEWCashData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerGotAEWCashData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerGotAEWCashData()
	{
		UScriptStruct::DeferCppStructOps<FCareerGotAEWCashData>(FName(TEXT("CareerGotAEWCashData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerGotAEWCashData;
	struct Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InformationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InformationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailsAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailsAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoneyRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoneyRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerGotAEWCashData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_InformationText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, InformationText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_InformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_InformationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_ThumbnailsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_ThumbnailsAssetPath = { "ThumbnailsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, ThumbnailsAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_ThumbnailsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_ThumbnailsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_SkillPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_SkillPointRate = { "SkillPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, SkillPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_SkillPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_SkillPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_CareerMoneyRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerGotAEWCashData" },
		{ "ModuleRelativePath", "Public/CareerGotAEWCashData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_CareerMoneyRate = { "CareerMoneyRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerGotAEWCashData, CareerMoneyRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_CareerMoneyRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_CareerMoneyRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_InformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_ThumbnailsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_SkillPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::NewProp_CareerMoneyRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerGotAEWCashData",
		sizeof(FCareerGotAEWCashData),
		alignof(FCareerGotAEWCashData),
		Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerGotAEWCashData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerGotAEWCashData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerGotAEWCashData"), sizeof(FCareerGotAEWCashData), Get_Z_Construct_UScriptStruct_FCareerGotAEWCashData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerGotAEWCashData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerGotAEWCashData_Hash() { return 2470358202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
