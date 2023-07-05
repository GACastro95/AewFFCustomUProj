#include "YDBGWatermark.h"

bool UYDBGWatermark::Setup(const FString& _strChangelistFileName) {
    return false;
}

FString UYDBGWatermark::GetVersion() const {
    return TEXT("");
}

bool UYDBGWatermark::GetUserName(FString& _rstrName) {
    return false;
}

EYDBGDeviceType UYDBGWatermark::GetDeviceType() const {
    return EYDBGDeviceType::Unknown;
}

bool UYDBGWatermark::GetComputerName(FString& _rstrName) {
    return false;
}

FString UYDBGWatermark::GetCLUser() const {
    return TEXT("");
}

FString UYDBGWatermark::GetCLDate() const {
    return TEXT("");
}

FString UYDBGWatermark::GetCLClient() const {
    return TEXT("");
}

int32 UYDBGWatermark::GetChangeListNo() const {
    return 0;
}

bool UYDBGWatermark::CreateYDBGWatermark(UYDBGWatermark*& _pcInst) {
    return false;
}

UYDBGWatermark::UYDBGWatermark() {
}

