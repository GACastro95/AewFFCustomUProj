#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EELBelt.h"
#include "ELWrestlerProfile_Skill.h"
#include "EPersonalityType.h"
#include "EWrestlerID_N.h"
#include "CareerChampionshipCore.h"
#include "CareerChampionshipHolder.h"
#include "CareerMainMatchResult.h"
#include "CareerMatchCardCore.h"
#include "CareerMenuItem.h"
#include "CareerPlayDataInfo.h"
#include "CareerPlayerItemInfo.h"
#include "CareerPostCommandEventList.h"
#include "CareerRecordInfo.h"
#include "CareerSnapshotParam.h"
#include "CareerSpecialRewardParam.h"
#include "CareerStoryCard.h"
#include "CareerTutorialTemporary.h"
#include "CareerVeryShortEventStockInfo.h"
#include "ECareerActionSkillNo.h"
#include "ECareerChoicesPattern.h"
#include "ECareerChoicesSelectionResult.h"
#include "ECareerCity.h"
#include "ECareerCutsceneCastType.h"
#include "ECareerItemNo.h"
#include "ECareerMenuActionAlreadySelectedFlag.h"
#include "ECareerMenuActionLotteryResult.h"
#include "ECareerModeDifficulty.h"
#include "ECareerParameterSkillItem.h"
#include "ECareerPassiveSkillNo.h"
#include "ECareerPostCommandEventType.h"
#include "ECareerScenario.h"
#include "ECareerScenarioMatchTiming.h"
#include "ECareerScenarioPart.h"
#include "ECareerTutorialCheckList.h"
#include "ELCareerGameParam.generated.h"

class AActor;
class UCareerSnapshot;
class UELCareerAutoEventManager;
class UELCareerAutoPlayManager;
class UMyWrestlerDataObject;

UCLASS(Blueprintable)
class ABP_200508_API UELCareerGameParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Motivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SkillPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CareerMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N m_PlayerWrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_PlayerEditWrestlerGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersonalityType m_PlayerEditWrestlerPersonality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sPresetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N m_PartnerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N m_RivalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N m_DateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerPlayerItemInfo m_ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerModeDifficulty m_CareerModeDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVegetarian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDispSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInjury;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MomentumUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SkillPointUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ParameterSkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ActionSkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PassiveSkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerStoryCard m_LongStoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerStoryCard m_SingleStoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NextStoryKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerPostCommandEventList> m_PostCommandEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerVeryShortEventStockInfo> m_EventStockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerPostCommandEventType m_PostCommandEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerMenuActionLotteryResult m_PostCommandEventResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECareerChoicesPattern> m_ChoicesSelectionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayDarkMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_DarkMatchStoryCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerMatchCardCore> m_DarkMatchCardInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerStoryCard m_MinigameStoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerScenario m_Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TotalScenarioTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerCity m_MatchVenue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseTurnEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerMainMatchResult> m_MainMatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerChampionshipHolder m_ChampionshipHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCareerSnapshot*> m_TookSnapshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerSpecialRewardParam> m_SpecialRewardParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOuting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_MenuActionSelectedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMyWrestlerDataObject* m_pCareerMyRosterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMyWrestlerDataObject* m_pCareerMyScoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInitLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_ClearCountWrestler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_TutorialUseFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCareerAutoPlayManager* m_AutoPlayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCareerAutoEventManager* m_AutoEventManager;
    
