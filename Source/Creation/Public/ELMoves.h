#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELKickCatchThrow.h"
#include "ELLadderFight.h"
#include "ELMovesApronChain.h"
#include "ELMovesApronStandAttack.h"
#include "ELMovesApronToApron.h"
#include "ELMovesBarricadeSpringboard.h"
#include "ELMovesChainWrestling.h"
#include "ELMovesCornerChain.h"
#include "ELMovesCornerRecoil.h"
#include "ELMovesCornerStandGroggy.h"
#include "ELMovesCutsceneCPP.h"
#include "ELMovesDiving.h"
#include "ELMovesDoubleStrike.h"
#include "ELMovesDown.h"
#include "ELMovesEnvironmentGroggy.h"
#include "ELMovesForTagWait.h"
#include "ELMovesFrontChainStrong.h"
#include "ELMovesFrontChainWeak.h"
#include "ELMovesInTagWait.h"
#include "ELMovesLeveragePin.h"
#include "ELMovesRearChainStrong.h"
#include "ELMovesRearChainWeak.h"
#include "ELMovesRingSideToRing.h"
#include "ELMovesRiseUpAttack.h"
#include "ELMovesRopeChain.h"
#include "ELMovesRopeGroggy.h"
#include "ELMovesRopeGroggyForBattleRoyale.h"
#include "ELMovesRunningCounter.h"
#include "ELMovesRunningStrike.h"
#include "ELMovesSitDownAttack.h"
#include "ELMovesSpringboard.h"
#include "ELMovesStandFrontStrike.h"
#include "ELMovesStandRearStrike.h"
#include "ELMovesToCorner.h"
#include "ELMovesTwoPlatoons.h"
#include "ELMovesWhipAttack.h"
#include "ELMovesWinEmote.h"
#include "ELPinchMoves.h"
#include "ELStepMoves.h"
#include "ELMoves.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMoves : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandFrontStrike FrontStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesFrontChainWeak FrontChainWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesFrontChainStrong FrontChainStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesStandRearStrike StandRearStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRearChainWeak RearChainWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRearChainStrong RearChainStrong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRunningStrike RunningStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRunningCounter RunningCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDiving Diving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSpringboard Springboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Pin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand_Taunt_RS_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand_Taunt_RS_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand_Taunt_RS_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand_Taunt_RS_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stand_SpecialTaunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Corner_Taunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Apron_Taunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDown MovesDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesSitDownAttack SitDownAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesCornerStandGroggy CornerStandGroggy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesCornerChain CornerChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRopeGroggy RopeGroggy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRopeGroggyForBattleRoyale RopeGroggyForBattleRoyale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRopeGroggyForBattleRoyale CornerGroggyForBattleRoyale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRopeChain RopeChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesApronStandAttack ApronStandAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesApronChain ApronChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesApronToApron ApronToApron;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRiseUpAttack RiseUpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesToCorner MovesToCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttack Diving_Intercept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesTwoPlatoons TwoPlatoons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDoubleStrike DoubleStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesForTagWait ForTagWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesInTagWait InTagWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesEnvironmentGroggy EnvironmentGroggy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesBarricadeSpringboard BarricadeSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesCutsceneCPP Cutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Running_Front_Setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Running_Back_Setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Running_Front_Counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestling ChainWrestling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesRingSideToRing RingSideToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesCornerRecoil CornerRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesCornerRecoil ReboundRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesLeveragePin LeveragePin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWinEmote WinEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELPinchMoves PinchMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELStepMoves StepMoves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesDiving LadderDiving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELKickCatchThrow KickCatchThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELLadderFight LadderFight;
    
    FELMoves();
};

