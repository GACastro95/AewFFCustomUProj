// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugUtilityFunction::execAutoMatchCreateLog)
	{
		P_GET_UBOOL(Z_Param_isError);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::AutoMatchCreateLog(Z_Param_isError,Z_Param_inputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execAutoMatchTakeScreenShots)
	{
		P_GET_UBOOL(Z_Param__showUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::AutoMatchTakeScreenShots(Z_Param__showUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execAutoPlayCreateLog)
	{
		P_GET_UBOOL(Z_Param_isError);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::AutoPlayCreateLog(Z_Param_isError,Z_Param_inputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execAutoPlayTakeScreenShots)
	{
		P_GET_UBOOL(Z_Param__showUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::AutoPlayTakeScreenShots(Z_Param__showUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execAutoTestCreateLogCore)
	{
		P_GET_UBOOL(Z_Param_isError);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputString);
		P_GET_PROPERTY(FStrProperty,Z_Param_settingfileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::AutoTestCreateLogCore(Z_Param_isError,Z_Param_inputString,Z_Param_settingfileName,Z_Param_fileDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execDeleteAutoPlayFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::DeleteAutoPlayFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoMatchFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoMatchFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoMatchResultFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoMatchResultFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoMatchScreenshotFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoMatchScreenshotFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoMatchSettingFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoMatchSettingFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayInfo(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayInfoArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayInputlog)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayInputlog(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayInputlogArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FKey>*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayInputlogArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayJustInputFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayJustInputFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayPath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayPath(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayPathArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayPathArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayRecFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayRecFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayResultFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayResultFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlayScreenshotFolderPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlayScreenshotFolderPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoPlaySettingFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoPlaySettingFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetAutoTestSaveDirPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::GetAutoTestSaveDirPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execGetDebugGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELGameInstance**)Z_Param__Result=UELDebugUtilityFunction::GetDebugGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execInitAutoMatchSettingFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::InitAutoMatchSettingFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execInitAutoPlaySettingFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::InitAutoPlaySettingFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execIsDelayAutoPlayEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugUtilityFunction::IsDelayAutoPlayEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execIsSuspensionAutoPlayEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugUtilityFunction::IsSuspensionAutoPlayEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchAnimationDebugView)
	{
		P_GET_UBOOL(Z_Param__view);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchAnimationDebugView(Z_Param__view);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchErrorCheck)
	{
		P_GET_UBOOL(Z_Param__check);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchErrorCheck(Z_Param__check);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchLoopMaxCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchLoopMaxCount(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchMailSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Success);
		P_GET_PROPERTY(FStrProperty,Z_Param__Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchMailSetting(Z_Param__Success,Z_Param__Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchOutputFaildResult)
	{
		P_GET_UBOOL(Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchOutputFaildResult(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchOutputSuccessResult)
	{
		P_GET_UBOOL(Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchOutputSuccessResult(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchSettingFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchSettingFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchSkipEntrance)
	{
		P_GET_UBOOL(Z_Param__skip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchSkipEntrance(Z_Param__skip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchSkipEntranceSecond)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__second);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchSkipEntranceSecond(Z_Param__second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoMatchVictorySceneMode)
	{
		P_GET_UBOOL(Z_Param__mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoMatchVictorySceneMode(Z_Param__mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayCreateNewRecordingFile)
	{
		P_GET_UBOOL(Z_Param__create);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayCreateNewRecordingFile(Z_Param__create);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayErrorMaxSetting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayErrorMaxSetting(Z_Param__Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayFileName(Z_Param__Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayInputlogText)
	{
		P_GET_STRUCT(FKey,Z_Param__input);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayInputlogText(Z_Param__input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayJustInputlogText)
	{
		P_GET_STRUCT(FKey,Z_Param__input);
		P_GET_PROPERTY(FStrProperty,Z_Param__widgetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayJustInputlogText(Z_Param__input,Z_Param__widgetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayLoopMaxCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__LoopCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayLoopMaxCount(Z_Param__LoopCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayLoopSetting)
	{
		P_GET_UBOOL(Z_Param__Loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayLoopSetting(Z_Param__Loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayMailSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Success);
		P_GET_PROPERTY(FStrProperty,Z_Param__Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayMailSetting(Z_Param__Success,Z_Param__Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayMultipleFile)
	{
		P_GET_UBOOL(Z_Param__multi);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayMultipleFile(Z_Param__multi);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayOutputFaildResult)
	{
		P_GET_UBOOL(Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayOutputFaildResult(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayOutputSuccessResult)
	{
		P_GET_UBOOL(Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayOutputSuccessResult(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayRecordingFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayRecordingFileName(Z_Param__Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlaySettingFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlaySettingFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayShowTutorial)
	{
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayShowTutorial(Z_Param_show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSaveAutoPlayTimeSetting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Minute);
		P_GET_PROPERTY(FIntProperty,Z_Param__second);
		P_GET_PROPERTY(FIntProperty,Z_Param__Milli);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SaveAutoPlayTimeSetting(Z_Param__Minute,Z_Param__second,Z_Param__Milli);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSetAutoPlaylogInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugUtilityFunction::SetAutoPlaylogInfoArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSetAutoPlaylogInfoArrayCore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugUtilityFunction::SetAutoPlaylogInfoArrayCore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSetAutoPlayRecIndex)
	{
		P_GET_UBOOL(Z_Param_createNewfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SetAutoPlayRecIndex(Z_Param_createNewfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSetAutoPlayStartFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SetAutoPlayStartFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execSetSuspensionAutoPlayEvent)
	{
		P_GET_UBOOL(Z_Param__Suspention);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELDebugUtilityFunction::SetSuspensionAutoPlayEvent(Z_Param__Suspention);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugUtilityFunction::execTakeScreenShotsCore)
	{
		P_GET_UBOOL(Z_Param__showUI);
		P_GET_PROPERTY(FStrProperty,Z_Param__settingfileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__fileDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELDebugUtilityFunction::TakeScreenShotsCore(Z_Param__showUI,Z_Param__settingfileName,Z_Param__fileDirectory);
		P_NATIVE_END;
	}
	void UELDebugUtilityFunction::StaticRegisterNativesUELDebugUtilityFunction()
	{
		UClass* Class = UELDebugUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoMatchCreateLog", &UELDebugUtilityFunction::execAutoMatchCreateLog },
			{ "AutoMatchTakeScreenShots", &UELDebugUtilityFunction::execAutoMatchTakeScreenShots },
			{ "AutoPlayCreateLog", &UELDebugUtilityFunction::execAutoPlayCreateLog },
			{ "AutoPlayTakeScreenShots", &UELDebugUtilityFunction::execAutoPlayTakeScreenShots },
			{ "AutoTestCreateLogCore", &UELDebugUtilityFunction::execAutoTestCreateLogCore },
			{ "DeleteAutoPlayFile", &UELDebugUtilityFunction::execDeleteAutoPlayFile },
			{ "GetAutoMatchFolderPath", &UELDebugUtilityFunction::execGetAutoMatchFolderPath },
			{ "GetAutoMatchResultFolderPath", &UELDebugUtilityFunction::execGetAutoMatchResultFolderPath },
			{ "GetAutoMatchScreenshotFolderPath", &UELDebugUtilityFunction::execGetAutoMatchScreenshotFolderPath },
			{ "GetAutoMatchSettingFileName", &UELDebugUtilityFunction::execGetAutoMatchSettingFileName },
			{ "GetAutoPlayFileName", &UELDebugUtilityFunction::execGetAutoPlayFileName },
			{ "GetAutoPlayFolderPath", &UELDebugUtilityFunction::execGetAutoPlayFolderPath },
			{ "GetAutoPlayInfo", &UELDebugUtilityFunction::execGetAutoPlayInfo },
			{ "GetAutoPlayInfoArray", &UELDebugUtilityFunction::execGetAutoPlayInfoArray },
			{ "GetAutoPlayInputlog", &UELDebugUtilityFunction::execGetAutoPlayInputlog },
			{ "GetAutoPlayInputlogArray", &UELDebugUtilityFunction::execGetAutoPlayInputlogArray },
			{ "GetAutoPlayJustInputFileName", &UELDebugUtilityFunction::execGetAutoPlayJustInputFileName },
			{ "GetAutoPlayPath", &UELDebugUtilityFunction::execGetAutoPlayPath },
			{ "GetAutoPlayPathArray", &UELDebugUtilityFunction::execGetAutoPlayPathArray },
			{ "GetAutoPlayRecFileName", &UELDebugUtilityFunction::execGetAutoPlayRecFileName },
			{ "GetAutoPlayResultFolderPath", &UELDebugUtilityFunction::execGetAutoPlayResultFolderPath },
			{ "GetAutoPlayScreenshotFolderPath", &UELDebugUtilityFunction::execGetAutoPlayScreenshotFolderPath },
			{ "GetAutoPlaySettingFileName", &UELDebugUtilityFunction::execGetAutoPlaySettingFileName },
			{ "GetAutoTestSaveDirPath", &UELDebugUtilityFunction::execGetAutoTestSaveDirPath },
			{ "GetDebugGameInstance", &UELDebugUtilityFunction::execGetDebugGameInstance },
			{ "InitAutoMatchSettingFile", &UELDebugUtilityFunction::execInitAutoMatchSettingFile },
			{ "InitAutoPlaySettingFile", &UELDebugUtilityFunction::execInitAutoPlaySettingFile },
			{ "IsDelayAutoPlayEvent", &UELDebugUtilityFunction::execIsDelayAutoPlayEvent },
			{ "IsSuspensionAutoPlayEvent", &UELDebugUtilityFunction::execIsSuspensionAutoPlayEvent },
			{ "SaveAutoMatchAnimationDebugView", &UELDebugUtilityFunction::execSaveAutoMatchAnimationDebugView },
			{ "SaveAutoMatchErrorCheck", &UELDebugUtilityFunction::execSaveAutoMatchErrorCheck },
			{ "SaveAutoMatchLoopMaxCount", &UELDebugUtilityFunction::execSaveAutoMatchLoopMaxCount },
			{ "SaveAutoMatchMailSetting", &UELDebugUtilityFunction::execSaveAutoMatchMailSetting },
			{ "SaveAutoMatchOutputFaildResult", &UELDebugUtilityFunction::execSaveAutoMatchOutputFaildResult },
			{ "SaveAutoMatchOutputSuccessResult", &UELDebugUtilityFunction::execSaveAutoMatchOutputSuccessResult },
			{ "SaveAutoMatchSettingFile", &UELDebugUtilityFunction::execSaveAutoMatchSettingFile },
			{ "SaveAutoMatchSkipEntrance", &UELDebugUtilityFunction::execSaveAutoMatchSkipEntrance },
			{ "SaveAutoMatchSkipEntranceSecond", &UELDebugUtilityFunction::execSaveAutoMatchSkipEntranceSecond },
			{ "SaveAutoMatchVictorySceneMode", &UELDebugUtilityFunction::execSaveAutoMatchVictorySceneMode },
			{ "SaveAutoPlayCreateNewRecordingFile", &UELDebugUtilityFunction::execSaveAutoPlayCreateNewRecordingFile },
			{ "SaveAutoPlayErrorMaxSetting", &UELDebugUtilityFunction::execSaveAutoPlayErrorMaxSetting },
			{ "SaveAutoPlayFileName", &UELDebugUtilityFunction::execSaveAutoPlayFileName },
			{ "SaveAutoPlayInputlogText", &UELDebugUtilityFunction::execSaveAutoPlayInputlogText },
			{ "SaveAutoPlayJustInputlogText", &UELDebugUtilityFunction::execSaveAutoPlayJustInputlogText },
			{ "SaveAutoPlayLoopMaxCount", &UELDebugUtilityFunction::execSaveAutoPlayLoopMaxCount },
			{ "SaveAutoPlayLoopSetting", &UELDebugUtilityFunction::execSaveAutoPlayLoopSetting },
			{ "SaveAutoPlayMailSetting", &UELDebugUtilityFunction::execSaveAutoPlayMailSetting },
			{ "SaveAutoPlayMultipleFile", &UELDebugUtilityFunction::execSaveAutoPlayMultipleFile },
			{ "SaveAutoPlayOutputFaildResult", &UELDebugUtilityFunction::execSaveAutoPlayOutputFaildResult },
			{ "SaveAutoPlayOutputSuccessResult", &UELDebugUtilityFunction::execSaveAutoPlayOutputSuccessResult },
			{ "SaveAutoPlayRecordingFileName", &UELDebugUtilityFunction::execSaveAutoPlayRecordingFileName },
			{ "SaveAutoPlaySettingFile", &UELDebugUtilityFunction::execSaveAutoPlaySettingFile },
			{ "SaveAutoPlayShowTutorial", &UELDebugUtilityFunction::execSaveAutoPlayShowTutorial },
			{ "SaveAutoPlayTimeSetting", &UELDebugUtilityFunction::execSaveAutoPlayTimeSetting },
			{ "SetAutoPlaylogInfoArray", &UELDebugUtilityFunction::execSetAutoPlaylogInfoArray },
			{ "SetAutoPlaylogInfoArrayCore", &UELDebugUtilityFunction::execSetAutoPlaylogInfoArrayCore },
			{ "SetAutoPlayRecIndex", &UELDebugUtilityFunction::execSetAutoPlayRecIndex },
			{ "SetAutoPlayStartFlag", &UELDebugUtilityFunction::execSetAutoPlayStartFlag },
			{ "SetSuspensionAutoPlayEvent", &UELDebugUtilityFunction::execSetSuspensionAutoPlayEvent },
			{ "TakeScreenShotsCore", &UELDebugUtilityFunction::execTakeScreenShotsCore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics
	{
		struct ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms
		{
			bool isError;
			FString inputString;
			FString ReturnValue;
		};
		static void NewProp_isError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_isError_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms*)Obj)->isError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_isError = { "isError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_isError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_inputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_inputString = { "inputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms, inputString), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_inputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_inputString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_isError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_inputString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "AutoMatchCreateLog", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventAutoMatchCreateLog_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics
	{
		struct ELDebugUtilityFunction_eventAutoMatchTakeScreenShots_Parms
		{
			bool _showUI;
			FString ReturnValue;
		};
		static void NewProp__showUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showUI;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp__showUI_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventAutoMatchTakeScreenShots_Parms*)Obj)->_showUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp__showUI = { "_showUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventAutoMatchTakeScreenShots_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp__showUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoMatchTakeScreenShots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp__showUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "AutoMatchTakeScreenShots", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventAutoMatchTakeScreenShots_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics
	{
		struct ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms
		{
			bool isError;
			FString inputString;
			FString ReturnValue;
		};
		static void NewProp_isError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_isError_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms*)Obj)->isError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_isError = { "isError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_isError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_inputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_inputString = { "inputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms, inputString), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_inputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_inputString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_isError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_inputString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "AutoPlayCreateLog", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventAutoPlayCreateLog_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics
	{
		struct ELDebugUtilityFunction_eventAutoPlayTakeScreenShots_Parms
		{
			bool _showUI;
			FString ReturnValue;
		};
		static void NewProp__showUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showUI;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp__showUI_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventAutoPlayTakeScreenShots_Parms*)Obj)->_showUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp__showUI = { "_showUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventAutoPlayTakeScreenShots_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp__showUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoPlayTakeScreenShots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp__showUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "AutoPlayTakeScreenShots", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventAutoPlayTakeScreenShots_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics
	{
		struct ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms
		{
			bool isError;
			FString inputString;
			FString settingfileName;
			FString fileDirectory;
			FString ReturnValue;
		};
		static void NewProp_isError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_settingfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_settingfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_isError_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms*)Obj)->isError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_isError = { "isError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_isError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_inputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_inputString = { "inputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms, inputString), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_inputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_inputString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_settingfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_settingfileName = { "settingfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms, settingfileName), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_settingfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_settingfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_fileDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_fileDirectory = { "fileDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms, fileDirectory), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_fileDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_fileDirectory_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_isError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_inputString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_settingfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_fileDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "AutoTestCreateLogCore", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventAutoTestCreateLogCore_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "DeleteAutoPlayFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoMatchFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoMatchFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoMatchFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoMatchFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoMatchResultFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoMatchResultFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoMatchResultFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoMatchResultFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoMatchScreenshotFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoMatchScreenshotFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoMatchScreenshotFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoMatchScreenshotFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoMatchSettingFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoMatchSettingFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoMatchSettingFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoMatchSettingFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayInfo_Parms
		{
			int32 _Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInfo_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayInfo", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayInfo_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayInfoArray_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInfoArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayInfoArray", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayInfoArray_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayInputlog_Parms
		{
			int32 _Index;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInputlog_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInputlog_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayInputlog", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayInputlog_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayInputlogArray_Parms
		{
			TArray<FKey> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayInputlogArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayInputlogArray", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayInputlogArray_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayJustInputFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayJustInputFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayJustInputFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayJustInputFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayPath_Parms
		{
			int32 _Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayPath_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayPathArray_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayPathArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayPathArray", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayPathArray_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayRecFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayRecFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayRecFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayRecFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayResultFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayResultFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayResultFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayResultFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlayScreenshotFolderPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlayScreenshotFolderPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlayScreenshotFolderPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlayScreenshotFolderPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoPlaySettingFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoPlaySettingFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoPlaySettingFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoPlaySettingFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics
	{
		struct ELDebugUtilityFunction_eventGetAutoTestSaveDirPath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetAutoTestSaveDirPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetAutoTestSaveDirPath", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetAutoTestSaveDirPath_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics
	{
		struct ELDebugUtilityFunction_eventGetDebugGameInstance_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventGetDebugGameInstance_Parms, ReturnValue), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "GetDebugGameInstance", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventGetDebugGameInstance_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "InitAutoMatchSettingFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "InitAutoPlaySettingFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics
	{
		struct ELDebugUtilityFunction_eventIsDelayAutoPlayEvent_Parms
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
	void Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventIsDelayAutoPlayEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventIsDelayAutoPlayEvent_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "IsDelayAutoPlayEvent", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventIsDelayAutoPlayEvent_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics
	{
		struct ELDebugUtilityFunction_eventIsSuspensionAutoPlayEvent_Parms
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
	void Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventIsSuspensionAutoPlayEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventIsSuspensionAutoPlayEvent_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "IsSuspensionAutoPlayEvent", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventIsSuspensionAutoPlayEvent_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchAnimationDebugView_Parms
		{
			bool _view;
		};
		static void NewProp__view_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__view;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::NewProp__view_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchAnimationDebugView_Parms*)Obj)->_view = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::NewProp__view = { "_view", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchAnimationDebugView_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::NewProp__view_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::NewProp__view,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchAnimationDebugView", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchAnimationDebugView_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchErrorCheck_Parms
		{
			bool _check;
		};
		static void NewProp__check_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__check;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::NewProp__check_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchErrorCheck_Parms*)Obj)->_check = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::NewProp__check = { "_check", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchErrorCheck_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::NewProp__check_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::NewProp__check,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchErrorCheck", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchErrorCheck_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchLoopMaxCount_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoMatchLoopMaxCount_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchLoopMaxCount", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchLoopMaxCount_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchMailSetting_Parms
		{
			FString _Success;
			FString _Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Success = { "_Success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoMatchMailSetting_Parms, _Success), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Error = { "_Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoMatchMailSetting_Parms, _Error), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::NewProp__Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchMailSetting", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchMailSetting_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchOutputFaildResult_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchOutputFaildResult_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchOutputFaildResult_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchOutputFaildResult", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchOutputFaildResult_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchOutputSuccessResult_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchOutputSuccessResult_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchOutputSuccessResult_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchOutputSuccessResult", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchOutputSuccessResult_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchSettingFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchSkipEntrance_Parms
		{
			bool _skip;
		};
		static void NewProp__skip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__skip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::NewProp__skip_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchSkipEntrance_Parms*)Obj)->_skip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::NewProp__skip = { "_skip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchSkipEntrance_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::NewProp__skip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::NewProp__skip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchSkipEntrance", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchSkipEntrance_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchSkipEntranceSecond_Parms
		{
			int32 _second;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__second;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::NewProp__second = { "_second", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoMatchSkipEntranceSecond_Parms, _second), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::NewProp__second,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchSkipEntranceSecond", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchSkipEntranceSecond_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoMatchVictorySceneMode_Parms
		{
			bool _mode;
		};
		static void NewProp__mode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::NewProp__mode_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoMatchVictorySceneMode_Parms*)Obj)->_mode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::NewProp__mode = { "_mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoMatchVictorySceneMode_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::NewProp__mode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::NewProp__mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoMatchVictorySceneMode", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoMatchVictorySceneMode_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayCreateNewRecordingFile_Parms
		{
			bool _create;
		};
		static void NewProp__create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__create;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::NewProp__create_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayCreateNewRecordingFile_Parms*)Obj)->_create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::NewProp__create = { "_create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayCreateNewRecordingFile_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::NewProp__create_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::NewProp__create,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayCreateNewRecordingFile", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayCreateNewRecordingFile_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayErrorMaxSetting_Parms
		{
			int32 _Max;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::NewProp__Max = { "_Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayErrorMaxSetting_Parms, _Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::NewProp__Max,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayErrorMaxSetting", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayErrorMaxSetting_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayFileName_Parms
		{
			FString _Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::NewProp__Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::NewProp__Filename = { "_Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayFileName_Parms, _Filename), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::NewProp__Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::NewProp__Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::NewProp__Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayInputlogText_Parms
		{
			FKey _input;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::NewProp__input = { "_input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayInputlogText_Parms, _input), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::NewProp__input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayInputlogText", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayInputlogText_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayJustInputlogText_Parms
		{
			FKey _input;
			FString _widgetPath;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widgetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__widgetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__input = { "_input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayJustInputlogText_Parms, _input), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__widgetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__widgetPath = { "_widgetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayJustInputlogText_Parms, _widgetPath), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__widgetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__widgetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::NewProp__widgetPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayJustInputlogText", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayJustInputlogText_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayLoopMaxCount_Parms
		{
			int32 _LoopCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LoopCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::NewProp__LoopCount = { "_LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayLoopMaxCount_Parms, _LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::NewProp__LoopCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayLoopMaxCount", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayLoopMaxCount_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayLoopSetting_Parms
		{
			bool _Loop;
		};
		static void NewProp__Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Loop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::NewProp__Loop_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayLoopSetting_Parms*)Obj)->_Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::NewProp__Loop = { "_Loop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayLoopSetting_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::NewProp__Loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::NewProp__Loop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayLoopSetting", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayLoopSetting_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayMailSetting_Parms
		{
			FString _Success;
			FString _Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Success_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Success = { "_Success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayMailSetting_Parms, _Success), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Error = { "_Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayMailSetting_Parms, _Error), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::NewProp__Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayMailSetting", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayMailSetting_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayMultipleFile_Parms
		{
			bool _multi;
		};
		static void NewProp__multi_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__multi;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::NewProp__multi_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayMultipleFile_Parms*)Obj)->_multi = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::NewProp__multi = { "_multi", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayMultipleFile_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::NewProp__multi_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::NewProp__multi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayMultipleFile", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayMultipleFile_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayOutputFaildResult_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayOutputFaildResult_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayOutputFaildResult_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayOutputFaildResult", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayOutputFaildResult_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayOutputSuccessResult_Parms
		{
			bool Result;
		};
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayOutputSuccessResult_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayOutputSuccessResult_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayOutputSuccessResult", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayOutputSuccessResult_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayRecordingFileName_Parms
		{
			FString _Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::NewProp__Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::NewProp__Filename = { "_Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayRecordingFileName_Parms, _Filename), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::NewProp__Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::NewProp__Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::NewProp__Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayRecordingFileName", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayRecordingFileName_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlaySettingFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayShowTutorial_Parms
		{
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::NewProp_show_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSaveAutoPlayShowTutorial_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSaveAutoPlayShowTutorial_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayShowTutorial", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayShowTutorial_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics
	{
		struct ELDebugUtilityFunction_eventSaveAutoPlayTimeSetting_Parms
		{
			int32 _Minute;
			int32 _second;
			int32 _Milli;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Minute;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__second;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Milli;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__Minute = { "_Minute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayTimeSetting_Parms, _Minute), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__second = { "_second", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayTimeSetting_Parms, _second), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__Milli = { "_Milli", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventSaveAutoPlayTimeSetting_Parms, _Milli), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__Minute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::NewProp__Milli,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SaveAutoPlayTimeSetting", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSaveAutoPlayTimeSetting_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics
	{
		struct ELDebugUtilityFunction_eventSetAutoPlaylogInfoArray_Parms
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
	void Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSetAutoPlaylogInfoArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSetAutoPlaylogInfoArray_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SetAutoPlaylogInfoArray", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSetAutoPlaylogInfoArray_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics
	{
		struct ELDebugUtilityFunction_eventSetAutoPlaylogInfoArrayCore_Parms
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
	void Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSetAutoPlaylogInfoArrayCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSetAutoPlaylogInfoArrayCore_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SetAutoPlaylogInfoArrayCore", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSetAutoPlaylogInfoArrayCore_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics
	{
		struct ELDebugUtilityFunction_eventSetAutoPlayRecIndex_Parms
		{
			bool createNewfile;
		};
		static void NewProp_createNewfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_createNewfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::NewProp_createNewfile_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSetAutoPlayRecIndex_Parms*)Obj)->createNewfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::NewProp_createNewfile = { "createNewfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSetAutoPlayRecIndex_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::NewProp_createNewfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::NewProp_createNewfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SetAutoPlayRecIndex", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSetAutoPlayRecIndex_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SetAutoPlayStartFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics
	{
		struct ELDebugUtilityFunction_eventSetSuspensionAutoPlayEvent_Parms
		{
			bool _Suspention;
		};
		static void NewProp__Suspention_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Suspention;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::NewProp__Suspention_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventSetSuspensionAutoPlayEvent_Parms*)Obj)->_Suspention = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::NewProp__Suspention = { "_Suspention", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventSetSuspensionAutoPlayEvent_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::NewProp__Suspention_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::NewProp__Suspention,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "SetSuspensionAutoPlayEvent", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventSetSuspensionAutoPlayEvent_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics
	{
		struct ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms
		{
			bool _showUI;
			FString _settingfileName;
			FString _fileDirectory;
			FString ReturnValue;
		};
		static void NewProp__showUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__settingfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__settingfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fileDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__fileDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__showUI_SetBit(void* Obj)
	{
		((ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms*)Obj)->_showUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__showUI = { "_showUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms), &Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__showUI_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__settingfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__settingfileName = { "_settingfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms, _settingfileName), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__settingfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__settingfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__fileDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__fileDirectory = { "_fileDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms, _fileDirectory), METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__fileDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__fileDirectory_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__showUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__settingfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp__fileDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugUtilityFunction, nullptr, "TakeScreenShotsCore", nullptr, nullptr, sizeof(ELDebugUtilityFunction_eventTakeScreenShotsCore_Parms), Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugUtilityFunction_NoRegister()
	{
		return UELDebugUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDebugUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchCreateLog, "AutoMatchCreateLog" }, // 2130279951
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_AutoMatchTakeScreenShots, "AutoMatchTakeScreenShots" }, // 2562301248
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayCreateLog, "AutoPlayCreateLog" }, // 3587611420
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_AutoPlayTakeScreenShots, "AutoPlayTakeScreenShots" }, // 1605841935
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_AutoTestCreateLogCore, "AutoTestCreateLogCore" }, // 2188215715
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_DeleteAutoPlayFile, "DeleteAutoPlayFile" }, // 2442632094
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchFolderPath, "GetAutoMatchFolderPath" }, // 46986916
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchResultFolderPath, "GetAutoMatchResultFolderPath" }, // 3491737714
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchScreenshotFolderPath, "GetAutoMatchScreenshotFolderPath" }, // 2035701399
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoMatchSettingFileName, "GetAutoMatchSettingFileName" }, // 2432782870
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFileName, "GetAutoPlayFileName" }, // 718834784
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayFolderPath, "GetAutoPlayFolderPath" }, // 2433728236
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfo, "GetAutoPlayInfo" }, // 2319542781
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInfoArray, "GetAutoPlayInfoArray" }, // 1770024888
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlog, "GetAutoPlayInputlog" }, // 402790810
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayInputlogArray, "GetAutoPlayInputlogArray" }, // 763648222
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayJustInputFileName, "GetAutoPlayJustInputFileName" }, // 2320229887
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPath, "GetAutoPlayPath" }, // 479969818
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayPathArray, "GetAutoPlayPathArray" }, // 3961365698
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayRecFileName, "GetAutoPlayRecFileName" }, // 2451567139
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayResultFolderPath, "GetAutoPlayResultFolderPath" }, // 3011074150
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlayScreenshotFolderPath, "GetAutoPlayScreenshotFolderPath" }, // 3218085503
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoPlaySettingFileName, "GetAutoPlaySettingFileName" }, // 2535739647
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetAutoTestSaveDirPath, "GetAutoTestSaveDirPath" }, // 2799342244
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_GetDebugGameInstance, "GetDebugGameInstance" }, // 3964790642
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoMatchSettingFile, "InitAutoMatchSettingFile" }, // 3456056320
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_InitAutoPlaySettingFile, "InitAutoPlaySettingFile" }, // 726757991
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_IsDelayAutoPlayEvent, "IsDelayAutoPlayEvent" }, // 2609555496
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_IsSuspensionAutoPlayEvent, "IsSuspensionAutoPlayEvent" }, // 2513080132
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchAnimationDebugView, "SaveAutoMatchAnimationDebugView" }, // 1563297934
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchErrorCheck, "SaveAutoMatchErrorCheck" }, // 3081533854
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchLoopMaxCount, "SaveAutoMatchLoopMaxCount" }, // 1103067444
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchMailSetting, "SaveAutoMatchMailSetting" }, // 233133898
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputFaildResult, "SaveAutoMatchOutputFaildResult" }, // 2926169798
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchOutputSuccessResult, "SaveAutoMatchOutputSuccessResult" }, // 48543058
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSettingFile, "SaveAutoMatchSettingFile" }, // 765230257
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntrance, "SaveAutoMatchSkipEntrance" }, // 3552808674
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchSkipEntranceSecond, "SaveAutoMatchSkipEntranceSecond" }, // 75335553
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoMatchVictorySceneMode, "SaveAutoMatchVictorySceneMode" }, // 501721919
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayCreateNewRecordingFile, "SaveAutoPlayCreateNewRecordingFile" }, // 2413078166
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayErrorMaxSetting, "SaveAutoPlayErrorMaxSetting" }, // 1243842228
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayFileName, "SaveAutoPlayFileName" }, // 927586805
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayInputlogText, "SaveAutoPlayInputlogText" }, // 1858939330
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayJustInputlogText, "SaveAutoPlayJustInputlogText" }, // 2792685266
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopMaxCount, "SaveAutoPlayLoopMaxCount" }, // 4248653985
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayLoopSetting, "SaveAutoPlayLoopSetting" }, // 2790397600
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMailSetting, "SaveAutoPlayMailSetting" }, // 2378693715
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayMultipleFile, "SaveAutoPlayMultipleFile" }, // 992924374
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputFaildResult, "SaveAutoPlayOutputFaildResult" }, // 133887676
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayOutputSuccessResult, "SaveAutoPlayOutputSuccessResult" }, // 1006018089
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayRecordingFileName, "SaveAutoPlayRecordingFileName" }, // 2443654209
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlaySettingFile, "SaveAutoPlaySettingFile" }, // 972625645
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayShowTutorial, "SaveAutoPlayShowTutorial" }, // 312111154
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SaveAutoPlayTimeSetting, "SaveAutoPlayTimeSetting" }, // 3479448086
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArray, "SetAutoPlaylogInfoArray" }, // 3272855905
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlaylogInfoArrayCore, "SetAutoPlaylogInfoArrayCore" }, // 2778083243
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayRecIndex, "SetAutoPlayRecIndex" }, // 2528846590
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SetAutoPlayStartFlag, "SetAutoPlayStartFlag" }, // 927191849
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_SetSuspensionAutoPlayEvent, "SetSuspensionAutoPlayEvent" }, // 2487813833
		{ &Z_Construct_UFunction_UELDebugUtilityFunction_TakeScreenShotsCore, "TakeScreenShotsCore" }, // 2242114485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugUtilityFunction_Statics::ClassParams = {
		&UELDebugUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELDebugUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugUtilityFunction, 2584803372);
	template<> ABP_200508_API UClass* StaticClass<UELDebugUtilityFunction>()
	{
		return UELDebugUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugUtilityFunction(Z_Construct_UClass_UELDebugUtilityFunction, &UELDebugUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
