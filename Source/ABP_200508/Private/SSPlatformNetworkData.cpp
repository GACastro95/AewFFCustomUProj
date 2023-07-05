#include "SSPlatformNetworkData.h"

FSSPlatformNetworkData::FSSPlatformNetworkData() {
    this->AppStatus = EELApplicationStatus::Unknown;
    this->NetworkStatus = EELNetworkStatus::Disabled;
    this->networkInfo = EELNetworkType::Unknown;
    this->serverConnect = EELNetworkConnectionStatus::NoConnection;
    this->ServerType = EELServerType::EOS;
}

