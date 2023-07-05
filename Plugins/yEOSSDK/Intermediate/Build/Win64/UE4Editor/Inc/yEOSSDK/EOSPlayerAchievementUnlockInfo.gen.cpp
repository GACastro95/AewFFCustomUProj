// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPlayerAchievementUnlockInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPlayerAchievementUnlockInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSPlayerAchievementUnlockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSPlayerAchievementUnlockInfo"), sizeof(FEOSPlayerAchievementUnlockInfo), Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSPlayerAchievementUnlockInfo>()
{
	return FEOSPlayerAchievementUnlockInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSPlayerAchievementUnlockInfo(FEOSPlayerAchievementUnlockInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSPlayerAchievementUnlockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementUnlockInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementUnlockInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSPlayerAchievementUnlockInfo>(FName(TEXT("EOSPlayerAchievementUnlockInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPlayerAchievementUnlockInfo;
	struct Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockTimeH_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTimeH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockTimeL_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockTimeL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementUnlockInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSPlayerAchievementUnlockInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_AchievementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementUnlockInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementUnlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementUnlockInfo, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_AchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_AchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementUnlockInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementUnlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementUnlockInfo, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeH_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementUnlockInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementUnlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeH = { "UnlockTimeH", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementUnlockInfo, UnlockTimeH), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPlayerAchievementUnlockInfo" },
		{ "ModuleRelativePath", "Public/EOSPlayerAchievementUnlockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeL = { "UnlockTimeL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPlayerAchievementUnlockInfo, UnlockTimeL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_AchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::NewProp_UnlockTimeL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSPlayerAchievementUnlockInfo",
		sizeof(FEOSPlayerAchievementUnlockInfo),
		alignof(FEOSPlayerAchievementUnlockInfo),
		Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSPlayerAchievementUnlockInfo"), sizeof(FEOSPlayerAchievementUnlockInfo), Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSPlayerAchievementUnlockInfo_Hash() { return 3106601258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
