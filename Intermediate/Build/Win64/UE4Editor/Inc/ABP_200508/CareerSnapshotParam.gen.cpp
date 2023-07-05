// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSnapshotParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSnapshotParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameText();
// End Cross Module References
class UScriptStruct* FCareerSnapshotParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSnapshotParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSnapshotParam"), sizeof(FCareerSnapshotParam), Get_Z_Construct_UScriptStruct_FCareerSnapshotParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSnapshotParam>()
{
	return FCareerSnapshotParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSnapshotParam(FCareerSnapshotParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSnapshotParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotParam()
	{
		UScriptStruct::DeferCppStructOps<FCareerSnapshotParam>(FName(TEXT("CareerSnapshotParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotParam;
	struct Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScenarioNo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScenarioNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Week_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Week;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Turn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSnapshotParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_DateTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo = { "ScenarioNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, ScenarioNo), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Week_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Week = { "Week", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, Week), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Week_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Week_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, Location), Z_Construct_UEnum_ABP_200508_ECareerStageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Turn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Turn = { "Turn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, Turn), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Turn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Turn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerUID = { "WrestlerUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, WrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotParam" },
		{ "ModuleRelativePath", "Public/CareerSnapshotParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotParam, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_ScenarioNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Week,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_Turn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::NewProp_WrestlerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerSnapshotParam",
		sizeof(FCareerSnapshotParam),
		alignof(FCareerSnapshotParam),
		Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSnapshotParam"), sizeof(FCareerSnapshotParam), Get_Z_Construct_UScriptStruct_FCareerSnapshotParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSnapshotParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotParam_Hash() { return 2703358631U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
