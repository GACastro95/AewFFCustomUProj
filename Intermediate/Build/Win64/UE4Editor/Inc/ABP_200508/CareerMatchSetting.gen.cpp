// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMatchSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMatchSetting() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchSetting();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerArenaType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerWrestlerSelectParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchRule();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerMatchSetting>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerMatchSetting cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerMatchSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMatchSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMatchSetting, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMatchSetting"), sizeof(FCareerMatchSetting), Get_Z_Construct_UScriptStruct_FCareerMatchSetting_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMatchSetting>()
{
	return FCareerMatchSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMatchSetting(FCareerMatchSetting::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMatchSetting"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchSetting
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchSetting()
	{
		UScriptStruct::DeferCppStructOps<FCareerMatchSetting>(FName(TEXT("CareerMatchSetting")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchSetting;
	struct Z_Construct_UScriptStruct_FCareerMatchSetting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSelectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugSelectName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOverwriteArenaType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOverwriteArenaType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOverwriteArenaType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMatchRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CareerMatchRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntranceBelt_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceBelt_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntranceBelt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMatchSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart = { "ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_MatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, MatchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_MatchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_DebugSelectName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_DebugSelectName = { "DebugSelectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, DebugSelectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_DebugSelectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_DebugSelectName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType = { "eOverwriteArenaType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, eOverwriteArenaType), Z_Construct_UEnum_ABP_200508_ECareerArenaType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_0 = { "Param_0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, Param_0), Z_Construct_UScriptStruct_FCareerWrestlerSelectParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_1 = { "Param_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, Param_1), Z_Construct_UScriptStruct_FCareerWrestlerSelectParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_2 = { "Param_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, Param_2), Z_Construct_UScriptStruct_FCareerWrestlerSelectParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_3 = { "Param_3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, Param_3), Z_Construct_UScriptStruct_FCareerWrestlerSelectParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_CareerMatchRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_CareerMatchRule = { "CareerMatchRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, CareerMatchRule), Z_Construct_UScriptStruct_FCareerMatchRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_CareerMatchRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_CareerMatchRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchSetting" },
		{ "ModuleRelativePath", "Public/CareerMatchSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt = { "EntranceBelt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchSetting, EntranceBelt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_ScenarioPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_DebugSelectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_eOverwriteArenaType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_Param_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_CareerMatchRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::NewProp_EntranceBelt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerMatchSetting",
		sizeof(FCareerMatchSetting),
		alignof(FCareerMatchSetting),
		Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMatchSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMatchSetting"), sizeof(FCareerMatchSetting), Get_Z_Construct_UScriptStruct_FCareerMatchSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMatchSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMatchSetting_Hash() { return 3428341623U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
