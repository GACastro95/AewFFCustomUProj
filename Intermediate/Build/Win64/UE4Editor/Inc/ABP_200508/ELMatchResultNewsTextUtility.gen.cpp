// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchResultNewsTextUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchResultNewsTextUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchResultNewsTextUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchResultNewsTextUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextClosing();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextInGame();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextOpening();
// End Cross Module References
	DEFINE_FUNCTION(UELMatchResultNewsTextUtility::execGetAriticleText_Closing)
	{
		P_GET_STRUCT_REF(FELAriticleTextClosing,Z_Param_Out_Closing);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWinnerHP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLoserHP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMatchTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMatchScore);
		P_GET_UBOOL(Z_Param_InIsSingle);
		P_GET_UBOOL(Z_Param_InIsTag);
		P_GET_UBOOL(Z_Param_InIsThreeWay);
		P_GET_UBOOL(Z_Param_InIsFourWay);
		P_GET_UBOOL(Z_Param_InIsCasino);
		P_GET_UBOOL(Z_Param_InIsExploding);
		P_GET_UBOOL(Z_Param_InIsLightsOut);
		P_GET_UBOOL(Z_Param_InIsFallsCountAnywhere);
		P_GET_UBOOL(Z_Param_IsDispLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMatchResultNewsTextUtility::GetAriticleText_Closing(Z_Param_Out_Closing,Z_Param_DataTable,Z_Param_InWinnerHP,Z_Param_InLoserHP,Z_Param_InMatchTime,Z_Param_InMatchScore,Z_Param_InIsSingle,Z_Param_InIsTag,Z_Param_InIsThreeWay,Z_Param_InIsFourWay,Z_Param_InIsCasino,Z_Param_InIsExploding,Z_Param_InIsLightsOut,Z_Param_InIsFallsCountAnywhere,Z_Param_IsDispLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultNewsTextUtility::execGetAriticleText_InGame)
	{
		P_GET_STRUCT_REF(FELAriticleTextInGame,Z_Param_Out_InGame);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_TARRAY(EELMatchScoreObjective,Z_Param_Objectives);
		P_GET_UBOOL(Z_Param_ExclusiveTagText);
		P_GET_UBOOL(Z_Param_IsDispLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMatchResultNewsTextUtility::GetAriticleText_InGame(Z_Param_Out_InGame,Z_Param_DataTable,Z_Param_Objectives,Z_Param_ExclusiveTagText,Z_Param_IsDispLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultNewsTextUtility::execGetAriticleText_Opening)
	{
		P_GET_STRUCT_REF(FELAriticleTextOpening,Z_Param_Out_Opening);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWinnerHP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLoserHP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMatchTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMatchScore);
		P_GET_UBOOL(Z_Param_InIsSingle);
		P_GET_UBOOL(Z_Param_InIsTag);
		P_GET_UBOOL(Z_Param_InIsThreeWay);
		P_GET_UBOOL(Z_Param_InIsFourWay);
		P_GET_UBOOL(Z_Param_InIsCasino);
		P_GET_UBOOL(Z_Param_InIsExploding);
		P_GET_UBOOL(Z_Param_InIsLightsOut);
		P_GET_UBOOL(Z_Param_InIsFallsCountAnywhere);
		P_GET_UBOOL(Z_Param_IsDispLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMatchResultNewsTextUtility::GetAriticleText_Opening(Z_Param_Out_Opening,Z_Param_DataTable,Z_Param_InWinnerHP,Z_Param_InLoserHP,Z_Param_InMatchTime,Z_Param_InMatchScore,Z_Param_InIsSingle,Z_Param_InIsTag,Z_Param_InIsThreeWay,Z_Param_InIsFourWay,Z_Param_InIsCasino,Z_Param_InIsExploding,Z_Param_InIsLightsOut,Z_Param_InIsFallsCountAnywhere,Z_Param_IsDispLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMatchResultNewsTextUtility::execReplaceWrestlerName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutText);
		P_GET_PROPERTY(FStrProperty,Z_Param_Format);
		P_GET_PROPERTY(FStrProperty,Z_Param_WinWrestlerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WinWrestlerShortName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoseWrestlerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoseWrestlerShortName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WinTeamName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoseTeamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMatchResultNewsTextUtility::ReplaceWrestlerName(Z_Param_Out_OutText,Z_Param_Format,Z_Param_WinWrestlerName,Z_Param_WinWrestlerShortName,Z_Param_LoseWrestlerName,Z_Param_LoseWrestlerShortName,Z_Param_WinTeamName,Z_Param_LoseTeamName);
		P_NATIVE_END;
	}
	void UELMatchResultNewsTextUtility::StaticRegisterNativesUELMatchResultNewsTextUtility()
	{
		UClass* Class = UELMatchResultNewsTextUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAriticleText_Closing", &UELMatchResultNewsTextUtility::execGetAriticleText_Closing },
			{ "GetAriticleText_InGame", &UELMatchResultNewsTextUtility::execGetAriticleText_InGame },
			{ "GetAriticleText_Opening", &UELMatchResultNewsTextUtility::execGetAriticleText_Opening },
			{ "ReplaceWrestlerName", &UELMatchResultNewsTextUtility::execReplaceWrestlerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics
	{
		struct ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms
		{
			FELAriticleTextClosing Closing;
			const UDataTable* DataTable;
			float InWinnerHP;
			float InLoserHP;
			float InMatchTime;
			int32 InMatchScore;
			bool InIsSingle;
			bool InIsTag;
			bool InIsThreeWay;
			bool InIsFourWay;
			bool InIsCasino;
			bool InIsExploding;
			bool InIsLightsOut;
			bool InIsFallsCountAnywhere;
			bool IsDispLog;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Closing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWinnerHP;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLoserHP;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMatchTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMatchScore;
		static void NewProp_InIsSingle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsSingle;
		static void NewProp_InIsTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsTag;
		static void NewProp_InIsThreeWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsThreeWay;
		static void NewProp_InIsFourWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsFourWay;
		static void NewProp_InIsCasino_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsCasino;
		static void NewProp_InIsExploding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsExploding;
		static void NewProp_InIsLightsOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsLightsOut;
		static void NewProp_InIsFallsCountAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsFallsCountAnywhere;
		static void NewProp_IsDispLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDispLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_Closing = { "Closing", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, Closing), Z_Construct_UScriptStruct_FELAriticleTextClosing, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InWinnerHP = { "InWinnerHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, InWinnerHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InLoserHP = { "InLoserHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, InLoserHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InMatchTime = { "InMatchTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, InMatchTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InMatchScore = { "InMatchScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms, InMatchScore), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsSingle_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsSingle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsSingle = { "InIsSingle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsSingle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsTag_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsTag = { "InIsTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsThreeWay_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsThreeWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsThreeWay = { "InIsThreeWay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsThreeWay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFourWay_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsFourWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFourWay = { "InIsFourWay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFourWay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsCasino_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsCasino = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsCasino = { "InIsCasino", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsCasino_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsExploding_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsExploding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsExploding = { "InIsExploding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsExploding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsLightsOut_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsLightsOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsLightsOut = { "InIsLightsOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsLightsOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFallsCountAnywhere_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->InIsFallsCountAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFallsCountAnywhere = { "InIsFallsCountAnywhere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFallsCountAnywhere_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_IsDispLog_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms*)Obj)->IsDispLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_IsDispLog = { "IsDispLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_IsDispLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_Closing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InWinnerHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InLoserHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InMatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsThreeWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFourWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsCasino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsExploding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsLightsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_InIsFallsCountAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::NewProp_IsDispLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultNewsTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultNewsTextUtility, nullptr, "GetAriticleText_Closing", nullptr, nullptr, sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Closing_Parms), Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics
	{
		struct ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms
		{
			FELAriticleTextInGame InGame;
			const UDataTable* DataTable;
			TArray<EELMatchScoreObjective> Objectives;
			bool ExclusiveTagText;
			bool IsDispLog;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Objectives_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Objectives_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
		static void NewProp_ExclusiveTagText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExclusiveTagText;
		static void NewProp_IsDispLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDispLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms, InGame), Z_Construct_UScriptStruct_FELAriticleTextInGame, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_ExclusiveTagText_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms*)Obj)->ExclusiveTagText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_ExclusiveTagText = { "ExclusiveTagText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_ExclusiveTagText_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_IsDispLog_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms*)Obj)->IsDispLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_IsDispLog = { "IsDispLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_IsDispLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_InGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_ExclusiveTagText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::NewProp_IsDispLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultNewsTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultNewsTextUtility, nullptr, "GetAriticleText_InGame", nullptr, nullptr, sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_InGame_Parms), Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics
	{
		struct ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms
		{
			FELAriticleTextOpening Opening;
			const UDataTable* DataTable;
			float InWinnerHP;
			float InLoserHP;
			float InMatchTime;
			int32 InMatchScore;
			bool InIsSingle;
			bool InIsTag;
			bool InIsThreeWay;
			bool InIsFourWay;
			bool InIsCasino;
			bool InIsExploding;
			bool InIsLightsOut;
			bool InIsFallsCountAnywhere;
			bool IsDispLog;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWinnerHP;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLoserHP;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMatchTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMatchScore;
		static void NewProp_InIsSingle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsSingle;
		static void NewProp_InIsTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsTag;
		static void NewProp_InIsThreeWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsThreeWay;
		static void NewProp_InIsFourWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsFourWay;
		static void NewProp_InIsCasino_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsCasino;
		static void NewProp_InIsExploding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsExploding;
		static void NewProp_InIsLightsOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsLightsOut;
		static void NewProp_InIsFallsCountAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsFallsCountAnywhere;
		static void NewProp_IsDispLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDispLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_Opening = { "Opening", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, Opening), Z_Construct_UScriptStruct_FELAriticleTextOpening, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InWinnerHP = { "InWinnerHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, InWinnerHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InLoserHP = { "InLoserHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, InLoserHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InMatchTime = { "InMatchTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, InMatchTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InMatchScore = { "InMatchScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms, InMatchScore), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsSingle_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsSingle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsSingle = { "InIsSingle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsSingle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsTag_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsTag = { "InIsTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsThreeWay_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsThreeWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsThreeWay = { "InIsThreeWay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsThreeWay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFourWay_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsFourWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFourWay = { "InIsFourWay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFourWay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsCasino_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsCasino = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsCasino = { "InIsCasino", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsCasino_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsExploding_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsExploding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsExploding = { "InIsExploding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsExploding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsLightsOut_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsLightsOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsLightsOut = { "InIsLightsOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsLightsOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFallsCountAnywhere_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->InIsFallsCountAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFallsCountAnywhere = { "InIsFallsCountAnywhere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFallsCountAnywhere_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_IsDispLog_SetBit(void* Obj)
	{
		((ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms*)Obj)->IsDispLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_IsDispLog = { "IsDispLog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_IsDispLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_Opening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InWinnerHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InLoserHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InMatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsThreeWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFourWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsCasino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsExploding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsLightsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_InIsFallsCountAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::NewProp_IsDispLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultNewsTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultNewsTextUtility, nullptr, "GetAriticleText_Opening", nullptr, nullptr, sizeof(ELMatchResultNewsTextUtility_eventGetAriticleText_Opening_Parms), Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics
	{
		struct ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms
		{
			FString OutText;
			FString Format;
			FString WinWrestlerName;
			FString WinWrestlerShortName;
			FString LoseWrestlerName;
			FString LoseWrestlerShortName;
			FString WinTeamName;
			FString LoseTeamName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinWrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinWrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinWrestlerShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinWrestlerShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseWrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoseWrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseWrestlerShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoseWrestlerShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinTeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinTeamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseTeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoseTeamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_OutText = { "OutText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, Format), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerName = { "WinWrestlerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, WinWrestlerName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerShortName = { "WinWrestlerShortName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, WinWrestlerShortName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerName = { "LoseWrestlerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, LoseWrestlerName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerShortName = { "LoseWrestlerShortName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, LoseWrestlerShortName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinTeamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinTeamName = { "WinTeamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, WinTeamName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinTeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinTeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseTeamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseTeamName = { "LoseTeamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms, LoseTeamName), METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseTeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseTeamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_OutText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinWrestlerShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseWrestlerShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_WinTeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::NewProp_LoseTeamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultNewsTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchResultNewsTextUtility, nullptr, "ReplaceWrestlerName", nullptr, nullptr, sizeof(ELMatchResultNewsTextUtility_eventReplaceWrestlerName_Parms), Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMatchResultNewsTextUtility_NoRegister()
	{
		return UELMatchResultNewsTextUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Closing, "GetAriticleText_Closing" }, // 1928851633
		{ &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_InGame, "GetAriticleText_InGame" }, // 3940759764
		{ &Z_Construct_UFunction_UELMatchResultNewsTextUtility_GetAriticleText_Opening, "GetAriticleText_Opening" }, // 2025890014
		{ &Z_Construct_UFunction_UELMatchResultNewsTextUtility_ReplaceWrestlerName, "ReplaceWrestlerName" }, // 1233335464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchResultNewsTextUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchResultNewsTextUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMatchResultNewsTextUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::ClassParams = {
		&UELMatchResultNewsTextUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMatchResultNewsTextUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMatchResultNewsTextUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMatchResultNewsTextUtility, 4008363251);
	template<> ABP_200508_API UClass* StaticClass<UELMatchResultNewsTextUtility>()
	{
		return UELMatchResultNewsTextUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMatchResultNewsTextUtility(Z_Construct_UClass_UELMatchResultNewsTextUtility, &UELMatchResultNewsTextUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMatchResultNewsTextUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMatchResultNewsTextUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
