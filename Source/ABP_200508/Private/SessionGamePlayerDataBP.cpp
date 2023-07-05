#include "SessionGamePlayerDataBP.h"

FSessionGamePlayerDataBP::FSessionGamePlayerDataBP() {
    this->Rank = 0;
    this->League = 0;
    this->WinLoseCount = 0;
    this->Platform = EPlatformType::PLATFORM_TYPE_WINDOWS;
    this->VoiceChat = 0;
    this->TotalGamePoint = 0;
}

