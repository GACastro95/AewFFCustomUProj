#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedSetAndWaitPlayerStateDelegate.h"
#include "EELEOSSessionEventResult.h"
#include "EELEOSSessionEventType.h"
#include "ESessionPlayerStateNameType.h"
#include "ESessionPlayerStateType.h"
#include "ActionWaitPlayerState.generated.h"

class UActionWaitPlayerState;
class UObject;

UCLASS(Blueprintable)
class UActionWaitPlayerState : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedSetAndWaitPlayerState OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionPlayerStateNameType StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionPlayerStateType State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllMatched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UActionWaitPlayerState();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSessionEvent(EELEOSSessionEventType EventType, EELEOSSessionEventResult EventResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleted();
    
    UFUNCTION(BlueprintCallable)
    void Completed();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionWaitPlayerState* ActionWaitPlayerState(UObject* NewWorldContextObject, ESessionPlayerStateNameType NewStateName, ESessionPlayerStateType NewState, bool NewBSetState, bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

