// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eErrorID();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSLevelTransitionEvent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSRootObject_NoRegister();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2Api();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToAWS();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManager_NoRegister();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkStatus();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPointRateParam();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameModeDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftObjectBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterDataRawData_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eErrorStatusType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToSSAPI();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeConfigData_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToNetworkConnect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSModeAPIType();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeServerParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeServiceParam_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSModeServiceState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSaveDataManager_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStampedeRankParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToUniqueError();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToYGS2API();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2RequestFunctionType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSPlayerData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSUtility::execCanUseSSMasterData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::CanUseSSMasterData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCheckEOSMngTickable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::CheckEOSMngTickable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execConvertSSWrestlerSetupParamToBaseParam)
	{
		P_GET_STRUCT_REF(FSSWrestlerSetupParam,Z_Param_Out_inSSWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWrestlerSetupParam*)Z_Param__Result=UELSSUtility::ConvertSSWrestlerSetupParamToBaseParam(Z_Param_Out_inSSWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execConvertWrestlerSetupParamToSSParam)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_inWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSWrestlerSetupParam*)Z_Param__Result=UELSSUtility::ConvertWrestlerSetupParamToSSParam(Z_Param_Out_inWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCreateShortErrorCodeNumber)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(eErrorID,Z_Param_inApiErrorCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inApiErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::CreateShortErrorCodeNumber(Z_Param_WorldContextObject,eErrorID(Z_Param_inApiErrorCategory),Z_Param_inApiErrorCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCreateSSLevelTransitionEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSLevelTransitionEvent**)Z_Param__Result=UELSSUtility::CreateSSLevelTransitionEvent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCreateSSMasterDataInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSMasterData**)Z_Param__Result=UELSSUtility::CreateSSMasterDataInstance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCreateSSRootObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_inRootObjectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSRootObject**)Z_Param__Result=UELSSUtility::CreateSSRootObject(Z_Param_WorldContextObject,Z_Param_inRootObjectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execCreateYGS2Request)
	{
		P_GET_ENUM(EYGS2Api,Z_Param_Api);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UYGS2RequestBase**)Z_Param__Result=UELSSUtility::CreateYGS2Request(EYGS2Api(Z_Param_Api));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execDestroySSLevelTransitionEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::DestroySSLevelTransitionEvent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execDestroySSMasterData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::DestroySSMasterData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execDestroySSRootObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::DestroySSRootObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execEndWaitDownloadSSModeServiceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::EndWaitDownloadSSModeServiceParam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execEOSForceUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::EOSForceUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetAWSErrorData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToAWS*)Z_Param__Result=UELSSUtility::GetAWSErrorData(Z_Param_GetType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetBase64DecodeData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_encryptData);
		P_GET_UBOOL(Z_Param_isUniqueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetBase64DecodeData(Z_Param_encryptData,Z_Param_isUniqueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetBase64EncryptData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_baseData);
		P_GET_UBOOL(Z_Param_isUniqueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetBase64EncryptData(Z_Param_baseData,Z_Param_isUniqueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetDefaultAPIPollingLimit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetDefaultAPIPollingLimit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetDefaultAPIPollingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSUtility::GetDefaultAPIPollingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetELEOSManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSManager**)Z_Param__Result=UELSSUtility::GetELEOSManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetEOSAuthToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetEOSAuthToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetErrorTextLinkMessage)
	{
		P_GET_ENUM(EErrDialogType,Z_Param_GetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextLinkDialogMessage*)Z_Param__Result=UELSSUtility::GetErrorTextLinkMessage(EErrDialogType(Z_Param_GetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetHTTPErrorData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToHTTPCode*)Z_Param__Result=UELSSUtility::GetHTTPErrorData(Z_Param_GetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetLocalizeText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stNS);
		P_GET_PROPERTY(FStrProperty,Z_Param_stKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSUtility::GetLocalizeText(Z_Param_stNS,Z_Param_stKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetMatchPlayerMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetMatchPlayerMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetMatchSpectatorsMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetMatchSpectatorsMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetNetworkErrorID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(eErrorID*)Z_Param__Result=UELSSUtility::GetNetworkErrorID(Z_Param_errID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetNetworkStatus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELNetworkStatus*)Z_Param__Result=UELSSUtility::GetNetworkStatus(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetPlayerRankData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Exp);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_expNext);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_expRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSPlayerRankParam*)Z_Param__Result=UELSSUtility::GetPlayerRankData(Z_Param_Exp,Z_Param_Out_expNext,Z_Param_Out_expRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetPlayerRankDataToRankId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rankId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSPlayerRankParam*)Z_Param__Result=UELSSUtility::GetPlayerRankDataToRankId(Z_Param_rankId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetPlayerRankDataToRankPoint)
	{
		P_GET_TARRAY_REF(FSSPlayerRankParam,Z_Param_Out_Table);
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_refIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSPlayerRankParam*)Z_Param__Result=UELSSUtility::GetPlayerRankDataToRankPoint(Z_Param_Out_Table,Z_Param_RankPoint,Z_Param_LeaderboardRank,Z_Param_Out_refIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetScreenUpdateCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetScreenUpdateCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSBattlePassPoint)
	{
		P_GET_STRUCT_REF(FBattlePassPointRateParam,Z_Param_Out_prm);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StarNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_ssPlayCntToDay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetSSBattlePassPoint(Z_Param_Out_prm,Z_Param_StarNum,Z_Param_ssPlayCntToDay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCommandLineValue_SSBotClient)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCommandLineValue_SSBotClient(Z_Param_WorldContextObject,Z_Param_Out_outUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCommandLineValue_SSDirect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCommandLineValue_SSDirect(Z_Param_WorldContextObject,Z_Param_Out_outUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCommandLineValue_SSFlags)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCommandLineValue_SSFlags(Z_Param_WorldContextObject,Z_Param_Out_outFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCommandLineValue_SSMatchMakeGroupId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outGroupId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCommandLineValue_SSMatchMakeGroupId(Z_Param_WorldContextObject,Z_Param_Out_outGroupId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCommandLineValue_SSServer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outEnvName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCommandLineValue_SSServer(Z_Param_WorldContextObject,Z_Param_Out_outEnvName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSControlledPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UELSSUtility::GetSSControlledPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCurrentPlayerRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCurrentPlayerRank(Z_Param_WorldContextObject,Z_Param_Out_outRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCurrentStampedeLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCurrentStampedeLevel(Z_Param_WorldContextObject,Z_Param_Out_outLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSCurrentStampedeLevelExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSCurrentStampedeLevelExp(Z_Param_WorldContextObject,Z_Param_Out_outLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSDebugEditWrestlerSetupParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_inPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSWrestlerSetupParam*)Z_Param__Result=UELSSUtility::GetSSDebugEditWrestlerSetupParam(Z_Param_inPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSGameDataManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSGameModeDataManager**)Z_Param__Result=UELSSUtility::GetSSGameDataManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSGameLiftObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameLiftObjectBase**)Z_Param__Result=UELSSUtility::GetSSGameLiftObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSInGamePlayFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSInGamePlayFlag(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSLastEndGameReason)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSEndGameReason*)Z_Param__Result=UELSSUtility::GetSSLastEndGameReason(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSLevelTransitionEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSLevelTransitionEvent**)Z_Param__Result=UELSSUtility::GetSSLevelTransitionEvent(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSLocalizeText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSUtility::GetSSLocalizeText(Z_Param_stKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSMasterData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSMasterData**)Z_Param__Result=UELSSUtility::GetSSMasterData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSMasterDataRawData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSMasterDataRawData**)Z_Param__Result=UELSSUtility::GetSSMasterDataRawData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSMasterDataVersion)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetSSMasterDataVersion(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSmodeAPIErrorData)
	{
		P_GET_ENUM(eErrorStatusType,Z_Param_GetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToSSAPI*)Z_Param__Result=UELSSUtility::GetSSmodeAPIErrorData(eErrorStatusType(Z_Param_GetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeConfigData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSModeConfigData**)Z_Param__Result=UELSSUtility::GetSSModeConfigData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSmodeNetworkErrorData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToNetworkConnect*)Z_Param__Result=UELSSUtility::GetSSmodeNetworkErrorData(Z_Param_GetType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModePlayerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetSSModePlayerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeRequestType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_apiID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(eSSModeAPIType*)Z_Param__Result=UELSSUtility::GetSSModeRequestType(Z_Param_apiID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeServerBuildVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSUtility::GetSSModeServerBuildVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeServerEnvData)
	{
		P_GET_STRUCT_REF(FSSModeServerParam,Z_Param_Out_getEnv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSModeServerEnvData(Z_Param_Out_getEnv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeServerEnvName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetSSModeServerEnvName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeServiceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSModeServiceParam**)Z_Param__Result=UELSSUtility::GetSSModeServiceParam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeServiceState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSModeServiceState*)Z_Param__Result=UELSSUtility::GetSSModeServiceState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSModeUserName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSUtility::GetSSModeUserName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSOnlineErrorType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSOnlineErrorType*)Z_Param__Result=UELSSUtility::GetSSOnlineErrorType(Z_Param_errID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSPlayerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_outPlayerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSPlayerData(Z_Param_WorldContextObject,Z_Param_Out_outPlayerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSRequestErrorStatusType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(eErrorStatusType*)Z_Param__Result=UELSSUtility::GetSSRequestErrorStatusType(Z_Param_errID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSRootObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSRootObject**)Z_Param__Result=UELSSUtility::GetSSRootObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSSaveDataManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSSaveDataManager**)Z_Param__Result=UELSSUtility::GetSSSaveDataManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSSelectedWrestlerID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UELSSUtility::GetSSSelectedWrestlerID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetSSServerEndpoint)
	{
		P_GET_TARRAY_REF(FSSServerEndpoint,Z_Param_Out_SSServerEndpoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::GetSSServerEndpoint(Z_Param_Out_SSServerEndpoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetStampedeRankData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Exp);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_expNext);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_expRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSStampedeRankParam*)Z_Param__Result=UELSSUtility::GetStampedeRankData(Z_Param_Exp,Z_Param_Out_expNext,Z_Param_Out_expRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetUniqueErrorData)
	{
		P_GET_ENUM(ESSOnlineErrorType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToUniqueError*)Z_Param__Result=UELSSUtility::GetUniqueErrorData(ESSOnlineErrorType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetWrestlerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UELSSUtility::GetWrestlerID(Z_Param_WrestlerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetWrestlerSetupData)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSWrestlerSetupParam*)Z_Param__Result=UELSSUtility::GetWrestlerSetupData(EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetWrestlerSetupParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWrestlerSetupParam*)Z_Param__Result=UELSSUtility::GetWrestlerSetupParam(EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetWrestlerType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WrestlerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWrestlerType*)Z_Param__Result=UELSSUtility::GetWrestlerType(Z_Param_WrestlerType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetYGS2APIErrorData)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_GetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSErrorTextDataToYGS2API*)Z_Param__Result=UELSSUtility::GetYGS2APIErrorData(EYGS2ErrorType(Z_Param_GetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetYGS2ErrorType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYGS2ErrorType*)Z_Param__Result=UELSSUtility::GetYGS2ErrorType(Z_Param_errID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execGetYGS2RequestType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_apiID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYGS2Api*)Z_Param__Result=UELSSUtility::GetYGS2RequestType(Z_Param_apiID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsAccountLogin)
	{
		P_GET_UBOOL(Z_Param_isMissed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsAccountLogin(Z_Param_isMissed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsDevMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsDevMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsDownloadingSSModeServiceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsDownloadingSSModeServiceParam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsEnableSSMasterData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsEnableSSMasterData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSCheatDetected)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSCheatDetected(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSDebugLocalCheckMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSDebugLocalCheckMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSDevelopmentUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSDevelopmentUser(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSDisableSound)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSDisableSound(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execIsSSPlayableUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::IsSSPlayableUser(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execNotifySSGameEnd)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSEndGameReason,Z_Param_inReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::NotifySSGameEnd(Z_Param_WorldContextObject,ESSEndGameReason(Z_Param_inReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execNotifySSGameStart)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::NotifySSGameStart(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execOnEnterSSMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::OnEnterSSMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execOnExitSSMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::OnExitSSMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execPlaySSLoadingScreen)
	{
		P_GET_UBOOL(Z_Param_bPlayUntilStopped);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::PlaySSLoadingScreen(Z_Param_bPlayUntilStopped,Z_Param_PlayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execRegistYGS2Request)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Api);
		P_GET_ENUM(EELYGS2RequestFunctionType,Z_Param_apiType);
		P_GET_UBOOL(Z_Param_checkRequestEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::RegistYGS2Request(Z_Param_Api,EELYGS2RequestFunctionType(Z_Param_apiType),Z_Param_checkRequestEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execRequestDownloadSSModeServiceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_inSSModeOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::RequestDownloadSSModeServiceParam(Z_Param_WorldContextObject,Z_Param_inSSModeOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetInputMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_pController);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetInputMode(Z_Param_pController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetScreenUpdateCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetScreenUpdateCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSCheatDetected)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSCheatDetected(Z_Param_WorldContextObject,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSDefaultMapToMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSDefaultMapToMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSDefaultMapToSSTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSDefaultMapToSSTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSGameLiftObject)
	{
		P_GET_OBJECT(UGameLiftObjectBase,Z_Param_ssGameLiftParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSGameLiftObject(Z_Param_ssGameLiftParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSInGamePlayFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSInGamePlayFlag(Z_Param_WorldContextObject,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetSSPlayerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetSSPlayerData(Z_Param_WorldContextObject,Z_Param_Out_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSetVisibleFadeForChangeLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_inEnable);
		P_GET_UBOOL(Z_Param_inWithLoadingIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SetVisibleFadeForChangeLevel(Z_Param_WorldContextObject,Z_Param_inEnable,Z_Param_inWithLoadingIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSSLoginRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UYGS2Req_GetSSPlayerData**)Z_Param__Result=UELSSUtility::SSLoginRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSSModeGameDataSetup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_isReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SSModeGameDataSetup(Z_Param_WorldContextObject,Z_Param_isReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSSModeNetworkSetup)
	{
		P_GET_UBOOL(Z_Param_isReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SSModeNetworkSetup(Z_Param_isReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSSNXShowApplicationError)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inErrorCodeNumber);
		P_GET_PROPERTY(FStrProperty,Z_Param_inDialogMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_inFullScreenMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSUtility::SSNXShowApplicationError(Z_Param_WorldContextObject,Z_Param_inErrorCodeNumber,Z_Param_inDialogMessage,Z_Param_inFullScreenMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execSSPrintStringToLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::SSPrintStringToLog(Z_Param_inString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUtility::execStopSSLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSUtility::StopSSLoadingScreen();
		P_NATIVE_END;
	}
	void UELSSUtility::StaticRegisterNativesUELSSUtility()
	{
		UClass* Class = UELSSUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUseSSMasterData", &UELSSUtility::execCanUseSSMasterData },
			{ "CheckEOSMngTickable", &UELSSUtility::execCheckEOSMngTickable },
			{ "ConvertSSWrestlerSetupParamToBaseParam", &UELSSUtility::execConvertSSWrestlerSetupParamToBaseParam },
			{ "ConvertWrestlerSetupParamToSSParam", &UELSSUtility::execConvertWrestlerSetupParamToSSParam },
			{ "CreateShortErrorCodeNumber", &UELSSUtility::execCreateShortErrorCodeNumber },
			{ "CreateSSLevelTransitionEvent", &UELSSUtility::execCreateSSLevelTransitionEvent },
			{ "CreateSSMasterDataInstance", &UELSSUtility::execCreateSSMasterDataInstance },
			{ "CreateSSRootObject", &UELSSUtility::execCreateSSRootObject },
			{ "CreateYGS2Request", &UELSSUtility::execCreateYGS2Request },
			{ "DestroySSLevelTransitionEvent", &UELSSUtility::execDestroySSLevelTransitionEvent },
			{ "DestroySSMasterData", &UELSSUtility::execDestroySSMasterData },
			{ "DestroySSRootObject", &UELSSUtility::execDestroySSRootObject },
			{ "EndWaitDownloadSSModeServiceParam", &UELSSUtility::execEndWaitDownloadSSModeServiceParam },
			{ "EOSForceUpdate", &UELSSUtility::execEOSForceUpdate },
			{ "GetAWSErrorData", &UELSSUtility::execGetAWSErrorData },
			{ "GetBase64DecodeData", &UELSSUtility::execGetBase64DecodeData },
			{ "GetBase64EncryptData", &UELSSUtility::execGetBase64EncryptData },
			{ "GetDefaultAPIPollingLimit", &UELSSUtility::execGetDefaultAPIPollingLimit },
			{ "GetDefaultAPIPollingTime", &UELSSUtility::execGetDefaultAPIPollingTime },
			{ "GetELEOSManager", &UELSSUtility::execGetELEOSManager },
			{ "GetEOSAuthToken", &UELSSUtility::execGetEOSAuthToken },
			{ "GetErrorTextLinkMessage", &UELSSUtility::execGetErrorTextLinkMessage },
			{ "GetHTTPErrorData", &UELSSUtility::execGetHTTPErrorData },
			{ "GetLocalizeText", &UELSSUtility::execGetLocalizeText },
			{ "GetMatchPlayerMax", &UELSSUtility::execGetMatchPlayerMax },
			{ "GetMatchSpectatorsMax", &UELSSUtility::execGetMatchSpectatorsMax },
			{ "GetNetworkErrorID", &UELSSUtility::execGetNetworkErrorID },
			{ "GetNetworkStatus", &UELSSUtility::execGetNetworkStatus },
			{ "GetPlayerRankData", &UELSSUtility::execGetPlayerRankData },
			{ "GetPlayerRankDataToRankId", &UELSSUtility::execGetPlayerRankDataToRankId },
			{ "GetPlayerRankDataToRankPoint", &UELSSUtility::execGetPlayerRankDataToRankPoint },
			{ "GetScreenUpdateCheck", &UELSSUtility::execGetScreenUpdateCheck },
			{ "GetSSBattlePassPoint", &UELSSUtility::execGetSSBattlePassPoint },
			{ "GetSSCommandLineValue_SSBotClient", &UELSSUtility::execGetSSCommandLineValue_SSBotClient },
			{ "GetSSCommandLineValue_SSDirect", &UELSSUtility::execGetSSCommandLineValue_SSDirect },
			{ "GetSSCommandLineValue_SSFlags", &UELSSUtility::execGetSSCommandLineValue_SSFlags },
			{ "GetSSCommandLineValue_SSMatchMakeGroupId", &UELSSUtility::execGetSSCommandLineValue_SSMatchMakeGroupId },
			{ "GetSSCommandLineValue_SSServer", &UELSSUtility::execGetSSCommandLineValue_SSServer },
			{ "GetSSControlledPlayerController", &UELSSUtility::execGetSSControlledPlayerController },
			{ "GetSSCurrentPlayerRank", &UELSSUtility::execGetSSCurrentPlayerRank },
			{ "GetSSCurrentStampedeLevel", &UELSSUtility::execGetSSCurrentStampedeLevel },
			{ "GetSSCurrentStampedeLevelExp", &UELSSUtility::execGetSSCurrentStampedeLevelExp },
			{ "GetSSDebugEditWrestlerSetupParam", &UELSSUtility::execGetSSDebugEditWrestlerSetupParam },
			{ "GetSSGameDataManager", &UELSSUtility::execGetSSGameDataManager },
			{ "GetSSGameLiftObject", &UELSSUtility::execGetSSGameLiftObject },
			{ "GetSSInGamePlayFlag", &UELSSUtility::execGetSSInGamePlayFlag },
			{ "GetSSLastEndGameReason", &UELSSUtility::execGetSSLastEndGameReason },
			{ "GetSSLevelTransitionEvent", &UELSSUtility::execGetSSLevelTransitionEvent },
			{ "GetSSLocalizeText", &UELSSUtility::execGetSSLocalizeText },
			{ "GetSSMasterData", &UELSSUtility::execGetSSMasterData },
			{ "GetSSMasterDataRawData", &UELSSUtility::execGetSSMasterDataRawData },
			{ "GetSSMasterDataVersion", &UELSSUtility::execGetSSMasterDataVersion },
			{ "GetSSmodeAPIErrorData", &UELSSUtility::execGetSSmodeAPIErrorData },
			{ "GetSSModeConfigData", &UELSSUtility::execGetSSModeConfigData },
			{ "GetSSmodeNetworkErrorData", &UELSSUtility::execGetSSmodeNetworkErrorData },
			{ "GetSSModePlayerID", &UELSSUtility::execGetSSModePlayerID },
			{ "GetSSModeRequestType", &UELSSUtility::execGetSSModeRequestType },
			{ "GetSSModeServerBuildVersion", &UELSSUtility::execGetSSModeServerBuildVersion },
			{ "GetSSModeServerEnvData", &UELSSUtility::execGetSSModeServerEnvData },
			{ "GetSSModeServerEnvName", &UELSSUtility::execGetSSModeServerEnvName },
			{ "GetSSModeServiceParam", &UELSSUtility::execGetSSModeServiceParam },
			{ "GetSSModeServiceState", &UELSSUtility::execGetSSModeServiceState },
			{ "GetSSModeUserName", &UELSSUtility::execGetSSModeUserName },
			{ "GetSSOnlineErrorType", &UELSSUtility::execGetSSOnlineErrorType },
			{ "GetSSPlayerData", &UELSSUtility::execGetSSPlayerData },
			{ "GetSSRequestErrorStatusType", &UELSSUtility::execGetSSRequestErrorStatusType },
			{ "GetSSRootObject", &UELSSUtility::execGetSSRootObject },
			{ "GetSSSaveDataManager", &UELSSUtility::execGetSSSaveDataManager },
			{ "GetSSSelectedWrestlerID", &UELSSUtility::execGetSSSelectedWrestlerID },
			{ "GetSSServerEndpoint", &UELSSUtility::execGetSSServerEndpoint },
			{ "GetStampedeRankData", &UELSSUtility::execGetStampedeRankData },
			{ "GetUniqueErrorData", &UELSSUtility::execGetUniqueErrorData },
			{ "GetWrestlerID", &UELSSUtility::execGetWrestlerID },
			{ "GetWrestlerSetupData", &UELSSUtility::execGetWrestlerSetupData },
			{ "GetWrestlerSetupParam", &UELSSUtility::execGetWrestlerSetupParam },
			{ "GetWrestlerType", &UELSSUtility::execGetWrestlerType },
			{ "GetYGS2APIErrorData", &UELSSUtility::execGetYGS2APIErrorData },
			{ "GetYGS2ErrorType", &UELSSUtility::execGetYGS2ErrorType },
			{ "GetYGS2RequestType", &UELSSUtility::execGetYGS2RequestType },
			{ "IsAccountLogin", &UELSSUtility::execIsAccountLogin },
			{ "IsDevMode", &UELSSUtility::execIsDevMode },
			{ "IsDownloadingSSModeServiceParam", &UELSSUtility::execIsDownloadingSSModeServiceParam },
			{ "IsEnableSSMasterData", &UELSSUtility::execIsEnableSSMasterData },
			{ "IsSSCheatDetected", &UELSSUtility::execIsSSCheatDetected },
			{ "IsSSDebugLocalCheckMode", &UELSSUtility::execIsSSDebugLocalCheckMode },
			{ "IsSSDevelopmentUser", &UELSSUtility::execIsSSDevelopmentUser },
			{ "IsSSDisableSound", &UELSSUtility::execIsSSDisableSound },
			{ "IsSSMode", &UELSSUtility::execIsSSMode },
			{ "IsSSPlayableUser", &UELSSUtility::execIsSSPlayableUser },
			{ "NotifySSGameEnd", &UELSSUtility::execNotifySSGameEnd },
			{ "NotifySSGameStart", &UELSSUtility::execNotifySSGameStart },
			{ "OnEnterSSMode", &UELSSUtility::execOnEnterSSMode },
			{ "OnExitSSMode", &UELSSUtility::execOnExitSSMode },
			{ "PlaySSLoadingScreen", &UELSSUtility::execPlaySSLoadingScreen },
			{ "RegistYGS2Request", &UELSSUtility::execRegistYGS2Request },
			{ "RequestDownloadSSModeServiceParam", &UELSSUtility::execRequestDownloadSSModeServiceParam },
			{ "SetInputMode", &UELSSUtility::execSetInputMode },
			{ "SetScreenUpdateCheck", &UELSSUtility::execSetScreenUpdateCheck },
			{ "SetSSCheatDetected", &UELSSUtility::execSetSSCheatDetected },
			{ "SetSSDefaultMapToMainMenu", &UELSSUtility::execSetSSDefaultMapToMainMenu },
			{ "SetSSDefaultMapToSSTop", &UELSSUtility::execSetSSDefaultMapToSSTop },
			{ "SetSSGameLiftObject", &UELSSUtility::execSetSSGameLiftObject },
			{ "SetSSInGamePlayFlag", &UELSSUtility::execSetSSInGamePlayFlag },
			{ "SetSSPlayerData", &UELSSUtility::execSetSSPlayerData },
			{ "SetVisibleFadeForChangeLevel", &UELSSUtility::execSetVisibleFadeForChangeLevel },
			{ "SSLoginRequest", &UELSSUtility::execSSLoginRequest },
			{ "SSModeGameDataSetup", &UELSSUtility::execSSModeGameDataSetup },
			{ "SSModeNetworkSetup", &UELSSUtility::execSSModeNetworkSetup },
			{ "SSNXShowApplicationError", &UELSSUtility::execSSNXShowApplicationError },
			{ "SSPrintStringToLog", &UELSSUtility::execSSPrintStringToLog },
			{ "StopSSLoadingScreen", &UELSSUtility::execStopSSLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics
	{
		struct ELSSUtility_eventCanUseSSMasterData_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCanUseSSMasterData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventCanUseSSMasterData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventCanUseSSMasterData_Parms), &Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CanUseSSMasterData", nullptr, nullptr, sizeof(ELSSUtility_eventCanUseSSMasterData_Parms), Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CheckEOSMngTickable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics
	{
		struct ELSSUtility_eventConvertSSWrestlerSetupParamToBaseParam_Parms
		{
			FSSWrestlerSetupParam inSSWrestlerSetupParam;
			FWrestlerSetupParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSSWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSSWrestlerSetupParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_inSSWrestlerSetupParam = { "inSSWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventConvertSSWrestlerSetupParamToBaseParam_Parms, inSSWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventConvertSSWrestlerSetupParamToBaseParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_inSSWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "ConvertSSWrestlerSetupParamToBaseParam", nullptr, nullptr, sizeof(ELSSUtility_eventConvertSSWrestlerSetupParamToBaseParam_Parms), Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics
	{
		struct ELSSUtility_eventConvertWrestlerSetupParamToSSParam_Parms
		{
			FWrestlerSetupParam inWrestlerSetupParam;
			FSSWrestlerSetupParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inWrestlerSetupParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_inWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_inWrestlerSetupParam = { "inWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventConvertWrestlerSetupParamToSSParam_Parms, inWrestlerSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_inWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_inWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventConvertWrestlerSetupParamToSSParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_inWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "ConvertWrestlerSetupParamToSSParam", nullptr, nullptr, sizeof(ELSSUtility_eventConvertWrestlerSetupParamToSSParam_Parms), Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics
	{
		struct ELSSUtility_eventCreateShortErrorCodeNumber_Parms
		{
			const UObject* WorldContextObject;
			eErrorID inApiErrorCategory;
			int32 inApiErrorCode;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inApiErrorCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inApiErrorCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inApiErrorCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateShortErrorCodeNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCategory = { "inApiErrorCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateShortErrorCodeNumber_Parms, inApiErrorCategory), Z_Construct_UEnum_ABP_200508_eErrorID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCode = { "inApiErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateShortErrorCodeNumber_Parms, inApiErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateShortErrorCodeNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_inApiErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CreateShortErrorCodeNumber", nullptr, nullptr, sizeof(ELSSUtility_eventCreateShortErrorCodeNumber_Parms), Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics
	{
		struct ELSSUtility_eventCreateSSLevelTransitionEvent_Parms
		{
			const UObject* WorldContextObject;
			UELSSLevelTransitionEvent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSLevelTransitionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSLevelTransitionEvent_Parms, ReturnValue), Z_Construct_UClass_UELSSLevelTransitionEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CreateSSLevelTransitionEvent", nullptr, nullptr, sizeof(ELSSUtility_eventCreateSSLevelTransitionEvent_Parms), Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics
	{
		struct ELSSUtility_eventCreateSSMasterDataInstance_Parms
		{
			const UObject* WorldContextObject;
			UELSSMasterData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSMasterDataInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSMasterDataInstance_Parms, ReturnValue), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CreateSSMasterDataInstance", nullptr, nullptr, sizeof(ELSSUtility_eventCreateSSMasterDataInstance_Parms), Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics
	{
		struct ELSSUtility_eventCreateSSRootObject_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UELSSRootObject>  inRootObjectClass;
			UELSSRootObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inRootObjectClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSRootObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_inRootObjectClass = { "inRootObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSRootObject_Parms, inRootObjectClass), Z_Construct_UClass_UELSSRootObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateSSRootObject_Parms, ReturnValue), Z_Construct_UClass_UELSSRootObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_inRootObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CreateSSRootObject", nullptr, nullptr, sizeof(ELSSUtility_eventCreateSSRootObject_Parms), Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CreateSSRootObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CreateSSRootObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics
	{
		struct ELSSUtility_eventCreateYGS2Request_Parms
		{
			EYGS2Api Api;
			UYGS2RequestBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Api_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Api_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Api;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateYGS2Request_Parms, Api), Z_Construct_UEnum_yGS2Client_EYGS2Api, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventCreateYGS2Request_Parms, ReturnValue), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_Api,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "CreateYGS2Request", nullptr, nullptr, sizeof(ELSSUtility_eventCreateYGS2Request_Parms), Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_CreateYGS2Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_CreateYGS2Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics
	{
		struct ELSSUtility_eventDestroySSLevelTransitionEvent_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventDestroySSLevelTransitionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "DestroySSLevelTransitionEvent", nullptr, nullptr, sizeof(ELSSUtility_eventDestroySSLevelTransitionEvent_Parms), Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics
	{
		struct ELSSUtility_eventDestroySSMasterData_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventDestroySSMasterData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "DestroySSMasterData", nullptr, nullptr, sizeof(ELSSUtility_eventDestroySSMasterData_Parms), Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_DestroySSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_DestroySSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics
	{
		struct ELSSUtility_eventDestroySSRootObject_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventDestroySSRootObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "DestroySSRootObject", nullptr, nullptr, sizeof(ELSSUtility_eventDestroySSRootObject_Parms), Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_DestroySSRootObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_DestroySSRootObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics
	{
		struct ELSSUtility_eventEndWaitDownloadSSModeServiceParam_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventEndWaitDownloadSSModeServiceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "EndWaitDownloadSSModeServiceParam", nullptr, nullptr, sizeof(ELSSUtility_eventEndWaitDownloadSSModeServiceParam_Parms), Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "EOSForceUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_EOSForceUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_EOSForceUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics
	{
		struct ELSSUtility_eventGetAWSErrorData_Parms
		{
			int32 GetType;
			FSSErrorTextDataToAWS ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_GetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_GetType = { "GetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetAWSErrorData_Parms, GetType), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_GetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_GetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetAWSErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToAWS, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_GetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetAWSErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetAWSErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetAWSErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetAWSErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics
	{
		struct ELSSUtility_eventGetBase64DecodeData_Parms
		{
			FString encryptData;
			bool isUniqueData;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_encryptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_encryptData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUniqueData_MetaData[];
#endif
		static void NewProp_isUniqueData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUniqueData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_encryptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_encryptData = { "encryptData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetBase64DecodeData_Parms, encryptData), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_encryptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_encryptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetBase64DecodeData_Parms*)Obj)->isUniqueData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData = { "isUniqueData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetBase64DecodeData_Parms), &Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetBase64DecodeData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_encryptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_isUniqueData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetBase64DecodeData", nullptr, nullptr, sizeof(ELSSUtility_eventGetBase64DecodeData_Parms), Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics
	{
		struct ELSSUtility_eventGetBase64EncryptData_Parms
		{
			FString baseData;
			bool isUniqueData;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_baseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isUniqueData_MetaData[];
#endif
		static void NewProp_isUniqueData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUniqueData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_baseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_baseData = { "baseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetBase64EncryptData_Parms, baseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_baseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_baseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetBase64EncryptData_Parms*)Obj)->isUniqueData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData = { "isUniqueData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetBase64EncryptData_Parms), &Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetBase64EncryptData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_baseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_isUniqueData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetBase64EncryptData", nullptr, nullptr, sizeof(ELSSUtility_eventGetBase64EncryptData_Parms), Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics
	{
		struct ELSSUtility_eventGetDefaultAPIPollingLimit_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetDefaultAPIPollingLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetDefaultAPIPollingLimit", nullptr, nullptr, sizeof(ELSSUtility_eventGetDefaultAPIPollingLimit_Parms), Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics
	{
		struct ELSSUtility_eventGetDefaultAPIPollingTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetDefaultAPIPollingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetDefaultAPIPollingTime", nullptr, nullptr, sizeof(ELSSUtility_eventGetDefaultAPIPollingTime_Parms), Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics
	{
		struct ELSSUtility_eventGetELEOSManager_Parms
		{
			const UObject* WorldContextObject;
			UELEOSManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetELEOSManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetELEOSManager_Parms, ReturnValue), Z_Construct_UClass_UELEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetELEOSManager", nullptr, nullptr, sizeof(ELSSUtility_eventGetELEOSManager_Parms), Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetELEOSManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetELEOSManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics
	{
		struct ELSSUtility_eventGetEOSAuthToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetEOSAuthToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetEOSAuthToken", nullptr, nullptr, sizeof(ELSSUtility_eventGetEOSAuthToken_Parms), Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics
	{
		struct ELSSUtility_eventGetErrorTextLinkMessage_Parms
		{
			EErrDialogType GetType;
			FSSErrorTextLinkDialogMessage ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType = { "GetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetErrorTextLinkMessage_Parms, GetType), Z_Construct_UEnum_yGS2Client_EErrDialogType, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetErrorTextLinkMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextLinkDialogMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_GetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetErrorTextLinkMessage", nullptr, nullptr, sizeof(ELSSUtility_eventGetErrorTextLinkMessage_Parms), Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics
	{
		struct ELSSUtility_eventGetHTTPErrorData_Parms
		{
			int32 GetId;
			FSSErrorTextDataToHTTPCode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_GetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_GetId = { "GetId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetHTTPErrorData_Parms, GetId), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_GetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_GetId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetHTTPErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_GetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetHTTPErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetHTTPErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics
	{
		struct ELSSUtility_eventGetLocalizeText_Parms
		{
			FString stNS;
			FString stKey;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stNS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stNS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stKey;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stNS = { "stNS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetLocalizeText_Parms, stNS), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stKey = { "stKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetLocalizeText_Parms, stKey), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetLocalizeText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stNS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_stKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetLocalizeText", nullptr, nullptr, sizeof(ELSSUtility_eventGetLocalizeText_Parms), Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetLocalizeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetLocalizeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics
	{
		struct ELSSUtility_eventGetMatchPlayerMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetMatchPlayerMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetMatchPlayerMax", nullptr, nullptr, sizeof(ELSSUtility_eventGetMatchPlayerMax_Parms), Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics
	{
		struct ELSSUtility_eventGetMatchSpectatorsMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetMatchSpectatorsMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetMatchSpectatorsMax", nullptr, nullptr, sizeof(ELSSUtility_eventGetMatchSpectatorsMax_Parms), Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics
	{
		struct ELSSUtility_eventGetNetworkErrorID_Parms
		{
			int32 errID;
			eErrorID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_errID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetNetworkErrorID_Parms, errID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetNetworkErrorID_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_eErrorID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetNetworkErrorID", nullptr, nullptr, sizeof(ELSSUtility_eventGetNetworkErrorID_Parms), Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics
	{
		struct ELSSUtility_eventGetNetworkStatus_Parms
		{
			const UObject* WorldContextObject;
			EELNetworkStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetNetworkStatus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetNetworkStatus_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetNetworkStatus", nullptr, nullptr, sizeof(ELSSUtility_eventGetNetworkStatus_Parms), Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetNetworkStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetNetworkStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics
	{
		struct ELSSUtility_eventGetPlayerRankData_Parms
		{
			int32 Exp;
			int32 expNext;
			float expRate;
			FSSPlayerRankParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_expNext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_expRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_Exp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankData_Parms, Exp), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_Exp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_expNext = { "expNext", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankData_Parms, expNext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_expRate = { "expRate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankData_Parms, expRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_expNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_expRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetPlayerRankData", nullptr, nullptr, sizeof(ELSSUtility_eventGetPlayerRankData_Parms), Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetPlayerRankData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetPlayerRankData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics
	{
		struct ELSSUtility_eventGetPlayerRankDataToRankId_Parms
		{
			int32 rankId;
			FSSPlayerRankParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rankId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rankId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_rankId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_rankId = { "rankId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankId_Parms, rankId), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_rankId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_rankId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_rankId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetPlayerRankDataToRankId", nullptr, nullptr, sizeof(ELSSUtility_eventGetPlayerRankDataToRankId_Parms), Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics
	{
		struct ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms
		{
			TArray<FSSPlayerRankParam> Table;
			int32 RankPoint;
			int32 LeaderboardRank;
			int32 refIdx;
			FSSPlayerRankParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Table;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_refIdx;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table_Inner = { "Table", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms, Table), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_RankPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms, RankPoint), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_RankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_RankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_LeaderboardRank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms, LeaderboardRank), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_LeaderboardRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_LeaderboardRank_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_refIdx = { "refIdx", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms, refIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_refIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetPlayerRankDataToRankPoint", nullptr, nullptr, sizeof(ELSSUtility_eventGetPlayerRankDataToRankPoint_Parms), Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics
	{
		struct ELSSUtility_eventGetScreenUpdateCheck_Parms
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
	void Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetScreenUpdateCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetScreenUpdateCheck_Parms), &Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetScreenUpdateCheck", nullptr, nullptr, sizeof(ELSSUtility_eventGetScreenUpdateCheck_Parms), Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics
	{
		struct ELSSUtility_eventGetSSBattlePassPoint_Parms
		{
			FBattlePassPointRateParam prm;
			float StarNum;
			int32 ssPlayCntToDay;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_prm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StarNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayCntToDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssPlayCntToDay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_prm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_prm = { "prm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSBattlePassPoint_Parms, prm), Z_Construct_UScriptStruct_FBattlePassPointRateParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_prm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_prm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_StarNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_StarNum = { "StarNum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSBattlePassPoint_Parms, StarNum), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_StarNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_StarNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ssPlayCntToDay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ssPlayCntToDay = { "ssPlayCntToDay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSBattlePassPoint_Parms, ssPlayCntToDay), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ssPlayCntToDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ssPlayCntToDay_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSBattlePassPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_prm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_StarNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ssPlayCntToDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSBattlePassPoint", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSBattlePassPoint_Parms), Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics
	{
		struct ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms
		{
			const UObject* WorldContextObject;
			FString outUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_outUserId = { "outUserId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms, outUserId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_outUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCommandLineValue_SSBotClient", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCommandLineValue_SSBotClient_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics
	{
		struct ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms
		{
			const UObject* WorldContextObject;
			FString outUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_outUserId = { "outUserId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms, outUserId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_outUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCommandLineValue_SSDirect", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCommandLineValue_SSDirect_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics
	{
		struct ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms
		{
			const UObject* WorldContextObject;
			FString outFlags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_outFlags = { "outFlags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms, outFlags), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_outFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCommandLineValue_SSFlags", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCommandLineValue_SSFlags_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics
	{
		struct ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms
		{
			const UObject* WorldContextObject;
			int32 outGroupId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outGroupId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_outGroupId = { "outGroupId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms, outGroupId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_outGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCommandLineValue_SSMatchMakeGroupId", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCommandLineValue_SSMatchMakeGroupId_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics
	{
		struct ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms
		{
			const UObject* WorldContextObject;
			FString outEnvName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outEnvName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_outEnvName = { "outEnvName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms, outEnvName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_outEnvName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCommandLineValue_SSServer", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCommandLineValue_SSServer_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics
	{
		struct ELSSUtility_eventGetSSControlledPlayerController_Parms
		{
			const UObject* WorldContextObject;
			APlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSControlledPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSControlledPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSControlledPlayerController", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSControlledPlayerController_Parms), Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics
	{
		struct ELSSUtility_eventGetSSCurrentPlayerRank_Parms
		{
			const UObject* WorldContextObject;
			int32 outRank;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outRank;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentPlayerRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_outRank = { "outRank", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentPlayerRank_Parms, outRank), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCurrentPlayerRank_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCurrentPlayerRank_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_outRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCurrentPlayerRank", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCurrentPlayerRank_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics
	{
		struct ELSSUtility_eventGetSSCurrentStampedeLevel_Parms
		{
			const UObject* WorldContextObject;
			int32 outLevel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentStampedeLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_outLevel = { "outLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentStampedeLevel_Parms, outLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCurrentStampedeLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCurrentStampedeLevel_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_outLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCurrentStampedeLevel", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCurrentStampedeLevel_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics
	{
		struct ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms
		{
			const UObject* WorldContextObject;
			int32 outLevel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_outLevel = { "outLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms, outLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_outLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSCurrentStampedeLevelExp", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSCurrentStampedeLevelExp_Parms), Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics
	{
		struct ELSSUtility_eventGetSSDebugEditWrestlerSetupParam_Parms
		{
			FName inPresetName;
			FSSWrestlerSetupParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inPresetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_inPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_inPresetName = { "inPresetName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSDebugEditWrestlerSetupParam_Parms, inPresetName), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_inPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_inPresetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSDebugEditWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_inPresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSDebugEditWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSDebugEditWrestlerSetupParam_Parms), Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics
	{
		struct ELSSUtility_eventGetSSGameDataManager_Parms
		{
			const UObject* WorldContextObject;
			UELSSGameModeDataManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSGameDataManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSGameDataManager_Parms, ReturnValue), Z_Construct_UClass_UELSSGameModeDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSGameDataManager", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSGameDataManager_Parms), Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics
	{
		struct ELSSUtility_eventGetSSGameLiftObject_Parms
		{
			UGameLiftObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSGameLiftObject_Parms, ReturnValue), Z_Construct_UClass_UGameLiftObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSGameLiftObject", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSGameLiftObject_Parms), Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics
	{
		struct ELSSUtility_eventGetSSInGamePlayFlag_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSInGamePlayFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSInGamePlayFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSInGamePlayFlag_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSInGamePlayFlag", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSInGamePlayFlag_Parms), Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics
	{
		struct ELSSUtility_eventGetSSLastEndGameReason_Parms
		{
			const UObject* WorldContextObject;
			ESSEndGameReason ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLastEndGameReason_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLastEndGameReason_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSLastEndGameReason", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSLastEndGameReason_Parms), Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics
	{
		struct ELSSUtility_eventGetSSLevelTransitionEvent_Parms
		{
			const UObject* WorldContextObject;
			UELSSLevelTransitionEvent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLevelTransitionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLevelTransitionEvent_Parms, ReturnValue), Z_Construct_UClass_UELSSLevelTransitionEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSLevelTransitionEvent", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSLevelTransitionEvent_Parms), Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics
	{
		struct ELSSUtility_eventGetSSLocalizeText_Parms
		{
			FString stKey;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stKey;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_stKey = { "stKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLocalizeText_Parms, stKey), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSLocalizeText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_stKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSLocalizeText", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSLocalizeText_Parms), Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics
	{
		struct ELSSUtility_eventGetSSMasterData_Parms
		{
			const UObject* WorldContextObject;
			UELSSMasterData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterData_Parms, ReturnValue), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSMasterData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSMasterData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics
	{
		struct ELSSUtility_eventGetSSMasterDataRawData_Parms
		{
			const UObject* WorldContextObject;
			UELSSMasterDataRawData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterDataRawData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterDataRawData_Parms, ReturnValue), Z_Construct_UClass_UELSSMasterDataRawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSMasterDataRawData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSMasterDataRawData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics
	{
		struct ELSSUtility_eventGetSSMasterDataVersion_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterDataVersion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSMasterDataVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSMasterDataVersion", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSMasterDataVersion_Parms), Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics
	{
		struct ELSSUtility_eventGetSSmodeAPIErrorData_Parms
		{
			eErrorStatusType GetType;
			FSSErrorTextDataToSSAPI ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType = { "GetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSmodeAPIErrorData_Parms, GetType), Z_Construct_UEnum_ABP_200508_eErrorStatusType, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSmodeAPIErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToSSAPI, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_GetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSmodeAPIErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSmodeAPIErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics
	{
		struct ELSSUtility_eventGetSSModeConfigData_Parms
		{
			UELSSModeConfigData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeConfigData_Parms, ReturnValue), Z_Construct_UClass_UELSSModeConfigData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeConfigData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeConfigData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics
	{
		struct ELSSUtility_eventGetSSmodeNetworkErrorData_Parms
		{
			int32 GetType;
			FSSErrorTextDataToNetworkConnect ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_GetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_GetType = { "GetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSmodeNetworkErrorData_Parms, GetType), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_GetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_GetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSmodeNetworkErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToNetworkConnect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_GetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSmodeNetworkErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSmodeNetworkErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics
	{
		struct ELSSUtility_eventGetSSModePlayerID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModePlayerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModePlayerID", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModePlayerID_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics
	{
		struct ELSSUtility_eventGetSSModeRequestType_Parms
		{
			int32 apiID;
			eSSModeAPIType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_apiID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_apiID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_apiID = { "apiID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeRequestType_Parms, apiID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_apiID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_apiID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeRequestType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_eSSModeAPIType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_apiID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeRequestType", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeRequestType_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics
	{
		struct ELSSUtility_eventGetSSModeServerBuildVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServerBuildVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeServerBuildVersion", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeServerBuildVersion_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics
	{
		struct ELSSUtility_eventGetSSModeServerEnvData_Parms
		{
			FSSModeServerParam getEnv;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_getEnv;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_getEnv = { "getEnv", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServerEnvData_Parms, getEnv), Z_Construct_UScriptStruct_FSSModeServerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSModeServerEnvData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSModeServerEnvData_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_getEnv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeServerEnvData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeServerEnvData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics
	{
		struct ELSSUtility_eventGetSSModeServerEnvName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServerEnvName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeServerEnvName", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeServerEnvName_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics
	{
		struct ELSSUtility_eventGetSSModeServiceParam_Parms
		{
			const UObject* WorldContextObject;
			UELSSModeServiceParam* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServiceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServiceParam_Parms, ReturnValue), Z_Construct_UClass_UELSSModeServiceParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeServiceParam", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeServiceParam_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics
	{
		struct ELSSUtility_eventGetSSModeServiceState_Parms
		{
			const UObject* WorldContextObject;
			ESSModeServiceState ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServiceState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeServiceState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSModeServiceState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeServiceState", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeServiceState_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics
	{
		struct ELSSUtility_eventGetSSModeUserName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSModeUserName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSModeUserName", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSModeUserName_Parms), Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSModeUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSModeUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics
	{
		struct ELSSUtility_eventGetSSOnlineErrorType_Parms
		{
			int32 errID;
			ESSOnlineErrorType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_errID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSOnlineErrorType_Parms, errID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSOnlineErrorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSOnlineErrorType", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSOnlineErrorType_Parms), Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics
	{
		struct ELSSUtility_eventGetSSPlayerData_Parms
		{
			const UObject* WorldContextObject;
			FYGS2SSPlayerData outPlayerData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outPlayerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSPlayerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_outPlayerData = { "outPlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSPlayerData_Parms, outPlayerData), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSPlayerData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSPlayerData_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_outPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSPlayerData", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSPlayerData_Parms), Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics
	{
		struct ELSSUtility_eventGetSSRequestErrorStatusType_Parms
		{
			int32 errID;
			eErrorStatusType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_errID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSRequestErrorStatusType_Parms, errID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSRequestErrorStatusType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_eErrorStatusType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSRequestErrorStatusType", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSRequestErrorStatusType_Parms), Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics
	{
		struct ELSSUtility_eventGetSSRootObject_Parms
		{
			const UObject* WorldContextObject;
			UELSSRootObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSRootObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSRootObject_Parms, ReturnValue), Z_Construct_UClass_UELSSRootObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSRootObject", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSRootObject_Parms), Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSRootObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSRootObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics
	{
		struct ELSSUtility_eventGetSSSaveDataManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSSaveDataManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSSaveDataManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSSaveDataManager_Parms, ReturnValue), Z_Construct_UClass_AELSSSaveDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSSaveDataManager", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSSaveDataManager_Parms), Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics
	{
		struct ELSSUtility_eventGetSSSelectedWrestlerID_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSSelectedWrestlerID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSSelectedWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSSelectedWrestlerID", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSSelectedWrestlerID_Parms), Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics
	{
		struct ELSSUtility_eventGetSSServerEndpoint_Parms
		{
			TArray<FSSServerEndpoint> SSServerEndpoints;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSServerEndpoints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SSServerEndpoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_SSServerEndpoints_Inner = { "SSServerEndpoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSServerEndpoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_SSServerEndpoints = { "SSServerEndpoints", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetSSServerEndpoint_Parms, SSServerEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventGetSSServerEndpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventGetSSServerEndpoint_Parms), &Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_SSServerEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_SSServerEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetSSServerEndpoint", nullptr, nullptr, sizeof(ELSSUtility_eventGetSSServerEndpoint_Parms), Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics
	{
		struct ELSSUtility_eventGetStampedeRankData_Parms
		{
			int32 Exp;
			int32 expNext;
			float expRate;
			FSSStampedeRankParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_expNext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_expRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_Exp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetStampedeRankData_Parms, Exp), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_Exp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_expNext = { "expNext", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetStampedeRankData_Parms, expNext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_expRate = { "expRate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetStampedeRankData_Parms, expRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetStampedeRankData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSStampedeRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_expNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_expRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetStampedeRankData", nullptr, nullptr, sizeof(ELSSUtility_eventGetStampedeRankData_Parms), Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetStampedeRankData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetStampedeRankData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics
	{
		struct ELSSUtility_eventGetUniqueErrorData_Parms
		{
			ESSOnlineErrorType Type;
			FSSErrorTextDataToUniqueError ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetUniqueErrorData_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetUniqueErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToUniqueError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetUniqueErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetUniqueErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics
	{
		struct ELSSUtility_eventGetWrestlerID_Parms
		{
			int32 WrestlerID;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerID_Parms, WrestlerID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(ELSSUtility_eventGetWrestlerID_Parms), Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics
	{
		struct ELSSUtility_eventGetWrestlerSetupData_Parms
		{
			EWrestlerID_N WrestlerID;
			FSSWrestlerSetupParam ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerSetupData_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerSetupData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetWrestlerSetupData", nullptr, nullptr, sizeof(ELSSUtility_eventGetWrestlerSetupData_Parms), Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics
	{
		struct ELSSUtility_eventGetWrestlerSetupParam_Parms
		{
			EWrestlerID_N WrestlerID;
			FWrestlerSetupParam ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerSetupParam_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSUtility_eventGetWrestlerSetupParam_Parms), Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics
	{
		struct ELSSUtility_eventGetWrestlerType_Parms
		{
			int32 WrestlerType;
			ESSWrestlerType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerType_Parms, WrestlerType), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_WrestlerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetWrestlerType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetWrestlerType", nullptr, nullptr, sizeof(ELSSUtility_eventGetWrestlerType_Parms), Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetWrestlerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetWrestlerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics
	{
		struct ELSSUtility_eventGetYGS2APIErrorData_Parms
		{
			EYGS2ErrorType GetType;
			FSSErrorTextDataToYGS2API ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GetType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType = { "GetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2APIErrorData_Parms, GetType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2APIErrorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSErrorTextDataToYGS2API, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_GetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetYGS2APIErrorData", nullptr, nullptr, sizeof(ELSSUtility_eventGetYGS2APIErrorData_Parms), Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics
	{
		struct ELSSUtility_eventGetYGS2ErrorType_Parms
		{
			int32 errID;
			EYGS2ErrorType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_errID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2ErrorType_Parms, errID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2ErrorType_Parms, ReturnValue), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetYGS2ErrorType", nullptr, nullptr, sizeof(ELSSUtility_eventGetYGS2ErrorType_Parms), Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics
	{
		struct ELSSUtility_eventGetYGS2RequestType_Parms
		{
			int32 apiID;
			EYGS2Api ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_apiID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_apiID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_apiID = { "apiID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2RequestType_Parms, apiID), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_apiID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_apiID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventGetYGS2RequestType_Parms, ReturnValue), Z_Construct_UEnum_yGS2Client_EYGS2Api, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_apiID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "GetYGS2RequestType", nullptr, nullptr, sizeof(ELSSUtility_eventGetYGS2RequestType_Parms), Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics
	{
		struct ELSSUtility_eventIsAccountLogin_Parms
		{
			bool isMissed;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMissed_MetaData[];
#endif
		static void NewProp_isMissed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMissed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsAccountLogin_Parms*)Obj)->isMissed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed = { "isMissed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsAccountLogin_Parms), &Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsAccountLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsAccountLogin_Parms), &Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_isMissed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsAccountLogin", nullptr, nullptr, sizeof(ELSSUtility_eventIsAccountLogin_Parms), Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsAccountLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsAccountLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics
	{
		struct ELSSUtility_eventIsDevMode_Parms
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
	void Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsDevMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsDevMode_Parms), &Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsDevMode", nullptr, nullptr, sizeof(ELSSUtility_eventIsDevMode_Parms), Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsDevMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsDevMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics
	{
		struct ELSSUtility_eventIsDownloadingSSModeServiceParam_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsDownloadingSSModeServiceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsDownloadingSSModeServiceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsDownloadingSSModeServiceParam_Parms), &Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsDownloadingSSModeServiceParam", nullptr, nullptr, sizeof(ELSSUtility_eventIsDownloadingSSModeServiceParam_Parms), Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics
	{
		struct ELSSUtility_eventIsEnableSSMasterData_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsEnableSSMasterData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsEnableSSMasterData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsEnableSSMasterData_Parms), &Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsEnableSSMasterData", nullptr, nullptr, sizeof(ELSSUtility_eventIsEnableSSMasterData_Parms), Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics
	{
		struct ELSSUtility_eventIsSSCheatDetected_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsSSCheatDetected_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSCheatDetected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSCheatDetected_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSCheatDetected", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSCheatDetected_Parms), Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics
	{
		struct ELSSUtility_eventIsSSDebugLocalCheckMode_Parms
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
	void Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSDebugLocalCheckMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSDebugLocalCheckMode_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSDebugLocalCheckMode", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSDebugLocalCheckMode_Parms), Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics
	{
		struct ELSSUtility_eventIsSSDevelopmentUser_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsSSDevelopmentUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSDevelopmentUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSDevelopmentUser_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSDevelopmentUser", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSDevelopmentUser_Parms), Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics
	{
		struct ELSSUtility_eventIsSSDisableSound_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsSSDisableSound_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSDisableSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSDisableSound_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSDisableSound", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSDisableSound_Parms), Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSDisableSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSDisableSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics
	{
		struct ELSSUtility_eventIsSSMode_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSMode_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSMode", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSMode_Parms), Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics
	{
		struct ELSSUtility_eventIsSSPlayableUser_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventIsSSPlayableUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventIsSSPlayableUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventIsSSPlayableUser_Parms), &Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "IsSSPlayableUser", nullptr, nullptr, sizeof(ELSSUtility_eventIsSSPlayableUser_Parms), Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics
	{
		struct ELSSUtility_eventNotifySSGameEnd_Parms
		{
			const UObject* WorldContextObject;
			ESSEndGameReason inReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventNotifySSGameEnd_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventNotifySSGameEnd_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::NewProp_inReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "NotifySSGameEnd", nullptr, nullptr, sizeof(ELSSUtility_eventNotifySSGameEnd_Parms), Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics
	{
		struct ELSSUtility_eventNotifySSGameStart_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventNotifySSGameStart_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "NotifySSGameStart", nullptr, nullptr, sizeof(ELSSUtility_eventNotifySSGameStart_Parms), Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_NotifySSGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_NotifySSGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics
	{
		struct ELSSUtility_eventOnEnterSSMode_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventOnEnterSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "OnEnterSSMode", nullptr, nullptr, sizeof(ELSSUtility_eventOnEnterSSMode_Parms), Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_OnEnterSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_OnEnterSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics
	{
		struct ELSSUtility_eventOnExitSSMode_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventOnExitSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "OnExitSSMode", nullptr, nullptr, sizeof(ELSSUtility_eventOnExitSSMode_Parms), Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_OnExitSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_OnExitSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics
	{
		struct ELSSUtility_eventPlaySSLoadingScreen_Parms
		{
			bool bPlayUntilStopped;
			float PlayTime;
		};
		static void NewProp_bPlayUntilStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayUntilStopped;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit(void* Obj)
	{
		((ELSSUtility_eventPlaySSLoadingScreen_Parms*)Obj)->bPlayUntilStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_bPlayUntilStopped = { "bPlayUntilStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventPlaySSLoadingScreen_Parms), &Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_PlayTime = { "PlayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventPlaySSLoadingScreen_Parms, PlayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_bPlayUntilStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::NewProp_PlayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "PlaySSLoadingScreen", nullptr, nullptr, sizeof(ELSSUtility_eventPlaySSLoadingScreen_Parms), Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics
	{
		struct ELSSUtility_eventRegistYGS2Request_Parms
		{
			UYGS2RequestBase* Api;
			EELYGS2RequestFunctionType apiType;
			bool checkRequestEnabled;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Api;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_apiType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_apiType;
		static void NewProp_checkRequestEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkRequestEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventRegistYGS2Request_Parms, Api), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType = { "apiType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventRegistYGS2Request_Parms, apiType), Z_Construct_UEnum_ABP_200508_EELYGS2RequestFunctionType, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_checkRequestEnabled_SetBit(void* Obj)
	{
		((ELSSUtility_eventRegistYGS2Request_Parms*)Obj)->checkRequestEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_checkRequestEnabled = { "checkRequestEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventRegistYGS2Request_Parms), &Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_checkRequestEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventRegistYGS2Request_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventRegistYGS2Request_Parms), &Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_Api,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_apiType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_checkRequestEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "RegistYGS2Request", nullptr, nullptr, sizeof(ELSSUtility_eventRegistYGS2Request_Parms), Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_RegistYGS2Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_RegistYGS2Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics
	{
		struct ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms
		{
			const UObject* WorldContextObject;
			bool inSSModeOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_inSSModeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSSModeOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly_SetBit(void* Obj)
	{
		((ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms*)Obj)->inSSModeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly = { "inSSModeOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms), &Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms), &Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_inSSModeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "RequestDownloadSSModeServiceParam", nullptr, nullptr, sizeof(ELSSUtility_eventRequestDownloadSSModeServiceParam_Parms), Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics
	{
		struct ELSSUtility_eventSetInputMode_Parms
		{
			APlayerController* pController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::NewProp_pController = { "pController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetInputMode_Parms, pController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::NewProp_pController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetInputMode", nullptr, nullptr, sizeof(ELSSUtility_eventSetInputMode_Parms), Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetScreenUpdateCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics
	{
		struct ELSSUtility_eventSetSSCheatDetected_Parms
		{
			const UObject* WorldContextObject;
			bool IsOn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetSSCheatDetected_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSUtility_eventSetSSCheatDetected_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSetSSCheatDetected_Parms), &Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSCheatDetected", nullptr, nullptr, sizeof(ELSSUtility_eventSetSSCheatDetected_Parms), Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSDefaultMapToMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSDefaultMapToSSTop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics
	{
		struct ELSSUtility_eventSetSSGameLiftObject_Parms
		{
			UGameLiftObjectBase* ssGameLiftParam;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssGameLiftParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::NewProp_ssGameLiftParam = { "ssGameLiftParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetSSGameLiftObject_Parms, ssGameLiftParam), Z_Construct_UClass_UGameLiftObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::NewProp_ssGameLiftParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSGameLiftObject", nullptr, nullptr, sizeof(ELSSUtility_eventSetSSGameLiftObject_Parms), Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics
	{
		struct ELSSUtility_eventSetSSInGamePlayFlag_Parms
		{
			const UObject* WorldContextObject;
			bool IsOn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetSSInGamePlayFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSUtility_eventSetSSInGamePlayFlag_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSetSSInGamePlayFlag_Parms), &Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSInGamePlayFlag", nullptr, nullptr, sizeof(ELSSUtility_eventSetSSInGamePlayFlag_Parms), Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics
	{
		struct ELSSUtility_eventSetSSPlayerData_Parms
		{
			const UObject* WorldContextObject;
			FYGS2SSPlayerData dat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetSSPlayerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetSSPlayerData_Parms, dat), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetSSPlayerData", nullptr, nullptr, sizeof(ELSSUtility_eventSetSSPlayerData_Parms), Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetSSPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetSSPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics
	{
		struct ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms
		{
			const UObject* WorldContextObject;
			bool inEnable;
			bool inWithLoadingIcon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static void NewProp_inWithLoadingIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inWithLoadingIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms), &Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon_SetBit(void* Obj)
	{
		((ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms*)Obj)->inWithLoadingIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon = { "inWithLoadingIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms), &Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SetVisibleFadeForChangeLevel", nullptr, nullptr, sizeof(ELSSUtility_eventSetVisibleFadeForChangeLevel_Parms), Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics
	{
		struct ELSSUtility_eventSSLoginRequest_Parms
		{
			UYGS2Req_GetSSPlayerData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSLoginRequest_Parms, ReturnValue), Z_Construct_UClass_UYGS2Req_GetSSPlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SSLoginRequest", nullptr, nullptr, sizeof(ELSSUtility_eventSSLoginRequest_Parms), Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SSLoginRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SSLoginRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics
	{
		struct ELSSUtility_eventSSModeGameDataSetup_Parms
		{
			const UObject* WorldContextObject;
			bool isReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReset_MetaData[];
#endif
		static void NewProp_isReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSModeGameDataSetup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset_SetBit(void* Obj)
	{
		((ELSSUtility_eventSSModeGameDataSetup_Parms*)Obj)->isReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset = { "isReset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSSModeGameDataSetup_Parms), &Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::NewProp_isReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SSModeGameDataSetup", nullptr, nullptr, sizeof(ELSSUtility_eventSSModeGameDataSetup_Parms), Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics
	{
		struct ELSSUtility_eventSSModeNetworkSetup_Parms
		{
			bool isReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isReset_MetaData[];
#endif
		static void NewProp_isReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset_SetBit(void* Obj)
	{
		((ELSSUtility_eventSSModeNetworkSetup_Parms*)Obj)->isReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset = { "isReset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSSModeNetworkSetup_Parms), &Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::NewProp_isReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SSModeNetworkSetup", nullptr, nullptr, sizeof(ELSSUtility_eventSSModeNetworkSetup_Parms), Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics
	{
		struct ELSSUtility_eventSSNXShowApplicationError_Parms
		{
			const UObject* WorldContextObject;
			int32 inErrorCodeNumber;
			FString inDialogMessage;
			FString inFullScreenMessage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inErrorCodeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inDialogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inDialogMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inFullScreenMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inFullScreenMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSNXShowApplicationError_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inErrorCodeNumber = { "inErrorCodeNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSNXShowApplicationError_Parms, inErrorCodeNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inDialogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inDialogMessage = { "inDialogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSNXShowApplicationError_Parms, inDialogMessage), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inDialogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inDialogMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inFullScreenMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inFullScreenMessage = { "inFullScreenMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSNXShowApplicationError_Parms, inFullScreenMessage), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inFullScreenMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inFullScreenMessage_MetaData)) };
	void Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUtility_eventSSNXShowApplicationError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUtility_eventSSNXShowApplicationError_Parms), &Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inErrorCodeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inDialogMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_inFullScreenMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SSNXShowApplicationError", nullptr, nullptr, sizeof(ELSSUtility_eventSSNXShowApplicationError_Parms), Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics
	{
		struct ELSSUtility_eventSSPrintStringToLog_Parms
		{
			FString inString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::NewProp_inString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::NewProp_inString = { "inString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUtility_eventSSPrintStringToLog_Parms, inString), METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::NewProp_inString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::NewProp_inString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "SSPrintStringToLog", nullptr, nullptr, sizeof(ELSSUtility_eventSSPrintStringToLog_Parms), Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUtility, nullptr, "StopSSLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSUtility_NoRegister()
	{
		return UELSSUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSUtility_CanUseSSMasterData, "CanUseSSMasterData" }, // 3657777367
		{ &Z_Construct_UFunction_UELSSUtility_CheckEOSMngTickable, "CheckEOSMngTickable" }, // 4097574556
		{ &Z_Construct_UFunction_UELSSUtility_ConvertSSWrestlerSetupParamToBaseParam, "ConvertSSWrestlerSetupParamToBaseParam" }, // 3360645943
		{ &Z_Construct_UFunction_UELSSUtility_ConvertWrestlerSetupParamToSSParam, "ConvertWrestlerSetupParamToSSParam" }, // 2164325842
		{ &Z_Construct_UFunction_UELSSUtility_CreateShortErrorCodeNumber, "CreateShortErrorCodeNumber" }, // 2416612910
		{ &Z_Construct_UFunction_UELSSUtility_CreateSSLevelTransitionEvent, "CreateSSLevelTransitionEvent" }, // 515653227
		{ &Z_Construct_UFunction_UELSSUtility_CreateSSMasterDataInstance, "CreateSSMasterDataInstance" }, // 3496702694
		{ &Z_Construct_UFunction_UELSSUtility_CreateSSRootObject, "CreateSSRootObject" }, // 1260771651
		{ &Z_Construct_UFunction_UELSSUtility_CreateYGS2Request, "CreateYGS2Request" }, // 4013345429
		{ &Z_Construct_UFunction_UELSSUtility_DestroySSLevelTransitionEvent, "DestroySSLevelTransitionEvent" }, // 3957512019
		{ &Z_Construct_UFunction_UELSSUtility_DestroySSMasterData, "DestroySSMasterData" }, // 1206299099
		{ &Z_Construct_UFunction_UELSSUtility_DestroySSRootObject, "DestroySSRootObject" }, // 4087220804
		{ &Z_Construct_UFunction_UELSSUtility_EndWaitDownloadSSModeServiceParam, "EndWaitDownloadSSModeServiceParam" }, // 2383485924
		{ &Z_Construct_UFunction_UELSSUtility_EOSForceUpdate, "EOSForceUpdate" }, // 557920109
		{ &Z_Construct_UFunction_UELSSUtility_GetAWSErrorData, "GetAWSErrorData" }, // 989459226
		{ &Z_Construct_UFunction_UELSSUtility_GetBase64DecodeData, "GetBase64DecodeData" }, // 915088234
		{ &Z_Construct_UFunction_UELSSUtility_GetBase64EncryptData, "GetBase64EncryptData" }, // 3405463314
		{ &Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingLimit, "GetDefaultAPIPollingLimit" }, // 2318027174
		{ &Z_Construct_UFunction_UELSSUtility_GetDefaultAPIPollingTime, "GetDefaultAPIPollingTime" }, // 4120110193
		{ &Z_Construct_UFunction_UELSSUtility_GetELEOSManager, "GetELEOSManager" }, // 2524638903
		{ &Z_Construct_UFunction_UELSSUtility_GetEOSAuthToken, "GetEOSAuthToken" }, // 1559188714
		{ &Z_Construct_UFunction_UELSSUtility_GetErrorTextLinkMessage, "GetErrorTextLinkMessage" }, // 1871271591
		{ &Z_Construct_UFunction_UELSSUtility_GetHTTPErrorData, "GetHTTPErrorData" }, // 1080107973
		{ &Z_Construct_UFunction_UELSSUtility_GetLocalizeText, "GetLocalizeText" }, // 2394565827
		{ &Z_Construct_UFunction_UELSSUtility_GetMatchPlayerMax, "GetMatchPlayerMax" }, // 319120786
		{ &Z_Construct_UFunction_UELSSUtility_GetMatchSpectatorsMax, "GetMatchSpectatorsMax" }, // 1835471555
		{ &Z_Construct_UFunction_UELSSUtility_GetNetworkErrorID, "GetNetworkErrorID" }, // 3664064842
		{ &Z_Construct_UFunction_UELSSUtility_GetNetworkStatus, "GetNetworkStatus" }, // 2922898441
		{ &Z_Construct_UFunction_UELSSUtility_GetPlayerRankData, "GetPlayerRankData" }, // 469912203
		{ &Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankId, "GetPlayerRankDataToRankId" }, // 3312137693
		{ &Z_Construct_UFunction_UELSSUtility_GetPlayerRankDataToRankPoint, "GetPlayerRankDataToRankPoint" }, // 3866754941
		{ &Z_Construct_UFunction_UELSSUtility_GetScreenUpdateCheck, "GetScreenUpdateCheck" }, // 2146067821
		{ &Z_Construct_UFunction_UELSSUtility_GetSSBattlePassPoint, "GetSSBattlePassPoint" }, // 2062838987
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSBotClient, "GetSSCommandLineValue_SSBotClient" }, // 3347066276
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSDirect, "GetSSCommandLineValue_SSDirect" }, // 2608984670
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSFlags, "GetSSCommandLineValue_SSFlags" }, // 4020808677
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSMatchMakeGroupId, "GetSSCommandLineValue_SSMatchMakeGroupId" }, // 223396328
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCommandLineValue_SSServer, "GetSSCommandLineValue_SSServer" }, // 903223408
		{ &Z_Construct_UFunction_UELSSUtility_GetSSControlledPlayerController, "GetSSControlledPlayerController" }, // 2065994314
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCurrentPlayerRank, "GetSSCurrentPlayerRank" }, // 1994921463
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevel, "GetSSCurrentStampedeLevel" }, // 2899211399
		{ &Z_Construct_UFunction_UELSSUtility_GetSSCurrentStampedeLevelExp, "GetSSCurrentStampedeLevelExp" }, // 3234791726
		{ &Z_Construct_UFunction_UELSSUtility_GetSSDebugEditWrestlerSetupParam, "GetSSDebugEditWrestlerSetupParam" }, // 3108719372
		{ &Z_Construct_UFunction_UELSSUtility_GetSSGameDataManager, "GetSSGameDataManager" }, // 3471097643
		{ &Z_Construct_UFunction_UELSSUtility_GetSSGameLiftObject, "GetSSGameLiftObject" }, // 1523699561
		{ &Z_Construct_UFunction_UELSSUtility_GetSSInGamePlayFlag, "GetSSInGamePlayFlag" }, // 3175623994
		{ &Z_Construct_UFunction_UELSSUtility_GetSSLastEndGameReason, "GetSSLastEndGameReason" }, // 887932609
		{ &Z_Construct_UFunction_UELSSUtility_GetSSLevelTransitionEvent, "GetSSLevelTransitionEvent" }, // 3548470173
		{ &Z_Construct_UFunction_UELSSUtility_GetSSLocalizeText, "GetSSLocalizeText" }, // 4043196668
		{ &Z_Construct_UFunction_UELSSUtility_GetSSMasterData, "GetSSMasterData" }, // 3401811841
		{ &Z_Construct_UFunction_UELSSUtility_GetSSMasterDataRawData, "GetSSMasterDataRawData" }, // 3403298583
		{ &Z_Construct_UFunction_UELSSUtility_GetSSMasterDataVersion, "GetSSMasterDataVersion" }, // 2562887301
		{ &Z_Construct_UFunction_UELSSUtility_GetSSmodeAPIErrorData, "GetSSmodeAPIErrorData" }, // 289072116
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeConfigData, "GetSSModeConfigData" }, // 1661118048
		{ &Z_Construct_UFunction_UELSSUtility_GetSSmodeNetworkErrorData, "GetSSmodeNetworkErrorData" }, // 993126170
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModePlayerID, "GetSSModePlayerID" }, // 3032217575
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeRequestType, "GetSSModeRequestType" }, // 545052554
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeServerBuildVersion, "GetSSModeServerBuildVersion" }, // 2854041725
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvData, "GetSSModeServerEnvData" }, // 1818702304
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeServerEnvName, "GetSSModeServerEnvName" }, // 2168129760
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeServiceParam, "GetSSModeServiceParam" }, // 3927449166
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeServiceState, "GetSSModeServiceState" }, // 1460405436
		{ &Z_Construct_UFunction_UELSSUtility_GetSSModeUserName, "GetSSModeUserName" }, // 1162726362
		{ &Z_Construct_UFunction_UELSSUtility_GetSSOnlineErrorType, "GetSSOnlineErrorType" }, // 2124112556
		{ &Z_Construct_UFunction_UELSSUtility_GetSSPlayerData, "GetSSPlayerData" }, // 1734992967
		{ &Z_Construct_UFunction_UELSSUtility_GetSSRequestErrorStatusType, "GetSSRequestErrorStatusType" }, // 2417721691
		{ &Z_Construct_UFunction_UELSSUtility_GetSSRootObject, "GetSSRootObject" }, // 4211070346
		{ &Z_Construct_UFunction_UELSSUtility_GetSSSaveDataManager, "GetSSSaveDataManager" }, // 2295260090
		{ &Z_Construct_UFunction_UELSSUtility_GetSSSelectedWrestlerID, "GetSSSelectedWrestlerID" }, // 3145695960
		{ &Z_Construct_UFunction_UELSSUtility_GetSSServerEndpoint, "GetSSServerEndpoint" }, // 1252519338
		{ &Z_Construct_UFunction_UELSSUtility_GetStampedeRankData, "GetStampedeRankData" }, // 1039668381
		{ &Z_Construct_UFunction_UELSSUtility_GetUniqueErrorData, "GetUniqueErrorData" }, // 2705708670
		{ &Z_Construct_UFunction_UELSSUtility_GetWrestlerID, "GetWrestlerID" }, // 325538262
		{ &Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupData, "GetWrestlerSetupData" }, // 2887314098
		{ &Z_Construct_UFunction_UELSSUtility_GetWrestlerSetupParam, "GetWrestlerSetupParam" }, // 3302593529
		{ &Z_Construct_UFunction_UELSSUtility_GetWrestlerType, "GetWrestlerType" }, // 2770653677
		{ &Z_Construct_UFunction_UELSSUtility_GetYGS2APIErrorData, "GetYGS2APIErrorData" }, // 4234282366
		{ &Z_Construct_UFunction_UELSSUtility_GetYGS2ErrorType, "GetYGS2ErrorType" }, // 1932102403
		{ &Z_Construct_UFunction_UELSSUtility_GetYGS2RequestType, "GetYGS2RequestType" }, // 103440801
		{ &Z_Construct_UFunction_UELSSUtility_IsAccountLogin, "IsAccountLogin" }, // 2372625669
		{ &Z_Construct_UFunction_UELSSUtility_IsDevMode, "IsDevMode" }, // 1347018806
		{ &Z_Construct_UFunction_UELSSUtility_IsDownloadingSSModeServiceParam, "IsDownloadingSSModeServiceParam" }, // 2101978436
		{ &Z_Construct_UFunction_UELSSUtility_IsEnableSSMasterData, "IsEnableSSMasterData" }, // 528343340
		{ &Z_Construct_UFunction_UELSSUtility_IsSSCheatDetected, "IsSSCheatDetected" }, // 2228107565
		{ &Z_Construct_UFunction_UELSSUtility_IsSSDebugLocalCheckMode, "IsSSDebugLocalCheckMode" }, // 3190311874
		{ &Z_Construct_UFunction_UELSSUtility_IsSSDevelopmentUser, "IsSSDevelopmentUser" }, // 3841393814
		{ &Z_Construct_UFunction_UELSSUtility_IsSSDisableSound, "IsSSDisableSound" }, // 1041802368
		{ &Z_Construct_UFunction_UELSSUtility_IsSSMode, "IsSSMode" }, // 862727190
		{ &Z_Construct_UFunction_UELSSUtility_IsSSPlayableUser, "IsSSPlayableUser" }, // 1254750927
		{ &Z_Construct_UFunction_UELSSUtility_NotifySSGameEnd, "NotifySSGameEnd" }, // 2090425546
		{ &Z_Construct_UFunction_UELSSUtility_NotifySSGameStart, "NotifySSGameStart" }, // 1729490650
		{ &Z_Construct_UFunction_UELSSUtility_OnEnterSSMode, "OnEnterSSMode" }, // 1429019769
		{ &Z_Construct_UFunction_UELSSUtility_OnExitSSMode, "OnExitSSMode" }, // 3180300982
		{ &Z_Construct_UFunction_UELSSUtility_PlaySSLoadingScreen, "PlaySSLoadingScreen" }, // 980445097
		{ &Z_Construct_UFunction_UELSSUtility_RegistYGS2Request, "RegistYGS2Request" }, // 1516335966
		{ &Z_Construct_UFunction_UELSSUtility_RequestDownloadSSModeServiceParam, "RequestDownloadSSModeServiceParam" }, // 1587304141
		{ &Z_Construct_UFunction_UELSSUtility_SetInputMode, "SetInputMode" }, // 4265753582
		{ &Z_Construct_UFunction_UELSSUtility_SetScreenUpdateCheck, "SetScreenUpdateCheck" }, // 2003166847
		{ &Z_Construct_UFunction_UELSSUtility_SetSSCheatDetected, "SetSSCheatDetected" }, // 337713264
		{ &Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToMainMenu, "SetSSDefaultMapToMainMenu" }, // 4102032282
		{ &Z_Construct_UFunction_UELSSUtility_SetSSDefaultMapToSSTop, "SetSSDefaultMapToSSTop" }, // 4271299279
		{ &Z_Construct_UFunction_UELSSUtility_SetSSGameLiftObject, "SetSSGameLiftObject" }, // 526543997
		{ &Z_Construct_UFunction_UELSSUtility_SetSSInGamePlayFlag, "SetSSInGamePlayFlag" }, // 1686850067
		{ &Z_Construct_UFunction_UELSSUtility_SetSSPlayerData, "SetSSPlayerData" }, // 1348734427
		{ &Z_Construct_UFunction_UELSSUtility_SetVisibleFadeForChangeLevel, "SetVisibleFadeForChangeLevel" }, // 599516013
		{ &Z_Construct_UFunction_UELSSUtility_SSLoginRequest, "SSLoginRequest" }, // 691772143
		{ &Z_Construct_UFunction_UELSSUtility_SSModeGameDataSetup, "SSModeGameDataSetup" }, // 1373018561
		{ &Z_Construct_UFunction_UELSSUtility_SSModeNetworkSetup, "SSModeNetworkSetup" }, // 743570372
		{ &Z_Construct_UFunction_UELSSUtility_SSNXShowApplicationError, "SSNXShowApplicationError" }, // 526293949
		{ &Z_Construct_UFunction_UELSSUtility_SSPrintStringToLog, "SSPrintStringToLog" }, // 1523956414
		{ &Z_Construct_UFunction_UELSSUtility_StopSSLoadingScreen, "StopSSLoadingScreen" }, // 3442957325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSUtility_Statics::ClassParams = {
		&UELSSUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSUtility, 4273799240);
	template<> ABP_200508_API UClass* StaticClass<UELSSUtility>()
	{
		return UELSSUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSUtility(Z_Construct_UClass_UELSSUtility, &UELSSUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
