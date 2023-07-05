#include "EOSTitleStorageBinary.h"

bool UEOSTitleStorageBinary::Unzip(TArray<FEOSFileOnMemory>& _cFiles) const {
    return false;
}

bool UEOSTitleStorageBinary::IsValid() const {
    return false;
}

bool UEOSTitleStorageBinary::IsDeleteInstance() const {
    return false;
}

int32 UEOSTitleStorageBinary::GetTotalSize() const {
    return 0;
}

int32 UEOSTitleStorageBinary::GetOffset() const {
    return 0;
}

FString UEOSTitleStorageBinary::GetAsText() {
    return TEXT("");
}

bool UEOSTitleStorageBinary::ConvertFileOnMemoryToString(FString& _rText, const FEOSFileOnMemory& _cFileOnMemory) {
    return false;
}

UEOSTitleStorageBinary::UEOSTitleStorageBinary() {
}

