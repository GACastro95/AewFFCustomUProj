// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBugReportSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBugReportSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELBugReportSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
// End Cross Module References
class UScriptStruct* FELBugReportSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELBugReportSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELBugReportSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELBugReportSettings"), sizeof(FELBugReportSettings), Get_Z_Construct_UScriptStruct_FELBugReportSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELBugReportSettings>()
{
	return FELBugReportSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELBugReportSettings(FELBugReportSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELBugReportSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELBugReportSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELBugReportSettings()
	{
		UScriptStruct::DeferCppStructOps<FELBugReportSettings>(FName(TEXT("ELBugReportSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELBugReportSettings;
	struct Z_Construct_UScriptStruct_FELBugReportSettings_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELBugReportSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_DebugMenuManager = { "DebugMenuManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, DebugMenuManager), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_DebugMenuManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SupportTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SupportTypes = { "SupportTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, SupportTypes), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SupportTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SupportTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities_Inner = { "Priorities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities = { "Priorities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, Priorities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes_Inner = { "TaskTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes = { "TaskTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, TaskTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes_Inner = { "IssueTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes = { "IssueTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, IssueTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes_Inner = { "GameModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes = { "GameModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, GameModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPIPAddr = { "SMTPIPAddr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, SMTPIPAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPIPAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPPortNo = { "SMTPPortNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, SMTPPortNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPPortNo_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_ValueProp = { "SMTPTo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_Key_KeyProp = { "SMTPTo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBugReportSettings" },
		{ "ModuleRelativePath", "Public/ELBugReportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo = { "SMTPTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBugReportSettings, SMTPTo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELBugReportSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_DebugMenuManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SupportTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_Priorities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_TaskTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_IssueTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_GameModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPIPAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPPortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBugReportSettings_Statics::NewProp_SMTPTo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELBugReportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELBugReportSettings",
		sizeof(FELBugReportSettings),
		alignof(FELBugReportSettings),
		Z_Construct_UScriptStruct_FELBugReportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBugReportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELBugReportSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELBugReportSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELBugReportSettings"), sizeof(FELBugReportSettings), Get_Z_Construct_UScriptStruct_FELBugReportSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELBugReportSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELBugReportSettings_Hash() { return 2261309108U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
