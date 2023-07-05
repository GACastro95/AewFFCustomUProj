#include "YMiniGameOptions_DebugMenu.h"

void UYMiniGameOptions_DebugMenu::SetCorrectAnswer(const FString& _CorrectAnswer) {
}

bool UYMiniGameOptions_DebugMenu::IsDebugTick() {
    return false;
}

bool UYMiniGameOptions_DebugMenu::IsDebugMiniGameParameter() {
    return false;
}

bool UYMiniGameOptions_DebugMenu::IsApplyForDebugMiniGame() {
    return false;
}

FMiniGame_TriviaQuiz UYMiniGameOptions_DebugMenu::GetTriviaQuizInfo() {
    return FMiniGame_TriviaQuiz{};
}

FMiniGame_TracePunch UYMiniGameOptions_DebugMenu::GetTracePunchInfo() {
    return FMiniGame_TracePunch{};
}

FMiniGame_SpotLight UYMiniGameOptions_DebugMenu::GetSpotLightInfo() {
    return FMiniGame_SpotLight{};
}

FMiniGame_SlothSling UYMiniGameOptions_DebugMenu::GetSlothSlingInfo() {
    return FMiniGame_SlothSling{};
}

FMiniGame_PentaSais UYMiniGameOptions_DebugMenu::GetPentaSaisInfo() {
    return FMiniGame_PentaSais{};
}

FMiniGame_ObjectCount UYMiniGameOptions_DebugMenu::GetObjectCountInfo() {
    return FMiniGame_ObjectCount{};
}

FMiniGameDebugMenuParam_Common UYMiniGameOptions_DebugMenu::GetMiniGameDebugMenuParam() {
    return FMiniGameDebugMenuParam_Common{};
}

EImmediateMiniGameState UYMiniGameOptions_DebugMenu::GetImmidiateMiniGameState() {
    return EImmediateMiniGameState::None;
}

FMiniGame_HomeRunInfo UYMiniGameOptions_DebugMenu::GetHomeRunInfo() {
    return FMiniGame_HomeRunInfo{};
}

FMiniGame_FindTheDifference UYMiniGameOptions_DebugMenu::GetFindTheDifferenceInfo() {
    return FMiniGame_FindTheDifference{};
}

FMiniGame_FindOrange UYMiniGameOptions_DebugMenu::GetFindOrangeInfo() {
    return FMiniGame_FindOrange{};
}

int32 UYMiniGameOptions_DebugMenu::GetDebugMiniGameLevel() {
    return 0;
}

FMiniGame_DamageChallenge UYMiniGameOptions_DebugMenu::GetDamageChallengeInfo() {
    return FMiniGame_DamageChallenge{};
}

FMiniGame_ChipGather UYMiniGameOptions_DebugMenu::GetChipGatherInfo() {
    return FMiniGame_ChipGather{};
}

void UYMiniGameOptions_DebugMenu::DisableImmidiateMiniGameState() {
}

void UYMiniGameOptions_DebugMenu::DisableDebugTick() {
}

void UYMiniGameOptions_DebugMenu::DisableDebugStateAndTick() {
}

UYMiniGameOptions_DebugMenu::UYMiniGameOptions_DebugMenu() {
}

