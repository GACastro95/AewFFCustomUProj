#include "CareerSnapshot.h"

UCareerSnapshot::UCareerSnapshot() {
    this->Image = NULL;
}

void UCareerSnapshot::SetSnapshotParam(const FCareerSnapshotParam& NewParam) {
}

void UCareerSnapshot::SetIndex(int32 Index) {
}

bool UCareerSnapshot::SaveImageMulti(USaveData_AccessorBase* SaveDataAccessor) {
    return false;
}

bool UCareerSnapshot::SaveImage() {
    return false;
}

void UCareerSnapshot::ReleaseImage() {
}

void UCareerSnapshot::LoadParam() {
}

bool UCareerSnapshot::LoadImageDataMulti() {
    return false;
}

bool UCareerSnapshot::LoadImageData() {
    return false;
}

bool UCareerSnapshot::IsExists() const {
    return false;
}

bool UCareerSnapshot::IsBusy() const {
    return false;
}

void UCareerSnapshot::Init() {
}

bool UCareerSnapshot::HasImage() const {
    return false;
}

FText UCareerSnapshot::GetWreslterNameText() const {
    return FText::GetEmpty();
}

FText UCareerSnapshot::GetWeekText() const {
    return FText::GetEmpty();
}

int32 UCareerSnapshot::GetTurnNo() const {
    return 0;
}

FText UCareerSnapshot::GetTitleText() const {
    return FText::GetEmpty();
}

FCareerSnapshotParam UCareerSnapshot::GetSnapshotParam() const {
    return FCareerSnapshotParam{};
}

UTexture2DDynamic* UCareerSnapshot::GetImage() const {
    return NULL;
}

FText UCareerSnapshot::GetDateTime() const {
    return FText::GetEmpty();
}

bool UCareerSnapshot::DeleteParamOnLost() {
    return false;
}

bool UCareerSnapshot::DeleteImage() {
    return false;
}

bool UCareerSnapshot::ConvertToImage(UTextureRenderTarget2D* RenderTarget) {
    return false;
}

void UCareerSnapshot::ClearBuffer() {
}

void UCareerSnapshot::Callback_SaveEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}

void UCareerSnapshot::Callback_LoadEndMulti(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}

void UCareerSnapshot::Callback_LoadEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}

void UCareerSnapshot::Callback_DeleteEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}


