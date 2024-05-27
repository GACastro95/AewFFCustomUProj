#include "YMiniGameAutoPlay_DebugMenu.h"

UYMiniGameAutoPlay_DebugMenu::UYMiniGameAutoPlay_DebugMenu() {
}

void UYMiniGameAutoPlay_DebugMenu::SetEnableAutoPlay(bool _EnableAutoPlay) {
}

bool UYMiniGameAutoPlay_DebugMenu::IsSkipGamePlay() {
    return false;
}

bool UYMiniGameAutoPlay_DebugMenu::IsLoop() {
    return false;
}

bool UYMiniGameAutoPlay_DebugMenu::IsEnableGame(EMiniGameID _id) {
    return false;
}

bool UYMiniGameAutoPlay_DebugMenu::IsEnableAutoPlay() {
    return false;
}

EWrestlerID_N UYMiniGameAutoPlay_DebugMenu::GetTargetWrestlerID(int32 _targetId) {
    return EWrestlerID_N::None;
}

EWrestlerID_N UYMiniGameAutoPlay_DebugMenu::GetAllWrestlerID() {
    return EWrestlerID_N::None;
}


