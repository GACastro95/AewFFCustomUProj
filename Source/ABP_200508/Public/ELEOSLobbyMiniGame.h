#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EELEOSLobbyMiniGameSteps.h"
#include "EELEOSLobbyPacketType.h"
#include "OnMiniGameNotifyDelegate.h"
#include "OnMiniGameOwnerSelectInfoDelegate.h"
#include "OnSetupCompleteEventDelegate.h"
#include "ELEOSLobbyMiniGame.generated.h"

class UELEOSLobby;
class UELEOSLobbyMiniGameInfo;
class UEOSUser;
class UEOSUserBase;
class ULobbyPacketBase;

UCLASS(Blueprintable)
class AELEOSLobbyMiniGame : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelfPUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* ELEOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEOSLobbyMiniGameSteps Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobbyMiniGameInfo* ELEOSLobbyMiniGameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RequestMiniGameInfoTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RequestMiniGameMemberStepsTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EELEOSLobbyMiniGameSteps> MemberSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetupCompleteEvent OnSetupCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMiniGameOwnerSelectInfo OnMiniGameOwnerSelectInfoEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMiniGameNotify OnMiniGameNotifyEvent;
    
public:
    AELEOSLobbyMiniGame();
    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSUser* InSelf, UELEOSLobby* InELEOSLobby, UELEOSLobbyMiniGameInfo* Info, FOnSetupCompleteEvent OnSetupComplete, FOnMiniGameNotify OnNotify, FOnMiniGameOwnerSelectInfo OnOwnerSelectInfo);
    
    UFUNCTION(BlueprintCallable)
    bool SendOwnerSelectInfo(int32 InNextCursor, bool InDecide, bool InCancel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivePacket(EELEOSLobbyPacketType InPacketType, ULobbyPacketBase* InPacket, UEOSUserBase* InSender);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELEOSLobbyMiniGameSteps GetNowStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSLobbyMiniGameInfo* GetELEOSLobbyMiniGameInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
};

