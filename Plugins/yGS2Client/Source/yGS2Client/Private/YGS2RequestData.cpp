#include "YGS2RequestData.h"

FYGS2RequestData::FYGS2RequestData() {
    this->Api = EYGS2Api::None;
    this->Method = EYGS2Method::Read;
    this->Success = false;
}

