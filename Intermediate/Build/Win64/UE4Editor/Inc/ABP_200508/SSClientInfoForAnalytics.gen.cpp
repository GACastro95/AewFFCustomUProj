// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSClientInfoForAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSClientInfoForAnalytics() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSClientInfoForAnalytics();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSClientInfoForAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSClientInfoForAnalytics"), sizeof(FSSClientInfoForAnalytics), Get_Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSClientInfoForAnalytics>()
{
	return FSSClientInfoForAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSClientInfoForAnalytics(FSSClientInfoForAnalytics::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSClientInfoForAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSClientInfoForAnalytics
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSClientInfoForAnalytics()
	{
		UScriptStruct::DeferCppStructOps<FSSClientInfoForAnalytics>(FName(TEXT("SSClientInfoForAnalytics")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSClientInfoForAnalytics;
	struct Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSModeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChangeList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MatchGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousSSPlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContinuousSSPlayCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousSSPlayCountTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContinuousSSPlayCountTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousSSPlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContinuousSSPlayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousSSPlayTimeTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContinuousSSPlayTimeTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synced_MetaData[];
#endif
		static void NewProp_Synced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Synced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSClientInfoForAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_TitleVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_TitleVersion = { "TitleVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, TitleVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_TitleVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_TitleVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_SSModeVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_SSModeVersion = { "SSModeVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, SSModeVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_SSModeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_SSModeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_DataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, DataVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ChangeList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ChangeList = { "ChangeList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, ChangeList), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ChangeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ChangeList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_MatchGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_MatchGroupId = { "MatchGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, MatchGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_MatchGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_MatchGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCount = { "ContinuousSSPlayCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, ContinuousSSPlayCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCountTotal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCountTotal = { "ContinuousSSPlayCountTotal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, ContinuousSSPlayCountTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCountTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCountTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTime = { "ContinuousSSPlayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, ContinuousSSPlayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTimeTotal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTimeTotal = { "ContinuousSSPlayTimeTotal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSClientInfoForAnalytics, ContinuousSSPlayTimeTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTimeTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTimeTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSClientInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSClientInfoForAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced_SetBit(void* Obj)
	{
		((FSSClientInfoForAnalytics*)Obj)->Synced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced = { "Synced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSClientInfoForAnalytics), &Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_TitleVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_SSModeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_DataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ChangeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_MatchGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayCountTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_ContinuousSSPlayTimeTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::NewProp_Synced,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSClientInfoForAnalytics",
		sizeof(FSSClientInfoForAnalytics),
		alignof(FSSClientInfoForAnalytics),
		Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSClientInfoForAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSClientInfoForAnalytics"), sizeof(FSSClientInfoForAnalytics), Get_Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSClientInfoForAnalytics_Hash() { return 3299379624U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
