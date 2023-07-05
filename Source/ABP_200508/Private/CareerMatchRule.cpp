#include "CareerMatchRule.h"

FCareerMatchRule::FCareerMatchRule() {
    this->DataMining = 0;
    this->bUseReferee = false;
    this->bPin = false;
    this->bSubmission = false;
    this->bPinAnywhere = false;
    this->bSubmissionAnywhere = false;
    this->bOverTopRope = false;
    this->bDQ = false;
    this->CountOut = 0;
    this->bFinisherDead = false;
    this->bHPZeroDead = false;
    this->Timeout = 0;
    this->bBattleRoyale = false;
    this->bTrumpSystem = false;
    this->bTrumpTeam = false;
    this->bBattleRoyalPad = false;
    this->bElectricBarbedWire = false;
    this->bLightsOut = false;
    this->bTornadoTag = false;
    this->bRingOnly = false;
    this->bTagMove = false;
    this->bDoubleTeam = false;
    this->bCombination = false;
    this->bBlowBattle = false;
    this->bChainWrestring = false;
    this->Shock = 0;
    this->Momentum = 0;
    this->BumpAndFeed = 0;
    this->PropList = 0;
    this->ChainGrapple = 0;
    this->PlayerDefault = 0;
    this->bTargetLine = false;
    this->bManager_1P = false;
    this->bManager_2P = false;
    this->MatchType = ECareerMatchRule_MatchType::SINGLE_MATCH;
    this->MenuMatchType = ECareerMatchRule_MenuMatchType::SINGLE_MATCH_ONLINE;
    this->bStrongGrapple = false;
    this->bDamageHUD = false;
    this->bTraningMode = false;
    this->OptionNumber = 0;
    this->bEntranceOFF = false;
    this->bOther_HostPad_Invalid_PinSub = false;
    this->bNoWinScene = false;
    this->bGauntlet = false;
    this->bResult_HUD_NoDisplay = false;
    this->bDead_HostPad_MatchFinish = false;
    this->RingEscape = 0;
    this->bRopeBreak = false;
    this->bRealEBW = false;
    this->bLadder = false;
    this->bMatchUpOFF = false;
}

