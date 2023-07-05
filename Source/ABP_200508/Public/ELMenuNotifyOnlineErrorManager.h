#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DetactionOfflineStateDelegate.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "ELMenuNotifyOnlineErrorManager.generated.h"

class AELNotifyOnlineError;

UCLASS(Blueprintable)
class ABP_200508_API UELMenuNotifyOnlineErrorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPausedErrorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnlineGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELNotifyOnlineError* m_NotifyOnlineErrorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELEOSEventType> m_ReserveErrorType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetactionOfflineState OnDetactionOfflineStateDelegate;
    
    UELMenuNotifyOnlineErrorManager();
    UFUNCTION(BlueprintCallable)
    void StartErrorCheck();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineGameMode(bool _value);
    
    UFUNCTION(BlueprintCallable)
    void PauseErrorCheck();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEOSEvent(EELEOSEventType EventType, EELEOSEventResult EventResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineGameMode() const;
    
    UFUNCTION(BlueprintCallable)
    void EndErrorCheck();
    
    UFUNCTION(BlueprintCallable)
    void DebugForceError();
    
};

