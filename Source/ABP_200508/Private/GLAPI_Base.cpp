#include "GLAPI_Base.h"

FSSGameLiftConnectData UGLAPI_Base::GetGameLiftConnectData(const ESSGameLiftConnectType accsessTarget) {
    return FSSGameLiftConnectData{};
}

EGameLiftActivateStatus UGLAPI_Base::Activate() {
    return EGameLiftActivateStatus::eACTIVATE_Success;
}

UGLAPI_Base::UGLAPI_Base() {
}

