#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyPacketJsonData.generated.h"

UCLASS(Blueprintable)
class ULobbyPacketJsonData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonData;
    
public:
    ULobbyPacketJsonData();

    UFUNCTION(BlueprintCallable)
    bool Setup(const FString& _JsonData);
    
    UFUNCTION(BlueprintCallable)
    FString GetJsonData();
    
};

