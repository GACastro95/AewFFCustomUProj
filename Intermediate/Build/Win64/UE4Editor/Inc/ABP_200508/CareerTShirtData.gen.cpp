// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerTShirtData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerTShirtData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerTShirtData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerTShirtData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerTShirtData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerTShirtData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerTShirtData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerTShirtData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerTShirtData"), sizeof(FCareerTShirtData), Get_Z_Construct_UScriptStruct_FCareerTShirtData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerTShirtData>()
{
	return FCareerTShirtData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerTShirtData(FCareerTShirtData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerTShirtData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTShirtData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTShirtData()
	{
		UScriptStruct::DeferCppStructOps<FCareerTShirtData>(FName(TEXT("CareerTShirtData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerTShirtData;
	struct Z_Construct_UScriptStruct_FCareerTShirtData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_City_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_City_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_City;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItem_MetaData[];
#endif
		static void NewProp_PurchaseItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PurchaseItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InformationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InformationText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerTShirtData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTShirtData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTShirtData, City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem_SetBit(void* Obj)
	{
		((FCareerTShirtData*)Obj)->PurchaseItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem = { "PurchaseItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerTShirtData), &Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTShirtData, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTShirtData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_InformationText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTShirtData" },
		{ "ModuleRelativePath", "Public/CareerTShirtData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTShirtData, InformationText), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_InformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_InformationText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerTShirtData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_PurchaseItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTShirtData_Statics::NewProp_InformationText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerTShirtData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerTShirtData",
		sizeof(FCareerTShirtData),
		alignof(FCareerTShirtData),
		Z_Construct_UScriptStruct_FCareerTShirtData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTShirtData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerTShirtData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerTShirtData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerTShirtData"), sizeof(FCareerTShirtData), Get_Z_Construct_UScriptStruct_FCareerTShirtData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerTShirtData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerTShirtData_Hash() { return 2089786292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
