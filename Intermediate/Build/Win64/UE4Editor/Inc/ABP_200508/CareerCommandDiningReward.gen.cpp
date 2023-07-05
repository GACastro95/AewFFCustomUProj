// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCommandDiningReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCommandDiningReward() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCommandDiningReward();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDiningType();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerCommandDiningReward>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerCommandDiningReward cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerCommandDiningReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCommandDiningReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCommandDiningReward, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCommandDiningReward"), sizeof(FCareerCommandDiningReward), Get_Z_Construct_UScriptStruct_FCareerCommandDiningReward_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCommandDiningReward>()
{
	return FCareerCommandDiningReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCommandDiningReward(FCareerCommandDiningReward::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCommandDiningReward"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandDiningReward
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandDiningReward()
	{
		UScriptStruct::DeferCppStructOps<FCareerCommandDiningReward>(FName(TEXT("CareerCommandDiningReward")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandDiningReward;
	struct Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Normal_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_Name_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Normal_Name_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_Description_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Normal_Description_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Vegetarian_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vegetarian_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Vegetarian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vegetarian_Name_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Vegetarian_Name_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vegetarian_Description_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Vegetarian_Description_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnagyHealValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnagyHealValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCommandDiningReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Normal), Z_Construct_UEnum_ABP_200508_ECareerDiningType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Name_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Name_Key = { "Normal_Name_Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Normal_Name_Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Name_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Name_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Description_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Description_Key = { "Normal_Description_Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Normal_Description_Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Description_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Description_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian = { "Vegetarian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Vegetarian), Z_Construct_UEnum_ABP_200508_ECareerDiningType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Name_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Name_Key = { "Vegetarian_Name_Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Vegetarian_Name_Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Name_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Name_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Description_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Description_Key = { "Vegetarian_Description_Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, Vegetarian_Description_Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Description_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Description_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_EnagyHealValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandDiningReward" },
		{ "ModuleRelativePath", "Public/CareerCommandDiningReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_EnagyHealValue = { "EnagyHealValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandDiningReward, EnagyHealValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_EnagyHealValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_EnagyHealValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Name_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Normal_Description_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Name_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_Vegetarian_Description_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::NewProp_EnagyHealValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerCommandDiningReward",
		sizeof(FCareerCommandDiningReward),
		alignof(FCareerCommandDiningReward),
		Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCommandDiningReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCommandDiningReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCommandDiningReward"), sizeof(FCareerCommandDiningReward), Get_Z_Construct_UScriptStruct_FCareerCommandDiningReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCommandDiningReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCommandDiningReward_Hash() { return 548169177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
