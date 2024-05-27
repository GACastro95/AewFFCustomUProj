#pragma once
#include "CoreMinimal.h"
#include "EMiniGameID.h"
#include "LobbyPacketBase.h"
#include "ELEOSLobbyMiniGameInfo.generated.h"

UCLASS(Blueprintable)
class UELEOSLobbyMiniGameInfo : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnerPUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMiniGameID, bool> MiniGameUnlockInfo;
    
public:
    UELEOSLobbyMiniGameInfo();

    UFUNCTION(BlueprintCallable)
    void SetMiniGameUnlockInfo(EMiniGameID MiniGameId, bool Unlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMiniGameUnlockInfo(TMap<EMiniGameID, bool>& OutMiniGameUnlockInfo) const;
    
};

