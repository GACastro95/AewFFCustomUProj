// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSSWrestlerSetupParam;
struct FWrestlerSetupParam;
enum class eErrorID : uint8;
class UELSSLevelTransitionEvent;
class UELSSMasterData;
class UELSSRootObject;
enum class EYGS2Api : uint8;
class UYGS2RequestBase;
struct FSSErrorTextDataToAWS;
class UELEOSManager;
enum class EErrDialogType : uint8;
struct FSSErrorTextLinkDialogMessage;
struct FSSErrorTextDataToHTTPCode;
enum class EELNetworkStatus : uint8;
struct FSSPlayerRankParam;
struct FBattlePassPointRateParam;
class APlayerController;
class UELSSGameModeDataManager;
class UGameLiftObjectBase;
enum class ESSEndGameReason : uint8;
class UELSSMasterDataRawData;
enum class eErrorStatusType : uint8;
struct FSSErrorTextDataToSSAPI;
class UELSSModeConfigData;
struct FSSErrorTextDataToNetworkConnect;
enum class eSSModeAPIType : uint8;
struct FSSModeServerParam;
class UELSSModeServiceParam;
enum class ESSModeServiceState : uint8;
enum class ESSOnlineErrorType : uint8;
struct FYGS2SSPlayerData;
class AELSSSaveDataManager;
enum class EWrestlerID_N : uint8;
struct FSSServerEndpoint;
struct FSSStampedeRankParam;
struct FSSErrorTextDataToUniqueError;
enum class ESSWrestlerType : uint8;
enum class EYGS2ErrorType : uint8;
struct FSSErrorTextDataToYGS2API;
enum class EELYGS2RequestFunctionType : uint8;
class UYGS2Req_GetSSPlayerData;
#ifdef ABP_200508_ELSSUtility_generated_h
#error "ELSSUtility.generated.h already included, missing '#pragma once' in ELSSUtility.h"
#endif
#define ABP_200508_ELSSUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanUseSSMasterData); \
	DECLARE_FUNCTION(execCheckEOSMngTickable); \
	DECLARE_FUNCTION(execConvertSSWrestlerSetupParamToBaseParam); \
	DECLARE_FUNCTION(execConvertWrestlerSetupParamToSSParam); \
	DECLARE_FUNCTION(execCreateShortErrorCodeNumber); \
	DECLARE_FUNCTION(execCreateSSLevelTransitionEvent); \
	DECLARE_FUNCTION(execCreateSSMasterDataInstance); \
	DECLARE_FUNCTION(execCreateSSRootObject); \
	DECLARE_FUNCTION(execCreateYGS2Request); \
	DECLARE_FUNCTION(execDestroySSLevelTransitionEvent); \
	DECLARE_FUNCTION(execDestroySSMasterData); \
	DECLARE_FUNCTION(execDestroySSRootObject); \
	DECLARE_FUNCTION(execEndWaitDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execEOSForceUpdate); \
	DECLARE_FUNCTION(execGetAWSErrorData); \
	DECLARE_FUNCTION(execGetBase64DecodeData); \
	DECLARE_FUNCTION(execGetBase64EncryptData); \
	DECLARE_FUNCTION(execGetDefaultAPIPollingLimit); \
	DECLARE_FUNCTION(execGetDefaultAPIPollingTime); \
	DECLARE_FUNCTION(execGetELEOSManager); \
	DECLARE_FUNCTION(execGetEOSAuthToken); \
	DECLARE_FUNCTION(execGetErrorTextLinkMessage); \
	DECLARE_FUNCTION(execGetHTTPErrorData); \
	DECLARE_FUNCTION(execGetLocalizeText); \
	DECLARE_FUNCTION(execGetMatchPlayerMax); \
	DECLARE_FUNCTION(execGetMatchSpectatorsMax); \
	DECLARE_FUNCTION(execGetNetworkErrorID); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetPlayerRankData); \
	DECLARE_FUNCTION(execGetPlayerRankDataToRankId); \
	DECLARE_FUNCTION(execGetPlayerRankDataToRankPoint); \
	DECLARE_FUNCTION(execGetScreenUpdateCheck); \
	DECLARE_FUNCTION(execGetSSBattlePassPoint); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSBotClient); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSDirect); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSFlags); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSMatchMakeGroupId); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSServer); \
	DECLARE_FUNCTION(execGetSSControlledPlayerController); \
	DECLARE_FUNCTION(execGetSSCurrentPlayerRank); \
	DECLARE_FUNCTION(execGetSSCurrentStampedeLevel); \
	DECLARE_FUNCTION(execGetSSCurrentStampedeLevelExp); \
	DECLARE_FUNCTION(execGetSSDebugEditWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetSSGameDataManager); \
	DECLARE_FUNCTION(execGetSSGameLiftObject); \
	DECLARE_FUNCTION(execGetSSInGamePlayFlag); \
	DECLARE_FUNCTION(execGetSSLastEndGameReason); \
	DECLARE_FUNCTION(execGetSSLevelTransitionEvent); \
	DECLARE_FUNCTION(execGetSSLocalizeText); \
	DECLARE_FUNCTION(execGetSSMasterData); \
	DECLARE_FUNCTION(execGetSSMasterDataRawData); \
	DECLARE_FUNCTION(execGetSSMasterDataVersion); \
	DECLARE_FUNCTION(execGetSSmodeAPIErrorData); \
	DECLARE_FUNCTION(execGetSSModeConfigData); \
	DECLARE_FUNCTION(execGetSSmodeNetworkErrorData); \
	DECLARE_FUNCTION(execGetSSModePlayerID); \
	DECLARE_FUNCTION(execGetSSModeRequestType); \
	DECLARE_FUNCTION(execGetSSModeServerBuildVersion); \
	DECLARE_FUNCTION(execGetSSModeServerEnvData); \
	DECLARE_FUNCTION(execGetSSModeServerEnvName); \
	DECLARE_FUNCTION(execGetSSModeServiceParam); \
	DECLARE_FUNCTION(execGetSSModeServiceState); \
	DECLARE_FUNCTION(execGetSSModeUserName); \
	DECLARE_FUNCTION(execGetSSOnlineErrorType); \
	DECLARE_FUNCTION(execGetSSPlayerData); \
	DECLARE_FUNCTION(execGetSSRequestErrorStatusType); \
	DECLARE_FUNCTION(execGetSSRootObject); \
	DECLARE_FUNCTION(execGetSSSaveDataManager); \
	DECLARE_FUNCTION(execGetSSSelectedWrestlerID); \
	DECLARE_FUNCTION(execGetSSServerEndpoint); \
	DECLARE_FUNCTION(execGetStampedeRankData); \
	DECLARE_FUNCTION(execGetUniqueErrorData); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerSetupData); \
	DECLARE_FUNCTION(execGetWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetWrestlerType); \
	DECLARE_FUNCTION(execGetYGS2APIErrorData); \
	DECLARE_FUNCTION(execGetYGS2ErrorType); \
	DECLARE_FUNCTION(execGetYGS2RequestType); \
	DECLARE_FUNCTION(execIsAccountLogin); \
	DECLARE_FUNCTION(execIsDevMode); \
	DECLARE_FUNCTION(execIsDownloadingSSModeServiceParam); \
	DECLARE_FUNCTION(execIsEnableSSMasterData); \
	DECLARE_FUNCTION(execIsSSCheatDetected); \
	DECLARE_FUNCTION(execIsSSDebugLocalCheckMode); \
	DECLARE_FUNCTION(execIsSSDevelopmentUser); \
	DECLARE_FUNCTION(execIsSSDisableSound); \
	DECLARE_FUNCTION(execIsSSMode); \
	DECLARE_FUNCTION(execIsSSPlayableUser); \
	DECLARE_FUNCTION(execNotifySSGameEnd); \
	DECLARE_FUNCTION(execNotifySSGameStart); \
	DECLARE_FUNCTION(execOnEnterSSMode); \
	DECLARE_FUNCTION(execOnExitSSMode); \
	DECLARE_FUNCTION(execPlaySSLoadingScreen); \
	DECLARE_FUNCTION(execRegistYGS2Request); \
	DECLARE_FUNCTION(execRequestDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execSetScreenUpdateCheck); \
	DECLARE_FUNCTION(execSetSSCheatDetected); \
	DECLARE_FUNCTION(execSetSSDefaultMapToMainMenu); \
	DECLARE_FUNCTION(execSetSSDefaultMapToSSTop); \
	DECLARE_FUNCTION(execSetSSGameLiftObject); \
	DECLARE_FUNCTION(execSetSSInGamePlayFlag); \
	DECLARE_FUNCTION(execSetSSPlayerData); \
	DECLARE_FUNCTION(execSetVisibleFadeForChangeLevel); \
	DECLARE_FUNCTION(execSSLoginRequest); \
	DECLARE_FUNCTION(execSSModeGameDataSetup); \
	DECLARE_FUNCTION(execSSModeNetworkSetup); \
	DECLARE_FUNCTION(execSSNXShowApplicationError); \
	DECLARE_FUNCTION(execSSPrintStringToLog); \
	DECLARE_FUNCTION(execStopSSLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanUseSSMasterData); \
	DECLARE_FUNCTION(execCheckEOSMngTickable); \
	DECLARE_FUNCTION(execConvertSSWrestlerSetupParamToBaseParam); \
	DECLARE_FUNCTION(execConvertWrestlerSetupParamToSSParam); \
	DECLARE_FUNCTION(execCreateShortErrorCodeNumber); \
	DECLARE_FUNCTION(execCreateSSLevelTransitionEvent); \
	DECLARE_FUNCTION(execCreateSSMasterDataInstance); \
	DECLARE_FUNCTION(execCreateSSRootObject); \
	DECLARE_FUNCTION(execCreateYGS2Request); \
	DECLARE_FUNCTION(execDestroySSLevelTransitionEvent); \
	DECLARE_FUNCTION(execDestroySSMasterData); \
	DECLARE_FUNCTION(execDestroySSRootObject); \
	DECLARE_FUNCTION(execEndWaitDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execEOSForceUpdate); \
	DECLARE_FUNCTION(execGetAWSErrorData); \
	DECLARE_FUNCTION(execGetBase64DecodeData); \
	DECLARE_FUNCTION(execGetBase64EncryptData); \
	DECLARE_FUNCTION(execGetDefaultAPIPollingLimit); \
	DECLARE_FUNCTION(execGetDefaultAPIPollingTime); \
	DECLARE_FUNCTION(execGetELEOSManager); \
	DECLARE_FUNCTION(execGetEOSAuthToken); \
	DECLARE_FUNCTION(execGetErrorTextLinkMessage); \
	DECLARE_FUNCTION(execGetHTTPErrorData); \
	DECLARE_FUNCTION(execGetLocalizeText); \
	DECLARE_FUNCTION(execGetMatchPlayerMax); \
	DECLARE_FUNCTION(execGetMatchSpectatorsMax); \
	DECLARE_FUNCTION(execGetNetworkErrorID); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetPlayerRankData); \
	DECLARE_FUNCTION(execGetPlayerRankDataToRankId); \
	DECLARE_FUNCTION(execGetPlayerRankDataToRankPoint); \
	DECLARE_FUNCTION(execGetScreenUpdateCheck); \
	DECLARE_FUNCTION(execGetSSBattlePassPoint); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSBotClient); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSDirect); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSFlags); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSMatchMakeGroupId); \
	DECLARE_FUNCTION(execGetSSCommandLineValue_SSServer); \
	DECLARE_FUNCTION(execGetSSControlledPlayerController); \
	DECLARE_FUNCTION(execGetSSCurrentPlayerRank); \
	DECLARE_FUNCTION(execGetSSCurrentStampedeLevel); \
	DECLARE_FUNCTION(execGetSSCurrentStampedeLevelExp); \
	DECLARE_FUNCTION(execGetSSDebugEditWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetSSGameDataManager); \
	DECLARE_FUNCTION(execGetSSGameLiftObject); \
	DECLARE_FUNCTION(execGetSSInGamePlayFlag); \
	DECLARE_FUNCTION(execGetSSLastEndGameReason); \
	DECLARE_FUNCTION(execGetSSLevelTransitionEvent); \
	DECLARE_FUNCTION(execGetSSLocalizeText); \
	DECLARE_FUNCTION(execGetSSMasterData); \
	DECLARE_FUNCTION(execGetSSMasterDataRawData); \
	DECLARE_FUNCTION(execGetSSMasterDataVersion); \
	DECLARE_FUNCTION(execGetSSmodeAPIErrorData); \
	DECLARE_FUNCTION(execGetSSModeConfigData); \
	DECLARE_FUNCTION(execGetSSmodeNetworkErrorData); \
	DECLARE_FUNCTION(execGetSSModePlayerID); \
	DECLARE_FUNCTION(execGetSSModeRequestType); \
	DECLARE_FUNCTION(execGetSSModeServerBuildVersion); \
	DECLARE_FUNCTION(execGetSSModeServerEnvData); \
	DECLARE_FUNCTION(execGetSSModeServerEnvName); \
	DECLARE_FUNCTION(execGetSSModeServiceParam); \
	DECLARE_FUNCTION(execGetSSModeServiceState); \
	DECLARE_FUNCTION(execGetSSModeUserName); \
	DECLARE_FUNCTION(execGetSSOnlineErrorType); \
	DECLARE_FUNCTION(execGetSSPlayerData); \
	DECLARE_FUNCTION(execGetSSRequestErrorStatusType); \
	DECLARE_FUNCTION(execGetSSRootObject); \
	DECLARE_FUNCTION(execGetSSSaveDataManager); \
	DECLARE_FUNCTION(execGetSSSelectedWrestlerID); \
	DECLARE_FUNCTION(execGetSSServerEndpoint); \
	DECLARE_FUNCTION(execGetStampedeRankData); \
	DECLARE_FUNCTION(execGetUniqueErrorData); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerSetupData); \
	DECLARE_FUNCTION(execGetWrestlerSetupParam); \
	DECLARE_FUNCTION(execGetWrestlerType); \
	DECLARE_FUNCTION(execGetYGS2APIErrorData); \
	DECLARE_FUNCTION(execGetYGS2ErrorType); \
	DECLARE_FUNCTION(execGetYGS2RequestType); \
	DECLARE_FUNCTION(execIsAccountLogin); \
	DECLARE_FUNCTION(execIsDevMode); \
	DECLARE_FUNCTION(execIsDownloadingSSModeServiceParam); \
	DECLARE_FUNCTION(execIsEnableSSMasterData); \
	DECLARE_FUNCTION(execIsSSCheatDetected); \
	DECLARE_FUNCTION(execIsSSDebugLocalCheckMode); \
	DECLARE_FUNCTION(execIsSSDevelopmentUser); \
	DECLARE_FUNCTION(execIsSSDisableSound); \
	DECLARE_FUNCTION(execIsSSMode); \
	DECLARE_FUNCTION(execIsSSPlayableUser); \
	DECLARE_FUNCTION(execNotifySSGameEnd); \
	DECLARE_FUNCTION(execNotifySSGameStart); \
	DECLARE_FUNCTION(execOnEnterSSMode); \
	DECLARE_FUNCTION(execOnExitSSMode); \
	DECLARE_FUNCTION(execPlaySSLoadingScreen); \
	DECLARE_FUNCTION(execRegistYGS2Request); \
	DECLARE_FUNCTION(execRequestDownloadSSModeServiceParam); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execSetScreenUpdateCheck); \
	DECLARE_FUNCTION(execSetSSCheatDetected); \
	DECLARE_FUNCTION(execSetSSDefaultMapToMainMenu); \
	DECLARE_FUNCTION(execSetSSDefaultMapToSSTop); \
	DECLARE_FUNCTION(execSetSSGameLiftObject); \
	DECLARE_FUNCTION(execSetSSInGamePlayFlag); \
	DECLARE_FUNCTION(execSetSSPlayerData); \
	DECLARE_FUNCTION(execSetVisibleFadeForChangeLevel); \
	DECLARE_FUNCTION(execSSLoginRequest); \
	DECLARE_FUNCTION(execSSModeGameDataSetup); \
	DECLARE_FUNCTION(execSSModeNetworkSetup); \
	DECLARE_FUNCTION(execSSNXShowApplicationError); \
	DECLARE_FUNCTION(execSSPrintStringToLog); \
	DECLARE_FUNCTION(execStopSSLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSUtility(); \
	friend struct Z_Construct_UClass_UELSSUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUELSSUtility(); \
	friend struct Z_Construct_UClass_UELSSUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSUtility(UELSSUtility&&); \
	NO_API UELSSUtility(const UELSSUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSUtility(UELSSUtility&&); \
	NO_API UELSSUtility(const UELSSUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_50_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
