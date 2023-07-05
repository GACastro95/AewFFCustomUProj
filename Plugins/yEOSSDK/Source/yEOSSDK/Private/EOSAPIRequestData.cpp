#include "EOSAPIRequestData.h"

UEOSAPIRequestData::UEOSAPIRequestData() {
    this->m_pcManager = NULL;
    this->m_pcEOSCommon = NULL;
    this->m_pcEOSInstanceBase = NULL;
    this->m_enFlags = EEOSAPIRequestDataFlag::None;
    this->m_APIRequestCallback = NULL;
}

