// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPlayerAchievementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPlayerAchievementInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatProgress();
// End Cross Module References
class UScriptStruct* FEOSPlayerAchievementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSPlayerAchievementInfo"), sizeof(FEOSPlayerAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSPlayerAchievementInfo>()
{
	return FEOSPlayerAchievementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSPlayerAchievementInfo(FEOSPlayerAchievementInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSPlayerAchievementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSPlayerAchievementInfo>(FName(TEXT("EOSPlayerAchievementInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementInfo;
	struct Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatProgresses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatProgresses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatProgresses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSPlayerAchievementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_AchievementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementInfo, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_AchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_AchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementInfo, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeH = { "UnlockTimeH", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementInfo, UnlockTimeH), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeL = { "UnlockTimeL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementInfo, UnlockTimeL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeL_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses_Inner = { "StatProgresses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSStatProgress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses = { "StatProgresses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementInfo, StatProgresses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_AchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_UnlockTimeL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::NewProp_StatProgresses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSPlayerAchievementInfo",
		sizeof(FEOSPlayerAchievementInfo),
		alignof(FEOSPlayerAchievementInfo),
		Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSPlayerAchievementInfo"), sizeof(FEOSPlayerAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo_Hash() { return 2807707160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
