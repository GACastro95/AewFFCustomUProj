#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStickinputDir.h"
#include "ELInteractiveVictoryCutsceneSpecialSceneParam.h"
#include "ELVictoryCutsceneManagerCore.h"
#include "ELVictoryCutsceneManager.generated.h"

class AActor;
class AELCharacter_Native;
class UAtomComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELVictoryCutsceneManager : public AELVictoryCutsceneManagerCore {
    GENERATED_BODY()
public:
    AELVictoryCutsceneManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSpecialScene(const FELInteractiveVictoryCutsceneSpecialSceneParam& SpecialSceneParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartObserveBreakOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInteractiveWinscene();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupPlayer(AELCharacter_Native* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraLocationAndRotation_Impl(FVector Location, FRotator Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAtomComponent(UAtomComponent* _AtomComponent, AActor* _RAManager);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SceneCaptureWithTransform_Impl(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SceneCapture_Impl();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeControlBtn(const AELCharacter_Native* AtkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayNormalTauntEvent(EStickinputDir InputDir);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_Taunt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_OverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedEvent_EnterEntrance(AELCharacter_Native* EnterPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSpecialScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInteractiveWinscene();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageHPEvent(const AELCharacter_Native* AtkPlayer, float DamageHead, float DamageArm, float DamageBody, float DamageLeg);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelTimerEvent();
    
};