public:
    UELCareerGameParam();
    UFUNCTION(BlueprintCallable)
    void SetWinnerWrestler(EWrestlerID_N eWrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetVegetarian(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetUseTurnEnding(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetupAutoPlayManager(UELCareerAutoPlayManager* pAutoPlayManager);
    
    UFUNCTION(BlueprintCallable)
    void SetupAutoEventManager(UELCareerAutoEventManager* pAutoEventManager);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockRampage(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockDark(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialUseFlag(ECareerTutorialCheckList eCheckList, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetTonyKhanTweetKey(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialRewardParams(const TArray<FCareerSpecialRewardParam>& Params);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialRewardParam_Dialog(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialRewardParam(int32 Index, const FCareerSpecialRewardParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetSnapshotParams(const TArray<FCareerSnapshotParam>& Params);
    
    UFUNCTION(BlueprintCallable)
    void SetSnapshotParam(int32 Index, const FCareerSnapshotParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPointUpRate(float _SkillPointUpRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPoint(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetSingleStoryCard(FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable)
    void SetScenarioPart(ECareerScenarioPart _value);
    
    UFUNCTION(BlueprintCallable)
    void SetScenarioID(ECareerScenario _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalID(EWrestlerID_N _value);
    
    UFUNCTION(BlueprintCallable)
    void SetRecordInfoTotal(FCareerRecordInfo _Info);
    
    UFUNCTION(BlueprintCallable)
    void SetRecordInfoLocal(FCareerRecordInfo _Info);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetNo(int32 PresetNo);
    
    UFUNCTION(BlueprintCallable)
    void SetPostCommandEventList(int32 Index, FCareerPostCommandEventList _EventList);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerWrestlerID(EWrestlerID_N _WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEditWrestlerPersonality(EPersonalityType _Personality);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEditWrestlerGUID(FGuid _value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayDarkMatchFlg(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetPassiveSkillState(ECareerPassiveSkillNo _SkillNo, int32 _state);
    
    UFUNCTION(BlueprintCallable)
    void SetPartnerID(EWrestlerID_N _value);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterSkillState(ECareerParameterSkillItem _SkillNo, int32 _state);
    
    UFUNCTION(BlueprintCallable)
    void SetOutingFlag(int32 _bOuting);
    
    UFUNCTION(BlueprintCallable)
    void SetNextStoryKey(FName _key);
    
    UFUNCTION(BlueprintCallable)
    void SetMotivation(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMomentumUpRate(float _MomentumUpRate);
    
    UFUNCTION(BlueprintCallable)
    void SetMinigameStoryCard(FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTurn(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchWin(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchVenue(ECareerCity _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchScore(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchRestHPRate(float fHP);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchOperationKeyboard(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchInjury(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMatchResult(int32 _Index, FCareerMainMatchResult _value);
    
    UFUNCTION(BlueprintCallable)
    void SetLoserWrestler(EWrestlerID_N eWrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetLongStoryCard(FCareerStoryCard _StoryCard);
    
    UFUNCTION(BlueprintCallable)
    void SetItemNum(ECareerItemNo _ItemNo, int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInfo(FCareerPlayerItemInfo _ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetInjury(bool _bInjury);
    
    UFUNCTION(BlueprintCallable)
    void SetEventStockList(TArray<FCareerVeryShortEventStockInfo> _EventList);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag _Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDispTutorialDialog(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDispSubtitles(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag _Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDateID(EWrestlerID_N _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneWrestler(ECareerCutsceneCastType CastType, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeek(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTurn(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTotalScenarioTurn(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCondition(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetChoicesSelectionInfo(ECareerChoicesSelectionResult _SaveSelection, ECareerChoicesPattern _Pattern);
    
    UFUNCTION(BlueprintCallable)
    void SetChampionshipHolder(FCareerChampionshipHolder eChampionshipHolder);
    
    UFUNCTION(BlueprintCallable)
    void SetChampionship2nd(EELBelt eChampionshipType, EWrestlerID_N in_WrestlerB);
    
    UFUNCTION(BlueprintCallable)
    void SetChampionship1st(EELBelt eChampionshipType, EWrestlerID_N in_WrestlerA);
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeAddPlayedCareerMode(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCAWtoHUB(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerPlayDataInfo(FCareerPlayDataInfo _Info);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMyScoutData(UMyWrestlerDataObject* _CareeMyScoutData);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMyRosterData(UMyWrestlerDataObject* _CareeMyRosterData);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMoney(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerModeDifficulty(ECareerModeDifficulty _Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackedManager(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetAllDisableMenuActionSelectedFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetActionSkillState(ECareerActionSkillNo _SkillNo, int32 _state);
    
    UFUNCTION(BlueprintCallable)
    void PushTookSnapshot(UCareerSnapshot* Snapshot);
    
    UFUNCTION(BlueprintCallable)
    UCareerSnapshot* PopTookSnapshot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVegetarian();
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockRampage();
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockDark();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 IsOuting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag _Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchWin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchOperationKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchInjury();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInjury();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispTutorialDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispSubtitles();
    
    UFUNCTION(BlueprintCallable)
    bool IsChampionshipHolder(EELBelt eChampionshipType, EWrestlerID_N in_Wrestler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeAddPlayedCareerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCAWtoHUB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackedManager();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void IncrementWrestlerClearCount(int32 wrestlerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTookSnapshot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialRewardParams() const;
    
    UFUNCTION(BlueprintCallable)
    void GetWrestlerProfileSkill(FELWrestlerProfile_Skill& OutResult);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetWrestlerClearCount(int32 wrestlerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetWinnerWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseTurnEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetTutorialUseFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerTutorialTemporary GetTutorialTemporary() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetTonyKhanTweetKey();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSuccessRate(FCareerMenuItem _Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerSpecialRewardParam> GetSpecialRewardParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerSpecialRewardParam GetSpecialRewardParam(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerSnapshotParam> GetSnapshotParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerSnapshotParam GetSnapshotParam(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkillPointUpRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStoryCard GetSingleStoryCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenarioPart GetScenarioPart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerScenario GetScenarioID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetRivalID();
    
    UFUNCTION(BlueprintCallable)
    FCareerRecordInfo GetRecordInfoTotal();
    
    UFUNCTION(BlueprintCallable)
    FCareerRecordInfo GetRecordInfoLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPresetNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerPostCommandEventList GetPostCommandEventListWithTurn(int32 _Turn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerPostCommandEventList> GetPostCommandEventList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetPlayerWrestlerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPersonalityType GetPlayerEditWrestlerPersonality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetPlayerEditWrestlerGUID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayDarkMatchFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPassiveSkillStateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPassiveSkillState(ECareerPassiveSkillNo _SkillNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetPartnerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetParameterSkillStateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParameterSkillState(ECareerParameterSkillItem _SkillNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextStoryKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMotivation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMomentumUpRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStoryCard GetMinigameStoryCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerCity GetMatchVenue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMatchRestHPRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerMainMatchResult> GetMainMatchResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMainMatchResult GetMainMatchResultByTiming(ECareerScenarioMatchTiming _Timing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerMainMatchResult GetMainMatchResultByScenarioPart(ECareerScenarioPart _Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetLoserWrestler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStoryCard GetLongStoryCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNum(ECareerItemNo _ItemNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerPlayerItemInfo GetItemInfoRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerPlayerItemInfo GetItemInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerVeryShortEventStockInfo> GetEventStockList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWrestlerID_N GetDateID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerStoryCard> GetDarkMatchStoryCards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerMatchCardCore> GetDarkMatchCardInfos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCutsceneWrestler(ECareerCutsceneCastType CastType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWeek();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTotalScenarioTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerChoicesPattern GetChoicesSelectionInfoByIndex(ECareerChoicesSelectionResult _SaveSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ECareerChoicesPattern> GetChoicesSelectionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerChampionshipHolder GetChampionshipHolder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerChampionshipCore GetChampionship(EELBelt eChampionshipType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetCareerWrestlerClearCount();
    
    UFUNCTION(BlueprintCallable)
    FCareerPlayDataInfo GetCareerPlayDataInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMyWrestlerDataObject* GetCareerMyScoutData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMyWrestlerDataObject* GetCareerMyRosterData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCareerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerModeDifficulty GetCareerModeDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCareerAutoPlayManager* GetAutoPlayManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELCareerAutoEventManager* GetAutoEventManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetActionSkillStateList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionSkillState(ECareerActionSkillNo _SkillNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindUnusedSnapshotIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementItemNum(ECareerItemNo _ItemNo);
    
    UFUNCTION(BlueprintCallable)
    void ClearTutorialTemporary();
    
    UFUNCTION(BlueprintCallable)
    void ClearTonyKhanTweetKey();
    
    UFUNCTION(BlueprintCallable)
    void ClearPostCommandEventList();
    
    UFUNCTION(BlueprintCallable)
    void ClearMainMatchResult();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventStockList();
    
    UFUNCTION(BlueprintCallable)
    void ClearDarkMatchStoryCards();
    
    UFUNCTION(BlueprintCallable)
    void ClearDarkMatchCardInfos();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTutorialUseFlag(ECareerTutorialCheckList eCheckList);
    
    UFUNCTION(BlueprintCallable)
    void AddItemNum(ECareerItemNo _ItemNo);
    
    UFUNCTION(BlueprintCallable)
    void AddDarkMatchStoryCard(FCareerStoryCard _StoryCardInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddDarkMatchCardInfo(FCareerMatchCardCore _MatchCardInfo);
    
};

