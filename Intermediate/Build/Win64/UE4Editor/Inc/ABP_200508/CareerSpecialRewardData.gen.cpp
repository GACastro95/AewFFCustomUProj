// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSpecialRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSpecialRewardData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSpecialRewardData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSpecialReward();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerSpecialRewardData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerSpecialRewardData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerSpecialRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSpecialRewardData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSpecialRewardData"), sizeof(FCareerSpecialRewardData), Get_Z_Construct_UScriptStruct_FCareerSpecialRewardData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSpecialRewardData>()
{
	return FCareerSpecialRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSpecialRewardData(FCareerSpecialRewardData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSpecialRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardData()
	{
		UScriptStruct::DeferCppStructOps<FCareerSpecialRewardData>(FName(TEXT("CareerSpecialRewardData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSpecialRewardData;
	struct Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialRewardType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialRewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialRewardType;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddSkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddSkillPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSpecialRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType = { "SpecialRewardType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, SpecialRewardType), Z_Construct_UEnum_ABP_200508_ECareerSpecialReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_InformationText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, InformationText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_InformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_InformationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_ThumbnailsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_ThumbnailsAssetPath = { "ThumbnailsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, ThumbnailsAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_ThumbnailsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_ThumbnailsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_AddSkillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSpecialRewardData" },
		{ "ModuleRelativePath", "Public/CareerSpecialRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_AddSkillPoint = { "AddSkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSpecialRewardData, AddSkillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_AddSkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_AddSkillPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_SpecialRewardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_InformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_ThumbnailsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::NewProp_AddSkillPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerSpecialRewardData",
		sizeof(FCareerSpecialRewardData),
		alignof(FCareerSpecialRewardData),
		Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSpecialRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSpecialRewardData"), sizeof(FCareerSpecialRewardData), Get_Z_Construct_UScriptStruct_FCareerSpecialRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSpecialRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSpecialRewardData_Hash() { return 553592609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
