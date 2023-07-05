// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPassiveSkillData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPassiveSkillData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPassiveSkillData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerPassiveSkillData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerPassiveSkillData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerPassiveSkillData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPassiveSkillData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPassiveSkillData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPassiveSkillData"), sizeof(FCareerPassiveSkillData), Get_Z_Construct_UScriptStruct_FCareerPassiveSkillData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPassiveSkillData>()
{
	return FCareerPassiveSkillData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPassiveSkillData(FCareerPassiveSkillData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPassiveSkillData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPassiveSkillData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPassiveSkillData()
	{
		UScriptStruct::DeferCppStructOps<FCareerPassiveSkillData>(FName(TEXT("CareerPassiveSkillData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPassiveSkillData;
	struct Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameStringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DescriptionStringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPassiveSkillData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed_SetBit(void* Obj)
	{
		((FCareerPassiveSkillData*)Obj)->SkillUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed = { "SkillUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerPassiveSkillData), &Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillSort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillSort = { "SkillSort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, SkillSort), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillSort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillSort_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo = { "SkillNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, SkillNo), Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNameStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNameStringID = { "SkillNameStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, SkillNameStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNameStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNameStringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_DescriptionStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_DescriptionStringID = { "DescriptionStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, DescriptionStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_DescriptionStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_DescriptionStringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_UnlockCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_UnlockCost = { "UnlockCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, UnlockCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_UnlockCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_UnlockCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillThumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillThumbnail = { "SkillThumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, SkillThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPassiveSkillData" },
		{ "ModuleRelativePath", "Public/CareerPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillImage = { "SkillImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPassiveSkillData, SkillImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillNameStringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_DescriptionStringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_UnlockCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::NewProp_SkillImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerPassiveSkillData",
		sizeof(FCareerPassiveSkillData),
		alignof(FCareerPassiveSkillData),
		Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPassiveSkillData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPassiveSkillData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPassiveSkillData"), sizeof(FCareerPassiveSkillData), Get_Z_Construct_UScriptStruct_FCareerPassiveSkillData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPassiveSkillData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPassiveSkillData_Hash() { return 2548549926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
