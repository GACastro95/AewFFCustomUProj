#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "GameFramework/PlayerState.h"
#include "ELSSOnlineTestPlayerState.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSOnlineTestPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoneUIPrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    AELSSOnlineTestPlayerState(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DoneUIPrepare_Server();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoneUIPrepare();
    
};

