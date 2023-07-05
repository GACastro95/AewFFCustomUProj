// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPresenceAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPresenceAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSPresenceAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSPresenceAPIVersionSettings"), sizeof(FEOSPresenceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSPresenceAPIVersionSettings>()
{
	return FEOSPresenceAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSPresenceAPIVersionSettings(FEOSPresenceAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSPresenceAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPresenceAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPresenceAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSPresenceAPIVersionSettings>(FName(TEXT("EOSPresenceAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSPresenceAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNitifyOnPresenceChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNitifyOnPresenceChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatePresenceModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatePresenceModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyJoinGameAccepted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyJoinGameAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetRawRichText_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetRawRichText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyDataRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModifyDataRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HasPresence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSPresenceAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNitifyOnPresenceChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNitifyOnPresenceChanged = { "AddNitifyOnPresenceChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, AddNitifyOnPresenceChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNitifyOnPresenceChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNitifyOnPresenceChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CreatePresenceModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CreatePresenceModification = { "CreatePresenceModification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, CreatePresenceModification), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CreatePresenceModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CreatePresenceModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNotifyJoinGameAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNotifyJoinGameAccepted = { "AddNotifyJoinGameAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, AddNotifyJoinGameAccepted), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNotifyJoinGameAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNotifyJoinGameAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetRawRichText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetRawRichText = { "SetRawRichText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, SetRawRichText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetRawRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetRawRichText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetStatus = { "SetStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, SetStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetData = { "SetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, SetData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DataRecord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DataRecord = { "DataRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, DataRecord), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DataRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DataRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DeleteData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DeleteData = { "DeleteData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, DeleteData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DeleteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DeleteData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_ModifyDataRecord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_ModifyDataRecord = { "ModifyDataRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, ModifyDataRecord), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_ModifyDataRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_ModifyDataRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetPresence = { "SetPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, SetPresence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_QueryPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_QueryPresence = { "QueryPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, QueryPresence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_QueryPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_QueryPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CopyPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CopyPresence = { "CopyPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, CopyPresence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CopyPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CopyPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_HasPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSPresenceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_HasPresence = { "HasPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPresenceAPIVersionSettings, HasPresence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_HasPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_HasPresence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNitifyOnPresenceChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CreatePresenceModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_AddNotifyJoinGameAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetRawRichText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DataRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_DeleteData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_ModifyDataRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_SetPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_QueryPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_CopyPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::NewProp_HasPresence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSPresenceAPIVersionSettings",
		sizeof(FEOSPresenceAPIVersionSettings),
		alignof(FEOSPresenceAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSPresenceAPIVersionSettings"), sizeof(FEOSPresenceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings_Hash() { return 1704374207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
