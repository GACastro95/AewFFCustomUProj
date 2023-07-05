// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
// End Cross Module References
class UScriptStruct* FSSWrestlerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerSettings"), sizeof(FSSWrestlerSettings), Get_Z_Construct_UScriptStruct_FSSWrestlerSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerSettings>()
{
	return FSSWrestlerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerSettings(FSSWrestlerSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSettings()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerSettings>(FName(TEXT("SSWrestlerSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSettings;
	struct Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditWrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditWrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditWrestlerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSettings" },
		{ "ModuleRelativePath", "Public/SSWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSettings, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_CostumeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSettings" },
		{ "ModuleRelativePath", "Public/SSWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_CostumeID = { "CostumeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSettings, CostumeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_CostumeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_CostumeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSettings" },
		{ "ModuleRelativePath", "Public/SSWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerID = { "EditWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSettings, EditWrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSettings" },
		{ "ModuleRelativePath", "Public/SSWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType = { "EditWrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSettings, EditWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_CostumeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::NewProp_EditWrestlerType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSWrestlerSettings",
		sizeof(FSSWrestlerSettings),
		alignof(FSSWrestlerSettings),
		Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerSettings"), sizeof(FSSWrestlerSettings), Get_Z_Construct_UScriptStruct_FSSWrestlerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSettings_Hash() { return 3840311580U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
