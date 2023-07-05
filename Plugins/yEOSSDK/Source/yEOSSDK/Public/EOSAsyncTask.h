#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSResForSwitch.h"
#include "EOSAsyncTaskDispatcherDelegate.h"
#include "EOSDoWorkEventDelegate.h"
#include "EOSAsyncTask.generated.h"

class UEOSAsyncTask;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAsyncTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAsyncTaskDispatcher AsyncTaskDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_pcUserObject;
    
public:
    UEOSAsyncTask();
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    bool TryLock();
    
    UFUNCTION(BlueprintCallable)
    bool Stop();
    
    UFUNCTION(BlueprintCallable)
    bool Start(bool _bLoopThread, bool _bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool _bPaused);
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
    UFUNCTION(BlueprintCallable)
    static UEOSAsyncTask* CreateTask(UObject* _pcObject);
    
    UFUNCTION(BlueprintCallable)
    static UEOSAsyncTask* CreateAndRanTask(EEOSResForSwitch& EEOSResForSwitch, UObject* _pcObject, bool _bSynchronous, FEOSDoWorkEvent _cEvent);
    
    UFUNCTION(BlueprintCallable)
    static UEOSAsyncTask* CreateAndRanLoopTask(EEOSResForSwitch& EEOSResForSwitch, UObject* _pcObject, bool _bSynchronous, FEOSDoWorkEvent _cEvent);
    
};

