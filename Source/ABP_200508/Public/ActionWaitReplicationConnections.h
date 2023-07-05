#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedWaitReplicationConnectionsDelegate.h"
#include "ActionWaitReplicationConnections.generated.h"

class UActionWaitReplicationConnections;
class UObject;

UCLASS(Blueprintable)
class UActionWaitReplicationConnections : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedWaitReplicationConnections OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UActionWaitReplicationConnections();
protected:
    UFUNCTION(BlueprintCallable)
    void PollStatus();
    
    UFUNCTION(BlueprintCallable)
    void Completed();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionWaitReplicationConnections* ActionWaitReplicationConnections(UObject* NewWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

