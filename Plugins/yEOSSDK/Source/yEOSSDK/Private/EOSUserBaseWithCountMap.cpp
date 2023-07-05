#include "EOSUserBaseWithCountMap.h"

UEOSUserBase* UEOSUserBaseWithCountMap::GetUser() {
    return NULL;
}

int32 UEOSUserBaseWithCountMap::GetRefCount() const {
    return 0;
}

UEOSUserBaseWithCountMap::UEOSUserBaseWithCountMap() {
    this->m_pcUserBase = NULL;
}

