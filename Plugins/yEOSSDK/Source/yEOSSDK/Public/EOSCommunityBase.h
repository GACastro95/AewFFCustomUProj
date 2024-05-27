#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityEventDispatcherDelegate.h"
#include "EOSCommunitySearchResultEventDispatcherDelegate.h"
#include "EOSIDs.h"
#include "EOSCommunityBase.generated.h"

class UEOSCommunityInfoBase;
class UEOSUserManager;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommunityBase : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCommunityEventDispatcher CommunityEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCommunitySearchResultEventDispatcher CommunitySearchResultEventDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> m_cOwnCommunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> m_cInviteCommunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> m_cJoinCommunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* m_pcUserManager;
    
public:
    UEOSCommunityBase();

    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSCommunityInfoBase*> GetOwnCommunities();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSCommunityInfoBase*> GetJoinCommunities();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSCommunityInfoBase*> GetInviteCommunities();
    
};

