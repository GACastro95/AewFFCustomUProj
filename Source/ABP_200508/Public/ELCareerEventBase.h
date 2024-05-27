#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Actor.h"
#include "CareerEventActionInfo.h"
#include "ECareerAttireType.h"
#include "ECareerRingObject.h"
#include "ELCareerEventBase.generated.h"

class UActorComponent;
class UCineCameraComponent;
class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerEventBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> m_DefaultTargetPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_CharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_PropArray;
    
public:
    AELCareerEventBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchCameraBP(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWrestlerAnimation(FCareerEventActionInfo _Info);
    
    UFUNCTION(BlueprintCallable)
    void SetupWrestler();
    
    UFUNCTION(BlueprintCallable)
    void SetupRingObject();
    
    UFUNCTION(BlueprintCallable)
    void SetupProp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDataTable_EventCameraPosition(UDataTable* pDataTable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCineCameraComponent* GetCurrentCineCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCineCameraComponent* GetCineCameraComponentFromIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispRingObject(ECareerRingObject eRingObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugToggleAnimPlayStop();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetting();
    
    UFUNCTION(BlueprintCallable)
    void DebugInputYaw(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputUp(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputRight(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputPress(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputPitch(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputFov(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputForward(float fAmount);
    
    UFUNCTION(BlueprintCallable)
    void DebugInputDecision();
    
    UFUNCTION(BlueprintCallable)
    void DebugInputChangeAsset(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeWrestler(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeMode();
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeCamera(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void DebugAnimeSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* CreateEventWrestler(FTransform Transform, EWrestlerID_N WrestlerID, ECareerAttireType eAttire);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* CreateEventProp();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraPosition(FCareerEventActionInfo _Info, int32 CameraSwitchIndex);
    
};

