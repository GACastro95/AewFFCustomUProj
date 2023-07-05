#include "EOSAsyncTask.h"

void UEOSAsyncTask::Unlock() {
}

bool UEOSAsyncTask::TryLock() {
    return false;
}

bool UEOSAsyncTask::Stop() {
    return false;
}

bool UEOSAsyncTask::Start(bool _bLoopThread, bool _bSynchronous) {
    return false;
}

void UEOSAsyncTask::SetPause(bool _bPaused) {
}

void UEOSAsyncTask::Lock() {
}

bool UEOSAsyncTask::IsRunning() const {
    return false;
}

bool UEOSAsyncTask::IsEnd() const {
    return false;
}

UEOSAsyncTask* UEOSAsyncTask::CreateTask(UObject* _pcObject) {
    return NULL;
}

UEOSAsyncTask* UEOSAsyncTask::CreateAndRanTask(EEOSResForSwitch& EEOSResForSwitch, UObject* _pcObject, bool _bSynchronous, FEOSDoWorkEvent _cEvent) {
    return NULL;
}

UEOSAsyncTask* UEOSAsyncTask::CreateAndRanLoopTask(EEOSResForSwitch& EEOSResForSwitch, UObject* _pcObject, bool _bSynchronous, FEOSDoWorkEvent _cEvent) {
    return NULL;
}

UEOSAsyncTask::UEOSAsyncTask() {
    this->m_pcUserObject = NULL;
}

