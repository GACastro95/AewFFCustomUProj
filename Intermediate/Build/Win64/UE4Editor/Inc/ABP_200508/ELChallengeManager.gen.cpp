// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELChallengeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELChallengeManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELChallengeManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELChallengeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeAchievementParameter();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengePeriodType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCompleteState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangedChallengeList__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeRecordSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressSaveData();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELChallengeManager::execAcquiredChallengeReward)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcquiredChallengeReward(Z_Param__pWorldContextObject,Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execCheckChallengeExpirationDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckChallengeExpirationDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execConfirmedChangeDailyChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmedChangeDailyChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execConfirmedChangeWeeklyChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmedChangeWeeklyChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execCreatePlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePlayerData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execDebug_ForceChangingChallengeList)
	{
		P_GET_UBOOL(Z_Param__bDaily);
		P_GET_UBOOL(Z_Param__bWeekly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Debug_ForceChangingChallengeList(Z_Param__bDaily,Z_Param__bWeekly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execDisposeSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisposeSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetBlockPopupFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBlockPopupFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetChallengeParameterFromId)
	{
		P_GET_TARRAY_REF(FChallengeAchievementParameter,Z_Param_Out_OutResult);
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChallengeParameterFromId(Z_Param_Out_OutResult,Z_Param__targetIdList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetChangedChallengeInfo)
	{
		P_GET_TARRAY_REF(FChallengeProgressDetailInfo,Z_Param_Out__outResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChangedChallengeInfo(Z_Param_Out__outResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetPlayedMatchCountNumFromDailyChallenge)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayedMatchCountNumFromDailyChallenge(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetProgressDetailInfoFromID)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_GET_ENUM(EChallengePeriodType,Z_Param__periodType);
		P_GET_TARRAY_REF(FChallengeProgressDetailInfo,Z_Param_Out__outResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProgressDetailInfoFromID(Z_Param__targetIdList,EChallengePeriodType(Z_Param__periodType),Z_Param_Out__outResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetProgressStateList)
	{
		P_GET_ENUM(EChallengePeriodType,Z_Param__targetType);
		P_GET_UBOOL(Z_Param__targetNotCompleteState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FChallengeCompleteState>*)Z_Param__Result=P_THIS->GetProgressStateList(EChallengePeriodType(Z_Param__targetType),Z_Param__targetNotCompleteState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execGetRemainingTime)
	{
		P_GET_ENUM(EChallengePeriodType,Z_Param__targetPeriodType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetRemainingTime(EChallengePeriodType(Z_Param__targetPeriodType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execIsChangedDailyChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChangedDailyChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execIsChangedWeeklyChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChangedWeeklyChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execIsIncludedUnavailableDlcWrestler)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_TargetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIncludedUnavailableDlcWrestler(EWrestlerID_N(Z_Param_TargetID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execOnUpdateBattlePassPoint)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateBattlePassPoint(Z_Param__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execRestartChallengeRecordMonitor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartChallengeRecordMonitor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execSetBlockPopupFlag)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockPopupFlag(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execSetupChallengeParamDataTable)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param__achievementParamDT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupChallengeParamDataTable(Z_Param__achievementParamDT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execStartChallengeRecordMonitor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartChallengeRecordMonitor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeManager::execStopChallengeRecordMonitor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopChallengeRecordMonitor();
		P_NATIVE_END;
	}
	void UELChallengeManager::StaticRegisterNativesUELChallengeManager()
	{
		UClass* Class = UELChallengeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquiredChallengeReward", &UELChallengeManager::execAcquiredChallengeReward },
			{ "CheckChallengeExpirationDate", &UELChallengeManager::execCheckChallengeExpirationDate },
			{ "ConfirmedChangeDailyChallenges", &UELChallengeManager::execConfirmedChangeDailyChallenges },
			{ "ConfirmedChangeWeeklyChallenges", &UELChallengeManager::execConfirmedChangeWeeklyChallenges },
			{ "CreatePlayerData", &UELChallengeManager::execCreatePlayerData },
			{ "Debug_ForceChangingChallengeList", &UELChallengeManager::execDebug_ForceChangingChallengeList },
			{ "DisposeSaveData", &UELChallengeManager::execDisposeSaveData },
			{ "GetBlockPopupFlag", &UELChallengeManager::execGetBlockPopupFlag },
			{ "GetChallengeParameterFromId", &UELChallengeManager::execGetChallengeParameterFromId },
			{ "GetChangedChallengeInfo", &UELChallengeManager::execGetChangedChallengeInfo },
			{ "GetPlayedMatchCountNumFromDailyChallenge", &UELChallengeManager::execGetPlayedMatchCountNumFromDailyChallenge },
			{ "GetProgressDetailInfoFromID", &UELChallengeManager::execGetProgressDetailInfoFromID },
			{ "GetProgressStateList", &UELChallengeManager::execGetProgressStateList },
			{ "GetRemainingTime", &UELChallengeManager::execGetRemainingTime },
			{ "IsChangedDailyChallenges", &UELChallengeManager::execIsChangedDailyChallenges },
			{ "IsChangedWeeklyChallenges", &UELChallengeManager::execIsChangedWeeklyChallenges },
			{ "IsIncludedUnavailableDlcWrestler", &UELChallengeManager::execIsIncludedUnavailableDlcWrestler },
			{ "OnUpdateBattlePassPoint", &UELChallengeManager::execOnUpdateBattlePassPoint },
			{ "RestartChallengeRecordMonitor", &UELChallengeManager::execRestartChallengeRecordMonitor },
			{ "SetBlockPopupFlag", &UELChallengeManager::execSetBlockPopupFlag },
			{ "SetupChallengeParamDataTable", &UELChallengeManager::execSetupChallengeParamDataTable },
			{ "StartChallengeRecordMonitor", &UELChallengeManager::execStartChallengeRecordMonitor },
			{ "StopChallengeRecordMonitor", &UELChallengeManager::execStopChallengeRecordMonitor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics
	{
		struct ELChallengeManager_eventAcquiredChallengeReward_Parms
		{
			UObject* _pWorldContextObject;
			int32 _targetId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventAcquiredChallengeReward_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventAcquiredChallengeReward_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::NewProp__targetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "AcquiredChallengeReward", nullptr, nullptr, sizeof(ELChallengeManager_eventAcquiredChallengeReward_Parms), Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "CheckChallengeExpirationDate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "ConfirmedChangeDailyChallenges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "ConfirmedChangeWeeklyChallenges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "CreatePlayerData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_CreatePlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_CreatePlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics
	{
		struct ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms
		{
			bool _bDaily;
			bool _bWeekly;
		};
		static void NewProp__bDaily_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDaily;
		static void NewProp__bWeekly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bWeekly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bDaily_SetBit(void* Obj)
	{
		((ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms*)Obj)->_bDaily = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bDaily = { "_bDaily", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms), &Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bDaily_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bWeekly_SetBit(void* Obj)
	{
		((ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms*)Obj)->_bWeekly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bWeekly = { "_bWeekly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms), &Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bWeekly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bDaily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::NewProp__bWeekly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "Debug_ForceChangingChallengeList", nullptr, nullptr, sizeof(ELChallengeManager_eventDebug_ForceChangingChallengeList_Parms), Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "DisposeSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_DisposeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_DisposeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics
	{
		struct ELChallengeManager_eventGetBlockPopupFlag_Parms
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
	void Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChallengeManager_eventGetBlockPopupFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventGetBlockPopupFlag_Parms), &Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetBlockPopupFlag", nullptr, nullptr, sizeof(ELChallengeManager_eventGetBlockPopupFlag_Parms), Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics
	{
		struct ELChallengeManager_eventGetChallengeParameterFromId_Parms
		{
			TArray<FChallengeAchievementParameter> OutResult;
			TArray<int32> _targetIdList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeAchievementParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetChallengeParameterFromId_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetChallengeParameterFromId_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp_OutResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::NewProp__targetIdList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetChallengeParameterFromId", nullptr, nullptr, sizeof(ELChallengeManager_eventGetChallengeParameterFromId_Parms), Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics
	{
		struct ELChallengeManager_eventGetChangedChallengeInfo_Parms
		{
			TArray<FChallengeProgressDetailInfo> _outResultList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetChangedChallengeInfo_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChallengeManager_eventGetChangedChallengeInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventGetChangedChallengeInfo_Parms), &Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp__outResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetChangedChallengeInfo", nullptr, nullptr, sizeof(ELChallengeManager_eventGetChangedChallengeInfo_Parms), Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics
	{
		struct ELChallengeManager_eventGetPlayedMatchCountNumFromDailyChallenge_Parms
		{
			UObject* _pWorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetPlayedMatchCountNumFromDailyChallenge_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetPlayedMatchCountNumFromDailyChallenge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetPlayedMatchCountNumFromDailyChallenge", nullptr, nullptr, sizeof(ELChallengeManager_eventGetPlayedMatchCountNumFromDailyChallenge_Parms), Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics
	{
		struct ELChallengeManager_eventGetProgressDetailInfoFromID_Parms
		{
			TArray<int32> _targetIdList;
			EChallengePeriodType _periodType;
			TArray<FChallengeProgressDetailInfo> _outResult;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__periodType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__periodType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetProgressDetailInfoFromID_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__periodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__periodType = { "_periodType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetProgressDetailInfoFromID_Parms, _periodType), Z_Construct_UEnum_ABP_200508_EChallengePeriodType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__outResult_Inner = { "_outResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetProgressDetailInfoFromID_Parms, _outResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__targetIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__periodType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__periodType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__outResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::NewProp__outResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetProgressDetailInfoFromID", nullptr, nullptr, sizeof(ELChallengeManager_eventGetProgressDetailInfoFromID_Parms), Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics
	{
		struct ELChallengeManager_eventGetProgressStateList_Parms
		{
			EChallengePeriodType _targetType;
			bool _targetNotCompleteState;
			TArray<FChallengeCompleteState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetType;
		static void NewProp__targetNotCompleteState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__targetNotCompleteState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetType = { "_targetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetProgressStateList_Parms, _targetType), Z_Construct_UEnum_ABP_200508_EChallengePeriodType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetNotCompleteState_SetBit(void* Obj)
	{
		((ELChallengeManager_eventGetProgressStateList_Parms*)Obj)->_targetNotCompleteState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetNotCompleteState = { "_targetNotCompleteState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventGetProgressStateList_Parms), &Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetNotCompleteState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeCompleteState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetProgressStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp__targetNotCompleteState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetProgressStateList", nullptr, nullptr, sizeof(ELChallengeManager_eventGetProgressStateList_Parms), Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetProgressStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetProgressStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics
	{
		struct ELChallengeManager_eventGetRemainingTime_Parms
		{
			EChallengePeriodType _targetPeriodType;
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetPeriodType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetPeriodType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp__targetPeriodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp__targetPeriodType = { "_targetPeriodType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetRemainingTime_Parms, _targetPeriodType), Z_Construct_UEnum_ABP_200508_EChallengePeriodType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventGetRemainingTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp__targetPeriodType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp__targetPeriodType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "GetRemainingTime", nullptr, nullptr, sizeof(ELChallengeManager_eventGetRemainingTime_Parms), Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_GetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_GetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics
	{
		struct ELChallengeManager_eventIsChangedDailyChallenges_Parms
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
	void Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChallengeManager_eventIsChangedDailyChallenges_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventIsChangedDailyChallenges_Parms), &Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "IsChangedDailyChallenges", nullptr, nullptr, sizeof(ELChallengeManager_eventIsChangedDailyChallenges_Parms), Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics
	{
		struct ELChallengeManager_eventIsChangedWeeklyChallenges_Parms
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
	void Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChallengeManager_eventIsChangedWeeklyChallenges_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventIsChangedWeeklyChallenges_Parms), &Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "IsChangedWeeklyChallenges", nullptr, nullptr, sizeof(ELChallengeManager_eventIsChangedWeeklyChallenges_Parms), Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics
	{
		struct ELChallengeManager_eventIsIncludedUnavailableDlcWrestler_Parms
		{
			EWrestlerID_N TargetID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_TargetID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventIsIncludedUnavailableDlcWrestler_Parms, TargetID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELChallengeManager_eventIsIncludedUnavailableDlcWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventIsIncludedUnavailableDlcWrestler_Parms), &Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_TargetID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_TargetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "IsIncludedUnavailableDlcWrestler", nullptr, nullptr, sizeof(ELChallengeManager_eventIsIncludedUnavailableDlcWrestler_Parms), Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics
	{
		struct ELChallengeManager_eventOnUpdateBattlePassPoint_Parms
		{
			bool _Successed;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELChallengeManager_eventOnUpdateBattlePassPoint_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventOnUpdateBattlePassPoint_Parms), &Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::NewProp__Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "OnUpdateBattlePassPoint", nullptr, nullptr, sizeof(ELChallengeManager_eventOnUpdateBattlePassPoint_Parms), Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "RestartChallengeRecordMonitor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics
	{
		struct ELChallengeManager_eventSetBlockPopupFlag_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELChallengeManager_eventSetBlockPopupFlag_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeManager_eventSetBlockPopupFlag_Parms), &Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "SetBlockPopupFlag", nullptr, nullptr, sizeof(ELChallengeManager_eventSetBlockPopupFlag_Parms), Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics
	{
		struct ELChallengeManager_eventSetupChallengeParamDataTable_Parms
		{
			TSoftObjectPtr<UDataTable> _achievementParamDT;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__achievementParamDT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::NewProp__achievementParamDT = { "_achievementParamDT", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeManager_eventSetupChallengeParamDataTable_Parms, _achievementParamDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::NewProp__achievementParamDT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "SetupChallengeParamDataTable", nullptr, nullptr, sizeof(ELChallengeManager_eventSetupChallengeParamDataTable_Parms), Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "StartChallengeRecordMonitor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeManager, nullptr, "StopChallengeRecordMonitor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELChallengeManager_NoRegister()
	{
		return UELChallengeManager::StaticClass();
	}
	struct Z_Construct_UClass_UELChallengeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedChallengeListDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangedChallengeListDelegate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengeAchievementParamMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ChallengeAchievementParamMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeAchievementParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ChallengeAchievementParamMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengePogressChangedInfoList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengePogressChangedInfoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ChallengePogressChangedInfoList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengeRecordDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeRecordDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ChallengeRecordDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OnlyNormalChallengeRecordData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_OnlyNormalChallengeRecordData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeProgressData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengeProgressData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnavailableDlcWrestlerIdSets_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnavailableDlcWrestlerIdSets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailableDlcWrestlerIdSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UnavailableDlcWrestlerIdSets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pPlayerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELChallengeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELChallengeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELChallengeManager_AcquiredChallengeReward, "AcquiredChallengeReward" }, // 1323264635
		{ &Z_Construct_UFunction_UELChallengeManager_CheckChallengeExpirationDate, "CheckChallengeExpirationDate" }, // 1444034080
		{ &Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeDailyChallenges, "ConfirmedChangeDailyChallenges" }, // 2248421643
		{ &Z_Construct_UFunction_UELChallengeManager_ConfirmedChangeWeeklyChallenges, "ConfirmedChangeWeeklyChallenges" }, // 215524349
		{ &Z_Construct_UFunction_UELChallengeManager_CreatePlayerData, "CreatePlayerData" }, // 1779889978
		{ &Z_Construct_UFunction_UELChallengeManager_Debug_ForceChangingChallengeList, "Debug_ForceChangingChallengeList" }, // 147395232
		{ &Z_Construct_UFunction_UELChallengeManager_DisposeSaveData, "DisposeSaveData" }, // 2359808920
		{ &Z_Construct_UFunction_UELChallengeManager_GetBlockPopupFlag, "GetBlockPopupFlag" }, // 458584471
		{ &Z_Construct_UFunction_UELChallengeManager_GetChallengeParameterFromId, "GetChallengeParameterFromId" }, // 267509519
		{ &Z_Construct_UFunction_UELChallengeManager_GetChangedChallengeInfo, "GetChangedChallengeInfo" }, // 572085433
		{ &Z_Construct_UFunction_UELChallengeManager_GetPlayedMatchCountNumFromDailyChallenge, "GetPlayedMatchCountNumFromDailyChallenge" }, // 1011898014
		{ &Z_Construct_UFunction_UELChallengeManager_GetProgressDetailInfoFromID, "GetProgressDetailInfoFromID" }, // 895170430
		{ &Z_Construct_UFunction_UELChallengeManager_GetProgressStateList, "GetProgressStateList" }, // 713137357
		{ &Z_Construct_UFunction_UELChallengeManager_GetRemainingTime, "GetRemainingTime" }, // 1908719850
		{ &Z_Construct_UFunction_UELChallengeManager_IsChangedDailyChallenges, "IsChangedDailyChallenges" }, // 1467883408
		{ &Z_Construct_UFunction_UELChallengeManager_IsChangedWeeklyChallenges, "IsChangedWeeklyChallenges" }, // 909360458
		{ &Z_Construct_UFunction_UELChallengeManager_IsIncludedUnavailableDlcWrestler, "IsIncludedUnavailableDlcWrestler" }, // 2328678887
		{ &Z_Construct_UFunction_UELChallengeManager_OnUpdateBattlePassPoint, "OnUpdateBattlePassPoint" }, // 2409979302
		{ &Z_Construct_UFunction_UELChallengeManager_RestartChallengeRecordMonitor, "RestartChallengeRecordMonitor" }, // 1526959973
		{ &Z_Construct_UFunction_UELChallengeManager_SetBlockPopupFlag, "SetBlockPopupFlag" }, // 2961173903
		{ &Z_Construct_UFunction_UELChallengeManager_SetupChallengeParamDataTable, "SetupChallengeParamDataTable" }, // 1848907045
		{ &Z_Construct_UFunction_UELChallengeManager_StartChallengeRecordMonitor, "StartChallengeRecordMonitor" }, // 1240364250
		{ &Z_Construct_UFunction_UELChallengeManager_StopChallengeRecordMonitor, "StopChallengeRecordMonitor" }, // 719015076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELChallengeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_ChangedChallengeListDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_ChangedChallengeListDelegate = { "ChangedChallengeListDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, ChangedChallengeListDelegate), Z_Construct_UDelegateFunction_ABP_200508_ChangedChallengeList__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_ChangedChallengeListDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_ChangedChallengeListDelegate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_ValueProp = { "m_ChallengeAchievementParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChallengeAchievementParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_Key_KeyProp = { "m_ChallengeAchievementParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap = { "m_ChallengeAchievementParamMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_ChallengeAchievementParamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList_Inner = { "m_ChallengePogressChangedInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList = { "m_ChallengePogressChangedInfoList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_ChallengePogressChangedInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList_Inner = { "m_ChallengeRecordDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList = { "m_ChallengeRecordDataList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_ChallengeRecordDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_OnlyNormalChallengeRecordData = { "m_OnlyNormalChallengeRecordData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_OnlyNormalChallengeRecordData), Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeProgressData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeProgressData = { "m_ChallengeProgressData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_ChallengeProgressData), Z_Construct_UScriptStruct_FChallengeProgressSaveData, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeProgressData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeProgressData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_ElementProp = { "UnavailableDlcWrestlerIdSets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets = { "UnavailableDlcWrestlerIdSets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, UnavailableDlcWrestlerIdSets), METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_pPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELChallengeManager" },
		{ "ModuleRelativePath", "Public/ELChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_pPlayerData = { "m_pPlayerData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELChallengeManager, m_pPlayerData), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_pPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_pPlayerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELChallengeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_ChangedChallengeListDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeAchievementParamMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengePogressChangedInfoList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeRecordDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_OnlyNormalChallengeRecordData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_ChallengeProgressData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_UnavailableDlcWrestlerIdSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELChallengeManager_Statics::NewProp_m_pPlayerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELChallengeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELChallengeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELChallengeManager_Statics::ClassParams = {
		&UELChallengeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELChallengeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELChallengeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELChallengeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELChallengeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELChallengeManager, 1617462421);
	template<> ABP_200508_API UClass* StaticClass<UELChallengeManager>()
	{
		return UELChallengeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELChallengeManager(Z_Construct_UClass_UELChallengeManager, &UELChallengeManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELChallengeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELChallengeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
