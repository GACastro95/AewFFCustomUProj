#include "DebugCareerParam_AutoPlay.h"

FDebugCareerParam_AutoPlay::FDebugCareerParam_AutoPlay() {
    this->m_bRandomAutoPlayStartTrigger = false;
    this->m_bRandomAutoPlayAbortTrigger = false;
    this->m_bRandomAutoPlayResumeTrigger = false;
    this->m_bRandomAutoPlayNowTrigger = false;
    this->m_bDataDriven_All_StartTrigger = false;
    this->m_bDataDriven_Range_StartTrigger = false;
    this->m_bDataDriven_Individual_StartTrigger = false;
    this->m_bDataDriven_AbortTrigger = false;
    this->m_bDataDriven_ResumeTrigger = false;
    this->m_DataDriven_Range_StartNo = 0;
    this->m_DataDriven_Range_EndNo = 0;
    this->m_bDataDriven_Range_Loop = false;
    this->m_DataDriven_Individual_Wrestler = EWrestlerID_N::None;
    this->m_DataDriven_Individual_Prologue = 0;
    this->m_DataDriven_Individual_AllOut = 0;
    this->m_DataDriven_Individual_FullGear = 0;
    this->m_DataDriven_Individual_Revolution = 0;
    this->m_DataDriven_Individual_DoN = 0;
    this->m_bConsumeTurn = false;
    this->m_bLongLayoutScene = false;
    this->m_bGCOutput = false;
    this->m_eMatchTransition = ECareerDebug_AutoPlay_MatchTransition::NoLimit;
}

