// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRecordsScenarioPercent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRecordsScenarioPercent() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerRecordsScenarioPercent>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerRecordsScenarioPercent cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerRecordsScenarioPercent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRecordsScenarioPercent"), sizeof(FCareerRecordsScenarioPercent), Get_Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRecordsScenarioPercent>()
{
	return FCareerRecordsScenarioPercent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRecordsScenarioPercent(FCareerRecordsScenarioPercent::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRecordsScenarioPercent"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsScenarioPercent
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsScenarioPercent()
	{
		UScriptStruct::DeferCppStructOps<FCareerRecordsScenarioPercent>(FName(TEXT("CareerRecordsScenarioPercent")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordsScenarioPercent;
	struct Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScenarioPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScenarioPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScenarioPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRecordsScenarioPercent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRecordsScenarioPercent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsScenarioPercent" },
		{ "ModuleRelativePath", "Public/CareerRecordsScenarioPercent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsScenarioPercent, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsScenarioPercent" },
		{ "ModuleRelativePath", "Public/CareerRecordsScenarioPercent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart = { "ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsScenarioPercent, ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordsScenarioPercent" },
		{ "ModuleRelativePath", "Public/CareerRecordsScenarioPercent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPercent = { "ScenarioPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordsScenarioPercent, ScenarioPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::NewProp_ScenarioPercent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerRecordsScenarioPercent",
		sizeof(FCareerRecordsScenarioPercent),
		alignof(FCareerRecordsScenarioPercent),
		Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRecordsScenarioPercent"), sizeof(FCareerRecordsScenarioPercent), Get_Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRecordsScenarioPercent_Hash() { return 1334485355U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
