#include "EOSLobbyUser.h"

bool UEOSLobbyUser::IsTextBlocked() const {
    return false;
}

bool UEOSLobbyUser::IsSpeaking() const {
    return false;
}

bool UEOSLobbyUser::IsMuted() const {
    return false;
}

bool UEOSLobbyUser::IsBlocked() const {
    return false;
}

EEOSLobbyUserMuteFlag UEOSLobbyUser::GetTextBlockFlag() const {
    return EEOSLobbyUserMuteFlag::None;
}

EEOSLobbyUserMuteFlag UEOSLobbyUser::GetMuteFlag() const {
    return EEOSLobbyUserMuteFlag::None;
}

EEOSLobbyUserMuteFlag UEOSLobbyUser::GetBlockFlag() const {
    return EEOSLobbyUserMuteFlag::None;
}

EEOSLobbyUserAudioStatus UEOSLobbyUser::GetAudioStatus() const {
    return EEOSLobbyUserAudioStatus::Unsupported;
}

UEOSLobbyUser::UEOSLobbyUser() {
}

