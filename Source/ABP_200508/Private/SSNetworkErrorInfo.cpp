#include "SSNetworkErrorInfo.h"

FSSNetworkErrorInfo::FSSNetworkErrorInfo() {
    this->errWorld = NULL;
    this->errNo = 0;
    this->errMax = 0;
    this->errAPIType = 0;
    this->errResponseID = 0;
    this->errResponseIDtoAWS = 0;
    this->errID = eErrorID::eErrorID_None;
    this->errOnlineType = ESSOnlineErrorType::ESSOnlineErrorType_None;
    this->errCodeForPlatformDialog = 0;
}

