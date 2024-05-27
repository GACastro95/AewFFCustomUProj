#include "GameLiftObjectBase.h"

UGameLiftObjectBase::UGameLiftObjectBase() {
    this->LastTitleStorageEvent = EEOSTitleStorageEvent::GetFileList;
}

void UGameLiftObjectBase::UpdateTargetRegionLatencyData() {
}

void UGameLiftObjectBase::StartTargetRegionLatencyData() {
}

void UGameLiftObjectBase::RequestDownloadSSModeServiceParam(bool inSSModeOnly) {
}

void UGameLiftObjectBase::OnUpdateSSModeServiceParam() {
}

void UGameLiftObjectBase::OnTitleStorageEvent(EEOSTitleStorageEvent inEvent, UEOSTitleStorageBase* inTitleStorageBase, const FEOSTitleStorageProgress& inTitleStorageProgress) {
}

void UGameLiftObjectBase::OnExitSSMode() {
}

void UGameLiftObjectBase::OnEnterSSMode() {
}

bool UGameLiftObjectBase::IsRegionLatencyUpdateEnd() {
    return false;
}

bool UGameLiftObjectBase::IsRegionInfoEnd() {
    return false;
}

bool UGameLiftObjectBase::IsDownloadingSSModeServiceParam() const {
    return false;
}


