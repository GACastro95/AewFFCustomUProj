// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CreationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreationSettings() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UCreationSettings_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UCreationSettings();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString();
// End Cross Module References
	DEFINE_FUNCTION(UCreationSettings::execGetCustomBodyAsset)
	{
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<USkeletalMesh>*)Z_Param__Result=UCreationSettings::GetCustomBodyAsset(EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	void UCreationSettings::StaticRegisterNativesUCreationSettings()
	{
		UClass* Class = UCreationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomBodyAsset", &UCreationSettings::execGetCustomBodyAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics
	{
		struct CreationSettings_eventGetCustomBodyAsset_Parms
		{
			EGender Gender;
			TSoftObjectPtr<USkeletalMesh> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettings_eventGetCustomBodyAsset_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreationSettings_eventGetCustomBodyAsset_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreationSettings, nullptr, "GetCustomBodyAsset", nullptr, nullptr, sizeof(CreationSettings_eventGetCustomBodyAsset_Parms), Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreationSettings_NoRegister()
	{
		return UCreationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCreationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGroupTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGroupTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexedColorTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexedColorTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBody_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomBody_Male;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBody_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomBody_Female;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTypeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyTypeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTypeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceTypeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsListTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPartsListTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPaintListTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPaintListTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsCompatibilityTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsCompatibilityTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditVoiceTypeListTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditVoiceTypeListTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoutSlotUnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoutSlotUnlockID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoutPresetUnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoutPresetUnlockID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerSaveNumMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditWrestlerSaveNumMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScoutWrestlerNameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultScoutWrestlerNameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerMultipleSaveMode_MetaData[];
#endif
		static void NewProp_EditWrestlerMultipleSaveMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EditWrestlerMultipleSaveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerSaveNumPerFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditWrestlerSaveNumPerFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreationSettings_GetCustomBodyAsset, "GetCustomBodyAsset" }, // 940317353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_ColorGroupTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_ColorGroupTable = { "ColorGroupTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, ColorGroupTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ColorGroupTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ColorGroupTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_IndexedColorTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_IndexedColorTable = { "IndexedColorTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, IndexedColorTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_IndexedColorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_IndexedColorTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Male = { "CustomBody_Male", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, CustomBody_Male), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Male_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Female = { "CustomBody_Female", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, CustomBody_Female), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Female_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_BodyTypeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_BodyTypeTable = { "BodyTypeTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, BodyTypeTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_BodyTypeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_BodyTypeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_FaceTypeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_FaceTypeTable = { "FaceTypeTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, FaceTypeTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_FaceTypeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_FaceTypeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPartsListTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPartsListTable = { "EditPartsListTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, EditPartsListTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPartsListTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPartsListTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPaintListTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPaintListTable = { "EditPaintListTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, EditPaintListTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPaintListTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPaintListTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_PartsCompatibilityTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_PartsCompatibilityTable = { "PartsCompatibilityTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, PartsCompatibilityTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_PartsCompatibilityTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_PartsCompatibilityTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditVoiceTypeListTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditVoiceTypeListTable = { "EditVoiceTypeListTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, EditVoiceTypeListTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditVoiceTypeListTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditVoiceTypeListTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutSlotUnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutSlotUnlockID = { "ScoutSlotUnlockID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, ScoutSlotUnlockID), METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutSlotUnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutSlotUnlockID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutPresetUnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutPresetUnlockID = { "ScoutPresetUnlockID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, ScoutPresetUnlockID), METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutPresetUnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutPresetUnlockID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumMax = { "EditWrestlerSaveNumMax", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, EditWrestlerSaveNumMax), METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_DefaultScoutWrestlerNameString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_DefaultScoutWrestlerNameString = { "DefaultScoutWrestlerNameString", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, DefaultScoutWrestlerNameString), Z_Construct_UScriptStruct_FWrestlerNameString, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_DefaultScoutWrestlerNameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_DefaultScoutWrestlerNameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode_SetBit(void* Obj)
	{
		((UCreationSettings*)Obj)->EditWrestlerMultipleSaveMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode = { "EditWrestlerMultipleSaveMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCreationSettings), &Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumPerFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreationSettings" },
		{ "ModuleRelativePath", "Public/CreationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumPerFile = { "EditWrestlerSaveNumPerFile", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreationSettings, EditWrestlerSaveNumPerFile), METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumPerFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumPerFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_ColorGroupTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_IndexedColorTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_CustomBody_Female,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_BodyTypeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_FaceTypeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPartsListTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditPaintListTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_PartsCompatibilityTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditVoiceTypeListTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutSlotUnlockID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_ScoutPresetUnlockID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_DefaultScoutWrestlerNameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerMultipleSaveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreationSettings_Statics::NewProp_EditWrestlerSaveNumPerFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreationSettings_Statics::ClassParams = {
		&UCreationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCreationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreationSettings, 488491048);
	template<> CREATION_API UClass* StaticClass<UCreationSettings>()
	{
		return UCreationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreationSettings(Z_Construct_UClass_UCreationSettings, &UCreationSettings::StaticClass, TEXT("/Script/Creation"), TEXT("UCreationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
