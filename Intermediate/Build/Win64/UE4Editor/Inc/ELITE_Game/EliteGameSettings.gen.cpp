// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EliteGameSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEliteGameSettings() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UEliteGameSettings_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UEliteGameSettings();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPSTitleInfo();
// End Cross Module References
	DEFINE_FUNCTION(UEliteGameSettings::execGetHomeTownTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetHomeTownTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEliteGameSettings**)Z_Param__Result=UEliteGameSettings::GetInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetMusicListTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetMusicListTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetRingAnnounceBaseTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetRingAnnounceBaseTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetRingAnnounceCustomNameTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetRingAnnounceCustomNameTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetRingAnnounceTeamNameTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetRingAnnounceTeamNameTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetRingAnnounceWrestlerNameTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetRingAnnounceWrestlerNameTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEliteGameSettings::execGetSfxListTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UEliteGameSettings::GetSfxListTable();
		P_NATIVE_END;
	}
	void UEliteGameSettings::StaticRegisterNativesUEliteGameSettings()
	{
		UClass* Class = UEliteGameSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHomeTownTable", &UEliteGameSettings::execGetHomeTownTable },
			{ "GetInstance", &UEliteGameSettings::execGetInstance },
			{ "GetMusicListTable", &UEliteGameSettings::execGetMusicListTable },
			{ "GetRingAnnounceBaseTable", &UEliteGameSettings::execGetRingAnnounceBaseTable },
			{ "GetRingAnnounceCustomNameTable", &UEliteGameSettings::execGetRingAnnounceCustomNameTable },
			{ "GetRingAnnounceTeamNameTable", &UEliteGameSettings::execGetRingAnnounceTeamNameTable },
			{ "GetRingAnnounceWrestlerNameTable", &UEliteGameSettings::execGetRingAnnounceWrestlerNameTable },
			{ "GetSfxListTable", &UEliteGameSettings::execGetSfxListTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics
	{
		struct EliteGameSettings_eventGetHomeTownTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetHomeTownTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetHomeTownTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetHomeTownTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics
	{
		struct EliteGameSettings_eventGetInstance_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UEliteGameSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetInstance", nullptr, nullptr, sizeof(EliteGameSettings_eventGetInstance_Parms), Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics
	{
		struct EliteGameSettings_eventGetMusicListTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetMusicListTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetMusicListTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetMusicListTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics
	{
		struct EliteGameSettings_eventGetRingAnnounceBaseTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetRingAnnounceBaseTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetRingAnnounceBaseTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetRingAnnounceBaseTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics
	{
		struct EliteGameSettings_eventGetRingAnnounceCustomNameTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetRingAnnounceCustomNameTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetRingAnnounceCustomNameTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetRingAnnounceCustomNameTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics
	{
		struct EliteGameSettings_eventGetRingAnnounceTeamNameTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetRingAnnounceTeamNameTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetRingAnnounceTeamNameTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetRingAnnounceTeamNameTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics
	{
		struct EliteGameSettings_eventGetRingAnnounceWrestlerNameTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetRingAnnounceWrestlerNameTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetRingAnnounceWrestlerNameTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetRingAnnounceWrestlerNameTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics
	{
		struct EliteGameSettings_eventGetSfxListTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EliteGameSettings_eventGetSfxListTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEliteGameSettings, nullptr, "GetSfxListTable", nullptr, nullptr, sizeof(EliteGameSettings_eventGetSfxListTable_Parms), Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEliteGameSettings_NoRegister()
	{
		return UEliteGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEliteGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExcludeWrestlerList_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExcludeWrestlerList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeWrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ExcludeWrestlerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterModelTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterModelTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProfilesTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterProfilesTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTownTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HomeTownTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MusicTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounce_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAnnounce_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounce_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAnnounce_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounce_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAnnounce_TeamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAnnounce_CustomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAnnounce_CustomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCutsceneParticleAssetsReplaceTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceCutsceneParticleAssetsReplaceTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovieTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOptionSettingDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayOptionSettingDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardwareLevelsDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HardwareLevelsDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableIK_MetaData[];
#endif
		static void NewProp_bEnableIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableIK;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PSTitleInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTitleInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PSTitleInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEliteGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEliteGameSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEliteGameSettings_GetHomeTownTable, "GetHomeTownTable" }, // 3385645410
		{ &Z_Construct_UFunction_UEliteGameSettings_GetInstance, "GetInstance" }, // 3997956186
		{ &Z_Construct_UFunction_UEliteGameSettings_GetMusicListTable, "GetMusicListTable" }, // 1115014859
		{ &Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceBaseTable, "GetRingAnnounceBaseTable" }, // 546034987
		{ &Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceCustomNameTable, "GetRingAnnounceCustomNameTable" }, // 1638112155
		{ &Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceTeamNameTable, "GetRingAnnounceTeamNameTable" }, // 3518859690
		{ &Z_Construct_UFunction_UEliteGameSettings_GetRingAnnounceWrestlerNameTable, "GetRingAnnounceWrestlerNameTable" }, // 66543250
		{ &Z_Construct_UFunction_UEliteGameSettings_GetSfxListTable, "GetSfxListTable" }, // 3948406263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EliteGameSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_ElementProp = { "ExcludeWrestlerList", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList = { "ExcludeWrestlerList", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, ExcludeWrestlerList), METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterModelTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterModelTable = { "CharacterModelTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, CharacterModelTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterModelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterModelTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterProfilesTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterProfilesTable = { "CharacterProfilesTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, CharacterProfilesTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterProfilesTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterProfilesTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HomeTownTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HomeTownTable = { "HomeTownTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, HomeTownTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HomeTownTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HomeTownTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MusicTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MusicTable = { "MusicTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, MusicTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MusicTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MusicTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_AudioTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_AudioTable = { "AudioTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, AudioTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_AudioTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_AudioTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_Base_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_Base = { "RingAnnounce_Base", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, RingAnnounce_Base), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_WrestlerName = { "RingAnnounce_WrestlerName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, RingAnnounce_WrestlerName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_TeamName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_TeamName = { "RingAnnounce_TeamName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, RingAnnounce_TeamName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_TeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_TeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_CustomName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_CustomName = { "RingAnnounce_CustomName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, RingAnnounce_CustomName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_CustomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_EntranceCutsceneParticleAssetsReplaceTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_EntranceCutsceneParticleAssetsReplaceTable = { "EntranceCutsceneParticleAssetsReplaceTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, EntranceCutsceneParticleAssetsReplaceTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_EntranceCutsceneParticleAssetsReplaceTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_EntranceCutsceneParticleAssetsReplaceTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MovieTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MovieTable = { "MovieTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, MovieTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MovieTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MovieTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_DisplayOptionSettingDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_DisplayOptionSettingDataTable = { "DisplayOptionSettingDataTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, DisplayOptionSettingDataTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_DisplayOptionSettingDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_DisplayOptionSettingDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HardwareLevelsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HardwareLevelsDataTable = { "HardwareLevelsDataTable", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, HardwareLevelsDataTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HardwareLevelsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HardwareLevelsDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK_SetBit(void* Obj)
	{
		((UEliteGameSettings*)Obj)->bEnableIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK = { "bEnableIK", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEliteGameSettings), &Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos_Inner = { "PSTitleInfos", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPSTitleInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EliteGameSettings" },
		{ "ModuleRelativePath", "Public/EliteGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos = { "PSTitleInfos", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEliteGameSettings, PSTitleInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEliteGameSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_ExcludeWrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterModelTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_CharacterProfilesTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HomeTownTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MusicTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_AudioTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_TeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_RingAnnounce_CustomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_EntranceCutsceneParticleAssetsReplaceTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_MovieTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_DisplayOptionSettingDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_HardwareLevelsDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_bEnableIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEliteGameSettings_Statics::NewProp_PSTitleInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEliteGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEliteGameSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEliteGameSettings_Statics::ClassParams = {
		&UEliteGameSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEliteGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEliteGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEliteGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEliteGameSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEliteGameSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEliteGameSettings, 3358558169);
	template<> ELITE_GAME_API UClass* StaticClass<UEliteGameSettings>()
	{
		return UEliteGameSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEliteGameSettings(Z_Construct_UClass_UEliteGameSettings, &UEliteGameSettings::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UEliteGameSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEliteGameSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
