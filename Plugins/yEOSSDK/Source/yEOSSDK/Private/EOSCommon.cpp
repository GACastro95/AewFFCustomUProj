#include "EOSCommon.h"

UEOSCommon::UEOSCommon() {
}

int32 UEOSCommon::GetLastResult() const {
    return 0;
}

FString UEOSCommon::GetLastErrorString() {
    return TEXT("");
}

bool UEOSCommon::EndRelease() {
    return false;
}

bool UEOSCommon::Dispose() {
    return false;
}

bool UEOSCommon::BeginRelease() {
    return false;
}


