// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_SSMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_SSMode() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_SSMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_SSMode();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLastPlayRecord();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSResultRecoveryData();
// End Cross Module References
	void USaveData_SSMode::StaticRegisterNativesUSaveData_SSMode()
	{
	}
	UClass* Z_Construct_UClass_USaveData_SSMode_NoRegister()
	{
		return USaveData_SSMode::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_SSMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPlayRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPlayRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRecoveryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRecoveryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_SSMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_SSMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_Condition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_SSMode" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_SSMode, Condition), METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_WrestlerSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_SSMode" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_WrestlerSettings = { "WrestlerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_SSMode, WrestlerSettings), Z_Construct_UScriptStruct_FSSWrestlerSettings, METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_WrestlerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_WrestlerSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LoadoutSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_SSMode" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LoadoutSettings = { "LoadoutSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LoadoutSettings, USaveData_SSMode), STRUCT_OFFSET(USaveData_SSMode, LoadoutSettings), Z_Construct_UScriptStruct_FSSLoadoutSettings, METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LoadoutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LoadoutSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LastPlayRecord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_SSMode" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LastPlayRecord = { "LastPlayRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_SSMode, LastPlayRecord), Z_Construct_UScriptStruct_FSSLastPlayRecord, METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LastPlayRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LastPlayRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_ResultRecoveryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_SSMode" },
		{ "ModuleRelativePath", "Public/SaveData_SSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_ResultRecoveryData = { "ResultRecoveryData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_SSMode, ResultRecoveryData), Z_Construct_UScriptStruct_FSSResultRecoveryData, METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_ResultRecoveryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_ResultRecoveryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_SSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_WrestlerSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LoadoutSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_LastPlayRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_SSMode_Statics::NewProp_ResultRecoveryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_SSMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_SSMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_SSMode_Statics::ClassParams = {
		&USaveData_SSMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_SSMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_SSMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_SSMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_SSMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_SSMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_SSMode, 3863829388);
	template<> ABP_200508_API UClass* StaticClass<USaveData_SSMode>()
	{
		return USaveData_SSMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_SSMode(Z_Construct_UClass_USaveData_SSMode, &USaveData_SSMode::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_SSMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_SSMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
