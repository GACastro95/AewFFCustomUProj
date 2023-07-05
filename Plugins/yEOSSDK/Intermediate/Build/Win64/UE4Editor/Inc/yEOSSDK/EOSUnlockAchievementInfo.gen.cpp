// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUnlockAchievementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUnlockAchievementInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSUnlockAchievementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSUnlockAchievementInfo"), sizeof(FEOSUnlockAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSUnlockAchievementInfo>()
{
	return FEOSUnlockAchievementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSUnlockAchievementInfo(FEOSUnlockAchievementInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSUnlockAchievementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUnlockAchievementInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUnlockAchievementInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSUnlockAchievementInfo>(FName(TEXT("EOSUnlockAchievementInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUnlockAchievementInfo;
	struct Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockTimeH_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTimeH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockTimeL_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTimeL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatInfoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatInfoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlavorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlavorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatThresholdValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatThresholdValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSUnlockAchievementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_AchievementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_AchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_AchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeH = { "UnlockTimeH", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, UnlockTimeH), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeL = { "UnlockTimeL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, UnlockTimeL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatInfoCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatInfoCount = { "StatInfoCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, StatInfoCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatInfoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatInfoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_IconURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_IconURL = { "IconURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, IconURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_IconURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_IconURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_FlavorText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_FlavorText = { "FlavorText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, FlavorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_FlavorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_FlavorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatCurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatCurrentValue = { "StatCurrentValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, StatCurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatCurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatThresholdValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUnlockAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSUnlockAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatThresholdValue = { "StatThresholdValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUnlockAchievementInfo, StatThresholdValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatThresholdValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatThresholdValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_AchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_UnlockTimeL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatInfoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_IconURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_FlavorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::NewProp_StatThresholdValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSUnlockAchievementInfo",
		sizeof(FEOSUnlockAchievementInfo),
		alignof(FEOSUnlockAchievementInfo),
		Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSUnlockAchievementInfo"), sizeof(FEOSUnlockAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo_Hash() { return 2002119570U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
