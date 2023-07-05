#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedEOSQueryExternalAccountIdDelegate.h"
#include "EExternalAccountType.h"
#include "EOSActionQueryExternalAccountId.generated.h"

class UEOSActionQueryExternalAccountId;
class UEOSUserManager;
class UObject;

UCLASS(Blueprintable)
class UEOSActionQueryExternalAccountId : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedEOSQueryExternalAccountId OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType AccountType;
    
    UEOSActionQueryExternalAccountId();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEOSActionQueryExternalAccountId* EOSActionQueryExternalAccountId(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const FString& NewTargetProductID, EExternalAccountType NewAccountType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

