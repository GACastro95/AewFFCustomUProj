// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AIAutoMatchParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAutoMatchParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAIAutoMatchParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FAIAutoMatchParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAIAutoMatchParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIAutoMatchParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AIAutoMatchParam"), sizeof(FAIAutoMatchParam), Get_Z_Construct_UScriptStruct_FAIAutoMatchParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAIAutoMatchParam>()
{
	return FAIAutoMatchParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIAutoMatchParam(FAIAutoMatchParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AIAutoMatchParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAIAutoMatchParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAIAutoMatchParam()
	{
		UScriptStruct::DeferCppStructOps<FAIAutoMatchParam>(FName(TEXT("AIAutoMatchParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAIAutoMatchParam;
	struct Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMatch_MetaData[];
#endif
		static void NewProp_AutoMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arena_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Arena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterType1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RosterType1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roster1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roster1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterType2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RosterType2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roster2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roster2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterType3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RosterType3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roster3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roster3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterType4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RosterType4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roster4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roster4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMatchEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoMatchEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIAutoMatchParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch_SetBit(void* Obj)
	{
		((FAIAutoMatchParam*)Obj)->AutoMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch = { "AutoMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIAutoMatchParam), &Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, MatchType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Arena_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Arena = { "Arena", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, Arena), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Arena_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Arena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType1 = { "RosterType1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, RosterType1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster1 = { "Roster1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, Roster1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType2 = { "RosterType2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, RosterType2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster2 = { "Roster2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, Roster2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType3 = { "RosterType3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, RosterType3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster3 = { "Roster3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, Roster3), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType4 = { "RosterType4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, RosterType4), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster4 = { "Roster4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, Roster4), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchCount = { "MatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, MatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatchEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatchEndTime = { "AutoMatchEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, AutoMatchEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatchEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatchEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_TableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIAutoMatchParam" },
		{ "ModuleRelativePath", "Public/AIAutoMatchParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIAutoMatchParam, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Arena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_RosterType4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_Roster4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_MatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_AutoMatchEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::NewProp_TableName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"AIAutoMatchParam",
		sizeof(FAIAutoMatchParam),
		alignof(FAIAutoMatchParam),
		Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIAutoMatchParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIAutoMatchParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIAutoMatchParam"), sizeof(FAIAutoMatchParam), Get_Z_Construct_UScriptStruct_FAIAutoMatchParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIAutoMatchParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIAutoMatchParam_Hash() { return 789296504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
