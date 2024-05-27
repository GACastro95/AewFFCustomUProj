#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuFlowState : uint8 {
    None,
    Initialize,
    Setup = 16,
    Setup_UI,
    Setup_DebugUI,
    Setup_SubLevel,
    Setup_SaveData,
    Setup_SpawnWrestler,
    Setup_BeforeOpening,
    Opening = 32,
    OnlineSetup = 48,
    OnlineSetup_LoginCheck,
    OnlineSetup_ErrorCheck,
    OnlineSetup_GetPlayerData,
    OnlineSetup_ApplyPenalty,
    OnlineSetup_EOSLobby,
    Menu = 64,
    Menu_Top,
    Menu_Shop,
    Menu_Challenge,
    Menu_SubMenu,
    Menu_Others,
    Menu_FirstTutorial,
    Menu_RuleTutorial,
    Menu_MatchMake,
    Closing = 113,
    Exit,
};

