#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditWrestlerParam.h"
#include "EPersonalityType.h"
#include "EWrestlerID_N.h"
#include "GameFramework/GameModeBase.h"
#include "CareerAffectMatchInjury.h"
#include "CareerAffectMatchMotivation.h"
#include "CareerCAWHeightConvert.h"
#include "CareerCutsceneParam.h"
#include "CareerDiningInfo.h"
#include "CareerEvent.h"
#include "CareerEventActionInfo.h"
#include "CareerEventBaseInfo.h"
#include "CareerEventLocation.h"
#include "CareerEventMessage.h"
#include "CareerEventSceneReplaceAnimation.h"
#include "CareerEventText.h"
#include "CareerMatch.h"
#include "CareerMatchResultInfo.h"
#include "CareerMatchSetting.h"
#include "CareerMiniGame.h"
#include "CareerSchedule.h"
#include "CareerTutorial.h"
#include "ECareerBGMType.h"
#include "ECareerCutsceneCastType.h"
#include "ECareerInGameHUDType.h"
#include "ECareerMapLightScenario.h"
#include "ECareerRingObject.h"
#include "ECareerSEType.h"
#include "ECareerScenarioPart.h"
#include "ECareerSetupMyWrestlerUpdate.h"
#include "ECareerStageType.h"
#include "ECareerStoryResultCondition.h"
#include "ECareerStringTable.h"
#include "ECareerTransitionType.h"
#include "yEnMenuWidgetType.h"
#include "ELGameModeCareerBase.generated.h"

class AActor;
class AELCareerAssetLoadBase;
class AELCareerBalanceAdjustParam;
class AELCareerCameraManagerBase;
class AELCareerChameleonBase;
class AELCareerCutSceneManager;
class AELCareerCutSceneUtilityBase;
class AELCareerEventSceneManager;
class AELCareerItemManager;
class AELCareerLayoutSceneManager;
class AELCareerMovieSceneManager;
class AELCareerOtherMenuManager;
class AELCareerSchedule;
class AELCareerScriptManager;
class AELCareerSkillManager;
class AELCareerSquareManager;
class AELCareerStateManager;
class AELCareerStoryCardLottery;
class AELCareerStoryDataActor;
class AELCareerVehicleActor;
class APawn;
class UCareerSnapshot;
class UDataTable;
class UELCareerDebugInfoWidget;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API AELGameModeCareerBase : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_LevelTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pExtraLight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerSchedule> m_CareerScheduleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerEventLocation> m_CareerEventBackStageLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerEventLocation> m_CareerEventArenaLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerEventBaseInfo m_EventBaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerEventActionInfo> m_ActionInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActionInfoCounter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerTutorial> m_CareerTutorialDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerEventSceneReplaceAnimation> m_CareerEventSceneReplaceAnimationDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerCAWHeightConvert> m_CareerCAWheightConvertDataArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCareerScriptManager* m_pCareerScriptManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELCareerDebugInfoWidget* m_pCareerDebugInfoWidget;
    
