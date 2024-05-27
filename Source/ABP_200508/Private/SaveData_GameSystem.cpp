#include "SaveData_GameSystem.h"

USaveData_GameSystem::USaveData_GameSystem() {
    this->m_Display_FpsValueIndex = 0;
    this->Display_DLSS_OptionIndex = 0;
    this->Display_XeSS_OptionIndex = 0;
    this->m_Audio_MasterVolume = 100;
    this->m_Audio_SoundEffectVolume = 100;
    this->m_Audio_MenuSoundEffectVolume = 100;
    this->m_Audio_CrowdVolume = 100;
    this->m_Audio_VoiceVolume = 100;
    this->m_Audio_RingAnnounceVolume = 100;
    this->m_Audio_EntVicMusicVolume = 100;
    this->m_Audio_MenuJukeBoxVolume = 100;
    this->m_Audio_OfflineGameJukeboxVolume = 50;
    this->m_Audio_OnlineGameJukeboxVolume = 20;
    this->m_Audio_VoiceChatVolume = 100;
    this->m_Audio_VoiceChat = true;
    this->m_Audio_VoiceChatNotifySFX = true;
    this->m_Audio_Subtitle = true;
    this->m_CreatorSetting_StreamerMode = false;
    this->m_Region_MatchMakeArea = -1;
    this->m_SSModeRegion_MatchMakeArea = 0;
    this->m_Region_Language = -1;
    this->m_Region_BaudrateTolerance = 1000;
    this->m_Region_PhysicalUnit = 0;
    this->m_Match_CountOut = 1;
    this->m_Match_AIDifficulty = 1;
    this->m_Match_CardsDesign = 0;
    this->m_Match_LimitTime = 0;
    this->m_Match_LimitTimeForExplodingBarbedWireDeathMatch = 0;
    this->m_Match_TNTSkin = 0;
    this->m_Match_DQ = true;
    this->m_Match_Blood = true;
    this->m_Match_RopeBreak = true;
    this->m_Match_ManipulateTagPartner = true;
    this->m_Match_DisplayShake = false;
    this->m_Match_CameraPerformance = false;
    this->m_Match_FallsCountAnywhere = false;
    this->m_Match_EntranceHUD = false;
    this->m_Match_ManualTarget = true;
    this->m_Match_CasualMode = false;
    this->m_Match_UseFaceButtonsToCounterMode = true;
    this->m_Match_GuideHUD = true;
    this->m_Match_PlayerIndicator = false;
    this->m_Match_AssistEffect = false;
    this->m_Match_RefereeType = 0;
    this->m_Match_ExplosionType = 0;
    this->m_Match_Pin = true;
    this->m_Match_Submission = true;
    this->m_Match_Interference = true;
    this->m_Match_SSModeGuideHUD = true;
    this->m_Match_CameraShake = true;
    this->m_PAD_LongPressTime = 100;
    this->m_PAD_Vibration = true;
    this->m_Mouse_IgnorePADInput = false;
    this->m_Account_HideProfanity = true;
    this->m_Account_RejectionFriendList = false;
    this->m_Account_RejectionLeaderBoard = false;
    this->m_Account_DisableCrossPlay = false;
    this->m_MenuOption_AutoLoadTransitionMode = false;
    this->m_System_GameTitleVersionName = TEXT("1.0");
    this->m_News_LatestVersion = 0;
}


