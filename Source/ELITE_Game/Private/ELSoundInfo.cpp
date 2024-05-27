#include "ELSoundInfo.h"

UELSoundInfo::UELSoundInfo() {
}

void UELSoundInfo::SetStackPlaySound(bool _stack) {
}

void UELSoundInfo::SetSoundPlayInfo(FyStSoundPlayInfo _soundInfo) {
}

void UELSoundInfo::SetSoundAssetDataTables(FyStSoundAssetDataTable _stData) {
}

bool UELSoundInfo::IsStackPlaySound() {
    return false;
}

FyStSoundPlayInfo UELSoundInfo::GetSoundPlayInfo() {
    return FyStSoundPlayInfo{};
}

FyStSoundAssetDataTable UELSoundInfo::GetSoundAssetDataTables() const {
    return FyStSoundAssetDataTable{};
}


