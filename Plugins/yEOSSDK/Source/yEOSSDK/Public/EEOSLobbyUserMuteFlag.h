#pragma once
#include "CoreMinimal.h"
#include "EEOSLobbyUserMuteFlag.generated.h"

UENUM(BlueprintType)
enum class EEOSLobbyUserMuteFlag : uint8 {
    None,
    Player,
    System,
    Game = 0x4,
    Game1 = 0x8,
    ConsoleSsytemChatMenu = 0x10,
    ConsoleSystemChatMenu = 0x10,
    ConsoleSystemPrivacy = 0x20,
};

