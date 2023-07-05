#pragma once
#include "CoreMinimal.h"
#include "ERA_SceneData_Type.h"
#include "ERA_SlotIntro_Gender.h"
#include "ERA_SlotIntro_Order.h"
#include "ERA_Slot_ChampionState.h"
#include "ERA_Slot_Championship.h"
#include "ERA_Slot_CutScene_Type.h"
#include "ERA_Slot_MatchRule.h"
#include "ERA_Slot_RosterName.h"
#include "ERA_Slot_TeamName.h"
#include "GameFramework/Pawn.h"
#include "RingAnnouncePreview_Button_DelegateDelegate.h"
#include "RingAnnouncePreviewMenu.generated.h"

UCLASS(Blueprintable)
class ELITE_API ARingAnnouncePreviewMenu : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingAnnouncePreview_Button_Delegate Play_Dispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingAnnouncePreview_Button_Delegate Return_Dispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_SceneData_Type RA_SceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_MatchRule RA_Slot_MatchRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_Championship RA_Slot_Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_SlotIntro_Order RA_SlotIntro_Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_SlotIntro_Gender RA_SlotIntro_Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_ChampionState RA_Slot_ChampionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_CutScene_Type RA_Slot_CutScene_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_RosterName RA_Slot_RosterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_TeamName RA_Slot_TeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPlay;
    
    ARingAnnouncePreviewMenu();
    UFUNCTION(BlueprintCallable)
    void ChangeNextState();
    
};

