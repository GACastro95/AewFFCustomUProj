#include "SSGameLobbyData.h"

FSSGameLobbyData::FSSGameLobbyData() {
    this->ssGameMatchPlayerNum = 0;
    this->ssGameMatchMinPlayerNum = 0;
    this->ssGameMatchLobbyTime = 0.00f;
    this->ssGameLaunchType = ESSModeLaunchType::DedicatedServer;
}

