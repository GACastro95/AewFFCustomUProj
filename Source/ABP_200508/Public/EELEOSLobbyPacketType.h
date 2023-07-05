#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyPacketType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLobbyPacketType : uint8 {
    Chat,
    PrivateMatchNotify,
    InvitePrivateMatchRequest,
    InvitePrivateMatchResponse,
    PrivateMatchPlayerIndex,
    PrivateMatchMenuInput,
    PrivateMatchMenuInputSync,
    PositionSelectInput,
    PositionSelectInputResult,
    WrestlerData,
    MatchupWrestlerData0,
    MatchupWrestlerData1,
    MatchupWrestlerData2,
    MatchupWrestlerData3,
    MatchupWrestlerData4,
    MatchupWrestlerData5,
    MatchupWrestlerData6,
    MatchupWrestlerData7,
    SelectNPCWrestlerData,
    NPCWrestlerData,
    SelectArenaData,
    SelectMinigameData,
    MiniGameInfo,
    MiniGameSteps,
    MiniGameOwnerSelectInfo,
    Request,
};

