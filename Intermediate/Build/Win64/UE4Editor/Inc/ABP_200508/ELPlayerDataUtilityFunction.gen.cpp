// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerDataUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerDataUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerDataUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerDataUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAddPossessItemQuantity();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingItemInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderHistory_BP();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
// End Cross Module References
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execAddCrateTicketNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__addValue);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::AddCrateTicketNum(Z_Param__addValue,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execAddPossessedItemQuantity)
	{
		P_GET_TARRAY(FAddPossessItemQuantity,Z_Param__updateDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::AddPossessedItemQuantity(Z_Param__updateDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execAllUpdatePossessedItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__updateDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::AllUpdatePossessedItemSaveData(Z_Param_Out__updateDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execAllUpdateUnlockItemSaveData)
	{
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__updateParamList);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::AllUpdateUnlockItemSaveData(Z_Param_Out__updateParamList,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execApplyDefaultToPlayerData)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USaveDataObjectBase,Z_Param__saveDataObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::ApplyDefaultToPlayerData(Z_Param__pWorldContextObject,Z_Param__saveDataObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execApplyKeyConfig)
	{
		P_GET_OBJECT(APlayerController,Z_Param__targetPlayerContorller);
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::ApplyKeyConfig(Z_Param__targetPlayerContorller,Z_Param__localPlayerNo,Z_Param_IsGamepad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execApplySaveDataToPlayerData)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(USaveDataObject_PlayerData,Z_Param__playerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::ApplySaveDataToPlayerData(Z_Param__pWorldContextObject,Z_Param__playerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execApplySSModeKeyConfig)
	{
		P_GET_OBJECT(APlayerController,Z_Param__targetPlayerContorller);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::ApplySSModeKeyConfig(Z_Param__targetPlayerContorller,Z_Param_IsGamepad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execApplyTmpPlayerDataToSaveData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELPlayerDataUtilityFunction::ApplyTmpPlayerDataToSaveData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execDeleteMatchRecordsInvalidCAW)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::DeleteMatchRecordsInvalidCAW(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execDeleteScoreRankingInvalidCAW)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::DeleteScoreRankingInvalidCAW();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execEntryMatchScoreRanking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_GET_ENUM(EMatchScoreRankingsType,Z_Param__rankingType);
		P_GET_TARRAY(FMatchScoreRankingWrestlerInfo,Z_Param__usedWrestlers);
		P_GET_PROPERTY(FFloatProperty,Z_Param__starNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__optionValue);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::EntryMatchScoreRanking(Z_Param__Score,EMatchScoreRankingsType(Z_Param__rankingType),Z_Param__usedWrestlers,Z_Param__starNum,Z_Param__optionValue,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execEntryMiniGameScoreRanking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_GET_ENUM(EMiniGameID,Z_Param__miniGameType);
		P_GET_TARRAY(FMatchScoreRankingWrestlerInfo,Z_Param__usedWrestlers);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::EntryMiniGameScoreRanking(Z_Param__Score,EMiniGameID(Z_Param__miniGameType),Z_Param__usedWrestlers,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAddEditSlotNum)
	{
		P_GET_ENUM(EPossessedItemExtendTarget,Z_Param__target);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetAddEditSlotNum(EPossessedItemExtendTarget(Z_Param__target),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAddEditSlotNumByWrestlerID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetAddEditSlotNumByWrestlerID(EWrestlerID_N(Z_Param__WrestlerID),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAEWCashNum)
	{
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetAEWCashNum(Z_Param_Out__Successed,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAllMatchScoreRankingItemList)
	{
		P_GET_TARRAY_REF(FMatchScoreRankingItemInfo,Z_Param_Out__outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetAllMatchScoreRankingItemList(Z_Param_Out__outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAllMiniGameScoreRankingItemList)
	{
		P_GET_TARRAY_REF(FMiniGameScoreRankingItemInfo,Z_Param_Out__outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetAllMiniGameScoreRankingItemList(Z_Param_Out__outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAllPossessedItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetAllPossessedItemSaveData(Z_Param_Out__outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetAllUnlockItemSaveData)
	{
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__findItemList);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetAllUnlockItemSaveData(Z_Param_Out__findItemList,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetCareerModePlayerGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out__outGuid);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetCareerModePlayerGUID(Z_Param_Out__outGuid,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetConfirmedEulaVer)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetConfirmedEulaVer(Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetCrateTicketNum)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetCrateTicketNum(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetKeyConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_TARRAY_REF(FKeyMapSettingData,Z_Param_Out__outKeyMapSettingList);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetKeyConfig(Z_Param__localPlayerNo,Z_Param_Out__outKeyMapSettingList,Z_Param_IsGamepad,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetLocalAEWGoldNum)
	{
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELPlayerDataUtilityFunction::GetLocalAEWGoldNum(Z_Param_Out__Successed,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetMatchScoreRankingItemList)
	{
		P_GET_ENUM(EMatchScoreRankingsType,Z_Param__rankingType);
		P_GET_TARRAY_REF(FMatchScoreRankingItemInfo,Z_Param_Out__outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetMatchScoreRankingItemList(EMatchScoreRankingsType(Z_Param__rankingType),Z_Param_Out__outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetMiniGameScoreRankingItemList)
	{
		P_GET_ENUM(EMiniGameID,Z_Param__miniGameType);
		P_GET_TARRAY_REF(FMiniGameScoreRankingItemInfo,Z_Param_Out__outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetMiniGameScoreRankingItemList(EMiniGameID(Z_Param__miniGameType),Z_Param_Out__outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetPossessedItemSaveDataListFromId)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out_outDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetPossessedItemSaveDataListFromId(Z_Param__targetIdList,Z_Param_Out_outDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetSSModeKeyConfigData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_TARRAY_REF(FKeyMapSettingData,Z_Param_Out__outKeyMapSettingList);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_GET_UBOOL(Z_Param_IsSSMode);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetSSModeKeyConfigData(Z_Param__localPlayerNo,Z_Param_Out__outKeyMapSettingList,Z_Param_IsGamepad,Z_Param_IsSSMode,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetTitleHolderHistoryList)
	{
		P_GET_ENUM(EELBelt,Z_Param__targetBelt);
		P_GET_TARRAY_REF(FELTitleHolderHistory_BP,Z_Param_Out__outList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetTitleHolderHistoryList(EELBelt(Z_Param__targetBelt),Z_Param_Out__outList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetUnlockItemSaveData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_GET_STRUCT_REF(FELUnlockItemSaveData,Z_Param_Out__unlockItem);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetUnlockItemSaveData(Z_Param__targetId,Z_Param_Out__findParam,Z_Param_Out__unlockItem,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByCategory)
	{
		P_GET_ENUM(EUnlockItemCategory,Z_Param__targetCategory);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__findParam);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByCategory(EUnlockItemCategory(Z_Param__targetCategory),Z_Param_Out__findParam,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByIdList)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__findParam);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByIdList(Z_Param__targetIdList,Z_Param_Out__findParam,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByIdMap)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_GET_TMAP_REF(int32,FELUnlockItemSaveData,Z_Param_Out__findParam);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::GetUnlockItemSaveDataByIdMap(Z_Param__targetIdList,Z_Param_Out__findParam,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSaveRequestKeyConfigDataOnly)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SaveRequestKeyConfigDataOnly(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSaveRequestPlayerData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SaveRequestPlayerData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetAEWCashNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__cashNum);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetAEWCashNum(Z_Param__cashNum,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetCareerModePlayerGUID)
	{
		P_GET_STRUCT(FGuid,Z_Param__guid);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetCareerModePlayerGUID(Z_Param__guid,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetConfirmedEulaVer)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetVer);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetConfirmedEulaVer(Z_Param__pWorldContextObject,Z_Param__targetVer,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetKeyConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_TARRAY(FKeyMapSettingData,Z_Param__keyMapSettingList);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetKeyConfig(Z_Param__localPlayerNo,Z_Param__keyMapSettingList,Z_Param_IsGamepad,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetLocalAEWGoldNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__cashNum);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetLocalAEWGoldNum(Z_Param__cashNum,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execSetSSModeKeyConfigData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_TARRAY(FKeyMapSettingData,Z_Param__keyMapSettingList);
		P_GET_UBOOL(Z_Param_IsGamepad);
		P_GET_UBOOL(Z_Param_IsSSMode);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::SetSSModeKeyConfigData(Z_Param__localPlayerNo,Z_Param__keyMapSettingList,Z_Param_IsGamepad,Z_Param_IsSSMode,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execUpdatePossessedItemSaveDataList)
	{
		P_GET_TARRAY(FPossessedItemSaveData,Z_Param__updateDataList);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::UpdatePossessedItemSaveDataList(Z_Param__updateDataList,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerDataUtilityFunction::execUpdateUnlockItemSaveData)
	{
		P_GET_STRUCT(FELUnlockItemSaveData,Z_Param__updateParam);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPlayerDataUtilityFunction::UpdateUnlockItemSaveData(Z_Param__updateParam,Z_Param__pWorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	void UELPlayerDataUtilityFunction::StaticRegisterNativesUELPlayerDataUtilityFunction()
	{
		UClass* Class = UELPlayerDataUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCrateTicketNum", &UELPlayerDataUtilityFunction::execAddCrateTicketNum },
			{ "AddPossessedItemQuantity", &UELPlayerDataUtilityFunction::execAddPossessedItemQuantity },
			{ "AllUpdatePossessedItemSaveData", &UELPlayerDataUtilityFunction::execAllUpdatePossessedItemSaveData },
			{ "AllUpdateUnlockItemSaveData", &UELPlayerDataUtilityFunction::execAllUpdateUnlockItemSaveData },
			{ "ApplyDefaultToPlayerData", &UELPlayerDataUtilityFunction::execApplyDefaultToPlayerData },
			{ "ApplyKeyConfig", &UELPlayerDataUtilityFunction::execApplyKeyConfig },
			{ "ApplySaveDataToPlayerData", &UELPlayerDataUtilityFunction::execApplySaveDataToPlayerData },
			{ "ApplySSModeKeyConfig", &UELPlayerDataUtilityFunction::execApplySSModeKeyConfig },
			{ "ApplyTmpPlayerDataToSaveData", &UELPlayerDataUtilityFunction::execApplyTmpPlayerDataToSaveData },
			{ "DeleteMatchRecordsInvalidCAW", &UELPlayerDataUtilityFunction::execDeleteMatchRecordsInvalidCAW },
			{ "DeleteScoreRankingInvalidCAW", &UELPlayerDataUtilityFunction::execDeleteScoreRankingInvalidCAW },
			{ "EntryMatchScoreRanking", &UELPlayerDataUtilityFunction::execEntryMatchScoreRanking },
			{ "EntryMiniGameScoreRanking", &UELPlayerDataUtilityFunction::execEntryMiniGameScoreRanking },
			{ "GetAddEditSlotNum", &UELPlayerDataUtilityFunction::execGetAddEditSlotNum },
			{ "GetAddEditSlotNumByWrestlerID", &UELPlayerDataUtilityFunction::execGetAddEditSlotNumByWrestlerID },
			{ "GetAEWCashNum", &UELPlayerDataUtilityFunction::execGetAEWCashNum },
			{ "GetAllMatchScoreRankingItemList", &UELPlayerDataUtilityFunction::execGetAllMatchScoreRankingItemList },
			{ "GetAllMiniGameScoreRankingItemList", &UELPlayerDataUtilityFunction::execGetAllMiniGameScoreRankingItemList },
			{ "GetAllPossessedItemSaveData", &UELPlayerDataUtilityFunction::execGetAllPossessedItemSaveData },
			{ "GetAllUnlockItemSaveData", &UELPlayerDataUtilityFunction::execGetAllUnlockItemSaveData },
			{ "GetCareerModePlayerGUID", &UELPlayerDataUtilityFunction::execGetCareerModePlayerGUID },
			{ "GetConfirmedEulaVer", &UELPlayerDataUtilityFunction::execGetConfirmedEulaVer },
			{ "GetCrateTicketNum", &UELPlayerDataUtilityFunction::execGetCrateTicketNum },
			{ "GetKeyConfig", &UELPlayerDataUtilityFunction::execGetKeyConfig },
			{ "GetLocalAEWGoldNum", &UELPlayerDataUtilityFunction::execGetLocalAEWGoldNum },
			{ "GetMatchScoreRankingItemList", &UELPlayerDataUtilityFunction::execGetMatchScoreRankingItemList },
			{ "GetMiniGameScoreRankingItemList", &UELPlayerDataUtilityFunction::execGetMiniGameScoreRankingItemList },
			{ "GetPossessedItemSaveDataListFromId", &UELPlayerDataUtilityFunction::execGetPossessedItemSaveDataListFromId },
			{ "GetSSModeKeyConfigData", &UELPlayerDataUtilityFunction::execGetSSModeKeyConfigData },
			{ "GetTitleHolderHistoryList", &UELPlayerDataUtilityFunction::execGetTitleHolderHistoryList },
			{ "GetUnlockItemSaveData", &UELPlayerDataUtilityFunction::execGetUnlockItemSaveData },
			{ "GetUnlockItemSaveDataByCategory", &UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByCategory },
			{ "GetUnlockItemSaveDataByIdList", &UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByIdList },
			{ "GetUnlockItemSaveDataByIdMap", &UELPlayerDataUtilityFunction::execGetUnlockItemSaveDataByIdMap },
			{ "SaveRequestKeyConfigDataOnly", &UELPlayerDataUtilityFunction::execSaveRequestKeyConfigDataOnly },
			{ "SaveRequestPlayerData", &UELPlayerDataUtilityFunction::execSaveRequestPlayerData },
			{ "SetAEWCashNum", &UELPlayerDataUtilityFunction::execSetAEWCashNum },
			{ "SetCareerModePlayerGUID", &UELPlayerDataUtilityFunction::execSetCareerModePlayerGUID },
			{ "SetConfirmedEulaVer", &UELPlayerDataUtilityFunction::execSetConfirmedEulaVer },
			{ "SetKeyConfig", &UELPlayerDataUtilityFunction::execSetKeyConfig },
			{ "SetLocalAEWGoldNum", &UELPlayerDataUtilityFunction::execSetLocalAEWGoldNum },
			{ "SetSSModeKeyConfigData", &UELPlayerDataUtilityFunction::execSetSSModeKeyConfigData },
			{ "UpdatePossessedItemSaveDataList", &UELPlayerDataUtilityFunction::execUpdatePossessedItemSaveDataList },
			{ "UpdateUnlockItemSaveData", &UELPlayerDataUtilityFunction::execUpdateUnlockItemSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventAddCrateTicketNum_Parms
		{
			int32 _addValue;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::NewProp__addValue = { "_addValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAddCrateTicketNum_Parms, _addValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAddCrateTicketNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::NewProp__addValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "AddCrateTicketNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventAddCrateTicketNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics
	{
		struct ELPlayerDataUtilityFunction_eventAddPossessedItemQuantity_Parms
		{
			TArray<FAddPossessItemQuantity> _updateDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__updateDataList_Inner = { "_updateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAddPossessItemQuantity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__updateDataList = { "_updateDataList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAddPossessedItemQuantity_Parms, _updateDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAddPossessedItemQuantity_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__updateDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__updateDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "AddPossessedItemQuantity", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventAddPossessedItemQuantity_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventAllUpdatePossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _updateDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__updateDataList_Inner = { "_updateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__updateDataList = { "_updateDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAllUpdatePossessedItemSaveData_Parms, _updateDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAllUpdatePossessedItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__updateDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__updateDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "AllUpdatePossessedItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventAllUpdatePossessedItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventAllUpdateUnlockItemSaveData_Parms
		{
			TArray<FELUnlockItemSaveData> _updateParamList;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateParamList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateParamList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__updateParamList_Inner = { "_updateParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__updateParamList = { "_updateParamList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAllUpdateUnlockItemSaveData_Parms, _updateParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAllUpdateUnlockItemSaveData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventAllUpdateUnlockItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__updateParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__updateParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "AllUpdateUnlockItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventAllUpdateUnlockItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventApplyDefaultToPlayerData_Parms
		{
			UObject* _pWorldContextObject;
			USaveDataObjectBase* _saveDataObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__saveDataObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyDefaultToPlayerData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__saveDataObject = { "_saveDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyDefaultToPlayerData_Parms, _saveDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyDefaultToPlayerData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__saveDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "ApplyDefaultToPlayerData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventApplyDefaultToPlayerData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics
	{
		struct ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms
		{
			APlayerController* _targetPlayerContorller;
			int32 _localPlayerNo;
			bool IsGamepad;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetPlayerContorller;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp__targetPlayerContorller = { "_targetPlayerContorller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms, _targetPlayerContorller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp__targetPlayerContorller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::NewProp_IsGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "ApplyKeyConfig", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventApplyKeyConfig_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventApplySaveDataToPlayerData_Parms
		{
			UObject* _pWorldContextObject;
			USaveDataObject_PlayerData* _playerData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplySaveDataToPlayerData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::NewProp__playerData = { "_playerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplySaveDataToPlayerData_Parms, _playerData), Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::NewProp__playerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "ApplySaveDataToPlayerData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventApplySaveDataToPlayerData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics
	{
		struct ELPlayerDataUtilityFunction_eventApplySSModeKeyConfig_Parms
		{
			APlayerController* _targetPlayerContorller;
			bool IsGamepad;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetPlayerContorller;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp__targetPlayerContorller = { "_targetPlayerContorller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplySSModeKeyConfig_Parms, _targetPlayerContorller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventApplySSModeKeyConfig_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventApplySSModeKeyConfig_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp__targetPlayerContorller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::NewProp_IsGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "ApplySSModeKeyConfig", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventApplySSModeKeyConfig_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventApplyTmpPlayerDataToSaveData_Parms
		{
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventApplyTmpPlayerDataToSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventApplyTmpPlayerDataToSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventApplyTmpPlayerDataToSaveData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "ApplyTmpPlayerDataToSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventApplyTmpPlayerDataToSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics
	{
		struct ELPlayerDataUtilityFunction_eventDeleteMatchRecordsInvalidCAW_Parms
		{
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventDeleteMatchRecordsInvalidCAW_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "DeleteMatchRecordsInvalidCAW", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventDeleteMatchRecordsInvalidCAW_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "DeleteScoreRankingInvalidCAW", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics
	{
		struct ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms
		{
			int32 _Score;
			EMatchScoreRankingsType _rankingType;
			TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers;
			float _starNum;
			int32 _optionValue;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__rankingType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__rankingType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__usedWrestlers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__usedWrestlers;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__starNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__optionValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__rankingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__rankingType = { "_rankingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _rankingType), Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__usedWrestlers_Inner = { "_usedWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__usedWrestlers = { "_usedWrestlers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _usedWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__starNum = { "_starNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _starNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__optionValue = { "_optionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _optionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__rankingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__rankingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__usedWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__usedWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__starNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__optionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "EntryMatchScoreRanking", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventEntryMatchScoreRanking_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics
	{
		struct ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms
		{
			int32 _Score;
			EMiniGameID _miniGameType;
			TArray<FMatchScoreRankingWrestlerInfo> _usedWrestlers;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__miniGameType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__miniGameType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__usedWrestlers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__usedWrestlers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms, _Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__miniGameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__miniGameType = { "_miniGameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms, _miniGameType), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__usedWrestlers_Inner = { "_usedWrestlers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__usedWrestlers = { "_usedWrestlers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms, _usedWrestlers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__miniGameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__miniGameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__usedWrestlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__usedWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "EntryMiniGameScoreRanking", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventEntryMiniGameScoreRanking_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAddEditSlotNum_Parms
		{
			EPossessedItemExtendTarget _target;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__target_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNum_Parms, _target), Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAddEditSlotNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAddEditSlotNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAddEditSlotNumByWrestlerID_Parms
		{
			EWrestlerID_N _WrestlerID;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNumByWrestlerID_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNumByWrestlerID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAddEditSlotNumByWrestlerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAddEditSlotNumByWrestlerID", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAddEditSlotNumByWrestlerID_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms
		{
			bool _Successed;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAEWCashNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAEWCashNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAllMatchScoreRankingItemList_Parms
		{
			TArray<FMatchScoreRankingItemInfo> _outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllMatchScoreRankingItemList_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllMatchScoreRankingItemList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAllMatchScoreRankingItemList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAllMatchScoreRankingItemList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAllMiniGameScoreRankingItemList_Parms
		{
			TArray<FMiniGameScoreRankingItemInfo> _outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllMiniGameScoreRankingItemList_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllMiniGameScoreRankingItemList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAllMiniGameScoreRankingItemList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAllMiniGameScoreRankingItemList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAllPossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllPossessedItemSaveData_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllPossessedItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAllPossessedItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAllPossessedItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetAllUnlockItemSaveData_Parms
		{
			TArray<FELUnlockItemSaveData> _findItemList;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__findItemList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__findItemList_Inner = { "_findItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__findItemList = { "_findItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllUnlockItemSaveData_Parms, _findItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllUnlockItemSaveData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetAllUnlockItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__findItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__findItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetAllUnlockItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetAllUnlockItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetCareerModePlayerGUID_Parms
		{
			FGuid _outGuid;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outGuid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::NewProp__outGuid = { "_outGuid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetCareerModePlayerGUID_Parms, _outGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetCareerModePlayerGUID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::NewProp__outGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetCareerModePlayerGUID", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetCareerModePlayerGUID_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetConfirmedEulaVer_Parms
		{
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetConfirmedEulaVer_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetConfirmedEulaVer_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetConfirmedEulaVer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetConfirmedEulaVer", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetConfirmedEulaVer_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetCrateTicketNum_Parms
		{
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetCrateTicketNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetCrateTicketNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetCrateTicketNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetCrateTicketNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms
		{
			int32 _localPlayerNo;
			TArray<FKeyMapSettingData> _outKeyMapSettingList;
			bool IsGamepad;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outKeyMapSettingList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outKeyMapSettingList;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__outKeyMapSettingList_Inner = { "_outKeyMapSettingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__outKeyMapSettingList = { "_outKeyMapSettingList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms, _outKeyMapSettingList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__outKeyMapSettingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__outKeyMapSettingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp_IsGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetKeyConfig", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetKeyConfig_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms
		{
			bool _Successed;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetLocalAEWGoldNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetLocalAEWGoldNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetMatchScoreRankingItemList_Parms
		{
			EMatchScoreRankingsType _rankingType;
			TArray<FMatchScoreRankingItemInfo> _outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__rankingType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__rankingType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__rankingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__rankingType = { "_rankingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMatchScoreRankingItemList_Parms, _rankingType), Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMatchScoreRankingItemList_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMatchScoreRankingItemList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__rankingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__rankingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetMatchScoreRankingItemList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetMatchScoreRankingItemList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetMiniGameScoreRankingItemList_Parms
		{
			EMiniGameID _miniGameType;
			TArray<FMiniGameScoreRankingItemInfo> _outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__miniGameType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__miniGameType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__miniGameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__miniGameType = { "_miniGameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMiniGameScoreRankingItemList_Parms, _miniGameType), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMiniGameScoreRankingItemList_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetMiniGameScoreRankingItemList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__miniGameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__miniGameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetMiniGameScoreRankingItemList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetMiniGameScoreRankingItemList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetPossessedItemSaveDataListFromId_Parms
		{
			TArray<int32> _targetIdList;
			TArray<FPossessedItemSaveData> outDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetPossessedItemSaveDataListFromId_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp_outDataList_Inner = { "outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp_outDataList = { "outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetPossessedItemSaveDataListFromId_Parms, outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetPossessedItemSaveDataListFromId_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__targetIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp_outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp_outDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetPossessedItemSaveDataListFromId", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetPossessedItemSaveDataListFromId_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms
		{
			int32 _localPlayerNo;
			TArray<FKeyMapSettingData> _outKeyMapSettingList;
			bool IsGamepad;
			bool IsSSMode;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outKeyMapSettingList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outKeyMapSettingList;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static void NewProp_IsSSMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSSMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__outKeyMapSettingList_Inner = { "_outKeyMapSettingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__outKeyMapSettingList = { "_outKeyMapSettingList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms, _outKeyMapSettingList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsSSMode_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms*)Obj)->IsSSMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsSSMode = { "IsSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsSSMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__outKeyMapSettingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__outKeyMapSettingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp_IsSSMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetSSModeKeyConfigData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetSSModeKeyConfigData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetTitleHolderHistoryList_Parms
		{
			EELBelt _targetBelt;
			TArray<FELTitleHolderHistory_BP> _outList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetBelt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetBelt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__targetBelt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__targetBelt = { "_targetBelt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetTitleHolderHistoryList_Parms, _targetBelt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__outList_Inner = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleHolderHistory_BP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetTitleHolderHistoryList_Parms, _outList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetTitleHolderHistoryList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__targetBelt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__targetBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__outList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__outList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetTitleHolderHistoryList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetTitleHolderHistoryList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms
		{
			int32 _targetId;
			bool _findParam;
			FELUnlockItemSaveData _unlockItem;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unlockItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__unlockItem = { "_unlockItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms, _unlockItem), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__unlockItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetUnlockItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms
		{
			EUnlockItemCategory _targetCategory;
			TArray<FELUnlockItemSaveData> _findParam;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findParam_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory = { "_targetCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms, _targetCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParam_Inner = { "_findParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms, _findParam), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetUnlockItemSaveDataByCategory", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByCategory_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms
		{
			TArray<int32> _targetIdList;
			TArray<FELUnlockItemSaveData> _findParam;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findParam_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__findParam_Inner = { "_findParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms, _findParam), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__targetIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__findParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetUnlockItemSaveDataByIdList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics
	{
		struct ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms
		{
			TArray<int32> _targetIdList;
			TMap<int32,FELUnlockItemSaveData> _findParam;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findParam_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__findParam_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam_ValueProp = { "_findParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam_Key_KeyProp = { "_findParam_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms, _findParam), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__targetIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "GetUnlockItemSaveDataByIdMap", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventGetUnlockItemSaveDataByIdMap_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSaveRequestKeyConfigDataOnly_Parms
		{
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSaveRequestKeyConfigDataOnly_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SaveRequestKeyConfigDataOnly", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSaveRequestKeyConfigDataOnly_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSaveRequestPlayerData_Parms
		{
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSaveRequestPlayerData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SaveRequestPlayerData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSaveRequestPlayerData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetAEWCashNum_Parms
		{
			int32 _cashNum;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cashNum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::NewProp__cashNum = { "_cashNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetAEWCashNum_Parms, _cashNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetAEWCashNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::NewProp__cashNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetAEWCashNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetAEWCashNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetCareerModePlayerGUID_Parms
		{
			FGuid _guid;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__guid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::NewProp__guid = { "_guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetCareerModePlayerGUID_Parms, _guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetCareerModePlayerGUID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::NewProp__guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetCareerModePlayerGUID", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetCareerModePlayerGUID_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetConfirmedEulaVer_Parms
		{
			UObject* _pWorldContextObject;
			int32 _targetVer;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetVer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetConfirmedEulaVer_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__targetVer = { "_targetVer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetConfirmedEulaVer_Parms, _targetVer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetConfirmedEulaVer_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__targetVer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetConfirmedEulaVer", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetConfirmedEulaVer_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms
		{
			int32 _localPlayerNo;
			TArray<FKeyMapSettingData> _keyMapSettingList;
			bool IsGamepad;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__keyMapSettingList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__keyMapSettingList;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__keyMapSettingList_Inner = { "_keyMapSettingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__keyMapSettingList = { "_keyMapSettingList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms, _keyMapSettingList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__keyMapSettingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__keyMapSettingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp_IsGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetKeyConfig", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetKeyConfig_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetLocalAEWGoldNum_Parms
		{
			int32 _cashNum;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cashNum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::NewProp__cashNum = { "_cashNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetLocalAEWGoldNum_Parms, _cashNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetLocalAEWGoldNum_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::NewProp__cashNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetLocalAEWGoldNum", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetLocalAEWGoldNum_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms
		{
			int32 _localPlayerNo;
			TArray<FKeyMapSettingData> _keyMapSettingList;
			bool IsGamepad;
			bool IsSSMode;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__keyMapSettingList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__keyMapSettingList;
		static void NewProp_IsGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGamepad;
		static void NewProp_IsSSMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSSMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__keyMapSettingList_Inner = { "_keyMapSettingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__keyMapSettingList = { "_keyMapSettingList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms, _keyMapSettingList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsGamepad_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms*)Obj)->IsGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsGamepad = { "IsGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsSSMode_SetBit(void* Obj)
	{
		((ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms*)Obj)->IsSSMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsSSMode = { "IsSSMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms), &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsSSMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__keyMapSettingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__keyMapSettingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp_IsSSMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "SetSSModeKeyConfigData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventSetSSModeKeyConfigData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics
	{
		struct ELPlayerDataUtilityFunction_eventUpdatePossessedItemSaveDataList_Parms
		{
			TArray<FPossessedItemSaveData> _updateDataList;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__updateDataList_Inner = { "_updateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__updateDataList = { "_updateDataList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventUpdatePossessedItemSaveDataList_Parms, _updateDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventUpdatePossessedItemSaveDataList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__updateDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__updateDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "UpdatePossessedItemSaveDataList", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventUpdatePossessedItemSaveDataList_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics
	{
		struct ELPlayerDataUtilityFunction_eventUpdateUnlockItemSaveData_Parms
		{
			FELUnlockItemSaveData _updateParam;
			UObject* _pWorldContextObject;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__updateParam = { "_updateParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventUpdateUnlockItemSaveData_Parms, _updateParam), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventUpdateUnlockItemSaveData_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerDataUtilityFunction_eventUpdateUnlockItemSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__updateParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerDataUtilityFunction, nullptr, "UpdateUnlockItemSaveData", nullptr, nullptr, sizeof(ELPlayerDataUtilityFunction_eventUpdateUnlockItemSaveData_Parms), Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlayerDataUtilityFunction_NoRegister()
	{
		return UELPlayerDataUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddCrateTicketNum, "AddCrateTicketNum" }, // 335068677
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_AddPossessedItemQuantity, "AddPossessedItemQuantity" }, // 794114168
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdatePossessedItemSaveData, "AllUpdatePossessedItemSaveData" }, // 2885415995
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_AllUpdateUnlockItemSaveData, "AllUpdateUnlockItemSaveData" }, // 2459657889
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyDefaultToPlayerData, "ApplyDefaultToPlayerData" }, // 4244476386
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyKeyConfig, "ApplyKeyConfig" }, // 1045842828
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySaveDataToPlayerData, "ApplySaveDataToPlayerData" }, // 2408880296
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplySSModeKeyConfig, "ApplySSModeKeyConfig" }, // 2754978585
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_ApplyTmpPlayerDataToSaveData, "ApplyTmpPlayerDataToSaveData" }, // 3732681375
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteMatchRecordsInvalidCAW, "DeleteMatchRecordsInvalidCAW" }, // 3941224137
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_DeleteScoreRankingInvalidCAW, "DeleteScoreRankingInvalidCAW" }, // 74378480
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMatchScoreRanking, "EntryMatchScoreRanking" }, // 1557087711
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_EntryMiniGameScoreRanking, "EntryMiniGameScoreRanking" }, // 3691745192
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNum, "GetAddEditSlotNum" }, // 3410117835
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAddEditSlotNumByWrestlerID, "GetAddEditSlotNumByWrestlerID" }, // 3095855510
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAEWCashNum, "GetAEWCashNum" }, // 1425261558
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMatchScoreRankingItemList, "GetAllMatchScoreRankingItemList" }, // 1908618254
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllMiniGameScoreRankingItemList, "GetAllMiniGameScoreRankingItemList" }, // 807054734
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllPossessedItemSaveData, "GetAllPossessedItemSaveData" }, // 2614768585
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetAllUnlockItemSaveData, "GetAllUnlockItemSaveData" }, // 975173409
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCareerModePlayerGUID, "GetCareerModePlayerGUID" }, // 359175502
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetConfirmedEulaVer, "GetConfirmedEulaVer" }, // 2388163240
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetCrateTicketNum, "GetCrateTicketNum" }, // 2911635949
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetKeyConfig, "GetKeyConfig" }, // 3901335808
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetLocalAEWGoldNum, "GetLocalAEWGoldNum" }, // 1273438307
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMatchScoreRankingItemList, "GetMatchScoreRankingItemList" }, // 1541045282
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetMiniGameScoreRankingItemList, "GetMiniGameScoreRankingItemList" }, // 2777568661
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetPossessedItemSaveDataListFromId, "GetPossessedItemSaveDataListFromId" }, // 2612050981
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetSSModeKeyConfigData, "GetSSModeKeyConfigData" }, // 1481967326
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetTitleHolderHistoryList, "GetTitleHolderHistoryList" }, // 3349956539
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveData, "GetUnlockItemSaveData" }, // 3390344551
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByCategory, "GetUnlockItemSaveDataByCategory" }, // 248878408
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdList, "GetUnlockItemSaveDataByIdList" }, // 4280532372
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_GetUnlockItemSaveDataByIdMap, "GetUnlockItemSaveDataByIdMap" }, // 3545944481
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestKeyConfigDataOnly, "SaveRequestKeyConfigDataOnly" }, // 4160575644
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SaveRequestPlayerData, "SaveRequestPlayerData" }, // 3786496972
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetAEWCashNum, "SetAEWCashNum" }, // 2011050045
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetCareerModePlayerGUID, "SetCareerModePlayerGUID" }, // 1021241632
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetConfirmedEulaVer, "SetConfirmedEulaVer" }, // 978303366
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetKeyConfig, "SetKeyConfig" }, // 1288616877
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetLocalAEWGoldNum, "SetLocalAEWGoldNum" }, // 1108368703
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_SetSSModeKeyConfigData, "SetSSModeKeyConfigData" }, // 3956201184
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdatePossessedItemSaveDataList, "UpdatePossessedItemSaveDataList" }, // 1215727055
		{ &Z_Construct_UFunction_UELPlayerDataUtilityFunction_UpdateUnlockItemSaveData, "UpdateUnlockItemSaveData" }, // 492350217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlayerDataUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerDataUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerDataUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::ClassParams = {
		&UELPlayerDataUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerDataUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerDataUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerDataUtilityFunction, 2449386456);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerDataUtilityFunction>()
	{
		return UELPlayerDataUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerDataUtilityFunction(Z_Construct_UClass_UELPlayerDataUtilityFunction, &UELPlayerDataUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerDataUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerDataUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
