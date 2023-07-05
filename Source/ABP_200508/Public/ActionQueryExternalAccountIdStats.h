#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryExternalAccountIdStatsDelegate.h"
#include "ActionQueryExternalAccountIdStats.generated.h"

class UActionQueryExternalAccountIdStats;
class UObject;

UCLASS(Blueprintable)
class UActionQueryExternalAccountIdStats : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryExternalAccountIdStats OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UActionQueryExternalAccountIdStats();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UActionQueryExternalAccountIdStats* ActionQueryExternalAccountIdStats(UObject* NewWorldContextObject, const FString& TargetProductUserId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

