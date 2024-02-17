#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyInvite.h"
#include "EELEOSLobbyEventType.h"
#include "EELEOSLobbyPacketType.h"
#include "ELobbyCheckStepForHost.h"
#include "ELobbyInviteError.h"
#include "EMainMenuSubWidgetType.h"
#include "ESSLobbyRequestStatus.h"
#include "ESSMainMenuFlowState.h"
#include "ESSMainMenuFlowStateCategory.h"
#include "ESSMainMenuSubLevelSituation.h"
#include "ESSRuleChangeResult.h"
#include "SSRuleStatus.h"
#include "Templates/SubclassOf.h"
#include "ELSSMainMenuFlow.generated.h"

class AELSSMainMenuSubLevelManager;
class UELTutorialManager;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSSearchResultsBase;
class UEOSUserBase;
class ULobbyPacketBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSMainMenuFlow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMainMenuFlowState PrevState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLobbyRequestStatus LobbyStatus_RuleChangeFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLobbyRequestStatus LobbyStatus_SetMaxMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSLobbyRequestStatus LobbyStatus_SetRuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleStatus TempRuleStatusNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRuleStatus TempRuleStatusOld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELTutorialManager* CachedTutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRuleChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSMainMenuSubLevelManager> SubLevelManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSMainMenuSubLevelManager* SubLevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestedUpdateWrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoundLobbyFunctions;
    
public:
    AELSSMainMenuFlow();
    UFUNCTION(BlueprintCallable)
    void UnbindEOSLobbyFuctions();
    
    UFUNCTION(BlueprintCallable)
    bool TrySetMaxMember(int32 inMaxMember);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickStateCategory_Setup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickStateCategory_OnlineSetup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickStateCategory_Menu(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_UI(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_SubLevel(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_SpawnWrestler(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_SaveData(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_DebugUI(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup_BeforeOpening(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Opening(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup_LoginCheck(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup_GetPlayerData(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup_ErrorCheck(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup_EOSLobby(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup_ApplyPenalty(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OnlineSetup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Menu_Top(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Menu_Others(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Menu(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Initialize(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Exit(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Closing(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWrestlerVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyMode(bool isInParty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateWrestlers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestChangeSubLevel(ESSMainMenuSubLevelSituation inSituation, bool inWithFade, bool inWithWrestlerUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatUnsupported(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatLeft(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatJoined(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatEnabled(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatDisconnected(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatDisabled(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceChatConnected(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnmuteVoice(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnblockVoice(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeout_SetMaxMember();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopSpeaking(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusUpdatedOnJoinedStep(ELobbyCheckStepForHost LobbyCheckStepForHost, UEOSCommunityInfoBase* _CommunityInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSpeaking(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    void OnSetMaxMember_Native(UEOSCommunityInfoBase* _CommunityInfo, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMaxMember(UEOSCommunityInfoBase* _CommunityInfo, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRuleScheduleChanged(ESSRuleChangeResult inResult, int32 inNewRuleScheduleId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRuleChanged(ESSRuleChangeResult inResult, int32 inNewRuleId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryInviteResponse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPromoteOther(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPromoteMe(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMuteVoiceErr(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMuteVoice(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyWrestlerDataReceive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbySearchError(const FLobbyInvite& LobbyInvite, ELobbyInviteError LobbyInviteError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbySearch(UEOSSearchResultsBase* _searchResults);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyReceivePacket(EELEOSLobbyPacketType _PacketType, ULobbyPacketBase* _Packet, UEOSUserBase* _UserBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyReceiveMessage_BP(UEOSUserBase* _User, const FString& _DisplayName, const FString& _Message);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyReceiveMessage(UEOSUserBase* _User, const FString& _DisplayName, const FString& _Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyMemberUpdate(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyMemberLeft(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyMemberJoin(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyMemberDisconnect(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyKickedOther(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyKickedMe(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyJoinError(FLobbyInvite InLobbyInvite, ELobbyInviteError OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyJoin(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyInviteReject(UEOSCommunityInfoBase* _CommunityInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyInviteReceive(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyEvent2(EELEOSLobbyEventType EventType, UEOSUserBase* _User, UEOSCommunityInfoBase* _CommunityInfoBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyCreate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyChangeOwner(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleSessionLeaderChange_BP(const FString& _lobbyID, const FString& _ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void OnConsoleSessionLeaderChange(const FString& _lobbyID, const FString& _ProductUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsolePlayerSessionUserID_BP(const FString& _ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void OnConsolePlayerSessionUserID(const FString& _ProductUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleInviteEventHandler_BP(const FString& _lobbyID);
    
    UFUNCTION(BlueprintCallable)
    void OnConsoleInviteEventHandler(const FString& _lobbyID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePartyMode(bool isInParty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlockVoiceErr(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlockVoice(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsTopMenuSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuleChangingForHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlowStateCategory(ESSMainMenuFlowStateCategory InStateCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlowState(ESSMainMenuFlowState inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsExecutingChangeSubLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubLevelManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELTutorialManager* GetTutorialManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EMainMenuSubWidgetType GetCurrentTab() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRuleChangeForHost(ESSRuleChangeResult inResult, int32 inNewRuleId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitStateCategory_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitStateCategory_OnlineSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitStateCategory_Menu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_UI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_SubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_SpawnWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_SaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_DebugUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup_BeforeOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Opening();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup_LoginCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup_GetPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup_ErrorCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup_EOSLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup_ApplyPenalty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OnlineSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Menu_Top();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Menu_Others();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Menu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterStateCategory_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterStateCategory_OnlineSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterStateCategory_Menu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_UI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_SubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_SpawnWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_SaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_DebugUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup_BeforeOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Opening();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup_LoginCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup_GetPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup_ErrorCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup_EOSLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup_ApplyPenalty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OnlineSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Menu_Top();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Menu_Others();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Menu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Closing();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeFlowState(ESSMainMenuFlowState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanRuleChange() const;
    
    UFUNCTION(BlueprintCallable)
    void BindEOSLobbyFuctions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginRuleChangeForHost(int32 inRuleScheduleId);
    
};

