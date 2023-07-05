// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBattlePassManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBattlePassManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CheckedValidPersonalDataDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CheckedValidSeasonDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CompletedEarnRewardsUpDelegate__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPersonalData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardItemParam();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBattlePassRankMatchType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_UpdatedBattlePassRankMatchRecordDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_UpdatedBattlePassPointDelegate__DelegateSignature();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUpdateBattlePassPointType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassLevelProgressParam();
// End Cross Module References
	DEFINE_FUNCTION(UELBattlePassManager::execCheckValidPersonalData)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckValidPersonalData(FCheckedValidPersonalDataDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execCheckValidSeason)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckValidSeason(FCheckedValidSeasonDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execEarnRewardsUpToSpecifiedLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetFreePassLv);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetPremiumPassLv);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCompleteDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EarnRewardsUpToSpecifiedLevel(Z_Param__targetFreePassLv,Z_Param__targetPremiumPassLv,FCompletedEarnRewardsUpDelegate(Z_Param_OnCompleteDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetAccumulationBattlePassPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAccumulationBattlePassPoint(Z_Param__targetLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetAddPointBoostRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAddPointBoostRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetBattlePassLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__totalPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBattlePassLevel(Z_Param__totalPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetBattlePassMaxLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBattlePassMaxLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetCurrentBattlePassLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentBattlePassLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetEarnedRewardState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEarnedRewardState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetNextBattePassLevelRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNextBattePassLevelRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetNextBattlePassLevelRateFromTotalPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__totalPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNextBattlePassLevelRateFromTotalPoint(Z_Param__totalPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetPersonalData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBattlePassPersonalData*)Z_Param__Result=P_THIS->GetPersonalData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetRewardItemParamFromLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetLevel);
		P_GET_TARRAY_REF(FBattlePassRewardItemParam,Z_Param_Out__resultList);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRewardItemParamFromLevel(Z_Param__targetLevel,Z_Param_Out__resultList,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execGetRewardItemParamList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBattlePassRewardItemParam>*)Z_Param__Result=P_THIS->GetRewardItemParamList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execIsPossessedPremiumPass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossessedPremiumPass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execIsRegistedUnlockableItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__checkItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegistedUnlockableItem(Z_Param__checkItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execOnDownloadGoldCoin)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_GET_PROPERTY(FIntProperty,Z_Param_GoldCoinNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadGoldCoin(Z_Param_Successed,Z_Param_GoldCoinNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execOnUnlockableItemPurchased)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockableItemPurchased(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execOnUploadGoldCoin)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUploadGoldCoin(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execOnYGS2Response_PersonalData)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param__errorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param__requestBaseInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_PersonalData(EYGS2ErrorType(Z_Param__errorType),Z_Param__requestBaseInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execOnYGS2Response_RankMatchRecord)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param__errorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param__requestBaseInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_RankMatchRecord(EYGS2ErrorType(Z_Param__errorType),Z_Param__requestBaseInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execRequestUpdateOnlineMatchResult)
	{
		P_GET_ENUM(EBattlePassRankMatchType,Z_Param__MatchType);
		P_GET_PROPERTY(FIntProperty,Z_Param__addWinCount);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__updateDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestUpdateOnlineMatchResult(EBattlePassRankMatchType(Z_Param__MatchType),Z_Param__addWinCount,FUpdatedBattlePassRankMatchRecordDelegate(Z_Param__updateDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execSetAddPointBoostRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAddPointBoostRate(Z_Param__rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execSetupBattlePassDataTable)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param__rewardItemDT);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param__levelProgressDT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBattlePassDataTable(Z_Param__rewardItemDT,Z_Param__levelProgressDT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execUpdateBattlePassPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__addPoint);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUpdatedDelegate);
		P_GET_ENUM(EUpdateBattlePassPointType,Z_Param__updateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBattlePassPoint(Z_Param__addPoint,FUpdatedBattlePassPointDelegate(Z_Param_OnUpdatedDelegate),EUpdateBattlePassPointType(Z_Param__updateType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execUpdateEarnedRewardState)
	{
		P_GET_UBOOL(Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEarnedRewardState(Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassManager::execUpdatePossessedPremiumPass)
	{
		P_GET_UBOOL(Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePossessedPremiumPass(Z_Param__state);
		P_NATIVE_END;
	}
	void UELBattlePassManager::StaticRegisterNativesUELBattlePassManager()
	{
		UClass* Class = UELBattlePassManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckValidPersonalData", &UELBattlePassManager::execCheckValidPersonalData },
			{ "CheckValidSeason", &UELBattlePassManager::execCheckValidSeason },
			{ "EarnRewardsUpToSpecifiedLevel", &UELBattlePassManager::execEarnRewardsUpToSpecifiedLevel },
			{ "GetAccumulationBattlePassPoint", &UELBattlePassManager::execGetAccumulationBattlePassPoint },
			{ "GetAddPointBoostRate", &UELBattlePassManager::execGetAddPointBoostRate },
			{ "GetBattlePassLevel", &UELBattlePassManager::execGetBattlePassLevel },
			{ "GetBattlePassMaxLevel", &UELBattlePassManager::execGetBattlePassMaxLevel },
			{ "GetCurrentBattlePassLevel", &UELBattlePassManager::execGetCurrentBattlePassLevel },
			{ "GetEarnedRewardState", &UELBattlePassManager::execGetEarnedRewardState },
			{ "GetNextBattePassLevelRate", &UELBattlePassManager::execGetNextBattePassLevelRate },
			{ "GetNextBattlePassLevelRateFromTotalPoint", &UELBattlePassManager::execGetNextBattlePassLevelRateFromTotalPoint },
			{ "GetPersonalData", &UELBattlePassManager::execGetPersonalData },
			{ "GetRewardItemParamFromLevel", &UELBattlePassManager::execGetRewardItemParamFromLevel },
			{ "GetRewardItemParamList", &UELBattlePassManager::execGetRewardItemParamList },
			{ "IsPossessedPremiumPass", &UELBattlePassManager::execIsPossessedPremiumPass },
			{ "IsRegistedUnlockableItem", &UELBattlePassManager::execIsRegistedUnlockableItem },
			{ "OnDownloadGoldCoin", &UELBattlePassManager::execOnDownloadGoldCoin },
			{ "OnUnlockableItemPurchased", &UELBattlePassManager::execOnUnlockableItemPurchased },
			{ "OnUploadGoldCoin", &UELBattlePassManager::execOnUploadGoldCoin },
			{ "OnYGS2Response_PersonalData", &UELBattlePassManager::execOnYGS2Response_PersonalData },
			{ "OnYGS2Response_RankMatchRecord", &UELBattlePassManager::execOnYGS2Response_RankMatchRecord },
			{ "RequestUpdateOnlineMatchResult", &UELBattlePassManager::execRequestUpdateOnlineMatchResult },
			{ "SetAddPointBoostRate", &UELBattlePassManager::execSetAddPointBoostRate },
			{ "SetupBattlePassDataTable", &UELBattlePassManager::execSetupBattlePassDataTable },
			{ "UpdateBattlePassPoint", &UELBattlePassManager::execUpdateBattlePassPoint },
			{ "UpdateEarnedRewardState", &UELBattlePassManager::execUpdateEarnedRewardState },
			{ "UpdatePossessedPremiumPass", &UELBattlePassManager::execUpdatePossessedPremiumPass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics
	{
		struct ELBattlePassManager_eventCheckValidPersonalData_Parms
		{
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventCheckValidPersonalData_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_CheckedValidPersonalDataDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "CheckValidPersonalData", nullptr, nullptr, sizeof(ELBattlePassManager_eventCheckValidPersonalData_Parms), Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics
	{
		struct ELBattlePassManager_eventCheckValidSeason_Parms
		{
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventCheckValidSeason_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_CheckedValidSeasonDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "CheckValidSeason", nullptr, nullptr, sizeof(ELBattlePassManager_eventCheckValidSeason_Parms), Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics
	{
		struct ELBattlePassManager_eventEarnRewardsUpToSpecifiedLevel_Parms
		{
			int32 _targetFreePassLv;
			int32 _targetPremiumPassLv;
			FScriptDelegate OnCompleteDelegate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetFreePassLv;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetPremiumPassLv;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp__targetFreePassLv = { "_targetFreePassLv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventEarnRewardsUpToSpecifiedLevel_Parms, _targetFreePassLv), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp__targetPremiumPassLv = { "_targetPremiumPassLv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventEarnRewardsUpToSpecifiedLevel_Parms, _targetPremiumPassLv), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp_OnCompleteDelegate = { "OnCompleteDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventEarnRewardsUpToSpecifiedLevel_Parms, OnCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_CompletedEarnRewardsUpDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp__targetFreePassLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp__targetPremiumPassLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::NewProp_OnCompleteDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "EarnRewardsUpToSpecifiedLevel", nullptr, nullptr, sizeof(ELBattlePassManager_eventEarnRewardsUpToSpecifiedLevel_Parms), Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics
	{
		struct ELBattlePassManager_eventGetAccumulationBattlePassPoint_Parms
		{
			int32 _targetLevel;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::NewProp__targetLevel = { "_targetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetAccumulationBattlePassPoint_Parms, _targetLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetAccumulationBattlePassPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::NewProp__targetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetAccumulationBattlePassPoint", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetAccumulationBattlePassPoint_Parms), Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics
	{
		struct ELBattlePassManager_eventGetAddPointBoostRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetAddPointBoostRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetAddPointBoostRate", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetAddPointBoostRate_Parms), Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics
	{
		struct ELBattlePassManager_eventGetBattlePassLevel_Parms
		{
			int32 _totalPoints;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__totalPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::NewProp__totalPoints = { "_totalPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetBattlePassLevel_Parms, _totalPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetBattlePassLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::NewProp__totalPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetBattlePassLevel", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetBattlePassLevel_Parms), Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics
	{
		struct ELBattlePassManager_eventGetBattlePassMaxLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetBattlePassMaxLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetBattlePassMaxLevel", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetBattlePassMaxLevel_Parms), Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics
	{
		struct ELBattlePassManager_eventGetCurrentBattlePassLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetCurrentBattlePassLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetCurrentBattlePassLevel", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetCurrentBattlePassLevel_Parms), Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics
	{
		struct ELBattlePassManager_eventGetEarnedRewardState_Parms
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
	void Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventGetEarnedRewardState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventGetEarnedRewardState_Parms), &Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetEarnedRewardState", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetEarnedRewardState_Parms), Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics
	{
		struct ELBattlePassManager_eventGetNextBattePassLevelRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetNextBattePassLevelRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetNextBattePassLevelRate", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetNextBattePassLevelRate_Parms), Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics
	{
		struct ELBattlePassManager_eventGetNextBattlePassLevelRateFromTotalPoint_Parms
		{
			int32 _totalPoint;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__totalPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::NewProp__totalPoint = { "_totalPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetNextBattlePassLevelRateFromTotalPoint_Parms, _totalPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetNextBattlePassLevelRateFromTotalPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::NewProp__totalPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetNextBattlePassLevelRateFromTotalPoint", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetNextBattlePassLevelRateFromTotalPoint_Parms), Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics
	{
		struct ELBattlePassManager_eventGetPersonalData_Parms
		{
			FBattlePassPersonalData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetPersonalData_Parms, ReturnValue), Z_Construct_UScriptStruct_FBattlePassPersonalData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetPersonalData", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetPersonalData_Parms), Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetPersonalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetPersonalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics
	{
		struct ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms
		{
			int32 _targetLevel;
			TArray<FBattlePassRewardItemParam> _resultList;
			bool _findParam;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetLevel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__resultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__resultList;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__targetLevel = { "_targetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms, _targetLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__resultList_Inner = { "_resultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__resultList = { "_resultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms, _resultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms), &Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__targetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__resultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__resultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::NewProp__findParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetRewardItemParamFromLevel", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetRewardItemParamFromLevel_Parms), Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics
	{
		struct ELBattlePassManager_eventGetRewardItemParamList_Parms
		{
			TArray<FBattlePassRewardItemParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventGetRewardItemParamList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "GetRewardItemParamList", nullptr, nullptr, sizeof(ELBattlePassManager_eventGetRewardItemParamList_Parms), Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics
	{
		struct ELBattlePassManager_eventIsPossessedPremiumPass_Parms
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
	void Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventIsPossessedPremiumPass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventIsPossessedPremiumPass_Parms), &Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "IsPossessedPremiumPass", nullptr, nullptr, sizeof(ELBattlePassManager_eventIsPossessedPremiumPass_Parms), Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics
	{
		struct ELBattlePassManager_eventIsRegistedUnlockableItem_Parms
		{
			int32 _checkItemID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__checkItemID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp__checkItemID = { "_checkItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventIsRegistedUnlockableItem_Parms, _checkItemID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventIsRegistedUnlockableItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventIsRegistedUnlockableItem_Parms), &Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp__checkItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "IsRegistedUnlockableItem", nullptr, nullptr, sizeof(ELBattlePassManager_eventIsRegistedUnlockableItem_Parms), Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics
	{
		struct ELBattlePassManager_eventOnDownloadGoldCoin_Parms
		{
			bool Successed;
			int32 GoldCoinNum;
		};
		static void NewProp_Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GoldCoinNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventOnDownloadGoldCoin_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventOnDownloadGoldCoin_Parms), &Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_GoldCoinNum = { "GoldCoinNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventOnDownloadGoldCoin_Parms, GoldCoinNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::NewProp_GoldCoinNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "OnDownloadGoldCoin", nullptr, nullptr, sizeof(ELBattlePassManager_eventOnDownloadGoldCoin_Parms), Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics
	{
		struct ELBattlePassManager_eventOnUnlockableItemPurchased_Parms
		{
			bool Successed;
		};
		static void NewProp_Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventOnUnlockableItemPurchased_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventOnUnlockableItemPurchased_Parms), &Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "OnUnlockableItemPurchased", nullptr, nullptr, sizeof(ELBattlePassManager_eventOnUnlockableItemPurchased_Parms), Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics
	{
		struct ELBattlePassManager_eventOnUploadGoldCoin_Parms
		{
			bool Successed;
		};
		static void NewProp_Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventOnUploadGoldCoin_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventOnUploadGoldCoin_Parms), &Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "OnUploadGoldCoin", nullptr, nullptr, sizeof(ELBattlePassManager_eventOnUploadGoldCoin_Parms), Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics
	{
		struct ELBattlePassManager_eventOnYGS2Response_PersonalData_Parms
		{
			EYGS2ErrorType _errorType;
			UYGS2RequestBase* _requestBaseInstance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__errorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__errorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requestBaseInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__errorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__errorType = { "_errorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventOnYGS2Response_PersonalData_Parms, _errorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__requestBaseInstance = { "_requestBaseInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventOnYGS2Response_PersonalData_Parms, _requestBaseInstance), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__errorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__errorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::NewProp__requestBaseInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "OnYGS2Response_PersonalData", nullptr, nullptr, sizeof(ELBattlePassManager_eventOnYGS2Response_PersonalData_Parms), Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics
	{
		struct ELBattlePassManager_eventOnYGS2Response_RankMatchRecord_Parms
		{
			EYGS2ErrorType _errorType;
			UYGS2RequestBase* _requestBaseInstance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__errorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__errorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__requestBaseInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__errorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__errorType = { "_errorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventOnYGS2Response_RankMatchRecord_Parms, _errorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__requestBaseInstance = { "_requestBaseInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventOnYGS2Response_RankMatchRecord_Parms, _requestBaseInstance), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__errorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__errorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::NewProp__requestBaseInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "OnYGS2Response_RankMatchRecord", nullptr, nullptr, sizeof(ELBattlePassManager_eventOnYGS2Response_RankMatchRecord_Parms), Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics
	{
		struct ELBattlePassManager_eventRequestUpdateOnlineMatchResult_Parms
		{
			EBattlePassRankMatchType _MatchType;
			int32 _addWinCount;
			FScriptDelegate _updateDelegate;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__MatchType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addWinCount;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__updateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__MatchType = { "_MatchType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventRequestUpdateOnlineMatchResult_Parms, _MatchType), Z_Construct_UEnum_ABP_200508_EBattlePassRankMatchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__addWinCount = { "_addWinCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventRequestUpdateOnlineMatchResult_Parms, _addWinCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__updateDelegate = { "_updateDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventRequestUpdateOnlineMatchResult_Parms, _updateDelegate), Z_Construct_UDelegateFunction_ABP_200508_UpdatedBattlePassRankMatchRecordDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__addWinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::NewProp__updateDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "RequestUpdateOnlineMatchResult", nullptr, nullptr, sizeof(ELBattlePassManager_eventRequestUpdateOnlineMatchResult_Parms), Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics
	{
		struct ELBattlePassManager_eventSetAddPointBoostRate_Parms
		{
			float _rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::NewProp__rate = { "_rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventSetAddPointBoostRate_Parms, _rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::NewProp__rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "SetAddPointBoostRate", nullptr, nullptr, sizeof(ELBattlePassManager_eventSetAddPointBoostRate_Parms), Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics
	{
		struct ELBattlePassManager_eventSetupBattlePassDataTable_Parms
		{
			TSoftObjectPtr<UDataTable> _rewardItemDT;
			TSoftObjectPtr<UDataTable> _levelProgressDT;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__rewardItemDT;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__levelProgressDT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::NewProp__rewardItemDT = { "_rewardItemDT", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventSetupBattlePassDataTable_Parms, _rewardItemDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::NewProp__levelProgressDT = { "_levelProgressDT", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventSetupBattlePassDataTable_Parms, _levelProgressDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::NewProp__rewardItemDT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::NewProp__levelProgressDT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "SetupBattlePassDataTable", nullptr, nullptr, sizeof(ELBattlePassManager_eventSetupBattlePassDataTable_Parms), Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics
	{
		struct ELBattlePassManager_eventUpdateBattlePassPoint_Parms
		{
			int32 _addPoint;
			FScriptDelegate OnUpdatedDelegate;
			EUpdateBattlePassPointType _updateType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addPoint;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUpdatedDelegate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__updateType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__updateType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__addPoint = { "_addPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventUpdateBattlePassPoint_Parms, _addPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp_OnUpdatedDelegate = { "OnUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventUpdateBattlePassPoint_Parms, OnUpdatedDelegate), Z_Construct_UDelegateFunction_ABP_200508_UpdatedBattlePassPointDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__updateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__updateType = { "_updateType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassManager_eventUpdateBattlePassPoint_Parms, _updateType), Z_Construct_UEnum_ABP_200508_EUpdateBattlePassPointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__addPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp_OnUpdatedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__updateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::NewProp__updateType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "UpdateBattlePassPoint", nullptr, nullptr, sizeof(ELBattlePassManager_eventUpdateBattlePassPoint_Parms), Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics
	{
		struct ELBattlePassManager_eventUpdateEarnedRewardState_Parms
		{
			bool _state;
		};
		static void NewProp__state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::NewProp__state_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventUpdateEarnedRewardState_Parms*)Obj)->_state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventUpdateEarnedRewardState_Parms), &Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::NewProp__state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "UpdateEarnedRewardState", nullptr, nullptr, sizeof(ELBattlePassManager_eventUpdateEarnedRewardState_Parms), Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics
	{
		struct ELBattlePassManager_eventUpdatePossessedPremiumPass_Parms
		{
			bool _state;
		};
		static void NewProp__state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::NewProp__state_SetBit(void* Obj)
	{
		((ELBattlePassManager_eventUpdatePossessedPremiumPass_Parms*)Obj)->_state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassManager_eventUpdatePossessedPremiumPass_Parms), &Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::NewProp__state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassManager, nullptr, "UpdatePossessedPremiumPass", nullptr, nullptr, sizeof(ELBattlePassManager_eventUpdatePossessedPremiumPass_Parms), Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBattlePassManager_NoRegister()
	{
		return UELBattlePassManager::StaticClass();
	}
	struct Z_Construct_UClass_UELBattlePassManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_RewardItemParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RewardItemParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_RewardItemParamList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_LevelProgressParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LevelProgressParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_LevelProgressParamList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_RegistedUnlockableItemMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_RegistedUnlockableItemMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RegistedUnlockableItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_RegistedUnlockableItemMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBattlePassManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBattlePassManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBattlePassManager_CheckValidPersonalData, "CheckValidPersonalData" }, // 2056271050
		{ &Z_Construct_UFunction_UELBattlePassManager_CheckValidSeason, "CheckValidSeason" }, // 3149470254
		{ &Z_Construct_UFunction_UELBattlePassManager_EarnRewardsUpToSpecifiedLevel, "EarnRewardsUpToSpecifiedLevel" }, // 198327477
		{ &Z_Construct_UFunction_UELBattlePassManager_GetAccumulationBattlePassPoint, "GetAccumulationBattlePassPoint" }, // 4242493890
		{ &Z_Construct_UFunction_UELBattlePassManager_GetAddPointBoostRate, "GetAddPointBoostRate" }, // 1246737599
		{ &Z_Construct_UFunction_UELBattlePassManager_GetBattlePassLevel, "GetBattlePassLevel" }, // 1618185144
		{ &Z_Construct_UFunction_UELBattlePassManager_GetBattlePassMaxLevel, "GetBattlePassMaxLevel" }, // 3075310235
		{ &Z_Construct_UFunction_UELBattlePassManager_GetCurrentBattlePassLevel, "GetCurrentBattlePassLevel" }, // 105377277
		{ &Z_Construct_UFunction_UELBattlePassManager_GetEarnedRewardState, "GetEarnedRewardState" }, // 1504527022
		{ &Z_Construct_UFunction_UELBattlePassManager_GetNextBattePassLevelRate, "GetNextBattePassLevelRate" }, // 895303721
		{ &Z_Construct_UFunction_UELBattlePassManager_GetNextBattlePassLevelRateFromTotalPoint, "GetNextBattlePassLevelRateFromTotalPoint" }, // 3369828200
		{ &Z_Construct_UFunction_UELBattlePassManager_GetPersonalData, "GetPersonalData" }, // 2850795832
		{ &Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamFromLevel, "GetRewardItemParamFromLevel" }, // 690605765
		{ &Z_Construct_UFunction_UELBattlePassManager_GetRewardItemParamList, "GetRewardItemParamList" }, // 715287493
		{ &Z_Construct_UFunction_UELBattlePassManager_IsPossessedPremiumPass, "IsPossessedPremiumPass" }, // 749916746
		{ &Z_Construct_UFunction_UELBattlePassManager_IsRegistedUnlockableItem, "IsRegistedUnlockableItem" }, // 2959679661
		{ &Z_Construct_UFunction_UELBattlePassManager_OnDownloadGoldCoin, "OnDownloadGoldCoin" }, // 4208588110
		{ &Z_Construct_UFunction_UELBattlePassManager_OnUnlockableItemPurchased, "OnUnlockableItemPurchased" }, // 350532742
		{ &Z_Construct_UFunction_UELBattlePassManager_OnUploadGoldCoin, "OnUploadGoldCoin" }, // 2379526276
		{ &Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_PersonalData, "OnYGS2Response_PersonalData" }, // 888789809
		{ &Z_Construct_UFunction_UELBattlePassManager_OnYGS2Response_RankMatchRecord, "OnYGS2Response_RankMatchRecord" }, // 1619577160
		{ &Z_Construct_UFunction_UELBattlePassManager_RequestUpdateOnlineMatchResult, "RequestUpdateOnlineMatchResult" }, // 1760657205
		{ &Z_Construct_UFunction_UELBattlePassManager_SetAddPointBoostRate, "SetAddPointBoostRate" }, // 2759286462
		{ &Z_Construct_UFunction_UELBattlePassManager_SetupBattlePassDataTable, "SetupBattlePassDataTable" }, // 1100692453
		{ &Z_Construct_UFunction_UELBattlePassManager_UpdateBattlePassPoint, "UpdateBattlePassPoint" }, // 1315867547
		{ &Z_Construct_UFunction_UELBattlePassManager_UpdateEarnedRewardState, "UpdateEarnedRewardState" }, // 3765170132
		{ &Z_Construct_UFunction_UELBattlePassManager_UpdatePossessedPremiumPass, "UpdatePossessedPremiumPass" }, // 960691152
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBattlePassManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList_Inner = { "m_RewardItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBattlePassManager" },
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList = { "m_RewardItemParamList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBattlePassManager, m_RewardItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList_Inner = { "m_LevelProgressParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassLevelProgressParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBattlePassManager" },
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList = { "m_LevelProgressParamList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBattlePassManager, m_LevelProgressParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_ValueProp = { "m_RegistedUnlockableItemMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBattlePassRewardItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_Key_KeyProp = { "m_RegistedUnlockableItemMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBattlePassManager" },
		{ "ModuleRelativePath", "Public/ELBattlePassManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap = { "m_RegistedUnlockableItemMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBattlePassManager, m_RegistedUnlockableItemMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELBattlePassManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RewardItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_LevelProgressParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBattlePassManager_Statics::NewProp_m_RegistedUnlockableItemMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBattlePassManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBattlePassManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBattlePassManager_Statics::ClassParams = {
		&UELBattlePassManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELBattlePassManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELBattlePassManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBattlePassManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBattlePassManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBattlePassManager, 2791726408);
	template<> ABP_200508_API UClass* StaticClass<UELBattlePassManager>()
	{
		return UELBattlePassManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBattlePassManager(Z_Construct_UClass_UELBattlePassManager, &UELBattlePassManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELBattlePassManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBattlePassManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
