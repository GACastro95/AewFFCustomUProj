#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendStatus.h"
#include "EEOSQueryStatus.h"
#include "EOSUserBase.h"
#include "EOSFriendUser.generated.h"

class UEOSPresenceBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSFriendUser : public UEOSUserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strFriendProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSPresenceBase* m_pcPresence;
    
public:
    UEOSFriendUser();
    UFUNCTION(BlueprintCallable)
    bool RequestGetPresence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfFriendProductUserID() const;
    
    UFUNCTION(BlueprintCallable)
    EEOSFriendStatus GetFriendStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSQueryStatus GetExternalAccountIdQueryStatus() const;
    
    UFUNCTION(BlueprintCallable)
    UEOSPresenceBase* GetEOSPresence();
    
};

