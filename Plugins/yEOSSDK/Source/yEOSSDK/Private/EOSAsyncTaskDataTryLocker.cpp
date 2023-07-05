#include "EOSAsyncTaskDataTryLocker.h"

bool UEOSAsyncTaskDataTryLocker::IsLocked() {
    return false;
}

UEOSAsyncTaskDataTryLocker* UEOSAsyncTaskDataTryLocker::CreateAsyncTaskTryLocker(UEOSAsyncTask* _pcTask) {
    return NULL;
}

UEOSAsyncTaskDataTryLocker::UEOSAsyncTaskDataTryLocker() {
    this->m_pcTask = NULL;
}

