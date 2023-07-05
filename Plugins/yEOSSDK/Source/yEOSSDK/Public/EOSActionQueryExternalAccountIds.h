#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedEOSQueryExternalAccountIdsDelegate.h"
#include "EOSActionQueryExternalAccountIds.generated.h"

class UEOSActionQueryExternalAccountIds;
class UEOSUserManager;
class UObject;

UCLASS(Blueprintable)
class UEOSActionQueryExternalAccountIds : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedEOSQueryExternalAccountIds OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetProductID;
    
    UEOSActionQueryExternalAccountIds();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEOSActionQueryExternalAccountIds* EOSActionQueryExternalAccountIds(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const FString& NewTargetProductID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

