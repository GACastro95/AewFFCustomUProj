// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerParameterSkillData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerParameterSkillData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerParameterSkillData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerParameterSkillData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerParameterSkillData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerParameterSkillData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerParameterSkillData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerParameterSkillData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerParameterSkillData"), sizeof(FCareerParameterSkillData), Get_Z_Construct_UScriptStruct_FCareerParameterSkillData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerParameterSkillData>()
{
	return FCareerParameterSkillData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerParameterSkillData(FCareerParameterSkillData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerParameterSkillData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerParameterSkillData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerParameterSkillData()
	{
		UScriptStruct::DeferCppStructOps<FCareerParameterSkillData>(FName(TEXT("CareerParameterSkillData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerParameterSkillData;
	struct Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillUsed_MetaData[];
#endif
		static void NewProp_SkillUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkillUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillSort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillSort;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillNo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID3_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID4_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID5_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID3_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID4_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID5_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost5_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerParameterSkillData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed_SetBit(void* Obj)
	{
		((FCareerParameterSkillData*)Obj)->SkillUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed = { "SkillUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerParameterSkillData), &Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillSort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillSort = { "SkillSort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillSort), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillSort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillSort_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo = { "SkillNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNo), Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID1 = { "SkillNameStringID1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNameStringID1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID2 = { "SkillNameStringID2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNameStringID2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID3 = { "SkillNameStringID3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNameStringID3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID4 = { "SkillNameStringID4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNameStringID4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID5 = { "SkillNameStringID5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillNameStringID5), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID1 = { "DescriptionStringID1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, DescriptionStringID1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID2 = { "DescriptionStringID2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, DescriptionStringID2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID3 = { "DescriptionStringID3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, DescriptionStringID3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID4 = { "DescriptionStringID4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, DescriptionStringID4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID5 = { "DescriptionStringID5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, DescriptionStringID5), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost1 = { "UnlockCost1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, UnlockCost1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost2 = { "UnlockCost2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, UnlockCost2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost3 = { "UnlockCost3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, UnlockCost3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost4 = { "UnlockCost4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, UnlockCost4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost5 = { "UnlockCost5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, UnlockCost5), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerParameterSkillData" },
		{ "ModuleRelativePath", "Public/CareerParameterSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillImage = { "SkillImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerParameterSkillData, SkillImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillNameStringID5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_DescriptionStringID5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_UnlockCost5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::NewProp_SkillImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerParameterSkillData",
		sizeof(FCareerParameterSkillData),
		alignof(FCareerParameterSkillData),
		Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerParameterSkillData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerParameterSkillData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerParameterSkillData"), sizeof(FCareerParameterSkillData), Get_Z_Construct_UScriptStruct_FCareerParameterSkillData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerParameterSkillData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerParameterSkillData_Hash() { return 2352623264U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
