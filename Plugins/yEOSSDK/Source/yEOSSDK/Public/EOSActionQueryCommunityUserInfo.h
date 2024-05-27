#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedQueryCommunityUserInfoDelegate.h"
#include "EOSActionQueryCommunityUserInfo.generated.h"

class UEOSActionQueryCommunityUserInfo;
class UEOSCommunityUserBase;
class UObject;

UCLASS(Blueprintable)
class UEOSActionQueryCommunityUserInfo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedQueryCommunityUserInfo OnCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* User;
    
    UEOSActionQueryCommunityUserInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEOSActionQueryCommunityUserInfo* EOSActionQueryCommunityUserInfo(UObject* NewWorldContextObject, UEOSCommunityUserBase* NewUser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

