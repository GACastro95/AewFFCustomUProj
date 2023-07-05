// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/WrestlerPlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerPlayData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData_Action();
// End Cross Module References

static_assert(std::is_polymorphic<FWrestlerPlayData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWrestlerPlayData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWrestlerPlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerPlayData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("WrestlerPlayData"), sizeof(FWrestlerPlayData), Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FWrestlerPlayData>()
{
	return FWrestlerPlayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerPlayData(FWrestlerPlayData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("WrestlerPlayData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerPlayData>(FName(TEXT("WrestlerPlayData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData;
	struct Z_Construct_UScriptStruct_FWrestlerPlayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFightStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIFightStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MANorAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MANorAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPCore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherTriedNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherTriedNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherSuccessedNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherSuccessedNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerPlayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, WrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WinTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WinTeam = { "WinTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, WinTeam), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WinTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WinTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIDifficulty = { "AIDifficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, AIDifficulty), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIFightStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIFightStyle = { "AIFightStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, AIFightStyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIFightStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIFightStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_MANorAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_MANorAI = { "MANorAI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, MANorAI), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_MANorAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_MANorAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_HPCore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_HPCore = { "HPCore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, HPCore), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_HPCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_HPCore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherTriedNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherTriedNum = { "FinisherTriedNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, FinisherTriedNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherTriedNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherTriedNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherSuccessedNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherSuccessedNum = { "FinisherSuccessedNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, FinisherSuccessedNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherSuccessedNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherSuccessedNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData, Action), Z_Construct_UScriptStruct_FWrestlerPlayData_Action, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_WinTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_AIFightStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_MANorAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_HPCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherTriedNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_FinisherSuccessedNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WrestlerPlayData",
		sizeof(FWrestlerPlayData),
		alignof(FWrestlerPlayData),
		Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerPlayData"), sizeof(FWrestlerPlayData), Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerPlayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Hash() { return 477846947U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
