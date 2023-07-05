// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSchedule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSchedule() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSchedule();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerArenaType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerSchedule>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerSchedule cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerSchedule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSchedule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSchedule, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSchedule"), sizeof(FCareerSchedule), Get_Z_Construct_UScriptStruct_FCareerSchedule_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSchedule>()
{
	return FCareerSchedule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSchedule(FCareerSchedule::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSchedule"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSchedule
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSchedule()
	{
		UScriptStruct::DeferCppStructOps<FCareerSchedule>(FName(TEXT("CareerSchedule")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSchedule;
	struct Z_Construct_UScriptStruct_FCareerSchedule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scenario_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scenario;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Arena_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arena_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Arena;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Venue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Venue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Venue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Turn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Transportation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transportation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Transportation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSchedule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena = { "Arena", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Arena), Z_Construct_UEnum_ABP_200508_ECareerArenaType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue = { "Venue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Venue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Turn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Turn = { "Turn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Turn), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Turn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Turn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSchedule" },
		{ "ModuleRelativePath", "Public/CareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation = { "Transportation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSchedule, Transportation), Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Scenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Arena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Venue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Turn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSchedule_Statics::NewProp_Transportation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSchedule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerSchedule",
		sizeof(FCareerSchedule),
		alignof(FCareerSchedule),
		Z_Construct_UScriptStruct_FCareerSchedule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSchedule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSchedule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSchedule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSchedule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSchedule"), sizeof(FCareerSchedule), Get_Z_Construct_UScriptStruct_FCareerSchedule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSchedule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSchedule_Hash() { return 1968466364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
