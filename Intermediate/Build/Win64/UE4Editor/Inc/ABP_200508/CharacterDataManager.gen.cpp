// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CharacterDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDataManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterDataManager();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FRosterInfoParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECharacterValidationResult();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterDataManager::execAddCustomWrestler)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_MyWrestlerObject);
		P_GET_UBOOL_REF(Z_Param_Out_bAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCharacterDataManager::AddCustomWrestler(Z_Param_MyWrestlerObject,Z_Param_Out_bAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execCheckCanAddNewScout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCanAddNewScout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execClearSaveRequests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSaveRequests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execClearUpdateFlagForTamperedData)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearUpdateFlagForTamperedData(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execCreateMyWrestlerDataObject)
	{
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->CreateMyWrestlerDataObject(EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execCreateScoutDataObjectFromTemplate)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTemplateScoutAsset>,Z_Param_TemplateAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->CreateScoutDataObjectFromTemplate(Z_Param_TemplateAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execDebug_GetPresetWrestler)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_Param);
		P_GET_PROPERTY(FNameProperty,Z_Param_RecordName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::Debug_GetPresetWrestler(Z_Param_Out_Param,Z_Param_RecordName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execDebug_GetPresetWrestlerList)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_RecordNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::Debug_GetPresetWrestlerList(Z_Param_Out_RecordNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execDebug_GetPresetWrestlerTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UCharacterDataManager::Debug_GetPresetWrestlerTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execDuplicateCustomWrestler)
	{
		P_GET_OBJECT_REF(UMyWrestlerDataObject,Z_Param_Out_DuplicatedObject);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::DuplicateCustomWrestler(Z_Param_Out_DuplicatedObject,(EBasicFunctionResult&)(Z_Param_Out_Result),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execDuplicateScoutWrestler)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_Src);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NewUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DuplicateScoutWrestler(Z_Param_Src,Z_Param_Out_NewUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execEntryMyCharacter)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_NewData);
		P_GET_UBOOL_REF(Z_Param_Out_bAddedNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EntryMyCharacter(Z_Param_NewData,Z_Param_Out_bAddedNew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execEntryTemporaryCharacter)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_AddData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EntryTemporaryCharacter(Z_Param_AddData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execEntryTemporaryWrestler)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_AddData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::EntryTemporaryWrestler(Z_Param_AddData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execFindMyCharacterDataObject)
	{
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->FindMyCharacterDataObject(Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGenerateCharacterDataObject)
	{
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GenerateCharacterDataObject(Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGenerateCharacterDataObjectByEnum)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GenerateCharacterDataObjectByEnum(EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetAvailableCustomWrestlerSlotNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCharacterDataManager::GetAvailableCustomWrestlerSlotNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetAvailableScoutNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAvailableScoutNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCharacterDataManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterDataManager**)Z_Param__Result=UCharacterDataManager::GetCharacterDataManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCharacterDataManagerInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterDataManager**)Z_Param__Result=UCharacterDataManager::GetCharacterDataManagerInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCharacterParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_STRUCT_REF(FRosterInfoParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCharacterParam(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCustomWrestlerList)
	{
		P_GET_TARRAY_REF(UMyWrestlerDataObject*,Z_Param_Out_OutList);
		P_GET_PROPERTY(FIntProperty,Z_Param_SaveFileIndex);
		P_GET_UBOOL(Z_Param_bRoster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomWrestlerList(Z_Param_Out_OutList,Z_Param_SaveFileIndex,Z_Param_bRoster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCustomWrestlerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCharacterDataManager::GetCustomWrestlerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCustomWrestlerObjects)
	{
		P_GET_TARRAY_REF(UMyWrestlerDataObject*,Z_Param_Out_OutRosterList);
		P_GET_TARRAY_REF(UMyWrestlerDataObject*,Z_Param_Out_OutScoutList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomWrestlerObjects(Z_Param_Out_OutRosterList,Z_Param_Out_OutScoutList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetCustomWrestlerUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::GetCustomWrestlerUID(Z_Param_Out_UID,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetDefaultCharacterDataObject)
	{
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_GET_UBOOL(Z_Param_bGuest);
		P_GET_UBOOL(Z_Param_bFullPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetDefaultCharacterDataObject(Z_Param_UID,Z_Param_bGuest,Z_Param_bFullPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetDefaultCharacterDataObjectByEnum)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_UBOOL(Z_Param_bGuest);
		P_GET_UBOOL(Z_Param_bFullPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetDefaultCharacterDataObjectByEnum(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_bGuest,Z_Param_bFullPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetGuestWrestlerDataObject)
	{
		P_GET_OBJECT_REF(UMyWrestlerDataObject,Z_Param_Out_GuestDataObject);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_UBOOL(Z_Param_bFullPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::GetGuestWrestlerDataObject(Z_Param_Out_GuestDataObject,(EBasicFunctionResult&)(Z_Param_Out_Result),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_bFullPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetMyCharacterDataObjectByEnum)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoutNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetMyCharacterDataObjectByEnum(EWrestlerID_N(Z_Param_WrestlerID),Z_Param_ScoutNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetMyWrestlerDataObjectBP)
	{
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=UCharacterDataManager::GetMyWrestlerDataObjectBP((EBasicFunctionResult&)(Z_Param_Out_Result),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetMyWrestlerDataObjectByEnumBP)
	{
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoutNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=UCharacterDataManager::GetMyWrestlerDataObjectByEnumBP((EBasicFunctionResult&)(Z_Param_Out_Result),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_ScoutNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetNeedSaveFileIndexList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNeedSaveFileIndexList(Z_Param_Out_OutList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetRosterInfoParamBP)
	{
		P_GET_STRUCT_REF(FRosterInfoParam,Z_Param_Out_RosterInfoParam);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::GetRosterInfoParamBP(Z_Param_Out_RosterInfoParam,(EBasicFunctionResult&)(Z_Param_Out_Result),EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetRosterNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRosterNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetRosterUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UID);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::GetRosterUID(Z_Param_Out_UID,EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetSaveDataNumMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCharacterDataManager::GetSaveDataNumMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetScoutDataObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetScoutDataObject(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetScoutNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScoutNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetTemporaryCharacterNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTemporaryCharacterNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetUIDList)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_Out);
		P_GET_UBOOL(Z_Param_bRoster);
		P_GET_UBOOL(Z_Param_bScout);
		P_GET_UBOOL(Z_Param_bNPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUIDList(Z_Param_Out_Out,Z_Param_bRoster,Z_Param_bScout,Z_Param_bNPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetUnlockedCustomWrestlerSlotNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCharacterDataManager::GetUnlockedCustomWrestlerSlotNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execGetWrestlerID)
	{
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UCharacterDataManager::GetWrestlerID(Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execHasSaveDataImported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSaveDataImported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execInitDB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitDB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execInitMyRosters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMyRosters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execIsValidCharacter)
	{
		P_GET_ENUM_REF(ECharacterValidationResult,Z_Param_Out_Result);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::IsValidCharacter((ECharacterValidationResult&)(Z_Param_Out_Result),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseCachedImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseCachedImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseMyCharacter)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_RemoveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseMyCharacter(Z_Param_RemoveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseMyCharacterByUID)
	{
		P_GET_STRUCT(FGuid,Z_Param_Remove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseMyCharacterByUID(Z_Param_Remove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseTemporaryCharacter)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_RemoveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseTemporaryCharacter(Z_Param_RemoveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseTemporaryWrestler)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_RemoveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::ReleaseTemporaryWrestler(Z_Param_RemoveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReleaseTemporaryWrestlerByUID)
	{
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::ReleaseTemporaryWrestlerByUID(Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execRemoveCustomWrestler)
	{
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_Result);
		P_GET_STRUCT(FGuid,Z_Param_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterDataManager::RemoveCustomWrestler((EBasicFunctionResult&)(Z_Param_Out_Result),Z_Param_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterDataManager::execSortWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortWrestler();
		P_NATIVE_END;
	}
	void UCharacterDataManager::StaticRegisterNativesUCharacterDataManager()
	{
		UClass* Class = UCharacterDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomWrestler", &UCharacterDataManager::execAddCustomWrestler },
			{ "CheckCanAddNewScout", &UCharacterDataManager::execCheckCanAddNewScout },
			{ "ClearSaveRequests", &UCharacterDataManager::execClearSaveRequests },
			{ "ClearUpdateFlagForTamperedData", &UCharacterDataManager::execClearUpdateFlagForTamperedData },
			{ "CreateMyWrestlerDataObject", &UCharacterDataManager::execCreateMyWrestlerDataObject },
			{ "CreateScoutDataObjectFromTemplate", &UCharacterDataManager::execCreateScoutDataObjectFromTemplate },
			{ "Debug_GetPresetWrestler", &UCharacterDataManager::execDebug_GetPresetWrestler },
			{ "Debug_GetPresetWrestlerList", &UCharacterDataManager::execDebug_GetPresetWrestlerList },
			{ "Debug_GetPresetWrestlerTable", &UCharacterDataManager::execDebug_GetPresetWrestlerTable },
			{ "DuplicateCustomWrestler", &UCharacterDataManager::execDuplicateCustomWrestler },
			{ "DuplicateScoutWrestler", &UCharacterDataManager::execDuplicateScoutWrestler },
			{ "EntryMyCharacter", &UCharacterDataManager::execEntryMyCharacter },
			{ "EntryTemporaryCharacter", &UCharacterDataManager::execEntryTemporaryCharacter },
			{ "EntryTemporaryWrestler", &UCharacterDataManager::execEntryTemporaryWrestler },
			{ "FindMyCharacterDataObject", &UCharacterDataManager::execFindMyCharacterDataObject },
			{ "GenerateCharacterDataObject", &UCharacterDataManager::execGenerateCharacterDataObject },
			{ "GenerateCharacterDataObjectByEnum", &UCharacterDataManager::execGenerateCharacterDataObjectByEnum },
			{ "GetAvailableCustomWrestlerSlotNum", &UCharacterDataManager::execGetAvailableCustomWrestlerSlotNum },
			{ "GetAvailableScoutNum", &UCharacterDataManager::execGetAvailableScoutNum },
			{ "GetCharacterDataManager", &UCharacterDataManager::execGetCharacterDataManager },
			{ "GetCharacterDataManagerInstance", &UCharacterDataManager::execGetCharacterDataManagerInstance },
			{ "GetCharacterParam", &UCharacterDataManager::execGetCharacterParam },
			{ "GetCustomWrestlerList", &UCharacterDataManager::execGetCustomWrestlerList },
			{ "GetCustomWrestlerNum", &UCharacterDataManager::execGetCustomWrestlerNum },
			{ "GetCustomWrestlerObjects", &UCharacterDataManager::execGetCustomWrestlerObjects },
			{ "GetCustomWrestlerUID", &UCharacterDataManager::execGetCustomWrestlerUID },
			{ "GetDefaultCharacterDataObject", &UCharacterDataManager::execGetDefaultCharacterDataObject },
			{ "GetDefaultCharacterDataObjectByEnum", &UCharacterDataManager::execGetDefaultCharacterDataObjectByEnum },
			{ "GetGuestWrestlerDataObject", &UCharacterDataManager::execGetGuestWrestlerDataObject },
			{ "GetMyCharacterDataObjectByEnum", &UCharacterDataManager::execGetMyCharacterDataObjectByEnum },
			{ "GetMyWrestlerDataObjectBP", &UCharacterDataManager::execGetMyWrestlerDataObjectBP },
			{ "GetMyWrestlerDataObjectByEnumBP", &UCharacterDataManager::execGetMyWrestlerDataObjectByEnumBP },
			{ "GetNeedSaveFileIndexList", &UCharacterDataManager::execGetNeedSaveFileIndexList },
			{ "GetRosterInfoParamBP", &UCharacterDataManager::execGetRosterInfoParamBP },
			{ "GetRosterNum", &UCharacterDataManager::execGetRosterNum },
			{ "GetRosterUID", &UCharacterDataManager::execGetRosterUID },
			{ "GetSaveDataNumMax", &UCharacterDataManager::execGetSaveDataNumMax },
			{ "GetScoutDataObject", &UCharacterDataManager::execGetScoutDataObject },
			{ "GetScoutNum", &UCharacterDataManager::execGetScoutNum },
			{ "GetTemporaryCharacterNum", &UCharacterDataManager::execGetTemporaryCharacterNum },
			{ "GetUIDList", &UCharacterDataManager::execGetUIDList },
			{ "GetUnlockedCustomWrestlerSlotNum", &UCharacterDataManager::execGetUnlockedCustomWrestlerSlotNum },
			{ "GetWrestlerID", &UCharacterDataManager::execGetWrestlerID },
			{ "HasSaveDataImported", &UCharacterDataManager::execHasSaveDataImported },
			{ "InitDB", &UCharacterDataManager::execInitDB },
			{ "InitMyRosters", &UCharacterDataManager::execInitMyRosters },
			{ "IsValidCharacter", &UCharacterDataManager::execIsValidCharacter },
			{ "OnInitialize", &UCharacterDataManager::execOnInitialize },
			{ "ReleaseCachedImage", &UCharacterDataManager::execReleaseCachedImage },
			{ "ReleaseMyCharacter", &UCharacterDataManager::execReleaseMyCharacter },
			{ "ReleaseMyCharacterByUID", &UCharacterDataManager::execReleaseMyCharacterByUID },
			{ "ReleaseTemporaryCharacter", &UCharacterDataManager::execReleaseTemporaryCharacter },
			{ "ReleaseTemporaryWrestler", &UCharacterDataManager::execReleaseTemporaryWrestler },
			{ "ReleaseTemporaryWrestlerByUID", &UCharacterDataManager::execReleaseTemporaryWrestlerByUID },
			{ "RemoveCustomWrestler", &UCharacterDataManager::execRemoveCustomWrestler },
			{ "Reset", &UCharacterDataManager::execReset },
			{ "SortWrestler", &UCharacterDataManager::execSortWrestler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics
	{
		struct CharacterDataManager_eventAddCustomWrestler_Parms
		{
			UMyWrestlerDataObject* MyWrestlerObject;
			bool bAdded;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWrestlerObject;
		static void NewProp_bAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdded;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_MyWrestlerObject = { "MyWrestlerObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventAddCustomWrestler_Parms, MyWrestlerObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_bAdded_SetBit(void* Obj)
	{
		((CharacterDataManager_eventAddCustomWrestler_Parms*)Obj)->bAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_bAdded = { "bAdded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventAddCustomWrestler_Parms), &Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_bAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventAddCustomWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventAddCustomWrestler_Parms), &Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_MyWrestlerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_bAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "AddCustomWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventAddCustomWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics
	{
		struct CharacterDataManager_eventCheckCanAddNewScout_Parms
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
	void Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventCheckCanAddNewScout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventCheckCanAddNewScout_Parms), &Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "CheckCanAddNewScout", nullptr, nullptr, sizeof(CharacterDataManager_eventCheckCanAddNewScout_Parms), Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ClearSaveRequests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics
	{
		struct CharacterDataManager_eventClearUpdateFlagForTamperedData_Parms
		{
			UMyWrestlerDataObject* Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventClearUpdateFlagForTamperedData_Parms, Target), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventClearUpdateFlagForTamperedData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventClearUpdateFlagForTamperedData_Parms), &Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ClearUpdateFlagForTamperedData", nullptr, nullptr, sizeof(CharacterDataManager_eventClearUpdateFlagForTamperedData_Parms), Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics
	{
		struct CharacterDataManager_eventCreateMyWrestlerDataObject_Parms
		{
			EGender Gender;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventCreateMyWrestlerDataObject_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventCreateMyWrestlerDataObject_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "CreateMyWrestlerDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventCreateMyWrestlerDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics
	{
		struct CharacterDataManager_eventCreateScoutDataObjectFromTemplate_Parms
		{
			TSoftObjectPtr<UTemplateScoutAsset> TemplateAssetPath;
			UMyWrestlerDataObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TemplateAssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_TemplateAssetPath = { "TemplateAssetPath", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventCreateScoutDataObjectFromTemplate_Parms, TemplateAssetPath), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventCreateScoutDataObjectFromTemplate_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_TemplateAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "CreateScoutDataObjectFromTemplate", nullptr, nullptr, sizeof(CharacterDataManager_eventCreateScoutDataObjectFromTemplate_Parms), Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics
	{
		struct CharacterDataManager_eventDebug_GetPresetWrestler_Parms
		{
			FWrestlerSetupParam Param;
			FName RecordName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RecordName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDebug_GetPresetWrestler_Parms, Param), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_RecordName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDebug_GetPresetWrestler_Parms, RecordName), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_RecordName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_RecordName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::NewProp_RecordName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "Debug_GetPresetWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventDebug_GetPresetWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics
	{
		struct CharacterDataManager_eventDebug_GetPresetWrestlerList_Parms
		{
			TArray<FName> RecordNames;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RecordNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecordNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::NewProp_RecordNames_Inner = { "RecordNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::NewProp_RecordNames = { "RecordNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDebug_GetPresetWrestlerList_Parms, RecordNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::NewProp_RecordNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::NewProp_RecordNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "Debug_GetPresetWrestlerList", nullptr, nullptr, sizeof(CharacterDataManager_eventDebug_GetPresetWrestlerList_Parms), Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics
	{
		struct CharacterDataManager_eventDebug_GetPresetWrestlerTable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDebug_GetPresetWrestlerTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "Debug_GetPresetWrestlerTable", nullptr, nullptr, sizeof(CharacterDataManager_eventDebug_GetPresetWrestlerTable_Parms), Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics
	{
		struct CharacterDataManager_eventDuplicateCustomWrestler_Parms
		{
			UMyWrestlerDataObject* DuplicatedObject;
			EBasicFunctionResult Result;
			FGuid UID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DuplicatedObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_DuplicatedObject = { "DuplicatedObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDuplicateCustomWrestler_Parms, DuplicatedObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDuplicateCustomWrestler_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDuplicateCustomWrestler_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_DuplicatedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::NewProp_UID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "DuplicateCustomWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventDuplicateCustomWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics
	{
		struct CharacterDataManager_eventDuplicateScoutWrestler_Parms
		{
			const UMyWrestlerDataObject* Src;
			FGuid NewUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Src_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Src;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_Src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_Src = { "Src", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDuplicateScoutWrestler_Parms, Src), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_Src_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_Src_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_NewUID = { "NewUID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventDuplicateScoutWrestler_Parms, NewUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventDuplicateScoutWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventDuplicateScoutWrestler_Parms), &Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_Src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_NewUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "DuplicateScoutWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventDuplicateScoutWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics
	{
		struct CharacterDataManager_eventEntryMyCharacter_Parms
		{
			UMyWrestlerDataObject* NewData;
			bool bAddedNew;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewData;
		static void NewProp_bAddedNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddedNew;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventEntryMyCharacter_Parms, NewData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_bAddedNew_SetBit(void* Obj)
	{
		((CharacterDataManager_eventEntryMyCharacter_Parms*)Obj)->bAddedNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_bAddedNew = { "bAddedNew", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventEntryMyCharacter_Parms), &Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_bAddedNew_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventEntryMyCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventEntryMyCharacter_Parms), &Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_NewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_bAddedNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "EntryMyCharacter", nullptr, nullptr, sizeof(CharacterDataManager_eventEntryMyCharacter_Parms), Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics
	{
		struct CharacterDataManager_eventEntryTemporaryCharacter_Parms
		{
			UMyWrestlerDataObject* AddData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::NewProp_AddData = { "AddData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventEntryTemporaryCharacter_Parms, AddData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::NewProp_AddData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "EntryTemporaryCharacter", nullptr, nullptr, sizeof(CharacterDataManager_eventEntryTemporaryCharacter_Parms), Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics
	{
		struct CharacterDataManager_eventEntryTemporaryWrestler_Parms
		{
			UMyWrestlerDataObject* AddData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::NewProp_AddData = { "AddData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventEntryTemporaryWrestler_Parms, AddData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::NewProp_AddData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "EntryTemporaryWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventEntryTemporaryWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics
	{
		struct CharacterDataManager_eventFindMyCharacterDataObject_Parms
		{
			FGuid UID;
			UMyWrestlerDataObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventFindMyCharacterDataObject_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventFindMyCharacterDataObject_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "FindMyCharacterDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventFindMyCharacterDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics
	{
		struct CharacterDataManager_eventGenerateCharacterDataObject_Parms
		{
			FGuid UID;
			UMyWrestlerDataObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGenerateCharacterDataObject_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGenerateCharacterDataObject_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GenerateCharacterDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventGenerateCharacterDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics
	{
		struct CharacterDataManager_eventGenerateCharacterDataObjectByEnum_Parms
		{
			EWrestlerID_N WrestlerID;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGenerateCharacterDataObjectByEnum_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGenerateCharacterDataObjectByEnum_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GenerateCharacterDataObjectByEnum", nullptr, nullptr, sizeof(CharacterDataManager_eventGenerateCharacterDataObjectByEnum_Parms), Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics
	{
		struct CharacterDataManager_eventGetAvailableCustomWrestlerSlotNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetAvailableCustomWrestlerSlotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetAvailableCustomWrestlerSlotNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetAvailableCustomWrestlerSlotNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics
	{
		struct CharacterDataManager_eventGetAvailableScoutNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetAvailableScoutNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetAvailableScoutNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetAvailableScoutNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics
	{
		struct CharacterDataManager_eventGetCharacterDataManager_Parms
		{
			UCharacterDataManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCharacterDataManager_Parms, ReturnValue), Z_Construct_UClass_UCharacterDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCharacterDataManager", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCharacterDataManager_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics
	{
		struct CharacterDataManager_eventGetCharacterDataManagerInstance_Parms
		{
			UCharacterDataManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCharacterDataManagerInstance_Parms, ReturnValue), Z_Construct_UClass_UCharacterDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCharacterDataManagerInstance", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCharacterDataManagerInstance_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics
	{
		struct CharacterDataManager_eventGetCharacterParam_Parms
		{
			EWrestlerID_N WrestlerID;
			FRosterInfoParam Out;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCharacterParam_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCharacterParam_Parms, Out), Z_Construct_UScriptStruct_FRosterInfoParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetCharacterParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetCharacterParam_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCharacterParam", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCharacterParam_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics
	{
		struct CharacterDataManager_eventGetCustomWrestlerList_Parms
		{
			TArray<UMyWrestlerDataObject*> OutList;
			int32 SaveFileIndex;
			bool bRoster;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveFileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveFileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoster_MetaData[];
#endif
		static void NewProp_bRoster_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_OutList_Inner = { "OutList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_OutList = { "OutList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerList_Parms, OutList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_SaveFileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_SaveFileIndex = { "SaveFileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerList_Parms, SaveFileIndex), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_SaveFileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_SaveFileIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetCustomWrestlerList_Parms*)Obj)->bRoster = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster = { "bRoster", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetCustomWrestlerList_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_OutList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_OutList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_SaveFileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::NewProp_bRoster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCustomWrestlerList", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCustomWrestlerList_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics
	{
		struct CharacterDataManager_eventGetCustomWrestlerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCustomWrestlerNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCustomWrestlerNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics
	{
		struct CharacterDataManager_eventGetCustomWrestlerObjects_Parms
		{
			TArray<UMyWrestlerDataObject*> OutRosterList;
			TArray<UMyWrestlerDataObject*> OutScoutList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutRosterList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRosterList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutScoutList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutScoutList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutRosterList_Inner = { "OutRosterList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutRosterList = { "OutRosterList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerObjects_Parms, OutRosterList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutScoutList_Inner = { "OutScoutList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutScoutList = { "OutScoutList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerObjects_Parms, OutScoutList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutRosterList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutRosterList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutScoutList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::NewProp_OutScoutList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCustomWrestlerObjects", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCustomWrestlerObjects_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics
	{
		struct CharacterDataManager_eventGetCustomWrestlerUID_Parms
		{
			FGuid UID;
			int32 Index;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerUID_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetCustomWrestlerUID_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetCustomWrestlerUID", nullptr, nullptr, sizeof(CharacterDataManager_eventGetCustomWrestlerUID_Parms), Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics
	{
		struct CharacterDataManager_eventGetDefaultCharacterDataObject_Parms
		{
			FGuid UID;
			bool bGuest;
			bool bFullPreset;
			UMyWrestlerDataObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGuest_MetaData[];
#endif
		static void NewProp_bGuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullPreset_MetaData[];
#endif
		static void NewProp_bFullPreset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullPreset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetDefaultCharacterDataObject_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetDefaultCharacterDataObject_Parms*)Obj)->bGuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest = { "bGuest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetDefaultCharacterDataObject_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetDefaultCharacterDataObject_Parms*)Obj)->bFullPreset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset = { "bFullPreset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetDefaultCharacterDataObject_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetDefaultCharacterDataObject_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bGuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_bFullPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetDefaultCharacterDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventGetDefaultCharacterDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics
	{
		struct CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms
		{
			EWrestlerID_N WrestlerID;
			bool bGuest;
			bool bFullPreset;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGuest_MetaData[];
#endif
		static void NewProp_bGuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullPreset_MetaData[];
#endif
		static void NewProp_bFullPreset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullPreset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms*)Obj)->bGuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest = { "bGuest", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms*)Obj)->bFullPreset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset = { "bFullPreset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bGuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_bFullPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetDefaultCharacterDataObjectByEnum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetDefaultCharacterDataObjectByEnum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics
	{
		struct CharacterDataManager_eventGetGuestWrestlerDataObject_Parms
		{
			UMyWrestlerDataObject* GuestDataObject;
			EBasicFunctionResult Result;
			EWrestlerID_N WrestlerID;
			bool bFullPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuestDataObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullPreset_MetaData[];
#endif
		static void NewProp_bFullPreset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_GuestDataObject = { "GuestDataObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetGuestWrestlerDataObject_Parms, GuestDataObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetGuestWrestlerDataObject_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetGuestWrestlerDataObject_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetGuestWrestlerDataObject_Parms*)Obj)->bFullPreset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset = { "bFullPreset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetGuestWrestlerDataObject_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_GuestDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::NewProp_bFullPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetGuestWrestlerDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventGetGuestWrestlerDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics
	{
		struct CharacterDataManager_eventGetMyCharacterDataObjectByEnum_Parms
		{
			EWrestlerID_N WrestlerID;
			int32 ScoutNo;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoutNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoutNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyCharacterDataObjectByEnum_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ScoutNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ScoutNo = { "ScoutNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyCharacterDataObjectByEnum_Parms, ScoutNo), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ScoutNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ScoutNo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyCharacterDataObjectByEnum_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ScoutNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetMyCharacterDataObjectByEnum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetMyCharacterDataObjectByEnum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics
	{
		struct CharacterDataManager_eventGetMyWrestlerDataObjectBP_Parms
		{
			EBasicFunctionResult Result;
			FGuid UID;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectBP_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectBP_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectBP_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetMyWrestlerDataObjectBP", nullptr, nullptr, sizeof(CharacterDataManager_eventGetMyWrestlerDataObjectBP_Parms), Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics
	{
		struct CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms
		{
			EBasicFunctionResult Result;
			EWrestlerID_N WrestlerID;
			int32 ScoutNo;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoutNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoutNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ScoutNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ScoutNo = { "ScoutNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms, ScoutNo), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ScoutNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ScoutNo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ScoutNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetMyWrestlerDataObjectByEnumBP", nullptr, nullptr, sizeof(CharacterDataManager_eventGetMyWrestlerDataObjectByEnumBP_Parms), Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics
	{
		struct CharacterDataManager_eventGetNeedSaveFileIndexList_Parms
		{
			TArray<int32> OutList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::NewProp_OutList_Inner = { "OutList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::NewProp_OutList = { "OutList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetNeedSaveFileIndexList_Parms, OutList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::NewProp_OutList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::NewProp_OutList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetNeedSaveFileIndexList", nullptr, nullptr, sizeof(CharacterDataManager_eventGetNeedSaveFileIndexList_Parms), Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics
	{
		struct CharacterDataManager_eventGetRosterInfoParamBP_Parms
		{
			FRosterInfoParam RosterInfoParam;
			EBasicFunctionResult Result;
			EWrestlerID_N WrestlerID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RosterInfoParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_RosterInfoParam = { "RosterInfoParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterInfoParamBP_Parms, RosterInfoParam), Z_Construct_UScriptStruct_FRosterInfoParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterInfoParamBP_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterInfoParamBP_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_RosterInfoParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::NewProp_WrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetRosterInfoParamBP", nullptr, nullptr, sizeof(CharacterDataManager_eventGetRosterInfoParamBP_Parms), Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics
	{
		struct CharacterDataManager_eventGetRosterNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetRosterNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetRosterNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetRosterNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetRosterNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics
	{
		struct CharacterDataManager_eventGetRosterUID_Parms
		{
			FGuid UID;
			EWrestlerID_N WrestlerID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterUID_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetRosterUID_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::NewProp_WrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetRosterUID", nullptr, nullptr, sizeof(CharacterDataManager_eventGetRosterUID_Parms), Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetRosterUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetRosterUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics
	{
		struct CharacterDataManager_eventGetSaveDataNumMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetSaveDataNumMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetSaveDataNumMax", nullptr, nullptr, sizeof(CharacterDataManager_eventGetSaveDataNumMax_Parms), Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics
	{
		struct CharacterDataManager_eventGetScoutDataObject_Parms
		{
			int32 Index;
			UMyWrestlerDataObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetScoutDataObject_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetScoutDataObject_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetScoutDataObject", nullptr, nullptr, sizeof(CharacterDataManager_eventGetScoutDataObject_Parms), Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics
	{
		struct CharacterDataManager_eventGetScoutNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetScoutNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetScoutNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetScoutNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetScoutNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetScoutNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics
	{
		struct CharacterDataManager_eventGetTemporaryCharacterNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetTemporaryCharacterNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetTemporaryCharacterNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetTemporaryCharacterNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics
	{
		struct CharacterDataManager_eventGetUIDList_Parms
		{
			TArray<FGuid> Out;
			bool bRoster;
			bool bScout;
			bool bNPC;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoster_MetaData[];
#endif
		static void NewProp_bRoster_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScout_MetaData[];
#endif
		static void NewProp_bScout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNPC_MetaData[];
#endif
		static void NewProp_bNPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetUIDList_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetUIDList_Parms*)Obj)->bRoster = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster = { "bRoster", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetUIDList_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetUIDList_Parms*)Obj)->bScout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout = { "bScout", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetUIDList_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC_SetBit(void* Obj)
	{
		((CharacterDataManager_eventGetUIDList_Parms*)Obj)->bNPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC = { "bNPC", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventGetUIDList_Parms), &Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bRoster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bScout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::NewProp_bNPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetUIDList", nullptr, nullptr, sizeof(CharacterDataManager_eventGetUIDList_Parms), Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetUIDList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetUIDList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics
	{
		struct CharacterDataManager_eventGetUnlockedCustomWrestlerSlotNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetUnlockedCustomWrestlerSlotNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetUnlockedCustomWrestlerSlotNum", nullptr, nullptr, sizeof(CharacterDataManager_eventGetUnlockedCustomWrestlerSlotNum_Parms), Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics
	{
		struct CharacterDataManager_eventGetWrestlerID_Parms
		{
			FGuid UID;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetWrestlerID_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(CharacterDataManager_eventGetWrestlerID_Parms), Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics
	{
		struct CharacterDataManager_eventHasSaveDataImported_Parms
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
	void Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventHasSaveDataImported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventHasSaveDataImported_Parms), &Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "HasSaveDataImported", nullptr, nullptr, sizeof(CharacterDataManager_eventHasSaveDataImported_Parms), Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "InitDB", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_InitDB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_InitDB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "InitMyRosters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_InitMyRosters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_InitMyRosters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics
	{
		struct CharacterDataManager_eventIsValidCharacter_Parms
		{
			ECharacterValidationResult Result;
			FGuid UID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventIsValidCharacter_Parms, Result), Z_Construct_UEnum_ABP_200508_ECharacterValidationResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventIsValidCharacter_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::NewProp_UID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "IsValidCharacter", nullptr, nullptr, sizeof(CharacterDataManager_eventIsValidCharacter_Parms), Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseCachedImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics
	{
		struct CharacterDataManager_eventReleaseMyCharacter_Parms
		{
			UMyWrestlerDataObject* RemoveData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_RemoveData = { "RemoveData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventReleaseMyCharacter_Parms, RemoveData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventReleaseMyCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventReleaseMyCharacter_Parms), &Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_RemoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseMyCharacter", nullptr, nullptr, sizeof(CharacterDataManager_eventReleaseMyCharacter_Parms), Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics
	{
		struct CharacterDataManager_eventReleaseMyCharacterByUID_Parms
		{
			FGuid Remove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Remove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Remove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_Remove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_Remove = { "Remove", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventReleaseMyCharacterByUID_Parms, Remove), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_Remove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_Remove_MetaData)) };
	void Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterDataManager_eventReleaseMyCharacterByUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterDataManager_eventReleaseMyCharacterByUID_Parms), &Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_Remove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseMyCharacterByUID", nullptr, nullptr, sizeof(CharacterDataManager_eventReleaseMyCharacterByUID_Parms), Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics
	{
		struct CharacterDataManager_eventReleaseTemporaryCharacter_Parms
		{
			const UMyWrestlerDataObject* RemoveData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::NewProp_RemoveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::NewProp_RemoveData = { "RemoveData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventReleaseTemporaryCharacter_Parms, RemoveData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::NewProp_RemoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::NewProp_RemoveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::NewProp_RemoveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseTemporaryCharacter", nullptr, nullptr, sizeof(CharacterDataManager_eventReleaseTemporaryCharacter_Parms), Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics
	{
		struct CharacterDataManager_eventReleaseTemporaryWrestler_Parms
		{
			const UMyWrestlerDataObject* RemoveData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::NewProp_RemoveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::NewProp_RemoveData = { "RemoveData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventReleaseTemporaryWrestler_Parms, RemoveData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::NewProp_RemoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::NewProp_RemoveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::NewProp_RemoveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseTemporaryWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventReleaseTemporaryWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics
	{
		struct CharacterDataManager_eventReleaseTemporaryWrestlerByUID_Parms
		{
			FGuid UID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventReleaseTemporaryWrestlerByUID_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::NewProp_UID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "ReleaseTemporaryWrestlerByUID", nullptr, nullptr, sizeof(CharacterDataManager_eventReleaseTemporaryWrestlerByUID_Parms), Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics
	{
		struct CharacterDataManager_eventRemoveCustomWrestler_Parms
		{
			EBasicFunctionResult Result;
			FGuid UID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventRemoveCustomWrestler_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_UID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterDataManager_eventRemoveCustomWrestler_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::NewProp_UID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "RemoveCustomWrestler", nullptr, nullptr, sizeof(CharacterDataManager_eventRemoveCustomWrestler_Parms), Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterDataManager, nullptr, "SortWrestler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterDataManager_SortWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterDataManager_SortWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterDataManager_NoRegister()
	{
		return UCharacterDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PresetWrestlers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetWrestlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PresetWrestlers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PickedPresetWrestler_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickedPresetWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PickedPresetWrestler;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRosters_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyRosters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyRosters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MyRosters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyScouts_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyScouts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyScouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MyScouts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Temporaries_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Temporaries_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temporaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Temporaries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RosterData_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RosterData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RosterData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RosterData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NpcData_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NpcData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NpcData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NpcData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImported_MetaData[];
#endif
		static void NewProp_bImported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterDataManager_AddCustomWrestler, "AddCustomWrestler" }, // 3089198301
		{ &Z_Construct_UFunction_UCharacterDataManager_CheckCanAddNewScout, "CheckCanAddNewScout" }, // 1508927138
		{ &Z_Construct_UFunction_UCharacterDataManager_ClearSaveRequests, "ClearSaveRequests" }, // 2566558409
		{ &Z_Construct_UFunction_UCharacterDataManager_ClearUpdateFlagForTamperedData, "ClearUpdateFlagForTamperedData" }, // 3318932122
		{ &Z_Construct_UFunction_UCharacterDataManager_CreateMyWrestlerDataObject, "CreateMyWrestlerDataObject" }, // 2609816921
		{ &Z_Construct_UFunction_UCharacterDataManager_CreateScoutDataObjectFromTemplate, "CreateScoutDataObjectFromTemplate" }, // 4026388162
		{ &Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestler, "Debug_GetPresetWrestler" }, // 3034530102
		{ &Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerList, "Debug_GetPresetWrestlerList" }, // 3547309214
		{ &Z_Construct_UFunction_UCharacterDataManager_Debug_GetPresetWrestlerTable, "Debug_GetPresetWrestlerTable" }, // 2474544932
		{ &Z_Construct_UFunction_UCharacterDataManager_DuplicateCustomWrestler, "DuplicateCustomWrestler" }, // 800424801
		{ &Z_Construct_UFunction_UCharacterDataManager_DuplicateScoutWrestler, "DuplicateScoutWrestler" }, // 1769146306
		{ &Z_Construct_UFunction_UCharacterDataManager_EntryMyCharacter, "EntryMyCharacter" }, // 44376938
		{ &Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryCharacter, "EntryTemporaryCharacter" }, // 63669271
		{ &Z_Construct_UFunction_UCharacterDataManager_EntryTemporaryWrestler, "EntryTemporaryWrestler" }, // 2996872859
		{ &Z_Construct_UFunction_UCharacterDataManager_FindMyCharacterDataObject, "FindMyCharacterDataObject" }, // 3658171655
		{ &Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObject, "GenerateCharacterDataObject" }, // 2522140660
		{ &Z_Construct_UFunction_UCharacterDataManager_GenerateCharacterDataObjectByEnum, "GenerateCharacterDataObjectByEnum" }, // 3287822040
		{ &Z_Construct_UFunction_UCharacterDataManager_GetAvailableCustomWrestlerSlotNum, "GetAvailableCustomWrestlerSlotNum" }, // 2001105485
		{ &Z_Construct_UFunction_UCharacterDataManager_GetAvailableScoutNum, "GetAvailableScoutNum" }, // 1813774460
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManager, "GetCharacterDataManager" }, // 195242784
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCharacterDataManagerInstance, "GetCharacterDataManagerInstance" }, // 3617031392
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCharacterParam, "GetCharacterParam" }, // 2017108569
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerList, "GetCustomWrestlerList" }, // 1073394563
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerNum, "GetCustomWrestlerNum" }, // 329757445
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerObjects, "GetCustomWrestlerObjects" }, // 2183431028
		{ &Z_Construct_UFunction_UCharacterDataManager_GetCustomWrestlerUID, "GetCustomWrestlerUID" }, // 1142918675
		{ &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObject, "GetDefaultCharacterDataObject" }, // 372577874
		{ &Z_Construct_UFunction_UCharacterDataManager_GetDefaultCharacterDataObjectByEnum, "GetDefaultCharacterDataObjectByEnum" }, // 1446254471
		{ &Z_Construct_UFunction_UCharacterDataManager_GetGuestWrestlerDataObject, "GetGuestWrestlerDataObject" }, // 1380266002
		{ &Z_Construct_UFunction_UCharacterDataManager_GetMyCharacterDataObjectByEnum, "GetMyCharacterDataObjectByEnum" }, // 1581533860
		{ &Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectBP, "GetMyWrestlerDataObjectBP" }, // 791337789
		{ &Z_Construct_UFunction_UCharacterDataManager_GetMyWrestlerDataObjectByEnumBP, "GetMyWrestlerDataObjectByEnumBP" }, // 1479850291
		{ &Z_Construct_UFunction_UCharacterDataManager_GetNeedSaveFileIndexList, "GetNeedSaveFileIndexList" }, // 3686528948
		{ &Z_Construct_UFunction_UCharacterDataManager_GetRosterInfoParamBP, "GetRosterInfoParamBP" }, // 741461729
		{ &Z_Construct_UFunction_UCharacterDataManager_GetRosterNum, "GetRosterNum" }, // 1796397430
		{ &Z_Construct_UFunction_UCharacterDataManager_GetRosterUID, "GetRosterUID" }, // 988100102
		{ &Z_Construct_UFunction_UCharacterDataManager_GetSaveDataNumMax, "GetSaveDataNumMax" }, // 390884231
		{ &Z_Construct_UFunction_UCharacterDataManager_GetScoutDataObject, "GetScoutDataObject" }, // 498113216
		{ &Z_Construct_UFunction_UCharacterDataManager_GetScoutNum, "GetScoutNum" }, // 1640721959
		{ &Z_Construct_UFunction_UCharacterDataManager_GetTemporaryCharacterNum, "GetTemporaryCharacterNum" }, // 688093933
		{ &Z_Construct_UFunction_UCharacterDataManager_GetUIDList, "GetUIDList" }, // 3267268451
		{ &Z_Construct_UFunction_UCharacterDataManager_GetUnlockedCustomWrestlerSlotNum, "GetUnlockedCustomWrestlerSlotNum" }, // 1194094700
		{ &Z_Construct_UFunction_UCharacterDataManager_GetWrestlerID, "GetWrestlerID" }, // 655014378
		{ &Z_Construct_UFunction_UCharacterDataManager_HasSaveDataImported, "HasSaveDataImported" }, // 2810446733
		{ &Z_Construct_UFunction_UCharacterDataManager_InitDB, "InitDB" }, // 194727894
		{ &Z_Construct_UFunction_UCharacterDataManager_InitMyRosters, "InitMyRosters" }, // 3695341812
		{ &Z_Construct_UFunction_UCharacterDataManager_IsValidCharacter, "IsValidCharacter" }, // 2257515252
		{ &Z_Construct_UFunction_UCharacterDataManager_OnInitialize, "OnInitialize" }, // 1908926560
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseCachedImage, "ReleaseCachedImage" }, // 3369107799
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacter, "ReleaseMyCharacter" }, // 24971675
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseMyCharacterByUID, "ReleaseMyCharacterByUID" }, // 4162937096
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryCharacter, "ReleaseTemporaryCharacter" }, // 3450557168
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestler, "ReleaseTemporaryWrestler" }, // 82034510
		{ &Z_Construct_UFunction_UCharacterDataManager_ReleaseTemporaryWrestlerByUID, "ReleaseTemporaryWrestlerByUID" }, // 2564968802
		{ &Z_Construct_UFunction_UCharacterDataManager_RemoveCustomWrestler, "RemoveCustomWrestler" }, // 1248854108
		{ &Z_Construct_UFunction_UCharacterDataManager_Reset, "Reset" }, // 3214535823
		{ &Z_Construct_UFunction_UCharacterDataManager_SortWrestler, "SortWrestler" }, // 2667329854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers_ElementProp = { "PresetWrestlers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers = { "PresetWrestlers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, PresetWrestlers), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler_ElementProp = { "PickedPresetWrestler", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler = { "PickedPresetWrestler", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, PickedPresetWrestler), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_ValueProp = { "MyRosters", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_Key_KeyProp = { "MyRosters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters = { "MyRosters", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, MyRosters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_ValueProp = { "MyScouts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_Key_KeyProp = { "MyScouts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts = { "MyScouts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, MyScouts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_ValueProp = { "Temporaries", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_Key_KeyProp = { "Temporaries_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries = { "Temporaries", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, Temporaries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_ValueProp = { "RosterData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRosterInfoParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_Key_KeyProp = { "RosterData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData = { "RosterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, RosterData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_ValueProp = { "NpcData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRosterInfoParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_Key_KeyProp = { "NpcData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData = { "NpcData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataManager, NpcData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterDataManager" },
		{ "ModuleRelativePath", "Public/CharacterDataManager.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported_SetBit(void* Obj)
	{
		((UCharacterDataManager*)Obj)->bImported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported = { "bImported", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCharacterDataManager), &Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PresetWrestlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_PickedPresetWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyRosters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_MyScouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_Temporaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_RosterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_NpcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataManager_Statics::NewProp_bImported,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCharacterDataManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyWrestlerInterface_NoRegister, (int32)VTABLE_OFFSET(UCharacterDataManager, IMyWrestlerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterDataManager_Statics::ClassParams = {
		&UCharacterDataManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterDataManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001002A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterDataManager, 2404291168);
	template<> ABP_200508_API UClass* StaticClass<UCharacterDataManager>()
	{
		return UCharacterDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterDataManager(Z_Construct_UClass_UCharacterDataManager, &UCharacterDataManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCharacterDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
