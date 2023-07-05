// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EliteGameSettingsUtilityFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEliteGameSettingsUtilityFunctions() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UEliteGameSettingsUtilityFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ELITE_GAME_API UClass* Z_Construct_UClass_UEliteGameSettings_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetCharacterModelTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetCharacterModelTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetCharacterModelTablePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetCharacterModelTablePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetCharacterProfilesTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetCharacterProfilesTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetDisplayOptionSettingDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetDisplayOptionSettingDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetEliteGameSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEliteGameSettings**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetEliteGameSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetExcludeWrestlerList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<EWrestlerID_N>*)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetExcludeWrestlerList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetHardwareLevelsDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetHardwareLevelsDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettingsUtilityFunctions::execGetMovieTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettingsUtilityFunctions::GetMovieTable();
		P_NATIVE_END;
	}
	void UEliteGameSettingsUtilityFunctions::StaticRegisterNativesUEliteGameSettingsUtilityFunctions()
	{
		UClass* Class = UEliteGameSettingsUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterModelTable", &UEliteGameSettingsUtilityFunctions::execGetCharacterModelTable },
			{ "GetCharacterModelTablePath", &UEliteGameSettingsUtilityFunctions::execGetCharacterModelTablePath },
			{ "GetCharacterProfilesTable", &UEliteGameSettingsUtilityFunctions::execGetCharacterProfilesTable },
			{ "GetDisplayOptionSettingDataTable", &UEliteGameSettingsUtilityFunctions::execGetDisplayOptionSettingDataTable },
			{ "GetEliteGameSetting", &UEliteGameSettingsUtilityFunctions::execGetEliteGameSetting },
			{ "GetExcludeWrestlerList", &UEliteGameSettingsUtilityFunctions::execGetExcludeWrestlerList },
			{ "GetHardwareLevelsDataTable", &UEliteGameSettingsUtilityFunctions::execGetHardwareLevelsDataTable },
			{ "GetMovieTable", &UEliteGameSettingsUtilityFunctions::execGetMovieTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetCharacterModelTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetCharacterModelTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetCharacterModelTable", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetCharacterModelTable_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetCharacterModelTablePath_Parms
		{
			FSoftObjectPath ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetCharacterModelTablePath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetCharacterModelTablePath", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetCharacterModelTablePath_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetCharacterProfilesTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetCharacterProfilesTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetCharacterProfilesTable", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetCharacterProfilesTable_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetDisplayOptionSettingDataTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetDisplayOptionSettingDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetDisplayOptionSettingDataTable", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetDisplayOptionSettingDataTable_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetEliteGameSetting_Parms
		{
			UEliteGameSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetEliteGameSetting_Parms, ReturnValue), Z_Construct_UClass_UEliteGameSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetEliteGameSetting", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetEliteGameSetting_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetExcludeWrestlerList_Parms
		{
			TSet<EWrestlerID_N> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetExcludeWrestlerList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetExcludeWrestlerList", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetExcludeWrestlerList_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetHardwareLevelsDataTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetHardwareLevelsDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetHardwareLevelsDataTable", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetHardwareLevelsDataTable_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics
	{
		struct EliteGameSettingsUtilityFunctions_eventGetMovieTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettingsUtilityFunctions_eventGetMovieTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, nullptr, "GetMovieTable", nullptr, nullptr, sizeof(EliteGameSettingsUtilityFunctions_eventGetMovieTable_Parms), Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_NoRegister()
	{
		return UEliteGameSettingsUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTable, "GetCharacterModelTable" }, // 3425403287
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterModelTablePath, "GetCharacterModelTablePath" }, // 3597536504
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetCharacterProfilesTable, "GetCharacterProfilesTable" }, // 1106288311
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetDisplayOptionSettingDataTable, "GetDisplayOptionSettingDataTable" }, // 4035888242
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetEliteGameSetting, "GetEliteGameSetting" }, // 1670037180
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetExcludeWrestlerList, "GetExcludeWrestlerList" }, // 3559398300
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetHardwareLevelsDataTable, "GetHardwareLevelsDataTable" }, // 2916441198
		{ &Z_Construct_UFunction_UEliteGameSettingsUtilityFunctions_GetMovieTable, "GetMovieTable" }, // 3506765921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EliteGameSettingsUtilityFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EliteGameSettingsUtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEliteGameSettingsUtilityFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::ClassParams = {
		&UEliteGameSettingsUtilityFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEliteGameSettingsUtilityFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEliteGameSettingsUtilityFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEliteGameSettingsUtilityFunctions, 1774670703);
	template<> ELITE_GAME_API UClass* StaticClass<UEliteGameSettingsUtilityFunctions>()
	{
		return UEliteGameSettingsUtilityFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEliteGameSettingsUtilityFunctions(Z_Construct_UClass_UEliteGameSettingsUtilityFunctions, &UEliteGameSettingsUtilityFunctions::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UEliteGameSettingsUtilityFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEliteGameSettingsUtilityFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
