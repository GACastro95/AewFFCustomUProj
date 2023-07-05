// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeProgressSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCompleteState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FChallengeProgressSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeProgressSaveData"), sizeof(FChallengeProgressSaveData), Get_Z_Construct_UScriptStruct_FChallengeProgressSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeProgressSaveData>()
{
	return FChallengeProgressSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeProgressSaveData(FChallengeProgressSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeProgressSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressSaveData()
	{
		UScriptStruct::DeferCppStructOps<FChallengeProgressSaveData>(FName(TEXT("ChallengeProgressSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressSaveData;
	struct Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DailyCompleteState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_DailyCompleteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_WeeklyCompleteState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_WeeklyCompleteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NormalCompleteState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_NormalCompleteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SecretCompleteState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SecretCompleteState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartDailyDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StartDailyDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartWeeklyDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StartWeeklyDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartNormalDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StartNormalDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartSecretDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StartSecretDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_DailyCompleteState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_DailyCompleteState = { "m_DailyCompleteState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_DailyCompleteState, FChallengeProgressSaveData), STRUCT_OFFSET(FChallengeProgressSaveData, m_DailyCompleteState), Z_Construct_UScriptStruct_FChallengeCompleteState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_DailyCompleteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_DailyCompleteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_WeeklyCompleteState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_WeeklyCompleteState = { "m_WeeklyCompleteState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_WeeklyCompleteState, FChallengeProgressSaveData), STRUCT_OFFSET(FChallengeProgressSaveData, m_WeeklyCompleteState), Z_Construct_UScriptStruct_FChallengeCompleteState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_WeeklyCompleteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_WeeklyCompleteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_NormalCompleteState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_NormalCompleteState = { "m_NormalCompleteState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_NormalCompleteState, FChallengeProgressSaveData), STRUCT_OFFSET(FChallengeProgressSaveData, m_NormalCompleteState), Z_Construct_UScriptStruct_FChallengeCompleteState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_NormalCompleteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_NormalCompleteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_SecretCompleteState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_SecretCompleteState = { "m_SecretCompleteState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_SecretCompleteState, FChallengeProgressSaveData), STRUCT_OFFSET(FChallengeProgressSaveData, m_SecretCompleteState), Z_Construct_UScriptStruct_FChallengeCompleteState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_SecretCompleteState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_SecretCompleteState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartDailyDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartDailyDate = { "m_StartDailyDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressSaveData, m_StartDailyDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartDailyDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartDailyDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartWeeklyDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartWeeklyDate = { "m_StartWeeklyDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressSaveData, m_StartWeeklyDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartWeeklyDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartWeeklyDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartNormalDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartNormalDate = { "m_StartNormalDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressSaveData, m_StartNormalDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartNormalDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartNormalDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartSecretDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeProgressSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartSecretDate = { "m_StartSecretDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressSaveData, m_StartSecretDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartSecretDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartSecretDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_DailyCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_WeeklyCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_NormalCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_SecretCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartDailyDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartWeeklyDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartNormalDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::NewProp_m_StartSecretDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeProgressSaveData",
		sizeof(FChallengeProgressSaveData),
		alignof(FChallengeProgressSaveData),
		Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeProgressSaveData"), sizeof(FChallengeProgressSaveData), Get_Z_Construct_UScriptStruct_FChallengeProgressSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeProgressSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressSaveData_Hash() { return 3859731682U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
