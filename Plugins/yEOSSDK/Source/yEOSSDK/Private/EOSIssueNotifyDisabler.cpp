#include "EOSIssueNotifyDisabler.h"

bool UEOSIssueNotifyDisabler::CreateIssueNotifyDisabler(UEOSIssueNotifyDisabler*& _pcInstance) {
    return false;
}

UEOSIssueNotifyDisabler::UEOSIssueNotifyDisabler() {
    this->m_pcHook = NULL;
}

