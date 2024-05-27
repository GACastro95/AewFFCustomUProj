#pragma once
#include "CoreMinimal.h"
#include "EEOSLobbyUserAudioStatus.h"
#include "EEOSLobbyUserMuteFlag.h"
#include "EOSCommunityUserBase.h"
#include "EOSLobbyUser.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLobbyUser : public UEOSCommunityUserBase {
    GENERATED_BODY()
public:
    UEOSLobbyUser();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetTextBlockFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetMuteFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetBlockFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserAudioStatus GetAudioStatus() const;
    
};

