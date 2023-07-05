// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchResultUpdaterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchResultUpdaterBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMatchResultUpdaterBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMatchResultUpdaterBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StarData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSelectParamForNative();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELAchievementList();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execCheck_AchievementStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Check_AchievementStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execGetStarEvaluation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MatchTotalScore);
		P_GET_STRUCT_REF(FELMatchScore_StarData,Z_Param_Out_OutStarData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStarEvaluation(Z_Param_MatchTotalScore,Z_Param_Out_OutStarData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execIsCompetitor)
	{
		P_GET_STRUCT_REF(FELWrestlerSelectParamForNative,Z_Param_Out_Wrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompetitor(Z_Param_Out_Wrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execOnShowMatchResultMenuEvent_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowMatchResultMenuEvent_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execPushUnlockAchievement)
	{
		P_GET_ENUM(EELAchievementList,Z_Param_AchievementType);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushUnlockAchievement(EELAchievementList(Z_Param_AchievementType),Z_Param_AddCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execSetupCommonParameters_Native)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InHostPadNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWinTeamNo);
		P_GET_UBOOL(Z_Param_InIsOnline);
		P_GET_UBOOL(Z_Param_InIsTagRule);
		P_GET_UBOOL(Z_Param_InIsExhibition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCommonParameters_Native(Z_Param_InHostPadNo,Z_Param_InWinTeamNo,Z_Param_InIsOnline,Z_Param_InIsTagRule,Z_Param_InIsExhibition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execUpdate_GlobalStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update_GlobalStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMatchResultUpdaterBase::execUpdate_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update_Native();
		P_NATIVE_END;
	}
	static FName NAME_AELMatchResultUpdaterBase_AddDefeatComStat_Impl = FName(TEXT("AddDefeatComStat_Impl"));
	void AELMatchResultUpdaterBase::AddDefeatComStat_Impl(int32 InAIDifficulty)
	{
		ELMatchResultUpdaterBase_eventAddDefeatComStat_Impl_Parms Parms;
		Parms.InAIDifficulty=InAIDifficulty;
		ProcessEvent(FindFunctionChecked(NAME_AELMatchResultUpdaterBase_AddDefeatComStat_Impl),&Parms);
	}
	void AELMatchResultUpdaterBase::StaticRegisterNativesAELMatchResultUpdaterBase()
	{
		UClass* Class = AELMatchResultUpdaterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check_AchievementStatus", &AELMatchResultUpdaterBase::execCheck_AchievementStatus },
			{ "GetStarEvaluation", &AELMatchResultUpdaterBase::execGetStarEvaluation },
			{ "IsCompetitor", &AELMatchResultUpdaterBase::execIsCompetitor },
			{ "OnShowMatchResultMenuEvent_Native", &AELMatchResultUpdaterBase::execOnShowMatchResultMenuEvent_Native },
			{ "PushUnlockAchievement", &AELMatchResultUpdaterBase::execPushUnlockAchievement },
			{ "SetupCommonParameters_Native", &AELMatchResultUpdaterBase::execSetupCommonParameters_Native },
			{ "Update_GlobalStat", &AELMatchResultUpdaterBase::execUpdate_GlobalStat },
			{ "Update_Native", &AELMatchResultUpdaterBase::execUpdate_Native },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAIDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::NewProp_InAIDifficulty = { "InAIDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventAddDefeatComStat_Impl_Parms, InAIDifficulty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::NewProp_InAIDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "AddDefeatComStat_Impl", nullptr, nullptr, sizeof(ELMatchResultUpdaterBase_eventAddDefeatComStat_Impl_Parms), Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "Check_AchievementStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics
	{
		struct ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms
		{
			float MatchTotalScore;
			FELMatchScore_StarData OutStarData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTotalScore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutStarData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_MatchTotalScore = { "MatchTotalScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms, MatchTotalScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_OutStarData = { "OutStarData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms, OutStarData), Z_Construct_UScriptStruct_FELMatchScore_StarData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms), &Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_MatchTotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_OutStarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "GetStarEvaluation", nullptr, nullptr, sizeof(ELMatchResultUpdaterBase_eventGetStarEvaluation_Parms), Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics
	{
		struct ELMatchResultUpdaterBase_eventIsCompetitor_Parms
		{
			FELWrestlerSelectParamForNative Wrestler;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wrestler;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_Wrestler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_Wrestler = { "Wrestler", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventIsCompetitor_Parms, Wrestler), Z_Construct_UScriptStruct_FELWrestlerSelectParamForNative, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_Wrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_Wrestler_MetaData)) };
	void Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMatchResultUpdaterBase_eventIsCompetitor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultUpdaterBase_eventIsCompetitor_Parms), &Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "IsCompetitor", nullptr, nullptr, sizeof(ELMatchResultUpdaterBase_eventIsCompetitor_Parms), Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "OnShowMatchResultMenuEvent_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics
	{
		struct ELMatchResultUpdaterBase_eventPushUnlockAchievement_Parms
		{
			EELAchievementList AchievementType;
			int32 AddCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AchievementType = { "AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventPushUnlockAchievement_Parms, AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AddCount = { "AddCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventPushUnlockAchievement_Parms, AddCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AchievementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::NewProp_AddCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "PushUnlockAchievement", nullptr, nullptr, sizeof(ELMatchResultUpdaterBase_eventPushUnlockAchievement_Parms), Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics
	{
		struct ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms
		{
			int32 InHostPadNo;
			int32 InWinTeamNo;
			bool InIsOnline;
			bool InIsTagRule;
			bool InIsExhibition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InHostPadNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWinTeamNo;
		static void NewProp_InIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsOnline;
		static void NewProp_InIsTagRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsTagRule;
		static void NewProp_InIsExhibition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsExhibition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InHostPadNo = { "InHostPadNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms, InHostPadNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InWinTeamNo = { "InWinTeamNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms, InWinTeamNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsOnline_SetBit(void* Obj)
	{
		((ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms*)Obj)->InIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsOnline = { "InIsOnline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms), &Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsOnline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsTagRule_SetBit(void* Obj)
	{
		((ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms*)Obj)->InIsTagRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsTagRule = { "InIsTagRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms), &Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsTagRule_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsExhibition_SetBit(void* Obj)
	{
		((ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms*)Obj)->InIsExhibition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsExhibition = { "InIsExhibition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms), &Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsExhibition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InHostPadNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InWinTeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsTagRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::NewProp_InIsExhibition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "SetupCommonParameters_Native", nullptr, nullptr, sizeof(ELMatchResultUpdaterBase_eventSetupCommonParameters_Native_Parms), Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "Update_GlobalStat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMatchResultUpdaterBase, nullptr, "Update_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMatchResultUpdaterBase_NoRegister()
	{
		return AELMatchResultUpdaterBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMatchResultUpdaterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StarData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCareer_MetaData[];
#endif
		static void NewProp_IsCareer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCareer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is1on1Match_MetaData[];
#endif
		static void NewProp_Is1on1Match_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is1on1Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompetitorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompetitorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinTeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinTeamNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOnline_MetaData[];
#endif
		static void NewProp_IsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTagRule_MetaData[];
#endif
		static void NewProp_IsTagRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTagRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostPadNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostPadNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostTeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostTeamNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_AddDefeatComStat_Impl, "AddDefeatComStat_Impl" }, // 510198008
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_Check_AchievementStatus, "Check_AchievementStatus" }, // 1126500126
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_GetStarEvaluation, "GetStarEvaluation" }, // 2813369719
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_IsCompetitor, "IsCompetitor" }, // 2796293097
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_OnShowMatchResultMenuEvent_Native, "OnShowMatchResultMenuEvent_Native" }, // 2030943383
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_PushUnlockAchievement, "PushUnlockAchievement" }, // 910512968
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_SetupCommonParameters_Native, "SetupCommonParameters_Native" }, // 2854850573
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_GlobalStat, "Update_GlobalStat" }, // 2707514873
		{ &Z_Construct_UFunction_AELMatchResultUpdaterBase_Update_Native, "Update_Native" }, // 3063112001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchResultUpdaterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_StarData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_StarData = { "StarData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMatchResultUpdaterBase, StarData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_StarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_StarData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer_SetBit(void* Obj)
	{
		((AELMatchResultUpdaterBase*)Obj)->IsCareer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer = { "IsCareer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMatchResultUpdaterBase), &Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match_SetBit(void* Obj)
	{
		((AELMatchResultUpdaterBase*)Obj)->Is1on1Match = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match = { "Is1on1Match", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMatchResultUpdaterBase), &Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_CompetitorCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_CompetitorCount = { "CompetitorCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMatchResultUpdaterBase, CompetitorCount), METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_CompetitorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_CompetitorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_WinTeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_WinTeamNo = { "WinTeamNo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMatchResultUpdaterBase, WinTeamNo), METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_WinTeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_WinTeamNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline_SetBit(void* Obj)
	{
		((AELMatchResultUpdaterBase*)Obj)->IsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline = { "IsOnline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMatchResultUpdaterBase), &Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	void Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule_SetBit(void* Obj)
	{
		((AELMatchResultUpdaterBase*)Obj)->IsTagRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule = { "IsTagRule", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMatchResultUpdaterBase), &Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostPadNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostPadNo = { "HostPadNo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMatchResultUpdaterBase, HostPadNo), METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostPadNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostPadNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostTeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultUpdaterBase" },
		{ "ModuleRelativePath", "Public/ELMatchResultUpdaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostTeamNo = { "HostTeamNo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMatchResultUpdaterBase, HostTeamNo), METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostTeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostTeamNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_StarData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsCareer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_Is1on1Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_CompetitorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_WinTeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_IsTagRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostPadNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::NewProp_HostTeamNo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMatchResultUpdaterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::ClassParams = {
		&AELMatchResultUpdaterBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMatchResultUpdaterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMatchResultUpdaterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMatchResultUpdaterBase, 3594330676);
	template<> ABP_200508_API UClass* StaticClass<AELMatchResultUpdaterBase>()
	{
		return AELMatchResultUpdaterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMatchResultUpdaterBase(Z_Construct_UClass_AELMatchResultUpdaterBase, &AELMatchResultUpdaterBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMatchResultUpdaterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMatchResultUpdaterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
