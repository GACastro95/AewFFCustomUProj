#pragma once
#include "CoreMinimal.h"
#include "EOSFriendAPIVersionSettings.h"
#include "EOSFriendEventDispatcherDelegate.h"
#include "EOSIDs.h"
#include "UpdatePUIDEventDispatcherDelegate.h"
#include "EOSFriend.generated.h"

class UEOSFriendOwnRequest;
class UEOSFriendUser;
class UEOSPresenceBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSFriend : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSFriendEventDispatcher FriendEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePUIDEventDispatcher UpdatePUIDEventDispacher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSFriendUser*> m_cUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSFriendOwnRequest*> m_cOwnRequests;
    
public:
    UEOSFriend();

    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableForAutomaticGetInformationBits(int32 _enAutomaticGetInfoBit);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSFriendAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetFriends();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSFriendUser*> GetUsers();
    
    UFUNCTION(BlueprintCallable)
    void GetProductUserIds(TArray<FString>& ProductUserIDs);
    
    UFUNCTION(BlueprintCallable)
    void FindFriendPresenceByEpicID(UEOSPresenceBase*& _Presence, const FString& _EpicID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindFriendPresence(UEOSPresenceBase*& _Presence, const FString& _PUID) const;
    
    UFUNCTION(BlueprintCallable)
    void FindFriendByEpicID(UEOSFriendUser*& _FriendUser, const FString& _EpicID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindFriend(UEOSFriendUser*& _FriendUser, const FString& _PUID) const;
    
};

