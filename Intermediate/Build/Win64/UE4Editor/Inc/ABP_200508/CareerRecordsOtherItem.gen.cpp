// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRecordsOtherItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRecordsOtherItem() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsOtherItem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerRecordsOtherItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRecordsOtherItem, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRecordsOtherItem"), sizeof(FCareerRecordsOtherItem), Get_Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRecordsOtherItem>()
{
	return FCareerRecordsOtherItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRecordsOtherItem(FCareerRecordsOtherItem::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRecordsOtherItem"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsOtherItem
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsOtherItem()
	{
		UScriptStruct::DeferCppStructOps<FCareerRecordsOtherItem>(FName(TEXT("CareerRecordsOtherItem")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsOtherItem;
	struct Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OtherName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRecordsOtherItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRecordsOtherItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsOtherItem" },
		{ "ModuleRelativePath", "Public/CareerRecordsOtherItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherName = { "OtherName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsOtherItem, OtherName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsOtherItem" },
		{ "ModuleRelativePath", "Public/CareerRecordsOtherItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherValue = { "OtherValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsOtherItem, OtherValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsOtherItem" },
		{ "ModuleRelativePath", "Public/CareerRecordsOtherItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsOtherItem, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_OtherValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerRecordsOtherItem",
		sizeof(FCareerRecordsOtherItem),
		alignof(FCareerRecordsOtherItem),
		Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsOtherItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRecordsOtherItem"), sizeof(FCareerRecordsOtherItem), Get_Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsOtherItem_Hash() { return 2323369539U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
