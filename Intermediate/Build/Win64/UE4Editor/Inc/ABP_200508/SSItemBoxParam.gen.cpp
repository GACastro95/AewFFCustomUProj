// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSItemBoxParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSItemBoxParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemBoxParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSItemBoxParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSItemBoxParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSItemBoxParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSItemBoxParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSItemBoxParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSItemBoxParam"), sizeof(FSSItemBoxParam), Get_Z_Construct_UScriptStruct_FSSItemBoxParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSItemBoxParam>()
{
	return FSSItemBoxParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSItemBoxParam(FSSItemBoxParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSItemBoxParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSItemBoxParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSItemBoxParam()
	{
		UScriptStruct::DeferCppStructOps<FSSItemBoxParam>(FName(TEXT("SSItemBoxParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSItemBoxParam;
	struct Z_Construct_UScriptStruct_FSSItemBoxParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_SpawnNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_SpawnNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_ItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_ItemCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_HpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_HpItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_ShieldItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_ShieldItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_ExpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_ExpItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_OtherItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_OtherItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_WeaponRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_WeaponRarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroup_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroup_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSItemBoxParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, Type), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_SpawnNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_SpawnNum = { "LotGroup_SpawnNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_SpawnNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_SpawnNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_SpawnNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ItemCategory = { "LotGroup_ItemCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_ItemCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ItemCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ItemCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_HpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_HpItem = { "LotGroup_HpItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_HpItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_HpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_HpItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ShieldItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ShieldItem = { "LotGroup_ShieldItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_ShieldItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ShieldItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ShieldItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ExpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ExpItem = { "LotGroup_ExpItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_ExpItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ExpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ExpItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_OtherItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_OtherItem = { "LotGroup_OtherItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_OtherItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_OtherItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_OtherItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_WeaponRarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_WeaponRarity = { "LotGroup_WeaponRarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_WeaponRarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_WeaponRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_WeaponRarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSItemBoxParam" },
		{ "ModuleRelativePath", "Public/SSItemBoxParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_Weapon = { "LotGroup_Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSItemBoxParam, LotGroup_Weapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_SpawnNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_HpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ShieldItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_ExpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_OtherItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_WeaponRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::NewProp_LotGroup_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSItemBoxParam",
		sizeof(FSSItemBoxParam),
		alignof(FSSItemBoxParam),
		Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSItemBoxParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSItemBoxParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSItemBoxParam"), sizeof(FSSItemBoxParam), Get_Z_Construct_UScriptStruct_FSSItemBoxParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSItemBoxParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSItemBoxParam_Hash() { return 1226404121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
