// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerTutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerTutorial() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerTutorial();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialDispTiming();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialWrestler();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialCheckList();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerTutorial>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerTutorial cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerTutorial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerTutorial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerTutorial, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerTutorial"), sizeof(FCareerTutorial), Get_Z_Construct_UScriptStruct_FCareerTutorial_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerTutorial>()
{
	return FCareerTutorial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerTutorial(FCareerTutorial::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerTutorial"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorial
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorial()
	{
		UScriptStruct::DeferCppStructOps<FCareerTutorial>(FName(TEXT("CareerTutorial")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerTutorial;
	struct Z_Construct_UScriptStruct_FCareerTutorial_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseTutorial;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DispTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DispTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeekTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeekTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeekTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithoutWeekTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithoutWeekTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WithoutWeekTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScenarioPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScenarioPart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Wrestler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Wrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JudgeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JudgeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JudgeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueDetail;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckList_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckList_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerTutorial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UseTutorial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UseTutorial = { "UseTutorial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, UseTutorial), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UseTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UseTutorial_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming = { "DispTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, DispTiming), Z_Construct_UEnum_ABP_200508_ECareerTutorialDispTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming = { "WeekTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, WeekTiming), Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming = { "WithoutWeekTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, WithoutWeekTiming), Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart = { "ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler = { "Wrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, Wrestler), Z_Construct_UEnum_ABP_200508_ECareerTutorialWrestler, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType = { "JudgeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, JudgeType), Z_Construct_UEnum_ABP_200508_ECareerTutorialJudgeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_StringDetail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_StringDetail = { "StringDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, StringDetail), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_StringDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_StringDetail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ValueDetail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ValueDetail = { "ValueDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, ValueDetail), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ValueDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ValueDetail_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList = { "CheckList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, CheckList), Z_Construct_UEnum_ABP_200508_ECareerTutorialCheckList, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerTutorial" },
		{ "ModuleRelativePath", "Public/CareerTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerTutorial, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UniqueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UseTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_DispTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WeekTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_WithoutWeekTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ScenarioPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_JudgeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_StringDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_ValueDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_CheckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerTutorial_Statics::NewProp_UniqueID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerTutorial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerTutorial",
		sizeof(FCareerTutorial),
		alignof(FCareerTutorial),
		Z_Construct_UScriptStruct_FCareerTutorial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerTutorial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerTutorial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerTutorial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerTutorial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerTutorial"), sizeof(FCareerTutorial), Get_Z_Construct_UScriptStruct_FCareerTutorial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerTutorial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerTutorial_Hash() { return 2772627216U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
