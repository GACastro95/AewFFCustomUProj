// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_PlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_PlayerData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_PlayerData();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAddPossessItemQuantity();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeRecordSaveData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeSaveDataType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execAddPossessedItemQuantity)
	{
		P_GET_TARRAY(FAddPossessItemQuantity,Z_Param__addDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPossessedItemQuantity(Z_Param__addDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execAllUpdatePossessedItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__saveDataList);
		P_GET_UBOOL(Z_Param_IsRequestUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllUpdatePossessedItemSaveData(Z_Param_Out__saveDataList,Z_Param_IsRequestUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execAllUpdateUnlockItemSaveData)
	{
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__saveDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllUpdateUnlockItemSaveData(Z_Param_Out__saveDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execCreatePossessedItemSaveData)
	{
		P_GET_STRUCT(FPossessedItemSaveData,Z_Param__createData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreatePossessedItemSaveData(Z_Param__createData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execCreateUnlockItemSaveData)
	{
		P_GET_STRUCT(FELUnlockItemSaveData,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateUnlockItemSaveData(Z_Param__Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetAewCash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAewCash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetAEWGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetAllPossessedItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__outDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllPossessedItemSaveData(Z_Param_Out__outDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetAllUnlockItemSaveData)
	{
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__findItemList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllUnlockItemSaveData(Z_Param_Out__findItemList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetCareerModeWrestlerGUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out__outGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCareerModeWrestlerGUID(Z_Param_Out__outGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetChallengeProgressSaveData)
	{
		P_GET_STRUCT_REF(FChallengeProgressSaveData,Z_Param_Out__outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChallengeProgressSaveData(Z_Param_Out__outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetChallengeRecordSaveData)
	{
		P_GET_STRUCT_REF(FChallengeRecordSaveData,Z_Param_Out__outData);
		P_GET_ENUM(EChallengeSaveDataType,Z_Param__dataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChallengeRecordSaveData(Z_Param_Out__outData,EChallengeSaveDataType(Z_Param__dataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetChallengeRecordSaveDataList)
	{
		P_GET_TARRAY_REF(FChallengeRecordSaveData,Z_Param_Out__outDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChallengeRecordSaveDataList(Z_Param_Out__outDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetConfirmedEULA_Version)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConfirmedEULA_Version(Z_Param_Out__outVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetEpicAccountID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEpicAccountID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetMatchScoreRanking)
	{
		P_GET_TARRAY_REF(FMatchScoreRankingSaveDataArray,Z_Param_Out__outDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMatchScoreRanking(Z_Param_Out__outDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetMiniGameScoreRanking)
	{
		P_GET_TARRAY_REF(FMiniGameScoreRankingSaveDataArray,Z_Param_Out__outDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMiniGameScoreRanking(Z_Param_Out__outDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetOnlyNormalChallengeRecordSaveData)
	{
		P_GET_STRUCT_REF(FOnlyNormalChallengeRecordSaveData,Z_Param_Out__outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOnlyNormalChallengeRecordSaveData(Z_Param_Out__outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetPossessedItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__outDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPossessedItemSaveData(Z_Param_Out__outDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetPossessedItemSaveDataFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out_findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPossessedItemSaveData*)Z_Param__Result=P_THIS->GetPossessedItemSaveDataFromID(Z_Param__targetId,Z_Param_Out_findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetUnlockItemSaveData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELUnlockItemSaveData*)Z_Param__Result=P_THIS->GetUnlockItemSaveData(Z_Param__targetId,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execGetUnlockItemSaveDataByCategory)
	{
		P_GET_ENUM(EUnlockItemCategory,Z_Param__targetCategory);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out__findParamList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockItemSaveDataByCategory(EUnlockItemCategory(Z_Param__targetCategory),Z_Param_Out__findParamList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execSetAewCash)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAewCash(Z_Param__values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execSetAEWGold)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAEWGold(Z_Param__values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execSetCareerModeWrestlerGUID)
	{
		P_GET_STRUCT(FGuid,Z_Param__guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerModeWrestlerGUID(Z_Param__guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execSetConfirmedEULA_Version)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfirmedEULA_Version(Z_Param__version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execSetEpicAccountID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEpicAccountID(Z_Param__strEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateChallengeProgressSaveData)
	{
		P_GET_STRUCT(FChallengeProgressSaveData,Z_Param__updateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChallengeProgressSaveData(Z_Param__updateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateChallengeRecordSaveData)
	{
		P_GET_STRUCT(FChallengeRecordSaveData,Z_Param__updateData);
		P_GET_ENUM(EChallengeSaveDataType,Z_Param__dataType);
		P_GET_UBOOL(Z_Param__isResetRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChallengeRecordSaveData(Z_Param__updateData,EChallengeSaveDataType(Z_Param__dataType),Z_Param__isResetRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateChallengeRecordSaveDataList)
	{
		P_GET_TARRAY(FChallengeRecordSaveData,Z_Param__updateDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChallengeRecordSaveDataList(Z_Param__updateDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateMatchScoreRanking)
	{
		P_GET_TARRAY(FMatchScoreRankingSaveDataArray,Z_Param__updateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMatchScoreRanking(Z_Param__updateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateMiniGameScoreRanking)
	{
		P_GET_TARRAY(FMiniGameScoreRankingSaveDataArray,Z_Param__updateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMiniGameScoreRanking(Z_Param__updateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateOnlyNormalChallengeRecordSaveData)
	{
		P_GET_STRUCT(FOnlyNormalChallengeRecordSaveData,Z_Param__updateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOnlyNormalChallengeRecordSaveData(Z_Param__updateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdatePossessedItemSaveData)
	{
		P_GET_TARRAY(FPossessedItemSaveData,Z_Param__updateDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePossessedItemSaveData(Z_Param__updateDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_PlayerData::execUpdateUnlockItemSaveData)
	{
		P_GET_STRUCT(FELUnlockItemSaveData,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUnlockItemSaveData(Z_Param__Param);
		P_NATIVE_END;
	}
	void USaveDataObject_PlayerData::StaticRegisterNativesUSaveDataObject_PlayerData()
	{
		UClass* Class = USaveDataObject_PlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPossessedItemQuantity", &USaveDataObject_PlayerData::execAddPossessedItemQuantity },
			{ "AllUpdatePossessedItemSaveData", &USaveDataObject_PlayerData::execAllUpdatePossessedItemSaveData },
			{ "AllUpdateUnlockItemSaveData", &USaveDataObject_PlayerData::execAllUpdateUnlockItemSaveData },
			{ "CreatePossessedItemSaveData", &USaveDataObject_PlayerData::execCreatePossessedItemSaveData },
			{ "CreateUnlockItemSaveData", &USaveDataObject_PlayerData::execCreateUnlockItemSaveData },
			{ "GetAewCash", &USaveDataObject_PlayerData::execGetAewCash },
			{ "GetAEWGold", &USaveDataObject_PlayerData::execGetAEWGold },
			{ "GetAllPossessedItemSaveData", &USaveDataObject_PlayerData::execGetAllPossessedItemSaveData },
			{ "GetAllUnlockItemSaveData", &USaveDataObject_PlayerData::execGetAllUnlockItemSaveData },
			{ "GetCareerModeWrestlerGUID", &USaveDataObject_PlayerData::execGetCareerModeWrestlerGUID },
			{ "GetChallengeProgressSaveData", &USaveDataObject_PlayerData::execGetChallengeProgressSaveData },
			{ "GetChallengeRecordSaveData", &USaveDataObject_PlayerData::execGetChallengeRecordSaveData },
			{ "GetChallengeRecordSaveDataList", &USaveDataObject_PlayerData::execGetChallengeRecordSaveDataList },
			{ "GetConfirmedEULA_Version", &USaveDataObject_PlayerData::execGetConfirmedEULA_Version },
			{ "GetEpicAccountID", &USaveDataObject_PlayerData::execGetEpicAccountID },
			{ "GetMatchScoreRanking", &USaveDataObject_PlayerData::execGetMatchScoreRanking },
			{ "GetMiniGameScoreRanking", &USaveDataObject_PlayerData::execGetMiniGameScoreRanking },
			{ "GetOnlyNormalChallengeRecordSaveData", &USaveDataObject_PlayerData::execGetOnlyNormalChallengeRecordSaveData },
			{ "GetPossessedItemSaveData", &USaveDataObject_PlayerData::execGetPossessedItemSaveData },
			{ "GetPossessedItemSaveDataFromID", &USaveDataObject_PlayerData::execGetPossessedItemSaveDataFromID },
			{ "GetUnlockItemSaveData", &USaveDataObject_PlayerData::execGetUnlockItemSaveData },
			{ "GetUnlockItemSaveDataByCategory", &USaveDataObject_PlayerData::execGetUnlockItemSaveDataByCategory },
			{ "SetAewCash", &USaveDataObject_PlayerData::execSetAewCash },
			{ "SetAEWGold", &USaveDataObject_PlayerData::execSetAEWGold },
			{ "SetCareerModeWrestlerGUID", &USaveDataObject_PlayerData::execSetCareerModeWrestlerGUID },
			{ "SetConfirmedEULA_Version", &USaveDataObject_PlayerData::execSetConfirmedEULA_Version },
			{ "SetEpicAccountID", &USaveDataObject_PlayerData::execSetEpicAccountID },
			{ "UpdateChallengeProgressSaveData", &USaveDataObject_PlayerData::execUpdateChallengeProgressSaveData },
			{ "UpdateChallengeRecordSaveData", &USaveDataObject_PlayerData::execUpdateChallengeRecordSaveData },
			{ "UpdateChallengeRecordSaveDataList", &USaveDataObject_PlayerData::execUpdateChallengeRecordSaveDataList },
			{ "UpdateMatchScoreRanking", &USaveDataObject_PlayerData::execUpdateMatchScoreRanking },
			{ "UpdateMiniGameScoreRanking", &USaveDataObject_PlayerData::execUpdateMiniGameScoreRanking },
			{ "UpdateOnlyNormalChallengeRecordSaveData", &USaveDataObject_PlayerData::execUpdateOnlyNormalChallengeRecordSaveData },
			{ "UpdatePossessedItemSaveData", &USaveDataObject_PlayerData::execUpdatePossessedItemSaveData },
			{ "UpdateUnlockItemSaveData", &USaveDataObject_PlayerData::execUpdateUnlockItemSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics
	{
		struct SaveDataObject_PlayerData_eventAddPossessedItemQuantity_Parms
		{
			TArray<FAddPossessItemQuantity> _addDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__addDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::NewProp__addDataList_Inner = { "_addDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAddPossessItemQuantity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::NewProp__addDataList = { "_addDataList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventAddPossessedItemQuantity_Parms, _addDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::NewProp__addDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::NewProp__addDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "AddPossessedItemQuantity", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventAddPossessedItemQuantity_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventAllUpdatePossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _saveDataList;
			bool IsRequestUpdate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__saveDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__saveDataList;
		static void NewProp_IsRequestUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRequestUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataList_Inner = { "_saveDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataList = { "_saveDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventAllUpdatePossessedItemSaveData_Parms, _saveDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp_IsRequestUpdate_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventAllUpdatePossessedItemSaveData_Parms*)Obj)->IsRequestUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp_IsRequestUpdate = { "IsRequestUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventAllUpdatePossessedItemSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp_IsRequestUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp__saveDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::NewProp_IsRequestUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "AllUpdatePossessedItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventAllUpdatePossessedItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventAllUpdateUnlockItemSaveData_Parms
		{
			TArray<FELUnlockItemSaveData> _saveDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__saveDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__saveDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataList_Inner = { "_saveDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataList = { "_saveDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventAllUpdateUnlockItemSaveData_Parms, _saveDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::NewProp__saveDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "AllUpdateUnlockItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventAllUpdateUnlockItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventCreatePossessedItemSaveData_Parms
		{
			FPossessedItemSaveData _createData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__createData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp__createData = { "_createData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventCreatePossessedItemSaveData_Parms, _createData), Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventCreatePossessedItemSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventCreatePossessedItemSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp__createData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "CreatePossessedItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventCreatePossessedItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventCreateUnlockItemSaveData_Parms
		{
			FELUnlockItemSaveData _Param;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventCreateUnlockItemSaveData_Parms, _Param), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventCreateUnlockItemSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventCreateUnlockItemSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp__Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "CreateUnlockItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventCreateUnlockItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics
	{
		struct SaveDataObject_PlayerData_eventGetAewCash_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetAewCash_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetAewCash", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetAewCash_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics
	{
		struct SaveDataObject_PlayerData_eventGetAEWGold_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetAEWGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetAEWGold", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetAEWGold_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetAllPossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _outDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetAllPossessedItemSaveData_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::NewProp__outDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetAllPossessedItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetAllPossessedItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetAllUnlockItemSaveData_Parms
		{
			TArray<FELUnlockItemSaveData> _findItemList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__findItemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::NewProp__findItemList_Inner = { "_findItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::NewProp__findItemList = { "_findItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetAllUnlockItemSaveData_Parms, _findItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::NewProp__findItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::NewProp__findItemList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetAllUnlockItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetAllUnlockItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics
	{
		struct SaveDataObject_PlayerData_eventGetCareerModeWrestlerGUID_Parms
		{
			FGuid _outGuid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::NewProp__outGuid = { "_outGuid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetCareerModeWrestlerGUID_Parms, _outGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::NewProp__outGuid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetCareerModeWrestlerGUID", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetCareerModeWrestlerGUID_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetChallengeProgressSaveData_Parms
		{
			FChallengeProgressSaveData _outData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::NewProp__outData = { "_outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetChallengeProgressSaveData_Parms, _outData), Z_Construct_UScriptStruct_FChallengeProgressSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::NewProp__outData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetChallengeProgressSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetChallengeProgressSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetChallengeRecordSaveData_Parms
		{
			FChallengeRecordSaveData _outData;
			EChallengeSaveDataType _dataType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__dataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__dataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__outData = { "_outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetChallengeRecordSaveData_Parms, _outData), Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__dataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__dataType = { "_dataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetChallengeRecordSaveData_Parms, _dataType), Z_Construct_UEnum_ABP_200508_EChallengeSaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__dataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::NewProp__dataType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetChallengeRecordSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetChallengeRecordSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics
	{
		struct SaveDataObject_PlayerData_eventGetChallengeRecordSaveDataList_Parms
		{
			TArray<FChallengeRecordSaveData> _outDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetChallengeRecordSaveDataList_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::NewProp__outDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetChallengeRecordSaveDataList", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetChallengeRecordSaveDataList_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics
	{
		struct SaveDataObject_PlayerData_eventGetConfirmedEULA_Version_Parms
		{
			int32 _outVersion;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::NewProp__outVersion = { "_outVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetConfirmedEULA_Version_Parms, _outVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::NewProp__outVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetConfirmedEULA_Version", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetConfirmedEULA_Version_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics
	{
		struct SaveDataObject_PlayerData_eventGetEpicAccountID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetEpicAccountID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetEpicAccountID", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetEpicAccountID_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics
	{
		struct SaveDataObject_PlayerData_eventGetMatchScoreRanking_Parms
		{
			TArray<FMatchScoreRankingSaveDataArray> _outDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetMatchScoreRanking_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::NewProp__outDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetMatchScoreRanking", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetMatchScoreRanking_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics
	{
		struct SaveDataObject_PlayerData_eventGetMiniGameScoreRanking_Parms
		{
			TArray<FMiniGameScoreRankingSaveDataArray> _outDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetMiniGameScoreRanking_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::NewProp__outDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetMiniGameScoreRanking", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetMiniGameScoreRanking_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetOnlyNormalChallengeRecordSaveData_Parms
		{
			FOnlyNormalChallengeRecordSaveData _outData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::NewProp__outData = { "_outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetOnlyNormalChallengeRecordSaveData_Parms, _outData), Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::NewProp__outData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetOnlyNormalChallengeRecordSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetOnlyNormalChallengeRecordSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetPossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _outDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::NewProp__outDataList_Inner = { "_outDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::NewProp__outDataList = { "_outDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetPossessedItemSaveData_Parms, _outDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::NewProp__outDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::NewProp__outDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetPossessedItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetPossessedItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics
	{
		struct SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms
		{
			int32 _targetId;
			bool findParam;
			FPossessedItemSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp_findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_findParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_findParam_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms*)Obj)->findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_findParam = { "findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetPossessedItemSaveDataFromID", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetPossessedItemSaveDataFromID_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms
		{
			int32 _targetId;
			bool _findParam;
			FELUnlockItemSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetUnlockItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetUnlockItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics
	{
		struct SaveDataObject_PlayerData_eventGetUnlockItemSaveDataByCategory_Parms
		{
			EUnlockItemCategory _targetCategory;
			TArray<FELUnlockItemSaveData> _findParamList;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__findParamList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__findParamList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory = { "_targetCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetUnlockItemSaveDataByCategory_Parms, _targetCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParamList_Inner = { "_findParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParamList = { "_findParamList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventGetUnlockItemSaveDataByCategory_Parms, _findParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__targetCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::NewProp__findParamList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "GetUnlockItemSaveDataByCategory", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventGetUnlockItemSaveDataByCategory_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics
	{
		struct SaveDataObject_PlayerData_eventSetAewCash_Parms
		{
			int32 _values;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__values_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::NewProp__values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::NewProp__values = { "_values", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventSetAewCash_Parms, _values), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::NewProp__values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::NewProp__values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::NewProp__values,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "SetAewCash", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventSetAewCash_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics
	{
		struct SaveDataObject_PlayerData_eventSetAEWGold_Parms
		{
			int32 _values;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__values_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::NewProp__values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::NewProp__values = { "_values", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventSetAEWGold_Parms, _values), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::NewProp__values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::NewProp__values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::NewProp__values,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "SetAEWGold", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventSetAEWGold_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics
	{
		struct SaveDataObject_PlayerData_eventSetCareerModeWrestlerGUID_Parms
		{
			FGuid _guid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::NewProp__guid = { "_guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventSetCareerModeWrestlerGUID_Parms, _guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::NewProp__guid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "SetCareerModeWrestlerGUID", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventSetCareerModeWrestlerGUID_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics
	{
		struct SaveDataObject_PlayerData_eventSetConfirmedEULA_Version_Parms
		{
			int32 _version;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::NewProp__version = { "_version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventSetConfirmedEULA_Version_Parms, _version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::NewProp__version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "SetConfirmedEULA_Version", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventSetConfirmedEULA_Version_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics
	{
		struct SaveDataObject_PlayerData_eventSetEpicAccountID_Parms
		{
			FString _strEpicAccountID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventSetEpicAccountID_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::NewProp__strEpicAccountID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::NewProp__strEpicAccountID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "SetEpicAccountID", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventSetEpicAccountID_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateChallengeProgressSaveData_Parms
		{
			FChallengeProgressSaveData _updateData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::NewProp__updateData = { "_updateData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateChallengeProgressSaveData_Parms, _updateData), Z_Construct_UScriptStruct_FChallengeProgressSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::NewProp__updateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateChallengeProgressSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateChallengeProgressSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms
		{
			FChallengeRecordSaveData _updateData;
			EChallengeSaveDataType _dataType;
			bool _isResetRecord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__dataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__dataType;
		static void NewProp__isResetRecord_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isResetRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__updateData = { "_updateData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms, _updateData), Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__dataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__dataType = { "_dataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms, _dataType), Z_Construct_UEnum_ABP_200508_EChallengeSaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__isResetRecord_SetBit(void* Obj)
	{
		((SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms*)Obj)->_isResetRecord = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__isResetRecord = { "_isResetRecord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__isResetRecord_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__updateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__dataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__dataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::NewProp__isResetRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateChallengeRecordSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveDataList_Parms
		{
			TArray<FChallengeRecordSaveData> _updateDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::NewProp__updateDataList_Inner = { "_updateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::NewProp__updateDataList = { "_updateDataList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveDataList_Parms, _updateDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::NewProp__updateDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::NewProp__updateDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateChallengeRecordSaveDataList", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateChallengeRecordSaveDataList_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateMatchScoreRanking_Parms
		{
			TArray<FMatchScoreRankingSaveDataArray> _updateList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::NewProp__updateList_Inner = { "_updateList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::NewProp__updateList = { "_updateList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateMatchScoreRanking_Parms, _updateList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::NewProp__updateList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::NewProp__updateList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateMatchScoreRanking", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateMatchScoreRanking_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateMiniGameScoreRanking_Parms
		{
			TArray<FMiniGameScoreRankingSaveDataArray> _updateList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::NewProp__updateList_Inner = { "_updateList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::NewProp__updateList = { "_updateList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateMiniGameScoreRanking_Parms, _updateList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::NewProp__updateList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::NewProp__updateList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateMiniGameScoreRanking", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateMiniGameScoreRanking_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateOnlyNormalChallengeRecordSaveData_Parms
		{
			FOnlyNormalChallengeRecordSaveData _updateData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::NewProp__updateData = { "_updateData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateOnlyNormalChallengeRecordSaveData_Parms, _updateData), Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::NewProp__updateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateOnlyNormalChallengeRecordSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateOnlyNormalChallengeRecordSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdatePossessedItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _updateDataList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__updateDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__updateDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::NewProp__updateDataList_Inner = { "_updateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::NewProp__updateDataList = { "_updateDataList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdatePossessedItemSaveData_Parms, _updateDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::NewProp__updateDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::NewProp__updateDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdatePossessedItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdatePossessedItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics
	{
		struct SaveDataObject_PlayerData_eventUpdateUnlockItemSaveData_Parms
		{
			FELUnlockItemSaveData _Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_PlayerData_eventUpdateUnlockItemSaveData_Parms, _Param), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::NewProp__Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_PlayerData, nullptr, "UpdateUnlockItemSaveData", nullptr, nullptr, sizeof(SaveDataObject_PlayerData_eventUpdateUnlockItemSaveData_Parms), Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_PlayerData_NoRegister()
	{
		return USaveDataObject_PlayerData::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_PlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_PlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_PlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_AddPossessedItemQuantity, "AddPossessedItemQuantity" }, // 1056405435
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdatePossessedItemSaveData, "AllUpdatePossessedItemSaveData" }, // 728039709
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_AllUpdateUnlockItemSaveData, "AllUpdateUnlockItemSaveData" }, // 3067664715
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_CreatePossessedItemSaveData, "CreatePossessedItemSaveData" }, // 2692568690
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_CreateUnlockItemSaveData, "CreateUnlockItemSaveData" }, // 4188530133
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetAewCash, "GetAewCash" }, // 1939695511
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetAEWGold, "GetAEWGold" }, // 3964622422
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllPossessedItemSaveData, "GetAllPossessedItemSaveData" }, // 3703906035
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetAllUnlockItemSaveData, "GetAllUnlockItemSaveData" }, // 2999264405
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetCareerModeWrestlerGUID, "GetCareerModeWrestlerGUID" }, // 3365786836
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeProgressSaveData, "GetChallengeProgressSaveData" }, // 3132311786
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveData, "GetChallengeRecordSaveData" }, // 1759217089
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetChallengeRecordSaveDataList, "GetChallengeRecordSaveDataList" }, // 61188022
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetConfirmedEULA_Version, "GetConfirmedEULA_Version" }, // 2772580713
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetEpicAccountID, "GetEpicAccountID" }, // 168858851
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetMatchScoreRanking, "GetMatchScoreRanking" }, // 1379543505
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetMiniGameScoreRanking, "GetMiniGameScoreRanking" }, // 2681795662
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetOnlyNormalChallengeRecordSaveData, "GetOnlyNormalChallengeRecordSaveData" }, // 356579525
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveData, "GetPossessedItemSaveData" }, // 1507774369
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetPossessedItemSaveDataFromID, "GetPossessedItemSaveDataFromID" }, // 3431468429
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveData, "GetUnlockItemSaveData" }, // 2614576951
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_GetUnlockItemSaveDataByCategory, "GetUnlockItemSaveDataByCategory" }, // 193004426
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_SetAewCash, "SetAewCash" }, // 2332605109
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_SetAEWGold, "SetAEWGold" }, // 3429350160
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_SetCareerModeWrestlerGUID, "SetCareerModeWrestlerGUID" }, // 4146865185
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_SetConfirmedEULA_Version, "SetConfirmedEULA_Version" }, // 727237223
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_SetEpicAccountID, "SetEpicAccountID" }, // 3964519436
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeProgressSaveData, "UpdateChallengeProgressSaveData" }, // 41364129
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveData, "UpdateChallengeRecordSaveData" }, // 671905004
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateChallengeRecordSaveDataList, "UpdateChallengeRecordSaveDataList" }, // 3963067879
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMatchScoreRanking, "UpdateMatchScoreRanking" }, // 341591960
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateMiniGameScoreRanking, "UpdateMiniGameScoreRanking" }, // 3418999437
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateOnlyNormalChallengeRecordSaveData, "UpdateOnlyNormalChallengeRecordSaveData" }, // 2669305983
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdatePossessedItemSaveData, "UpdatePossessedItemSaveData" }, // 3388821757
		{ &Z_Construct_UFunction_USaveDataObject_PlayerData_UpdateUnlockItemSaveData, "UpdateUnlockItemSaveData" }, // 1293115124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_PlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_PlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_PlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_PlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_PlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_PlayerData_Statics::ClassParams = {
		&USaveDataObject_PlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_PlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_PlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_PlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_PlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_PlayerData, 651158143);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_PlayerData>()
	{
		return USaveDataObject_PlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_PlayerData(Z_Construct_UClass_USaveDataObject_PlayerData, &USaveDataObject_PlayerData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_PlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_PlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
