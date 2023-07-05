#include "ELEOSLobbyMiniGameOwnerSelectInfo.h"

void UELEOSLobbyMiniGameOwnerSelectInfo::SetOwnerSelect(int32 InNextCursor, bool InDecide, bool InCancel) {
}

void UELEOSLobbyMiniGameOwnerSelectInfo::GetOwnerSelect(int32& OutNextCursor, bool& OutDecide, bool& OutCancel) const {
}

UELEOSLobbyMiniGameOwnerSelectInfo::UELEOSLobbyMiniGameOwnerSelectInfo() {
    this->NextCursor = 0;
    this->Decide = false;
    this->Cancel = false;
}

