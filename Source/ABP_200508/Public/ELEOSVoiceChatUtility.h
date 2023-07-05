#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEOSLobbyUserAudioStatus.h"
#include "EEOSLobbyUserMuteFlag.h"
#include "ELEOSVoiceChatUtility.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UObject;

UCLASS(Blueprintable)
class UELEOSVoiceChatUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELEOSVoiceChatUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UpdateVoiceMutedAllMembers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnmuteVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnblockVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetVoiceChatStartMuted(const UObject* WorldContextObject, bool _bMuted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetVoiceChatMuteAll(const UObject* WorldContextObject, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetVoiceChatEnabled(const UObject* WorldContextObject, bool _bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool MuteVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVoiceChatSpeaking(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVoiceChatMuted(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVoiceChatBlocked(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EEOSLobbyUserAudioStatus GetVoiceChatStatus(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetVoiceChatStartMuted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetVoiceChatSpeakingUsers(const UObject* WorldContextObject, UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EEOSLobbyUserMuteFlag GetVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetVoiceChatEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ClearVoiceChatMuteFlag(const UObject* WorldContextObject, const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ClearVoiceChatMuteAll(const UObject* WorldContextObject, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BlockVoiceChat(const UObject* WorldContextObject, const FString& ProductUserID);
    
};

