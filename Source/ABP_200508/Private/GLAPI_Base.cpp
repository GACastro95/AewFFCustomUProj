#include "GLAPI_Base.h"

UGLAPI_Base::UGLAPI_Base() {
}

FSSGameLiftConnectData UGLAPI_Base::GetGameLiftConnectData(const ESSGameLiftConnectType accsessTarget) {
    return FSSGameLiftConnectData{};
}

EGameLiftActivateStatus UGLAPI_Base::Activate() {
    return EGameLiftActivateStatus::eACTIVATE_Success;
}


