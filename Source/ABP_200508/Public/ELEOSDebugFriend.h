#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEOSDebugFriend.generated.h"

class UELEOSFriend;
class UELEOSLobby;

UCLASS(Blueprintable)
class AELEOSDebugFriend : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSFriend* ELEOSFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* ELEOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
public:
    AELEOSDebugFriend(const FObjectInitializer& ObjectInitializer);

};

