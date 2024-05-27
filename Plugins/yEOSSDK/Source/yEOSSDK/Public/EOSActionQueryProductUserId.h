#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedEOSActionQueryProductUserIdDelegate.h"
#include "EExternalAccountType.h"
#include "ProductUserIdMap.h"
#include "EOSActionQueryProductUserId.generated.h"

class UEOSActionQueryProductUserId;
class UEOSUserManager;
class UObject;

UCLASS(Blueprintable)
class UEOSActionQueryProductUserId : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedEOSActionQueryProductUserId OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetAccountIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType AccountType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductUserIdMap ResultIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UEOSActionQueryProductUserId();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEOSActionQueryProductUserId* EOSActionQueryProductUserId(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const TArray<FString>& NewTargetAccountIDs, EExternalAccountType NewAccountType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Completed();
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

