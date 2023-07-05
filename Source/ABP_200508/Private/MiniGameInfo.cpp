#include "MiniGameInfo.h"

FMiniGameInfo::FMiniGameInfo() {
    this->Level = 0;
    this->IsCareer = false;
    this->CareerCity = ECareerCity::None;
    this->CareerResult = EMiniGameCareerResult::NoGame;
}

