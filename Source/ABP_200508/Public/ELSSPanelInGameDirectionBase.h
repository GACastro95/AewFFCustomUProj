#pragma once
#include "CoreMinimal.h"
#include "ELSSPanelBase.h"
#include "SSPanelInGameDirectionBaseEventDispatcherDelegate.h"
#include "ELSSPanelInGameDirectionBase.generated.h"

class AELSSPlayer;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSPanelInGameDirectionBase : public UELSSPanelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPanelInGameDirectionBaseEventDispatcher EventOnEndPlayFightAnim;
    
public:
    UELSSPanelInGameDirectionBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEndMatch(bool InIsWinner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenNamePlate(AELSSPlayer* inPlayer, int32 InChampionNum, const FString& InRingName, const FString& InGamerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayFightEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayEndMatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseNamePlate();
    
};

