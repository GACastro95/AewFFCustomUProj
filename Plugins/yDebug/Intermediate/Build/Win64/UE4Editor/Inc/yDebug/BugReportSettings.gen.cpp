// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/BugReportSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBugReportSettings() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FBugReportSettings();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuManager_NoRegister();
// End Cross Module References
class UScriptStruct* FBugReportSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FBugReportSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBugReportSettings, Z_Construct_UPackage__Script_yDebug(), TEXT("BugReportSettings"), sizeof(FBugReportSettings), Get_Z_Construct_UScriptStruct_FBugReportSettings_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FBugReportSettings>()
{
	return FBugReportSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBugReportSettings(FBugReportSettings::StaticStruct, TEXT("/Script/yDebug"), TEXT("BugReportSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFBugReportSettings
{
	FScriptStruct_yDebug_StaticRegisterNativesFBugReportSettings()
	{
		UScriptStruct::DeferCppStructOps<FBugReportSettings>(FName(TEXT("BugReportSettings")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFBugReportSettings;
	struct Z_Construct_UScriptStruct_FBugReportSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugMenuManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SupportTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Priorities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priorities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Priorities;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IssueTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssueTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IssueTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMTPIPAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SMTPIPAddr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMTPPortNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SMTPPortNo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SMTPTo_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SMTPTo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMTPTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SMTPTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBugReportSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_DebugMenuManager = { "DebugMenuManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, DebugMenuManager), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SupportTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SupportTypes = { "SupportTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, SupportTypes), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SupportTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SupportTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities_Inner = { "Priorities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities = { "Priorities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, Priorities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes_Inner = { "TaskTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes = { "TaskTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, TaskTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes_Inner = { "IssueTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes = { "IssueTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, IssueTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes_Inner = { "GameModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes = { "GameModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, GameModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPIPAddr = { "SMTPIPAddr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, SMTPIPAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPPortNo = { "SMTPPortNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, SMTPPortNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_ValueProp = { "SMTPTo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_Key_KeyProp = { "SMTPTo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BugReportSettings" },
		{ "ModuleRelativePath", "Public/BugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo = { "SMTPTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBugReportSettings, SMTPTo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBugReportSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_DebugMenuManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SupportTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_Priorities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_TaskTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_IssueTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_GameModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPIPAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPPortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBugReportSettings_Statics::NewProp_SMTPTo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBugReportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		nullptr,
		&NewStructOps,
		"BugReportSettings",
		sizeof(FBugReportSettings),
		alignof(FBugReportSettings),
		Z_Construct_UScriptStruct_FBugReportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBugReportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBugReportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBugReportSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBugReportSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BugReportSettings"), sizeof(FBugReportSettings), Get_Z_Construct_UScriptStruct_FBugReportSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBugReportSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBugReportSettings_Hash() { return 6844174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
