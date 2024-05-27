#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityInfoType.h"
#include "EEOSCommunityJoinType.h"
#include "EEOSCommunityPermission.h"
#include "EOSCommunityClosedDispatcherDelegate.h"
#include "EOSCommunityUserAddedDispatcherDelegate.h"
#include "EOSCommunityUserRemovedDispatcherDelegate.h"
#include "EOSLockebleCommon.h"
#include "EOSCommunityInfoBase.generated.h"

class UEOSAttribute;
class UEOSCommunityUserBase;
class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSCommunityInfoBase : public UEOSLockebleCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCommunityUserAddedDispatcher CommunityUserAddedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCommunityUserRemovedDispatcher CommunityUserRemovedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSCommunityClosedDispatcher CommunityClosedDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSAttribute*> m_cAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityUserBase*> m_cPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* m_pcOwnerUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSCommunityUserBase* m_pcInviteUser;
    
public:
    UEOSCommunityInfoBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerUser(const UEOSUserBase* User) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOwner(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvitesAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayer(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfProductUserIDForOwnerUser() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStringOfInviteProductUserID();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringOfCommunityID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedPlayers(TArray<UEOSCommunityUserBase*>& _cArray, const FString& _strSortAttributeName) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRegistKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayersSortedByDisplayName(TArray<UEOSCommunityUserBase*>& _cArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UEOSCommunityUserBase*> GetPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSCommunityPermission GetPermission() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOwnerUser(UEOSCommunityUserBase*& _pcCommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSCommunityJoinType GetJoinType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInviteUser(UEOSCommunityUserBase*& _pcCommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSCommunityInfoType GetInfoType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSlots() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UEOSAttribute*> GetAttributes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccountDisplayNameForOwnerUser() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindPlayer(UEOSCommunityUserBase*& _pcPlayer, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool FindAttribute(UEOSAttribute*& _pcAttribute, const FString& _strKey);
    
};

