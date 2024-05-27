#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedEOSQueryExternalAccountIdMapDelegate.h"
#include "ExternalAccountIdMap.h"
#include "EOSActionQueryExternalAccountIdMap.generated.h"

class UEOSActionQueryExternalAccountIdMap;
class UEOSUserManager;
class UObject;

UCLASS(Blueprintable)
class UEOSActionQueryExternalAccountIdMap : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedEOSQueryExternalAccountIdMap OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetProductIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalAccountIdMap ResultIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UEOSActionQueryExternalAccountIdMap();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEOSActionQueryExternalAccountIdMap* EOSActionQueryExternalAccountIdMap(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const TArray<FString>& NewTargetProductIDs);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Completed();
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

