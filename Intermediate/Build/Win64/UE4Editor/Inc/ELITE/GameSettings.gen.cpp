// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/GameSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettings() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UGameSettings_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UGameSettings();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessParam();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAdjustDlcSaveData();
// End Cross Module References
	DEFINE_FUNCTION(UGameSettings::execGetAdjustDlcSaveDataAccessParams)
	{
		P_GET_TARRAY_REF(FAdjustDlcSaveDataParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameSettings::GetAdjustDlcSaveDataAccessParams(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execGetSaveDataAccessParams)
	{
		P_GET_TARRAY_REF(FSaveDataAccessParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameSettings::GetSaveDataAccessParams(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execGetSaveTitleNameFromFilenName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveFileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameSettings::GetSaveTitleNameFromFilenName(Z_Param_SaveFileName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execInitExtendedSaveGameInfoDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameSettings::InitExtendedSaveGameInfoDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSettings::execIsValidSSmode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameSettings::IsValidSSmode();
		P_NATIVE_END;
	}
	void UGameSettings::StaticRegisterNativesUGameSettings()
	{
		UClass* Class = UGameSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjustDlcSaveDataAccessParams", &UGameSettings::execGetAdjustDlcSaveDataAccessParams },
			{ "GetSaveDataAccessParams", &UGameSettings::execGetSaveDataAccessParams },
			{ "GetSaveTitleNameFromFilenName", &UGameSettings::execGetSaveTitleNameFromFilenName },
			{ "InitExtendedSaveGameInfoDelegate", &UGameSettings::execInitExtendedSaveGameInfoDelegate },
			{ "IsValidSSmode", &UGameSettings::execIsValidSSmode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics
	{
		struct GameSettings_eventGetAdjustDlcSaveDataAccessParams_Parms
		{
			TArray<FAdjustDlcSaveDataParam> Out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdjustDlcSaveDataParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettings_eventGetAdjustDlcSaveDataAccessParams_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "GetAdjustDlcSaveDataAccessParams", nullptr, nullptr, sizeof(GameSettings_eventGetAdjustDlcSaveDataAccessParams_Parms), Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics
	{
		struct GameSettings_eventGetSaveDataAccessParams_Parms
		{
			TArray<FSaveDataAccessParam> Out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveDataAccessParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettings_eventGetSaveDataAccessParams_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "GetSaveDataAccessParams", nullptr, nullptr, sizeof(GameSettings_eventGetSaveDataAccessParams_Parms), Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics
	{
		struct GameSettings_eventGetSaveTitleNameFromFilenName_Parms
		{
			FString SaveFileName;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_SaveFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettings_eventGetSaveTitleNameFromFilenName_Parms, SaveFileName), METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_SaveFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_SaveFileName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSettings_eventGetSaveTitleNameFromFilenName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSettings_eventGetSaveTitleNameFromFilenName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettings_eventGetSaveTitleNameFromFilenName_Parms), &Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_SaveFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "GetSaveTitleNameFromFilenName", nullptr, nullptr, sizeof(GameSettings_eventGetSaveTitleNameFromFilenName_Parms), Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "InitExtendedSaveGameInfoDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics
	{
		struct GameSettings_eventIsValidSSmode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSettings_eventIsValidSSmode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSettings_eventIsValidSSmode_Parms), &Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSettings, nullptr, "IsValidSSmode", nullptr, nullptr, sizeof(GameSettings_eventIsValidSSmode_Parms), Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSettings_IsValidSSmode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSettings_IsValidSSmode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSettings_NoRegister()
	{
		return UGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveDataAccessSetting_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataAccessSetting_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataAccessSetting_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataAccessSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SaveDataAccessSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidShippingSSmode_MetaData[];
#endif
		static void NewProp_ValidShippingSSmode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidShippingSSmode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdjustDlcSaveDataSetting_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdjustDlcSaveDataSetting_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdjustDlcSaveDataSetting_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustDlcSaveDataSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AdjustDlcSaveDataSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSettings_GetAdjustDlcSaveDataAccessParams, "GetAdjustDlcSaveDataAccessParams" }, // 4059244096
		{ &Z_Construct_UFunction_UGameSettings_GetSaveDataAccessParams, "GetSaveDataAccessParams" }, // 741692337
		{ &Z_Construct_UFunction_UGameSettings_GetSaveTitleNameFromFilenName, "GetSaveTitleNameFromFilenName" }, // 386124632
		{ &Z_Construct_UFunction_UGameSettings_InitExtendedSaveGameInfoDelegate, "InitExtendedSaveGameInfoDelegate" }, // 482461213
		{ &Z_Construct_UFunction_UGameSettings_IsValidSSmode, "IsValidSSmode" }, // 2310403436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_ValueProp = { "SaveDataAccessSetting", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSaveDataAccessData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_Key_KeyProp = { "SaveDataAccessSetting_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSettings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting = { "SaveDataAccessSetting", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettings, SaveDataAccessSetting), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSettings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	void Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode_SetBit(void* Obj)
	{
		((UGameSettings*)Obj)->ValidShippingSSmode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode = { "ValidShippingSSmode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameSettings), &Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_ValueProp = { "AdjustDlcSaveDataSetting", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAdjustDlcSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_Key_KeyProp = { "AdjustDlcSaveDataSetting_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSettings" },
		{ "ModuleRelativePath", "Public/GameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting = { "AdjustDlcSaveDataSetting", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSettings, AdjustDlcSaveDataSetting), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_SaveDataAccessSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_ValidShippingSSmode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSettings_Statics::NewProp_AdjustDlcSaveDataSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSettings_Statics::ClassParams = {
		&UGameSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSettings, 261555166);
	template<> ELITE_API UClass* StaticClass<UGameSettings>()
	{
		return UGameSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSettings(Z_Construct_UClass_UGameSettings, &UGameSettings::StaticClass, TEXT("/Script/ELITE"), TEXT("UGameSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
