#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityPermission.h"
#include "EEOSLobbyUserMuteFlag.h"
#include "EOSCommunityBase.h"
#include "EOSLobbyAPIVersionSettings.h"
#include "EOSLobby.generated.h"

class UEOSAttribute;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSLobbyOwnRequest;
class UEOSLobbySearchResults;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLobby : public UEOSCommunityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSLobbyOwnRequest*> m_cOwnRequests;
    
public:
    UEOSLobby();
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatStartMuted(bool _bMuted);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSLobbyAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetMuteVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetMemberAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetLobbyParam(UEOSCommunityInfoBase* _pcCommunityInfo, int32 _sMaxMembers, EEOSCommunityPermission _enPermission);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetBlockVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchLobbyByUser(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strProductUserID, int32 _sMaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchLobbyByLobbyID(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strLobbyID, int32 _sMaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchLobby(UEOSLobbySearchResults*& _pcSearchResults, const FString& _strSearchName, const TArray<UEOSAttribute*>& _cAttributes, int32 _sMaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRemovetMemberAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRemovetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRejectInvite(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryInvites();
    
    UFUNCTION(BlueprintCallable)
    bool RequestMuteVoiceUser(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, bool _bMute);
    
    UFUNCTION(BlueprintCallable)
    bool RequestMuteVoiceSelf(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bMute);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLeaveLobby(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLeaveAllLobbies();
    
    UFUNCTION(BlueprintCallable)
    bool RequestJoinLobby(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestInviteLobby(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroyLobbyForce(const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroyLobby(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteUser(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCreateLobby(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strKey, int32 _sMaxMembers, EEOSCommunityPermission _enPermission);
    
    UFUNCTION(BlueprintCallable)
    bool RequestClearMuteVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestClearBlockVoiceFlag(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, EEOSLobbyUserMuteFlag _bMuteFlag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestChangeOwner(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser);
    
    UFUNCTION(BlueprintCallable)
    bool RequestBlockVoice(UEOSCommunityInfoBase* _pcCommunityInfo, UEOSCommunityUserBase* _pcUser, bool _bBlock);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvite(const FString& CommunityID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatStartMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDetailsCurrent(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strLobbyID);
    
    UFUNCTION(BlueprintCallable)
    bool GetDetailsByInvite(UEOSCommunityInfoBase*& _pcCommunityInfo);
    
};

