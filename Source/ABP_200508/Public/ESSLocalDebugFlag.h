#pragma once
#include "CoreMinimal.h"
#include "ESSLocalDebugFlag.generated.h"

UENUM(BlueprintType)
enum class ESSLocalDebugFlag : uint8 {
    None,
    Failed_GetSSPlayerData,
    Failed_SetSSGameStart,
    Failed_SetSSGameResult,
    Failed_SetSSSessionResult,
    Failed_GetSSMasterDataVersion,
    Failed_SetSSPlayerData,
    Failed_GetSSMasterData,
    Failed_FlexMatch_Start,
    Failed_FlexMatch_Status,
    Failed_FlexMatch_Cancel,
    LocalMatchMinPlayerNum,
    ForceSkipResultSave,
    ForceSkipResultFlow,
    NoCallRemovePlayerInSSMode,
    RemovePlayerInSSMode,
    ForceDisableMenuWrestler,
    ForceDisableJoinDataSelectWrestler,
    MasterData_NoUpdate,
    MasterData_PrintJsonLog,
    MasterData_UseLocalData,
    MasterData_OverrideVersion,
    AutoPlay_SSMatchStart,
    AutoPlay_Win10sec,
    AutoPlay_Win600sec,
    AutoPlay_Lose10sec,
    AutoPlay_Lose600sec,
    AutoPlay_Result,
    AutoPlay_WatchGame,
    AutoPlay_ErrorDialog,
    AutoPlay_DataLoading,
    AutoPlay_AutoAttack,
    AutoPlay_StartAssemble,
    AutoPlay_EnterSSMode,
    SinglePlay,
    CrossPlatformMatch,
    ConnectQA1,
    ConnectQA2,
    ConnectDev1,
    ConnectDev2,
    ConnectSub1,
    ConnectSub2,
    ConnectStg1,
    Region_Auto,
    Region_UsEast1,
    Region_ApNorthEast1,
    Region_EuCentral1,
    HideDebugString_All,
    HideDebugString_Version,
    HideDebugString_RuleInfo,
    HideDebugString_TeamInfo,
    HideDebugString_EOSLobby,
    HideDebugString_Test,
    DisableDebugString,
    ShowOnRep_ElapsedTime,
    ReplaceEditWrestler_SelfWrestler,
    ReplaceEditWrestler_ALLWrestler,
    AIEditWrestlerOnServer,
    CopyWrestlerSetupParamToAI,
    LoginSkip,
    DisableLoginCheck,
    DirectSSModeEntry,
    SSBotClient,
    OptimizeTickIntervalForBotClient,
    OptimizeDrawForBotClient,
    UseSSBotMainMenu,
    SSBotMainMenuDisableUITest,
    SwitchSSMainMenu,
    UseNewSSMainMenu,
    DisableWorldRendering,
    DisableInGameUI,
    DisableInGameEffect,
    DisableSound,
    DisableDebugMenu,
    AllowAIOnly,
    StreathCheckFromClientA,
    StreathCheckFromClientB,
    StreathCheckFromClientC,
    StreathCheckFromClientD,
    StreathCheckFromClientE,
    StreathCheckFromClient_Bomb,
    StreathCheckFromClient_Gun,
    StreathCheckFromClient_Move,
    AutoEquipWeapon,
    SSServiceParamOverride,
    SSServiceParamFlag_InService,
    SSServiceParamFlag_Closed,
    SSServiceParamFlag_Maintenance,
    SSServiceParamFlag_MaintenanceInTimeEnabled,
    SSServiceParamFlag_MaintenanceOutTimeEnabled,
    IgnoreMaintenance,
    SSServiceParamOverrideON_WhenEndSetup,
    SSServiceParamOverrideOFF_WhenEndSetup,
    ForceGCBeforeLoadingUI,
    RuleForceOpenLocal,
    ShowPlayerTeamInfo,
    Max,
};

