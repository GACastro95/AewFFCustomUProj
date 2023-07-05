#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendEvent.h"
#include "EEOSPresenceEvent.h"
#include "EEOSUserContentsEvent.h"
#include "EEOSUserEvent.h"
#include "EEOSUserType.h"
#include "EExternalAccountType.h"
#include "EOSFriendEventDispatcherDelegate.h"
#include "EOSLockebleCommon.h"
#include "EOSPresenceEventDispatcherDelegate.h"
#include "EOSUserAddedDispatcherDelegate.h"
#include "EOSUserContentProgress.h"
#include "EOSUserContentsEventDispatcherDelegate.h"
#include "EOSUserEventDispatcherDelegate.h"
#include "EOSUserRemovedDispatcherDelegate.h"
#include "EOSUserManager.generated.h"

class UEOSAPIRequestManager;
class UEOSAuth;
class UEOSFriend;
class UEOSPresenceBase;
class UEOSUserBase;
class UEOSUserContentsBase;
class UEOSUserTypeToUserBaseMap;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserManager : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserAddedDispatcher UserAddedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserRemovedDispatcher UserRemovedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserEventDispatcher UserEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSFriendEventDispatcher FriendEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSPresenceEventDispatcher PresenceEventDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserContentsEventDispatcher UserContentsEventDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSUserBase*> m_cEpicAccountUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSUserTypeToUserBaseMap*> m_cProductUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAPIRequestManager* m_pcRefAPIRequestManager;
    
public:
    UEOSUserManager();
    UFUNCTION(BlueprintCallable)
    bool RemoveUser(UEOSUserBase* _pcUser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserEvent(EEOSUserEvent _eEvent, UEOSUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstUserContentProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnPresenceEvent(EEOSPresenceEvent _enPresenceEvent, UEOSPresenceBase* _pcPresence, const FString& _strFriendEpicAccountID);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendUpdatePUIDEvent(UEOSUserBase* _pcFriendUser);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendEvent(EEOSFriendEvent _eEvent, UEOSFriend* _pcFriend, UEOSUserBase* _pcFriendUser);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAddedProductUserID(const FString& _strProductUserID, EEOSUserType _enUserType);
    
    UFUNCTION(BlueprintCallable)
    bool IsAddedEpicAccountUser(const FString& _strEpicAccountID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UEOSUserTypeToUserBaseMap*> GetProductUsers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UEOSUserBase*> GetEpicAccountUsers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EExternalAccountType GetCurrentPlatformAccountType() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindProductUserID(UEOSUserBase*& _pcEOSUser, const FString& _strProductUserID, EEOSUserType _enUserType);
    
    UFUNCTION(BlueprintCallable)
    bool FindEpicAccountUser(UEOSUserBase*& _pcEOSUser, const FString& _strEpicAccountID);
    
    UFUNCTION(BlueprintCallable)
    bool CreateUser(UEOSUserBase*& _pcUser, const FString& _strEpicAccountID, const FString& _strLocalAccountID, const FString& _strProductUserID, const FString& _strLocalProductUserID, EEOSUserType _enUserType, UEOSAuth* _pcEOSAuth);
    
    UFUNCTION(BlueprintCallable)
    bool AddProductUser(UEOSUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSUserBase* AddLocalUser(UEOSAuth* _pcAuth);
    
    UFUNCTION(BlueprintCallable)
    bool AddEpicAccountUser(UEOSUserBase* _pcUser);
    
};

