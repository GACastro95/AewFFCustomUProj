#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEOSDebugLobby.generated.h"

class UELEOSLobby;

UCLASS(Blueprintable)
class AELEOSDebugLobby : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* ELEOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
public:
    AELEOSDebugLobby();
};

