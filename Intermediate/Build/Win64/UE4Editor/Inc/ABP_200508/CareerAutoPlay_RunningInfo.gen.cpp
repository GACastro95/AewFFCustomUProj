// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAutoPlay_RunningInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAutoPlay_RunningInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail();
// End Cross Module References
class UScriptStruct* FCareerAutoPlay_RunningInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAutoPlay_RunningInfo"), sizeof(FCareerAutoPlay_RunningInfo), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAutoPlay_RunningInfo>()
{
	return FCareerAutoPlay_RunningInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAutoPlay_RunningInfo(FCareerAutoPlay_RunningInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAutoPlay_RunningInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_RunningInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_RunningInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerAutoPlay_RunningInfo>(FName(TEXT("CareerAutoPlay_RunningInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_RunningInfo;
	struct Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prologue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prologue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_REVOLUTION_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_REVOLUTION;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoN_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAutoPlay_RunningInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_Prologue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_Prologue = { "Prologue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, Prologue), Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_Prologue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_Prologue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_AllOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_AllOut = { "AllOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, AllOut), Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_AllOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_AllOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_FullGear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_FullGear = { "FullGear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, FullGear), Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_FullGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_FullGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_REVOLUTION_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_REVOLUTION = { "REVOLUTION", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, REVOLUTION), Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_REVOLUTION_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_REVOLUTION_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_DoN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_RunningInfo" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_RunningInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_DoN = { "DoN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_RunningInfo, DoN), Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_DoN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_DoN_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_Prologue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_AllOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_FullGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_REVOLUTION,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::NewProp_DoN,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerAutoPlay_RunningInfo",
		sizeof(FCareerAutoPlay_RunningInfo),
		alignof(FCareerAutoPlay_RunningInfo),
		Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAutoPlay_RunningInfo"), sizeof(FCareerAutoPlay_RunningInfo), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_RunningInfo_Hash() { return 2398864146U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
