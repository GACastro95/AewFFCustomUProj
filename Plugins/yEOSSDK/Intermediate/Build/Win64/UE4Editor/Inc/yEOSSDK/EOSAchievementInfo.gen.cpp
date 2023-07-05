// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAchievementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAchievementInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatInfo();
// End Cross Module References
class UScriptStruct* FEOSAchievementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSAchievementInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSAchievementInfo"), sizeof(FEOSAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSAchievementInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSAchievementInfo>()
{
	return FEOSAchievementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSAchievementInfo(FEOSAchievementInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSAchievementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSAchievementInfo>(FName(TEXT("EOSAchievementInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementInfo;
	struct Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnlockedDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnlockedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockedDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedIconURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnlockedIconURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedIconURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LockedIconURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlavorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlavorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHidden_MetaData[];
#endif
		static void NewProp_IsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHidden;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSAchievementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_AchievementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_AchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_AchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDisplayName = { "UnlockedDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, UnlockedDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDescription = { "UnlockedDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, UnlockedDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDisplayName = { "LockedDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, LockedDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDescription = { "LockedDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, LockedDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedIconURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedIconURL = { "UnlockedIconURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, UnlockedIconURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedIconURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedIconURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedIconURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedIconURL = { "LockedIconURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, LockedIconURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedIconURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedIconURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_FlavorText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_FlavorText = { "FlavorText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, FlavorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_FlavorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_FlavorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden_SetBit(void* Obj)
	{
		((FEOSAchievementInfo*)Obj)->IsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden = { "IsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSAchievementInfo), &Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos_Inner = { "StatInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSStatInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementInfo" },
		{ "ModuleRelativePath", "Public/EOSAchievementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos = { "StatInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementInfo, StatInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_AchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_UnlockedIconURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_LockedIconURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_FlavorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_IsHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::NewProp_StatInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSAchievementInfo",
		sizeof(FEOSAchievementInfo),
		alignof(FEOSAchievementInfo),
		Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSAchievementInfo"), sizeof(FEOSAchievementInfo), Get_Z_Construct_UScriptStruct_FEOSAchievementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSAchievementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementInfo_Hash() { return 2105836337U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
