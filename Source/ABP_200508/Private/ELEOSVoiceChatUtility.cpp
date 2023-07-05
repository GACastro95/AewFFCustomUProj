#include "ELEOSVoiceChatUtility.h"

bool UELEOSVoiceChatUtility::UpdateVoiceMutedAllMembers(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSVoiceChatUtility::UnmuteVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

bool UELEOSVoiceChatUtility::UnblockVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

bool UELEOSVoiceChatUtility::SetVoiceChatStartMuted(const UObject* WorldContextObject, bool _bMuted) {
    return false;
}

bool UELEOSVoiceChatUtility::SetVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSVoiceChatUtility::SetVoiceChatMuteAll(const UObject* WorldContextObject, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSVoiceChatUtility::SetVoiceChatEnabled(const UObject* WorldContextObject, bool _bEnabled) {
    return false;
}

bool UELEOSVoiceChatUtility::MuteVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

bool UELEOSVoiceChatUtility::IsVoiceChatSpeaking(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

bool UELEOSVoiceChatUtility::IsVoiceChatMuted(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

bool UELEOSVoiceChatUtility::IsVoiceChatBlocked(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

EEOSLobbyUserAudioStatus UELEOSVoiceChatUtility::GetVoiceChatStatus(const UObject* WorldContextObject, const FString& ProductUserID) {
    return EEOSLobbyUserAudioStatus::Unsupported;
}

bool UELEOSVoiceChatUtility::GetVoiceChatStartMuted(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSVoiceChatUtility::GetVoiceChatSpeakingUsers(const UObject* WorldContextObject, UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers) {
    return false;
}

EEOSLobbyUserMuteFlag UELEOSVoiceChatUtility::GetVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID) {
    return EEOSLobbyUserMuteFlag::None;
}

bool UELEOSVoiceChatUtility::GetVoiceChatEnabled(const UObject* WorldContextObject) {
    return false;
}

bool UELEOSVoiceChatUtility::ClearVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSVoiceChatUtility::ClearVoiceChatMuteAll(const UObject* WorldContextObject, EEOSLobbyUserMuteFlag Flag) {
    return false;
}

bool UELEOSVoiceChatUtility::BlockVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID) {
    return false;
}

UELEOSVoiceChatUtility::UELEOSVoiceChatUtility() {
}

