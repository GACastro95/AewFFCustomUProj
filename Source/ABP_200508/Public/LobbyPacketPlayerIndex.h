#pragma once
#include "CoreMinimal.h"
#include "LobbyPacketBase.h"
#include "LobbyPlayerIndex.h"
#include "LobbyPacketPlayerIndex.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketPlayerIndex : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerIndex LobbyPlayerIndex;
    
public:
    ULobbyPacketPlayerIndex();
    UFUNCTION(BlueprintCallable)
    void GetPlayerIndex(TArray<FString>& _PlayerIndexArray);
    
};

