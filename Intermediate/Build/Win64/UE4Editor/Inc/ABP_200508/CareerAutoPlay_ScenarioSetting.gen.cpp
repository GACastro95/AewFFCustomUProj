// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerAutoPlay_ScenarioSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerAutoPlay_ScenarioSetting() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerAutoPlay_ScenarioSetting>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerAutoPlay_ScenarioSetting cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerAutoPlay_ScenarioSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerAutoPlay_ScenarioSetting"), sizeof(FCareerAutoPlay_ScenarioSetting), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerAutoPlay_ScenarioSetting>()
{
	return FCareerAutoPlay_ScenarioSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerAutoPlay_ScenarioSetting(FCareerAutoPlay_ScenarioSetting::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerAutoPlay_ScenarioSetting"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioSetting
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioSetting()
	{
		UScriptStruct::DeferCppStructOps<FCareerAutoPlay_ScenarioSetting>(FName(TEXT("CareerAutoPlay_ScenarioSetting")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerAutoPlay_ScenarioSetting;
	struct Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrologueKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrologueKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllOutKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllOutKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullGearKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullGearKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevolutionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RevolutionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoNKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DoNKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerAutoPlay_ScenarioSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, WrestlerType), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_WrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_PrologueKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_PrologueKey = { "PrologueKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, PrologueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_PrologueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_PrologueKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_AllOutKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_AllOutKey = { "AllOutKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, AllOutKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_AllOutKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_AllOutKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_FullGearKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_FullGearKey = { "FullGearKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, FullGearKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_FullGearKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_FullGearKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_RevolutionKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_RevolutionKey = { "RevolutionKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, RevolutionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_RevolutionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_RevolutionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_DoNKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerAutoPlay_ScenarioSetting" },
		{ "ModuleRelativePath", "Public/CareerAutoPlay_ScenarioSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_DoNKey = { "DoNKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerAutoPlay_ScenarioSetting, DoNKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_DoNKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_DoNKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_PrologueKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_AllOutKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_FullGearKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_RevolutionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::NewProp_DoNKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerAutoPlay_ScenarioSetting",
		sizeof(FCareerAutoPlay_ScenarioSetting),
		alignof(FCareerAutoPlay_ScenarioSetting),
		Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerAutoPlay_ScenarioSetting"), sizeof(FCareerAutoPlay_ScenarioSetting), Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerAutoPlay_ScenarioSetting_Hash() { return 3828325892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
