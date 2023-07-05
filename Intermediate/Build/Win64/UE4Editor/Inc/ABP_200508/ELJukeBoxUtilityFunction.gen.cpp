// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELJukeBoxUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELJukeBoxUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELJukeBoxUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELJukeBoxUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTmpJukeboxSaveData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FJukeBoxParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execConvertJukeboxSaveData)
	{
		P_GET_UBOOL(Z_Param_tmpUpdate);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::ConvertJukeboxSaveData(Z_Param_tmpUpdate,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetCurrentJukeBoxPlayCue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetCurrentJukeBoxPlayCue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetCurrentJukeBoxPlayCueCore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetCurrentJukeBoxPlayCueCore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetCurrentPlayID)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetCurrentPlayID(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetCurrentPlayIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetCurrentPlayIDCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxCheckList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxCheckList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxCheckListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxCheckListCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxCheckListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxCheckListForID(Z_Param__targetId,Z_Param_Out__Successed,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxCheckListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxCheckListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param_Out__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxDataTableRowFromName)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_STRUCT_REF(FJukeBoxParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeboxGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELGameInstance**)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeboxGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayCue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayCue(Z_Param__targetId,Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayCueCore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayCueCore(Z_Param__targetId,Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayedList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayedList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayedListCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayedListForID(Z_Param__targetId,Z_Param_Out__Successed,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayedListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param_Out__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxPlayListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_TARRAY_REF(int32,Z_Param_Out__listArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxPlayListCore(Z_Param_Out__stJukebox,Z_Param_Out__listArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxSortList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxSortList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxSortListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxSortListCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxSortListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxSortListForID(Z_Param__targetId,Z_Param_Out__findParam,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetJukeBoxSortListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetJukeBoxSortListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetNextJukeBoxPlayCue)
	{
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetNextJukeBoxPlayCue(Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetNextJukeBoxPlayCueCore)
	{
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELJukeBoxUtilityFunction::GetNextJukeBoxPlayCueCore(Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetNextPlayID)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetNextPlayID(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execGetNextPlayIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELJukeBoxUtilityFunction::GetNextPlayIDCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execInitJukeBoxDataForDLC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::InitJukeBoxDataForDLC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execInitJukeBoxPlayedList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::InitJukeBoxPlayedList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execInitJukeBoxPlayedListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::InitJukeBoxPlayedListCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execInitJukeBoxSortList)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::InitJukeBoxSortList(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execInitJukeBoxSortListCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::InitJukeBoxSortListCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execIsCreateSavedata)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::IsCreateSavedata(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execIsCreateSavedataCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::IsCreateSavedataCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execIsRandomPlayback)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::IsRandomPlayback(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execIsRandomPlaybackCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELJukeBoxUtilityFunction::IsRandomPlaybackCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSaveRequestJukeBoxData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SaveRequestJukeBoxData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetCreateSavedata)
	{
		P_GET_UBOOL(Z_Param__create);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetCreateSavedata(Z_Param__create,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetCreateSavedataCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_UBOOL(Z_Param__create);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetCreateSavedataCore(Z_Param_Out__stJukebox,Z_Param__create);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetCurrentPlayID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__id);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetCurrentPlayID(Z_Param__id,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetCurrentPlayIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetCurrentPlayIDCore(Z_Param_Out__stJukebox,Z_Param__id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxCheckListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxCheckListForID(Z_Param__targetId,Z_Param__Enable,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxCheckListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxCheckListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxPlayedListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxPlayedListForID(Z_Param__targetId,Z_Param__Enable,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxPlayedListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxPlayedListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxSortListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_PROPERTY(FIntProperty,Z_Param__sortNo);
		P_GET_UBOOL(Z_Param__Enable);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxSortListForID(Z_Param__targetId,Z_Param__sortNo,Z_Param__Enable,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetJukeBoxSortListForIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_PROPERTY(FIntProperty,Z_Param__sortNo);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetJukeBoxSortListForIDCore(Z_Param_Out__stJukebox,Z_Param__targetId,Z_Param__sortNo,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetNextPlayID)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetNextPlayID(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetNextPlayIDCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetNextPlayIDCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetNextPlayIDForRandom)
	{
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetNextPlayIDForRandom(Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetNextPlayIDForRandomCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetNextPlayIDForRandomCore(Z_Param_Out__stJukebox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetRandomPlayback)
	{
		P_GET_UBOOL(Z_Param__random);
		P_GET_UBOOL(Z_Param_isTmp);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetRandomPlayback(Z_Param__random,Z_Param_isTmp,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execSetRandomPlaybackCore)
	{
		P_GET_STRUCT_REF(FELTmpJukeboxSaveData,Z_Param_Out__stJukebox);
		P_GET_UBOOL(Z_Param__random);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::SetRandomPlaybackCore(Z_Param_Out__stJukebox,Z_Param__random);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELJukeBoxUtilityFunction::execUpdateJukeboxSaveData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELJukeBoxUtilityFunction::UpdateJukeboxSaveData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	void UELJukeBoxUtilityFunction::StaticRegisterNativesUELJukeBoxUtilityFunction()
	{
		UClass* Class = UELJukeBoxUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertJukeboxSaveData", &UELJukeBoxUtilityFunction::execConvertJukeboxSaveData },
			{ "GetCurrentJukeBoxPlayCue", &UELJukeBoxUtilityFunction::execGetCurrentJukeBoxPlayCue },
			{ "GetCurrentJukeBoxPlayCueCore", &UELJukeBoxUtilityFunction::execGetCurrentJukeBoxPlayCueCore },
			{ "GetCurrentPlayID", &UELJukeBoxUtilityFunction::execGetCurrentPlayID },
			{ "GetCurrentPlayIDCore", &UELJukeBoxUtilityFunction::execGetCurrentPlayIDCore },
			{ "GetJukeBoxCheckList", &UELJukeBoxUtilityFunction::execGetJukeBoxCheckList },
			{ "GetJukeBoxCheckListCore", &UELJukeBoxUtilityFunction::execGetJukeBoxCheckListCore },
			{ "GetJukeBoxCheckListForID", &UELJukeBoxUtilityFunction::execGetJukeBoxCheckListForID },
			{ "GetJukeBoxCheckListForIDCore", &UELJukeBoxUtilityFunction::execGetJukeBoxCheckListForIDCore },
			{ "GetJukeBoxDataTableRowFromName", &UELJukeBoxUtilityFunction::execGetJukeBoxDataTableRowFromName },
			{ "GetJukeboxGameInstance", &UELJukeBoxUtilityFunction::execGetJukeboxGameInstance },
			{ "GetJukeBoxPlayCue", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayCue },
			{ "GetJukeBoxPlayCueCore", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayCueCore },
			{ "GetJukeBoxPlayedList", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayedList },
			{ "GetJukeBoxPlayedListCore", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListCore },
			{ "GetJukeBoxPlayedListForID", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListForID },
			{ "GetJukeBoxPlayedListForIDCore", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayedListForIDCore },
			{ "GetJukeBoxPlayList", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayList },
			{ "GetJukeBoxPlayListCore", &UELJukeBoxUtilityFunction::execGetJukeBoxPlayListCore },
			{ "GetJukeBoxSortList", &UELJukeBoxUtilityFunction::execGetJukeBoxSortList },
			{ "GetJukeBoxSortListCore", &UELJukeBoxUtilityFunction::execGetJukeBoxSortListCore },
			{ "GetJukeBoxSortListForID", &UELJukeBoxUtilityFunction::execGetJukeBoxSortListForID },
			{ "GetJukeBoxSortListForIDCore", &UELJukeBoxUtilityFunction::execGetJukeBoxSortListForIDCore },
			{ "GetNextJukeBoxPlayCue", &UELJukeBoxUtilityFunction::execGetNextJukeBoxPlayCue },
			{ "GetNextJukeBoxPlayCueCore", &UELJukeBoxUtilityFunction::execGetNextJukeBoxPlayCueCore },
			{ "GetNextPlayID", &UELJukeBoxUtilityFunction::execGetNextPlayID },
			{ "GetNextPlayIDCore", &UELJukeBoxUtilityFunction::execGetNextPlayIDCore },
			{ "InitJukeBoxDataForDLC", &UELJukeBoxUtilityFunction::execInitJukeBoxDataForDLC },
			{ "InitJukeBoxPlayedList", &UELJukeBoxUtilityFunction::execInitJukeBoxPlayedList },
			{ "InitJukeBoxPlayedListCore", &UELJukeBoxUtilityFunction::execInitJukeBoxPlayedListCore },
			{ "InitJukeBoxSortList", &UELJukeBoxUtilityFunction::execInitJukeBoxSortList },
			{ "InitJukeBoxSortListCore", &UELJukeBoxUtilityFunction::execInitJukeBoxSortListCore },
			{ "IsCreateSavedata", &UELJukeBoxUtilityFunction::execIsCreateSavedata },
			{ "IsCreateSavedataCore", &UELJukeBoxUtilityFunction::execIsCreateSavedataCore },
			{ "IsRandomPlayback", &UELJukeBoxUtilityFunction::execIsRandomPlayback },
			{ "IsRandomPlaybackCore", &UELJukeBoxUtilityFunction::execIsRandomPlaybackCore },
			{ "SaveRequestJukeBoxData", &UELJukeBoxUtilityFunction::execSaveRequestJukeBoxData },
			{ "SetCreateSavedata", &UELJukeBoxUtilityFunction::execSetCreateSavedata },
			{ "SetCreateSavedataCore", &UELJukeBoxUtilityFunction::execSetCreateSavedataCore },
			{ "SetCurrentPlayID", &UELJukeBoxUtilityFunction::execSetCurrentPlayID },
			{ "SetCurrentPlayIDCore", &UELJukeBoxUtilityFunction::execSetCurrentPlayIDCore },
			{ "SetJukeBoxCheckListForID", &UELJukeBoxUtilityFunction::execSetJukeBoxCheckListForID },
			{ "SetJukeBoxCheckListForIDCore", &UELJukeBoxUtilityFunction::execSetJukeBoxCheckListForIDCore },
			{ "SetJukeBoxPlayedListForID", &UELJukeBoxUtilityFunction::execSetJukeBoxPlayedListForID },
			{ "SetJukeBoxPlayedListForIDCore", &UELJukeBoxUtilityFunction::execSetJukeBoxPlayedListForIDCore },
			{ "SetJukeBoxSortListForID", &UELJukeBoxUtilityFunction::execSetJukeBoxSortListForID },
			{ "SetJukeBoxSortListForIDCore", &UELJukeBoxUtilityFunction::execSetJukeBoxSortListForIDCore },
			{ "SetNextPlayID", &UELJukeBoxUtilityFunction::execSetNextPlayID },
			{ "SetNextPlayIDCore", &UELJukeBoxUtilityFunction::execSetNextPlayIDCore },
			{ "SetNextPlayIDForRandom", &UELJukeBoxUtilityFunction::execSetNextPlayIDForRandom },
			{ "SetNextPlayIDForRandomCore", &UELJukeBoxUtilityFunction::execSetNextPlayIDForRandomCore },
			{ "SetRandomPlayback", &UELJukeBoxUtilityFunction::execSetRandomPlayback },
			{ "SetRandomPlaybackCore", &UELJukeBoxUtilityFunction::execSetRandomPlaybackCore },
			{ "UpdateJukeboxSaveData", &UELJukeBoxUtilityFunction::execUpdateJukeboxSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics
	{
		struct ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms
		{
			bool tmpUpdate;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static void NewProp_tmpUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tmpUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_tmpUpdate_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms*)Obj)->tmpUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_tmpUpdate = { "tmpUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_tmpUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_tmpUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "ConvertJukeboxSaveData", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventConvertJukeboxSaveData_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCue_Parms
		{
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetCurrentJukeBoxPlayCue", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCue_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCueCore_Parms
		{
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCueCore_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetCurrentJukeBoxPlayCueCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetCurrentJukeBoxPlayCueCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetCurrentPlayID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetCurrentPlayID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetCurrentPlayIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentPlayIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetCurrentPlayIDCore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetCurrentPlayIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetCurrentPlayIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			TArray<int32> ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxCheckList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListCore_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxCheckListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms
		{
			int32 _targetId;
			bool _Successed;
			bool isTmp;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxCheckListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			bool _Successed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxCheckListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxCheckListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FJukeBoxParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FJukeBoxParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxDataTableRowFromName", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxDataTableRowFromName_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeboxGameInstance_Parms
		{
			UELGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeboxGameInstance_Parms, ReturnValue), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeboxGameInstance", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeboxGameInstance_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms
		{
			int32 _targetId;
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayCue", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCue_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms
		{
			int32 _targetId;
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayCueCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayCueCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			TArray<int32> ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayedList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListCore_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayedListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms
		{
			int32 _targetId;
			bool _Successed;
			bool isTmp;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayedListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			bool _Successed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayedListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayedListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			TArray<int32> ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			TArray<int32> _listArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__listArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__listArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__listArray_Inner = { "_listArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__listArray = { "_listArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms, _listArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__listArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp__listArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxPlayListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxPlayListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			TArray<int32> ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxSortList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxSortListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListCore_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxSortListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms
		{
			int32 _targetId;
			bool _findParam;
			bool isTmp;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxSortListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			bool _findParam;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetJukeBoxSortListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetJukeBoxSortListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCue_Parms
		{
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCue_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCue_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetNextJukeBoxPlayCue", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCue_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCueCore_Parms
		{
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCueCore_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCueCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCueCore_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetNextJukeBoxPlayCueCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetNextJukeBoxPlayCueCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetNextPlayID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetNextPlayID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventGetNextPlayIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextPlayIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventGetNextPlayIDCore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "GetNextPlayIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventGetNextPlayIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "InitJukeBoxDataForDLC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "InitJukeBoxPlayedList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::NewProp__stJukebox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "InitJukeBoxPlayedListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxPlayedListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics
	{
		struct ELJukeBoxUtilityFunction_eventInitJukeBoxSortList_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventInitJukeBoxSortList_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxSortList_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventInitJukeBoxSortList_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "InitJukeBoxSortList", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxSortList_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventInitJukeBoxSortListCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventInitJukeBoxSortListCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::NewProp__stJukebox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "InitJukeBoxSortListCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventInitJukeBoxSortListCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics
	{
		struct ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "IsCreateSavedata", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventIsCreateSavedata_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventIsCreateSavedataCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventIsCreateSavedataCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsCreateSavedataCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsCreateSavedataCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "IsCreateSavedataCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventIsCreateSavedataCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics
	{
		struct ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "IsRandomPlayback", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventIsRandomPlayback_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventIsRandomPlaybackCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventIsRandomPlaybackCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventIsRandomPlaybackCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventIsRandomPlaybackCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "IsRandomPlaybackCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventIsRandomPlaybackCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSaveRequestJukeBoxData_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSaveRequestJukeBoxData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SaveRequestJukeBoxData", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSaveRequestJukeBoxData_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms
		{
			bool _create;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp__create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__create;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__create_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms*)Obj)->_create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__create = { "_create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__create_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__create,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetCreateSavedata", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetCreateSavedata_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetCreateSavedataCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			bool _create;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static void NewProp__create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__create;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCreateSavedataCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__create_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetCreateSavedataCore_Parms*)Obj)->_create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__create = { "_create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetCreateSavedataCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__create_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::NewProp__create,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetCreateSavedataCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetCreateSavedataCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms
		{
			int32 _id;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__id;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp__id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetCurrentPlayID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetCurrentPlayID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetCurrentPlayIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _id;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCurrentPlayIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetCurrentPlayIDCore_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::NewProp__id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetCurrentPlayIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetCurrentPlayIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms
		{
			int32 _targetId;
			bool _Enable;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxCheckListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxCheckListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxCheckListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms
		{
			int32 _targetId;
			bool _Enable;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxPlayedListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxPlayedListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxPlayedListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms
		{
			int32 _targetId;
			int32 _sortNo;
			bool _Enable;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sortNo;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__sortNo = { "_sortNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms, _sortNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__sortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxSortListForID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			int32 _targetId;
			int32 _sortNo;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sortNo;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__sortNo = { "_sortNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms, _sortNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__sortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetJukeBoxSortListForIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetJukeBoxSortListForIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetNextPlayID_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetNextPlayID_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayID_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetNextPlayID_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetNextPlayID", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayID_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetNextPlayIDCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetNextPlayIDCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::NewProp__stJukebox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetNextPlayIDCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayIDCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandom_Parms
		{
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandom_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandom_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandom_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetNextPlayIDForRandom", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandom_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandomCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandomCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::NewProp__stJukebox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetNextPlayIDForRandomCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetNextPlayIDForRandomCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms
		{
			bool _random;
			bool isTmp;
			uint8 _saveDataAccessFlag;
		};
		static void NewProp__random_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__random;
		static void NewProp_isTmp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTmp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__random_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms*)Obj)->_random = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__random = { "_random", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__random_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp_isTmp_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms*)Obj)->isTmp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp_isTmp = { "isTmp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp_isTmp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__random,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp_isTmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetRandomPlayback", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetRandomPlayback_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics
	{
		struct ELJukeBoxUtilityFunction_eventSetRandomPlaybackCore_Parms
		{
			FELTmpJukeboxSaveData _stJukebox;
			bool _random;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stJukebox;
		static void NewProp__random_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__random;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__stJukebox = { "_stJukebox", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventSetRandomPlaybackCore_Parms, _stJukebox), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__random_SetBit(void* Obj)
	{
		((ELJukeBoxUtilityFunction_eventSetRandomPlaybackCore_Parms*)Obj)->_random = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__random = { "_random", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELJukeBoxUtilityFunction_eventSetRandomPlaybackCore_Parms), &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__random_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__stJukebox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::NewProp__random,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "SetRandomPlaybackCore", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventSetRandomPlaybackCore_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics
	{
		struct ELJukeBoxUtilityFunction_eventUpdateJukeboxSaveData_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELJukeBoxUtilityFunction_eventUpdateJukeboxSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELJukeBoxUtilityFunction, nullptr, "UpdateJukeboxSaveData", nullptr, nullptr, sizeof(ELJukeBoxUtilityFunction_eventUpdateJukeboxSaveData_Parms), Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELJukeBoxUtilityFunction_NoRegister()
	{
		return UELJukeBoxUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_ConvertJukeboxSaveData, "ConvertJukeboxSaveData" }, // 3511628563
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCue, "GetCurrentJukeBoxPlayCue" }, // 3048054119
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentJukeBoxPlayCueCore, "GetCurrentJukeBoxPlayCueCore" }, // 2794814942
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayID, "GetCurrentPlayID" }, // 4092316302
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetCurrentPlayIDCore, "GetCurrentPlayIDCore" }, // 1386539135
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckList, "GetJukeBoxCheckList" }, // 2116515573
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListCore, "GetJukeBoxCheckListCore" }, // 925907544
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForID, "GetJukeBoxCheckListForID" }, // 2857478049
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxCheckListForIDCore, "GetJukeBoxCheckListForIDCore" }, // 2097219418
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxDataTableRowFromName, "GetJukeBoxDataTableRowFromName" }, // 1603316146
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeboxGameInstance, "GetJukeboxGameInstance" }, // 3507795921
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCue, "GetJukeBoxPlayCue" }, // 611828333
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayCueCore, "GetJukeBoxPlayCueCore" }, // 1766131020
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedList, "GetJukeBoxPlayedList" }, // 93771001
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListCore, "GetJukeBoxPlayedListCore" }, // 1020636007
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForID, "GetJukeBoxPlayedListForID" }, // 3163166643
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayedListForIDCore, "GetJukeBoxPlayedListForIDCore" }, // 2510772519
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayList, "GetJukeBoxPlayList" }, // 3198404348
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxPlayListCore, "GetJukeBoxPlayListCore" }, // 379076087
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortList, "GetJukeBoxSortList" }, // 4174321776
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListCore, "GetJukeBoxSortListCore" }, // 3066047139
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForID, "GetJukeBoxSortListForID" }, // 401545925
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetJukeBoxSortListForIDCore, "GetJukeBoxSortListForIDCore" }, // 134642710
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCue, "GetNextJukeBoxPlayCue" }, // 1863041534
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextJukeBoxPlayCueCore, "GetNextJukeBoxPlayCueCore" }, // 4217284904
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayID, "GetNextPlayID" }, // 2345230968
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_GetNextPlayIDCore, "GetNextPlayIDCore" }, // 3961428308
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxDataForDLC, "InitJukeBoxDataForDLC" }, // 850987216
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedList, "InitJukeBoxPlayedList" }, // 2562476000
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxPlayedListCore, "InitJukeBoxPlayedListCore" }, // 1601004018
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortList, "InitJukeBoxSortList" }, // 129746473
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_InitJukeBoxSortListCore, "InitJukeBoxSortListCore" }, // 1777466824
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedata, "IsCreateSavedata" }, // 947176992
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsCreateSavedataCore, "IsCreateSavedataCore" }, // 2705045826
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlayback, "IsRandomPlayback" }, // 1438312792
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_IsRandomPlaybackCore, "IsRandomPlaybackCore" }, // 3418534302
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SaveRequestJukeBoxData, "SaveRequestJukeBoxData" }, // 1605264599
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedata, "SetCreateSavedata" }, // 4194426191
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCreateSavedataCore, "SetCreateSavedataCore" }, // 3188253163
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayID, "SetCurrentPlayID" }, // 1705375054
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetCurrentPlayIDCore, "SetCurrentPlayIDCore" }, // 2248499284
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForID, "SetJukeBoxCheckListForID" }, // 1231419294
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxCheckListForIDCore, "SetJukeBoxCheckListForIDCore" }, // 2543056813
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForID, "SetJukeBoxPlayedListForID" }, // 1471871670
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxPlayedListForIDCore, "SetJukeBoxPlayedListForIDCore" }, // 2631340016
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForID, "SetJukeBoxSortListForID" }, // 2817008845
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetJukeBoxSortListForIDCore, "SetJukeBoxSortListForIDCore" }, // 3882830874
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayID, "SetNextPlayID" }, // 2519870100
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDCore, "SetNextPlayIDCore" }, // 85052204
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandom, "SetNextPlayIDForRandom" }, // 3473906365
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetNextPlayIDForRandomCore, "SetNextPlayIDForRandomCore" }, // 3300182555
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlayback, "SetRandomPlayback" }, // 1935543127
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_SetRandomPlaybackCore, "SetRandomPlaybackCore" }, // 1812747753
		{ &Z_Construct_UFunction_UELJukeBoxUtilityFunction_UpdateJukeboxSaveData, "UpdateJukeboxSaveData" }, // 2634334467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELJukeBoxUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELJukeBoxUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELJukeBoxUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::ClassParams = {
		&UELJukeBoxUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELJukeBoxUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELJukeBoxUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELJukeBoxUtilityFunction, 2599393038);
	template<> ABP_200508_API UClass* StaticClass<UELJukeBoxUtilityFunction>()
	{
		return UELJukeBoxUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELJukeBoxUtilityFunction(Z_Construct_UClass_UELJukeBoxUtilityFunction, &UELJukeBoxUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELJukeBoxUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELJukeBoxUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
