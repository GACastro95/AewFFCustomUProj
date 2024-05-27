#pragma once
#include "CoreMinimal.h"
#include "ELOSSLocalPlayer.h"
#include "ELLocalPlayer.generated.h"

class UELEOSManager;

UCLASS(Blueprintable, NonTransient)
class UELLocalPlayer : public UELOSSLocalPlayer {
    GENERATED_BODY()
public:
    UELLocalPlayer();

    UFUNCTION(BlueprintCallable)
    bool Login(UELEOSManager* ELEOSManager);
    
};

