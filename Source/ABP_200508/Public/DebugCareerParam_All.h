#pragma once
#include "CoreMinimal.h"
#include "DebugCareerParam_AutoEvent.h"
#include "DebugCareerParam_AutoPlay.h"
#include "DebugCareerParam_CharacterParam.h"
#include "DebugCareerParam_City.h"
#include "DebugCareerParam_ConsoleCommand.h"
#include "DebugCareerParam_CutScene.h"
#include "DebugCareerParam_Event.h"
#include "DebugCareerParam_Info.h"
#include "DebugCareerParam_Item.h"
#include "DebugCareerParam_ItemEffectTest.h"
#include "DebugCareerParam_MapObject.h"
#include "DebugCareerParam_Match.h"
#include "DebugCareerParam_MovieScene.h"
#include "DebugCareerParam_Record.h"
#include "DebugCareerParam_Scenario.h"
#include "DebugCareerParam_Schedule.h"
#include "DebugCareerParam_Setting.h"
#include "DebugCareerParam_Skill.h"
#include "DebugCareerParam_Snapshot.h"
#include "DebugCareerParam_Story.h"
#include "DebugCareerParam_System.h"
#include "DebugCareerParam_TextMode.h"
#include "DebugCareerParam_Tutorial.h"
#include "DebugCareerParam_UI.h"
#include "DebugCareer_MainMenu.h"
#include "DebugCareerParam_All.generated.h"

USTRUCT(BlueprintType)
struct FDebugCareerParam_All {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_UI Debug_UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_CharacterParam Debug_CharacterParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Scenario Debug_Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Item Debug_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_ItemEffectTest Debug_ItemEffectTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_System Debug_System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareer_MainMenu Debug_MainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Schedule Debug_Schedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Story Debug_Story;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Skill Debug_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_City Debug_City;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Event Debug_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Info Debug_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Match Debug_Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Snapshot Debug_Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_MovieScene Debug_MovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_CutScene Debug_CutScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_AutoPlay Debug_AutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Setting Debug_Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_AutoEvent Debug_AutoEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Tutorial Debug_Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_MapObject Debug_MapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_TextMode Debug_TextMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_Record Debug_Record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCareerParam_ConsoleCommand Debug_ConsoleCommand;
    
    ABP_200508_API FDebugCareerParam_All();
};

