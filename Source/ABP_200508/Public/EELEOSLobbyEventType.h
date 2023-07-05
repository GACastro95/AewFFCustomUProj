#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyEventType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLobbyEventType : uint8 {
    Created,
    Destroyed,
    Joined,
    Leaved,
    KickedMe,
    KickedOther,
    ChangeOwner,
    MemberUpdated,
    MemberUpdatedJoin,
    MemberUpdatedLeft,
    InviteReceived,
    InviteReject,
    QueryInviteResponse,
    OnPromotedMe,
    WrestlerDataReceived,
    VoiceChatEnabled,
    VoiceChatDisabled,
    VoiceChatUnsupported,
    Mute,
    Unmute,
    StartSpeaking,
    StopSpeaking,
    Block,
    Unblock,
};

