// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSVehicleSpawnParamForRound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSVehicleSpawnParamForRound() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRound();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup();
// End Cross Module References

static_assert(std::is_polymorphic<FSSVehicleSpawnParamForRound>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSVehicleSpawnParamForRound cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSVehicleSpawnParamForRound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSVehicleSpawnParamForRound"), sizeof(FSSVehicleSpawnParamForRound), Get_Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSVehicleSpawnParamForRound>()
{
	return FSSVehicleSpawnParamForRound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSVehicleSpawnParamForRound(FSSVehicleSpawnParamForRound::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSVehicleSpawnParamForRound"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleSpawnParamForRound
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleSpawnParamForRound()
	{
		UScriptStruct::DeferCppStructOps<FSSVehicleSpawnParamForRound>(FName(TEXT("SSVehicleSpawnParamForRound")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSVehicleSpawnParamForRound;
	struct Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Round_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Round;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VehicleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnNumMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnNumMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnNumMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnNumMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocatorGroup1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorGroup1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocatorGroup1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocatorGroup2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorGroup2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocatorGroup2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocatorGroup3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorGroup3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LocatorGroup3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSVehicleSpawnParamForRound>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, Round), Z_Construct_UEnum_ABP_200508_ESSRound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType = { "LogType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, LogType), Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, SpawnTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_VehicleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_VehicleId = { "VehicleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, VehicleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_VehicleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_VehicleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMin = { "SpawnNumMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, SpawnNumMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMax = { "SpawnNumMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, SpawnNumMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnProbability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, SpawnProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnProbability_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1 = { "LocatorGroup1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, LocatorGroup1), Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2 = { "LocatorGroup2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, LocatorGroup2), Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVehicleSpawnParamForRound" },
		{ "ModuleRelativePath", "Public/SSVehicleSpawnParamForRound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3 = { "LocatorGroup3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVehicleSpawnParamForRound, LocatorGroup3), Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LogType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_VehicleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnNumMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_SpawnProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::NewProp_LocatorGroup3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSVehicleSpawnParamForRound",
		sizeof(FSSVehicleSpawnParamForRound),
		alignof(FSSVehicleSpawnParamForRound),
		Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSVehicleSpawnParamForRound"), sizeof(FSSVehicleSpawnParamForRound), Get_Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound_Hash() { return 4190707003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
