#pragma once
#include "CoreMinimal.h"
#include "EEOSAuthEvent.h"
#include "EEOSPresenceStatus.h"
#include "EOSUserBase.h"
#include "EOSUser.generated.h"

class UEOSAuth;
class UEOSFriend;
class UEOSPresenceBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUser : public UEOSUserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFriend* m_pcFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSPresenceBase* m_pcPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_cPresenceDataCache;
    
public:
    UEOSUser();
    UFUNCTION(BlueprintCallable)
    bool RequestSetPresenceStatus(EEOSPresenceStatus _enStatus);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetPresenceData(TMap<FString, FString> _cMapData);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetPresence(const FString& _strRichText);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetPresence();
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetFriends();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeletePresenceData(TArray<FString> _cArrayData);
    
    UFUNCTION(BlueprintCallable)
    bool RequestContentsList();
    
    UFUNCTION(BlueprintCallable)
    void OnEOSAuthEvent(EEOSAuthEvent _enEvent, UEOSAuth* _pcAuth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetPresenceCache() const;
    
    UFUNCTION(BlueprintCallable)
    UEOSPresenceBase* GetEOSPresence();
    
    UFUNCTION(BlueprintCallable)
    UEOSFriend* GetEOSFriend();
    
};

