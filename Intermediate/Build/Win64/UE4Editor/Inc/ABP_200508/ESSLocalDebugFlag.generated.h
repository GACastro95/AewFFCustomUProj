// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSLocalDebugFlag_generated_h
#error "ESSLocalDebugFlag.generated.h already included, missing '#pragma once' in ESSLocalDebugFlag.h"
#endif
#define ABP_200508_ESSLocalDebugFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSLocalDebugFlag_h


#define FOREACH_ENUM_ESSLOCALDEBUGFLAG(op) \
	op(ESSLocalDebugFlag::None) \
	op(ESSLocalDebugFlag::Failed_GetSSPlayerData) \
	op(ESSLocalDebugFlag::Failed_SetSSGameStart) \
	op(ESSLocalDebugFlag::Failed_SetSSGameResult) \
	op(ESSLocalDebugFlag::Failed_SetSSSessionResult) \
	op(ESSLocalDebugFlag::Failed_GetSSMasterDataVersion) \
	op(ESSLocalDebugFlag::Failed_SetSSPlayerData) \
	op(ESSLocalDebugFlag::Failed_GetSSMasterData) \
	op(ESSLocalDebugFlag::Failed_FlexMatch_Start) \
	op(ESSLocalDebugFlag::Failed_FlexMatch_Status) \
	op(ESSLocalDebugFlag::Failed_FlexMatch_Cancel) \
	op(ESSLocalDebugFlag::LocalMatchMinPlayerNum) \
	op(ESSLocalDebugFlag::ForceSkipResultSave) \
	op(ESSLocalDebugFlag::ForceSkipResultFlow) \
	op(ESSLocalDebugFlag::NoCallRemovePlayerInSSMode) \
	op(ESSLocalDebugFlag::RemovePlayerInSSMode) \
	op(ESSLocalDebugFlag::ForceDisableMenuWrestler) \
	op(ESSLocalDebugFlag::ForceDisableJoinDataSelectWrestler) \
	op(ESSLocalDebugFlag::MasterData_NoUpdate) \
	op(ESSLocalDebugFlag::MasterData_PrintJsonLog) \
	op(ESSLocalDebugFlag::MasterData_UseLocalData) \
	op(ESSLocalDebugFlag::MasterData_OverrideVersion) \
	op(ESSLocalDebugFlag::AutoPlay_SSMatchStart) \
	op(ESSLocalDebugFlag::AutoPlay_Win10sec) \
	op(ESSLocalDebugFlag::AutoPlay_Win600sec) \
	op(ESSLocalDebugFlag::AutoPlay_Lose10sec) \
	op(ESSLocalDebugFlag::AutoPlay_Lose600sec) \
	op(ESSLocalDebugFlag::AutoPlay_Result) \
	op(ESSLocalDebugFlag::AutoPlay_WatchGame) \
	op(ESSLocalDebugFlag::AutoPlay_ErrorDialog) \
	op(ESSLocalDebugFlag::AutoPlay_DataLoading) \
	op(ESSLocalDebugFlag::AutoPlay_AutoAttack) \
	op(ESSLocalDebugFlag::AutoPlay_StartAssemble) \
	op(ESSLocalDebugFlag::AutoPlay_EnterSSMode) \
	op(ESSLocalDebugFlag::SinglePlay) \
	op(ESSLocalDebugFlag::CrossPlatformMatch) \
	op(ESSLocalDebugFlag::ConnectQA1) \
	op(ESSLocalDebugFlag::ConnectQA2) \
	op(ESSLocalDebugFlag::ConnectDev1) \
	op(ESSLocalDebugFlag::ConnectDev2) \
	op(ESSLocalDebugFlag::ConnectSub1) \
	op(ESSLocalDebugFlag::ConnectSub2) \
	op(ESSLocalDebugFlag::Region_Auto) \
	op(ESSLocalDebugFlag::Region_UsEast1) \
	op(ESSLocalDebugFlag::Region_ApNorthEast1) \
	op(ESSLocalDebugFlag::Region_EuCentral1) \
	op(ESSLocalDebugFlag::HideDebugString_All) \
	op(ESSLocalDebugFlag::HideDebugString_Version) \
	op(ESSLocalDebugFlag::HideDebugString_Test) \
	op(ESSLocalDebugFlag::DisableDebugString) \
	op(ESSLocalDebugFlag::ShowOnRep_ElapsedTime) \
	op(ESSLocalDebugFlag::ReplaceEditWrestler_SelfWrestler) \
	op(ESSLocalDebugFlag::ReplaceEditWrestler_ALLWrestler) \
	op(ESSLocalDebugFlag::AIEditWrestlerOnServer) \
	op(ESSLocalDebugFlag::CopyWrestlerSetupParamToAI) \
	op(ESSLocalDebugFlag::LoginSkip) \
	op(ESSLocalDebugFlag::DisableLoginCheck) \
	op(ESSLocalDebugFlag::DirectSSModeEntry) \
	op(ESSLocalDebugFlag::SSBotClient) \
	op(ESSLocalDebugFlag::OptimizeTickIntervalForBotClient) \
	op(ESSLocalDebugFlag::OptimizeDrawForBotClient) \
	op(ESSLocalDebugFlag::UseSSBotMainMenu) \
	op(ESSLocalDebugFlag::SSBotMainMenuDisableUITest) \
	op(ESSLocalDebugFlag::DisableWorldRendering) \
	op(ESSLocalDebugFlag::DisableInGameUI) \
	op(ESSLocalDebugFlag::DisableInGameEffect) \
	op(ESSLocalDebugFlag::DisableSound) \
	op(ESSLocalDebugFlag::DisableDebugMenu) \
	op(ESSLocalDebugFlag::AllowAIOnly) \
	op(ESSLocalDebugFlag::Test1) \
	op(ESSLocalDebugFlag::Test2) \
	op(ESSLocalDebugFlag::Test3) \
	op(ESSLocalDebugFlag::Test4) \
	op(ESSLocalDebugFlag::Test5) \
	op(ESSLocalDebugFlag::StreathCheckFromClientA) \
	op(ESSLocalDebugFlag::StreathCheckFromClientB) \
	op(ESSLocalDebugFlag::StreathCheckFromClientC) \
	op(ESSLocalDebugFlag::StreathCheckFromClientD) \
	op(ESSLocalDebugFlag::StreathCheckFromClientE) \
	op(ESSLocalDebugFlag::StreathCheckFromClient_Bomb) \
	op(ESSLocalDebugFlag::StreathCheckFromClient_Gun) \
	op(ESSLocalDebugFlag::StreathCheckFromClient_Move) \
	op(ESSLocalDebugFlag::AutoEquipWeapon) \
	op(ESSLocalDebugFlag::SSServiceParamOverride) \
	op(ESSLocalDebugFlag::SSServiceParamFlag_InService) \
	op(ESSLocalDebugFlag::SSServiceParamFlag_Closed) \
	op(ESSLocalDebugFlag::SSServiceParamFlag_Maintenance) \
	op(ESSLocalDebugFlag::SSServiceParamFlag_MaintenanceInTimeEnabled) \
	op(ESSLocalDebugFlag::SSServiceParamFlag_MaintenanceOutTimeEnabled) \
	op(ESSLocalDebugFlag::IgnoreMaintenance) \
	op(ESSLocalDebugFlag::SSServiceParamOverrideON_WhenEndSetup) \
	op(ESSLocalDebugFlag::SSServiceParamOverrideOFF_WhenEndSetup) \
	op(ESSLocalDebugFlag::ForceGCBeforeLoadingUI) \
	op(ESSLocalDebugFlag::Max) 

enum class ESSLocalDebugFlag : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSLocalDebugFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
