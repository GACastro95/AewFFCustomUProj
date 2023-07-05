// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerSettings() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerSettings();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FEditWrestlerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditWrestlerSettings, Z_Construct_UPackage__Script_Creation(), TEXT("EditWrestlerSettings"), sizeof(FEditWrestlerSettings), Get_Z_Construct_UScriptStruct_FEditWrestlerSettings_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditWrestlerSettings>()
{
	return FEditWrestlerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditWrestlerSettings(FEditWrestlerSettings::StaticStruct, TEXT("/Script/Creation"), TEXT("EditWrestlerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerSettings
{
	FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerSettings()
	{
		UScriptStruct::DeferCppStructOps<FEditWrestlerSettings>(FName(TEXT("EditWrestlerSettings")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditWrestlerSettings;
	struct Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditWrestlerSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_ProfileFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerSettings" },
		{ "ModuleRelativePath", "Public/EditWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_ProfileFlag = { "ProfileFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerSettings, ProfileFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_ProfileFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_ProfileFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_DefaultPresetNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerSettings" },
		{ "ModuleRelativePath", "Public/EditWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_DefaultPresetNo = { "DefaultPresetNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerSettings, DefaultPresetNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_DefaultPresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_DefaultPresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_PoseID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerSettings" },
		{ "ModuleRelativePath", "Public/EditWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_PoseID = { "PoseID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerSettings, PoseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_PoseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_PoseID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_ProfileFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_DefaultPresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::NewProp_PoseID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditWrestlerSettings",
		sizeof(FEditWrestlerSettings),
		alignof(FEditWrestlerSettings),
		Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditWrestlerSettings"), sizeof(FEditWrestlerSettings), Get_Z_Construct_UScriptStruct_FEditWrestlerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditWrestlerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerSettings_Hash() { return 3048827229U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
