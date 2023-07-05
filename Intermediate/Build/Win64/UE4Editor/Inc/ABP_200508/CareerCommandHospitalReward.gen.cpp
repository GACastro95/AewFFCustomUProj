// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCommandHospitalReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCommandHospitalReward() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCommandHospitalReward();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerCommandHospitalReward>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerCommandHospitalReward cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerCommandHospitalReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCommandHospitalReward, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCommandHospitalReward"), sizeof(FCareerCommandHospitalReward), Get_Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCommandHospitalReward>()
{
	return FCareerCommandHospitalReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCommandHospitalReward(FCareerCommandHospitalReward::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCommandHospitalReward"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandHospitalReward
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandHospitalReward()
	{
		UScriptStruct::DeferCppStructOps<FCareerCommandHospitalReward>(FName(TEXT("CareerCommandHospitalReward")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCommandHospitalReward;
	struct Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnagyHealPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnagyHealPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedCareerMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NeedCareerMoney;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCommandHospitalReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCommandHospitalReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandHospitalReward" },
		{ "ModuleRelativePath", "Public/CareerCommandHospitalReward.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandHospitalReward, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_EnagyHealPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandHospitalReward" },
		{ "ModuleRelativePath", "Public/CareerCommandHospitalReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_EnagyHealPercent = { "EnagyHealPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandHospitalReward, EnagyHealPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_EnagyHealPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_EnagyHealPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_NeedCareerMoney_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandHospitalReward" },
		{ "ModuleRelativePath", "Public/CareerCommandHospitalReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_NeedCareerMoney = { "NeedCareerMoney", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandHospitalReward, NeedCareerMoney), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_NeedCareerMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_NeedCareerMoney_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_SuccessRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCommandHospitalReward" },
		{ "ModuleRelativePath", "Public/CareerCommandHospitalReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_SuccessRate = { "SuccessRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCommandHospitalReward, SuccessRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_SuccessRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_SuccessRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_EnagyHealPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_NeedCareerMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::NewProp_SuccessRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerCommandHospitalReward",
		sizeof(FCareerCommandHospitalReward),
		alignof(FCareerCommandHospitalReward),
		Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCommandHospitalReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCommandHospitalReward"), sizeof(FCareerCommandHospitalReward), Get_Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCommandHospitalReward_Hash() { return 2351583731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
