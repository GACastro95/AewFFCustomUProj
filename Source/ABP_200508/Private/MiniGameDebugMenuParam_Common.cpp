#include "MiniGameDebugMenuParam_Common.h"

FMiniGameDebugMenuParam_Common::FMiniGameDebugMenuParam_Common() {
    this->bIsDebugPause = false;
    this->bIsDebugTimerStop = false;
    this->sLanguageIndex = 0;
    this->bIsDebugDispCorrect = false;
    this->bIsSingleMode = false;
    this->bIsCPUNotWorking = false;
    this->sCameraIndex = 0;
    this->bChangeWinner = false;
    this->sWinnerIndex = 0;
    this->bChangeWinnerTeam = false;
    this->sWinnerTeamIndex = 0;
}