public:
    AELGameModeCareerBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCareerSnapshot* TakeSnapshotCaputureFrameBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCareerSnapshot* TakeSnapshot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchCareerMapObject(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCareerCrowd();
    
    UFUNCTION(BlueprintCallable)
    void SpawnExtraLight(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SnapshotStartCaputureFrameBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupNewCareerGameParam(EWrestlerID_N _WrestlerID, int32 _SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMyWrestlerUpdate(ECareerSetupMyWrestlerUpdate eUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetupEventBaseInfo(FCareerEventMessage _Data);
    
    UFUNCTION(BlueprintCallable)
    void SetupEventActionInfo(FCareerEventMessage _Data);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenExtraLight(bool bHiddenFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerSkillText(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerSE(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerScriptProbability(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerMovieSceneParam(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerMiniGameSummary(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerMenuText(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerMatchSummary(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerItemText(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerEventText(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerEventSceneText(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerEventSceneMessage(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerEventSceneList(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerDining(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerCutSceneParam(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable_CareerBGM(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetCutSceneTarget(ECareerCutsceneCastType eMyCastType, ECareerCutsceneCastType eTargetCastType);
    
    UFUNCTION(BlueprintCallable)
    void SetCutSceneCast(ECareerCutsceneCastType eCastType, AActor* in_Cast);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerVehicleActor(AELCareerVehicleActor* _CareerVehicleActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStoryDataActor(AELCareerStoryDataActor* _pCareerStoryDataActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStoryCardLottery(AELCareerStoryCardLottery* CareerStoryCardLottery);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerStateManager(AELCareerStateManager* CareerStateManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerSquareManager(AELCareerSquareManager* _CareerSquareManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerSkillManager(AELCareerSkillManager* _CareerSkillManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerSchedule(AELCareerSchedule* _CareerSchedule);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerOtherMenuManager(AELCareerOtherMenuManager* _CareerOtherMenuManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMovieSceneManager(AELCareerMovieSceneManager* _CareerMovieSceneManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMatchSetting(UDataTable* pDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerMatchResultInfo(const FCareerMatchResultInfo& _Result);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerLayoutSceneManager(AELCareerLayoutSceneManager* _CareerLayoutSceneManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerItemManager(AELCareerItemManager* _CareerItemManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerEventSceneManager(AELCareerEventSceneManager* _CareerEventSceneManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerEditWrestlerParam(FEditWrestlerParam _Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerDebugInfoWidget(UELCareerDebugInfoWidget* pCareerDebugInfoWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCutSceneUtilityBase(AELCareerCutSceneUtilityBase* _CareerCutSceneUtilityBase);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCutSceneManager(AELCareerCutSceneManager* _CareerCutSceneManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerChameleon(AELCareerChameleonBase* _CareerChameleonBase);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCameraPawn(APawn* CareerCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerCameraManager(AELCareerCameraManagerBase* CameraManager);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerBalanceAdjustParam(AELCareerBalanceAdjustParam* _CareerBalanceAdjustParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerAssetLoad(AELCareerAssetLoadBase* _CareerAssetLoad);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerAffectMatchMotivation(FCareerAffectMatchMotivation _Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCareerAffectMatchInjury(FCareerAffectMatchInjury _Data);
    
    UFUNCTION(BlueprintCallable)
    void SetActionInfoList(TArray<FCareerEventActionInfo> _ActionInfoList);
    
    UFUNCTION(BlueprintCallable)
    void SetActionInfoCounter(int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SearchLevelTargetPoint();
    
    UFUNCTION(BlueprintCallable)
    void RequestCareerMenuAnimation(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float PlayTransitionFade(bool bFadeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayELInGameHUD(bool& _Enable, ECareerInGameHUDType _HUDType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 PlayCareerSE_ReturnSfxID(ECareerSEType _SEType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCareerSE(ECareerSEType _SEType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCareerCrowd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCareerBGM(ECareerBGMType _BGMType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> ParseMessageString(const FString& _Message);
    
    UFUNCTION(BlueprintCallable)
    void LoadCareerSaveParam();
    
    UFUNCTION(BlueprintCallable)
    void JudgeTransitionBranch(ECareerTransitionType& TransitionBranch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapShotEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipFadeOutCareerMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreateWidgetFromLevelInfo(yEnMenuWidgetType eMenuWidgetType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementActionCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoCareerHUB();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetUseStringTable(ECareerStringTable UseStringTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerStageType GetStageType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerRingObject GetRingObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPlayerSelectResultFromEventMessageData(FCareerEventMessage _DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetPlayerSelectFromEventMessageData(FCareerEventMessage _DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextEventMessageNameFromEventMessageData(FCareerEventMessage _DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLevelTargetPoint(int32 TargetPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerEventSceneReplaceAnimation> GetEventSceneReplaceAnimationData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerStoryResultCondition GetEventResultFromEventMessageData(FCareerEventMessage _DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEventMessageNameFromEventData(FCareerEvent _DataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerCAWHeightConvert> GetEventCAWHeightConvertData() const;
    
    UFUNCTION(BlueprintCallable)
    ECareerCutsceneCastType GetCutSceneTarget(ECareerCutsceneCastType eMyCastType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCutSceneCast(ECareerCutsceneCastType eCastType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerVehicleActor* GetCareerVehicleActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerTutorial> GetCareerTutorialData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerStoryDataActor* GetCareerStoryDataActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerStoryCardLottery* GetCareerStoryCardLottery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerStateManager* GetCareerStateManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSquareManager* GetCareerSquareManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSkillManager* GetCareerSkillManager() const;
    
    UFUNCTION(BlueprintCallable)
    AELCareerScriptManager* GetCareerScriptManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerSchedule> GetCareerScheduleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerSchedule* GetCareerSchedule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerOtherMenuManager* GetCareerOtherMenuManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerMovieSceneManager* GetCareerMovieSceneManager() const;
    
    UFUNCTION(BlueprintCallable)
    FCareerMiniGame GetCareerMiniGameRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCareerMenuAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    FCareerMatchSetting GetCareerMatchSetting(ECareerScenarioPart eScenarioPart);
    
    UFUNCTION(BlueprintCallable)
    FCareerMatch GetCareerMatchRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerLayoutSceneManager* GetCareerLayoutSceneManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerItemManager* GetCareerItemManager() const;
    
    UFUNCTION(BlueprintCallable)
    FCareerEventText GetCareerEventTextRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerEventSceneManager* GetCareerEventSceneManager() const;
    
    UFUNCTION(BlueprintCallable)
    FCareerEvent GetCareerEventRowData(FName _key);
    
    UFUNCTION(BlueprintCallable)
    FCareerEventMessage GetCareerEventMessageRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEditWrestlerParam GetCareerEditWrestlerParam();
    
    UFUNCTION(BlueprintCallable)
    FCareerDiningInfo GetCareerDiningInfoFromDataTable(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerCutSceneUtilityBase* GetCareerCutSceneUtilityBase() const;
    
    UFUNCTION(BlueprintCallable)
    FCareerCutsceneParam GetCareerCutsceneParamRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerCutSceneManager* GetCareerCutSceneManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerChameleonBase* GetCareerChameleon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCareerCameraPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerCameraManagerBase* GetCareerCameraManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerBalanceAdjustParam* GetCareerBalanceAdjustParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCareerAssetLoadBase* GetCareerAssetLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerAffectMatchMotivation GetCareerAffectMatchMotivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerAffectMatchInjury GetCareerAffectMatchInjury() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetBGMCueName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerEventBaseInfo GetBaseInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBackStageSubLevelUtility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBackStageLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetArenaLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAreaTargetPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActionInfoTextID(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerEventActionInfo> GetActionInfoList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionInfoCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerEventActionInfo GetActionInfo(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventDispLoadingIcon(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventChangeLightScenario(ECareerMapLightScenario eLightScenario);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableShadowCareerMapObject();
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetTitleStringKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetTitleKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetTalkStringKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetTalkKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetPersonality(EPersonalityType Personality);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetChoiceTitleStringKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetChoiceTitleKey(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetChoiceSelectStringKey(int32 Index, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DebugMenu_EventScene_SetChoiceSelectKey(int32 Index, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void CheckSnapShotEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssetLoadFinish();
    
    UFUNCTION(BlueprintCallable)
    void AddCareerTutorialData(FCareerTutorial _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerScheduleData(FCareerSchedule _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerEventSceneReplaceAnimationData(FCareerEventSceneReplaceAnimation _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerEventBackStageLocationData(FCareerEventLocation _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerEventArenaLocationData(FCareerEventLocation _Data);
    
    UFUNCTION(BlueprintCallable)
    void AddCareerCAWHeightConvertData(FCareerCAWHeightConvert _Data);
    
};

