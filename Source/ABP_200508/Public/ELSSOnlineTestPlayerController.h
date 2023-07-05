#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "ELSSOnlineTestPlayerController.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABP_200508_API AELSSOnlineTestPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D pitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftStickInput;
    
public:
    AELSSOnlineTestPlayerController();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UIPrepare_RPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInGameUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowControlGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAutoEliminateAIAnnounce();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RotTurn(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RotLookUp(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestHPGauge(AActor* InActor, int32 inNewHP, int32 inPrevHP, int32 inMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDisableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeHP(int32 inNewHP, int32 inMaxHP);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UIPrepare();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideInGameUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideControlGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAutoEliminateAIAnnounce();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInstantMessage(const FString& inMessage);
    
};

