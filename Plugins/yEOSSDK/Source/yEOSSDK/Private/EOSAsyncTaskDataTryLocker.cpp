#include "EOSAsyncTaskDataTryLocker.h"

UEOSAsyncTaskDataTryLocker::UEOSAsyncTaskDataTryLocker() {
    this->m_pcTask = NULL;
}

bool UEOSAsyncTaskDataTryLocker::IsLocked() {
    return false;
}

UEOSAsyncTaskDataTryLocker* UEOSAsyncTaskDataTryLocker::CreateAsyncTaskTryLocker(UEOSAsyncTask* _pcTask) {
    return NULL;
}


