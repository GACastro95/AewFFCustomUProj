#include "YGS2Req_GetSSMasterData.h"

void UYGS2Req_GetSSMasterData::SetRequestParams(const FString& stage, const FString& app_ver, bool only_data_id) {
}

FYGS2SSMasterData UYGS2Req_GetSSMasterData::GetMasterData() const {
    return FYGS2SSMasterData{};
}

float UYGS2Req_GetSSMasterData::GetElapsedTime() const {
    return 0.0f;
}

UYGS2Req_GetSSMasterData::UYGS2Req_GetSSMasterData() {
}

