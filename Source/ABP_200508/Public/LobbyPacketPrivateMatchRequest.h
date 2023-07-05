#pragma once
#include "CoreMinimal.h"
#include "LobbyPacketBase.h"
#include "LobbyPacketPrivateMatchRequest.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketPrivateMatchRequest : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchParam;
    
public:
    ULobbyPacketPrivateMatchRequest();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchParam() const;
    
};

