#pragma once
#include "CoreMinimal.h"
#include "EEOSLobbyUserMuteFlag.generated.h"

UENUM(BlueprintType)
enum class EEOSLobbyUserMuteFlag : uint8 {
    None,
    Player,
    System,
    Game = 4,
    Game1 = 8,
    ConsoleSsytemChatMenu = 16,
    ConsoleSystemChatMenu = ConsoleSsytemChatMenu,
    ConsoleSystemPrivacy = 32,
};

