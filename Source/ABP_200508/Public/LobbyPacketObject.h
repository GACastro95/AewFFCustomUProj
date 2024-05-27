#pragma once
#include "CoreMinimal.h"
#include "LobbyPacketBase.h"
#include "LobbyPacketObject.generated.h"

class UObject;

UCLASS(Blueprintable)
class ULobbyPacketObject : public ULobbyPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Data;
    
public:
    ULobbyPacketObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetData() const;
    
};

