#include "EOSSessionUser.h"

UEOSSessionUser::UEOSSessionUser() {
    this->m_pcGameFlowData = NULL;
}

bool UEOSSessionUser::SetupGameFlow() {
    return false;
}

bool UEOSSessionUser::ResetGameFlow() {
    return false;
}

bool UEOSSessionUser::IsRegisted() {
    return false;
}

bool UEOSSessionUser::GetGameFlow(UEOSSessionP2PAFGameFlowData*& _pcGameFlowData) {
    return false;
}


