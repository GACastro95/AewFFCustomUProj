#include "EOSInstanceBase.h"

UEOSInstanceBase::UEOSInstanceBase() {
    this->m_pcRefAPIRequestManager = NULL;
}

EEOSObjectType UEOSInstanceBase::GetObjectType() const {
    return EEOSObjectType::Unknown;
}

bool UEOSInstanceBase::GetInstanceManagerForDebug(UEOSInstanceManagerBase*& _pcInstanceManagerBase, int32 _uInstanceID) {
    return false;
}

uint8 UEOSInstanceBase::GetInstanceID() const {
    return 0;
}


