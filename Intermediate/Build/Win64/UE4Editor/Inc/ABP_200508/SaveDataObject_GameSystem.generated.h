// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SaveDataObject_GameSystem_generated_h
#error "SaveDataObject_GameSystem.generated.h already included, missing '#pragma once' in SaveDataObject_GameSystem.h"
#endif
#define ABP_200508_SaveDataObject_GameSystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccount_DisableCrossPlay); \
	DECLARE_FUNCTION(execGetAccount_HideProfanity); \
	DECLARE_FUNCTION(execGetAccount_RejectionFriendList); \
	DECLARE_FUNCTION(execGetAccount_RejectionLeaderBoard); \
	DECLARE_FUNCTION(execGetAudio_CrowdVolume); \
	DECLARE_FUNCTION(execGetAudio_EntVicMusicVolume); \
	DECLARE_FUNCTION(execGetAudio_MasterVolume); \
	DECLARE_FUNCTION(execGetAudio_MenuJukeBoxVolume); \
	DECLARE_FUNCTION(execGetAudio_MenuSoundEffectVolume); \
	DECLARE_FUNCTION(execGetAudio_OfflineGameJukeboxVolume); \
	DECLARE_FUNCTION(execGetAudio_OnlineGameJukeboxVolume); \
	DECLARE_FUNCTION(execGetAudio_RingAnnounceVolume); \
	DECLARE_FUNCTION(execGetAudio_SoundEffectVolume); \
	DECLARE_FUNCTION(execGetAudio_Subtitle); \
	DECLARE_FUNCTION(execGetAudio_VoiceChat); \
	DECLARE_FUNCTION(execGetAudio_VoiceChatNotifySFX); \
	DECLARE_FUNCTION(execGetAudio_VoiceChatVolume); \
	DECLARE_FUNCTION(execGetAudio_VoiceVolume); \
	DECLARE_FUNCTION(execGetDisplay_DLSS_OptionIndex); \
	DECLARE_FUNCTION(execGetDisplay_FpsValueIndex); \
	DECLARE_FUNCTION(execGetDisplay_XeSS_OptionIndex); \
	DECLARE_FUNCTION(execGetMatch_AIDifficulty); \
	DECLARE_FUNCTION(execGetMatch_AssistEffect); \
	DECLARE_FUNCTION(execGetMatch_Blood); \
	DECLARE_FUNCTION(execGetMatch_CameraPerformance); \
	DECLARE_FUNCTION(execGetMatch_CameraShake); \
	DECLARE_FUNCTION(execGetMatch_CardsDesign); \
	DECLARE_FUNCTION(execGetMatch_CasualMode); \
	DECLARE_FUNCTION(execGetMatch_CountOut); \
	DECLARE_FUNCTION(execGetMatch_DisplayShake); \
	DECLARE_FUNCTION(execGetMatch_DQ); \
	DECLARE_FUNCTION(execGetMatch_EntranceHUD); \
	DECLARE_FUNCTION(execGetMatch_ExplosionType); \
	DECLARE_FUNCTION(execGetMatch_FallsCountAnywhere); \
	DECLARE_FUNCTION(execGetMatch_GuideHUD); \
	DECLARE_FUNCTION(execGetMatch_Interference); \
	DECLARE_FUNCTION(execGetMatch_LimitTime); \
	DECLARE_FUNCTION(execGetMatch_LimitTimeForExplodingBarbedWireDeathMatch); \
	DECLARE_FUNCTION(execGetMatch_ManipulateTagPartner); \
	DECLARE_FUNCTION(execGetMatch_ManualTarget); \
	DECLARE_FUNCTION(execGetMatch_Pin); \
	DECLARE_FUNCTION(execGetMatch_PlayerIndicator); \
	DECLARE_FUNCTION(execGetMatch_RefereeType); \
	DECLARE_FUNCTION(execGetMatch_RopeBreak); \
	DECLARE_FUNCTION(execGetMatch_SSModeGuideHUD); \
	DECLARE_FUNCTION(execGetMatch_Submission); \
	DECLARE_FUNCTION(execGetMatch_TNTSkin); \
	DECLARE_FUNCTION(execGetMatch_UseFaceButtonsToCounter); \
	DECLARE_FUNCTION(execGetMenuOption_AutoLoadTransitionMode); \
	DECLARE_FUNCTION(execGetMouse_IgnorePADInput); \
	DECLARE_FUNCTION(execGetPAD_LongPressTime); \
	DECLARE_FUNCTION(execGetPAD_Vibration); \
	DECLARE_FUNCTION(execGetRegion_BaudrateTolerance); \
	DECLARE_FUNCTION(execGetRegion_Language); \
	DECLARE_FUNCTION(execGetRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execGetRegion_PhysicalUnit); \
	DECLARE_FUNCTION(execGetSSModeRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execGetSystem_GameTitleVersionName); \
	DECLARE_FUNCTION(execSetAccount_DisableCrossPlay); \
	DECLARE_FUNCTION(execSetAccount_HideProfanity); \
	DECLARE_FUNCTION(execSetAccount_RejectionFriendList); \
	DECLARE_FUNCTION(execSetAccount_RejectionLeaderBoard); \
	DECLARE_FUNCTION(execSetAudio_CrowdVolume); \
	DECLARE_FUNCTION(execSetAudio_EntVicMusicVolume); \
	DECLARE_FUNCTION(execSetAudio_MasterVolume); \
	DECLARE_FUNCTION(execSetAudio_MenuJukeBoxVolume); \
	DECLARE_FUNCTION(execSetAudio_MenuSoundEffectVolume); \
	DECLARE_FUNCTION(execSetAudio_OfflineGameJukeboxVolume); \
	DECLARE_FUNCTION(execSetAudio_OnlineGameJukeboxVolume); \
	DECLARE_FUNCTION(execSetAudio_RingAnnounceVolume); \
	DECLARE_FUNCTION(execSetAudio_SoundEffectVolume); \
	DECLARE_FUNCTION(execSetAudio_Subtitle); \
	DECLARE_FUNCTION(execSetAudio_VoiceChat); \
	DECLARE_FUNCTION(execSetAudio_VoiceChatNotifySFX); \
	DECLARE_FUNCTION(execSetAudio_VoiceChatVolume); \
	DECLARE_FUNCTION(execSetAudio_VoiceVolume); \
	DECLARE_FUNCTION(execSetDisplay_DLSS_OptionIndex); \
	DECLARE_FUNCTION(execSetDisplay_FpsValueIndex); \
	DECLARE_FUNCTION(execSetDisplay_XeSS_OptionIndex); \
	DECLARE_FUNCTION(execSetMatch_AIDifficulty); \
	DECLARE_FUNCTION(execSetMatch_AssistEffect); \
	DECLARE_FUNCTION(execSetMatch_Blood); \
	DECLARE_FUNCTION(execSetMatch_CameraPerformance); \
	DECLARE_FUNCTION(execSetMatch_CameraShake); \
	DECLARE_FUNCTION(execSetMatch_CardsDesign); \
	DECLARE_FUNCTION(execSetMatch_CasualMode); \
	DECLARE_FUNCTION(execSetMatch_CountOut); \
	DECLARE_FUNCTION(execSetMatch_DisplayShake); \
	DECLARE_FUNCTION(execSetMatch_DQ); \
	DECLARE_FUNCTION(execSetMatch_EntranceHUD); \
	DECLARE_FUNCTION(execSetMatch_ExplosionType); \
	DECLARE_FUNCTION(execSetMatch_FallsCountAnywhere); \
	DECLARE_FUNCTION(execSetMatch_GuideHUD); \
	DECLARE_FUNCTION(execSetMatch_Interference); \
	DECLARE_FUNCTION(execSetMatch_LimitTime); \
	DECLARE_FUNCTION(execSetMatch_LimitTimeForExplodingBarbedWireDeathMatch); \
	DECLARE_FUNCTION(execSetMatch_ManipulateTagPartner); \
	DECLARE_FUNCTION(execSetMatch_ManualTarget); \
	DECLARE_FUNCTION(execSetMatch_Pin); \
	DECLARE_FUNCTION(execSetMatch_PlayerIndicator); \
	DECLARE_FUNCTION(execSetMatch_RefereeType); \
	DECLARE_FUNCTION(execSetMatch_RopeBreak); \
	DECLARE_FUNCTION(execSetMatch_SSModeGuideHUD); \
	DECLARE_FUNCTION(execSetMatch_Submission); \
	DECLARE_FUNCTION(execSetMatch_TNTSkin); \
	DECLARE_FUNCTION(execSetMatch_UseFaceButtonsToCounter); \
	DECLARE_FUNCTION(execSetMenuOption_AutoLoadTransitionMode); \
	DECLARE_FUNCTION(execSetMouse_IgnorePADInput); \
	DECLARE_FUNCTION(execSetPAD_LongPressTime); \
	DECLARE_FUNCTION(execSetPAD_Vibration); \
	DECLARE_FUNCTION(execSetRegion_BaudrateTolerance); \
	DECLARE_FUNCTION(execSetRegion_Language); \
	DECLARE_FUNCTION(execSetRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execSetRegion_PhysicalUnit); \
	DECLARE_FUNCTION(execSetSSModeRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execSetSystem_GameTitleVersionName);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccount_DisableCrossPlay); \
	DECLARE_FUNCTION(execGetAccount_HideProfanity); \
	DECLARE_FUNCTION(execGetAccount_RejectionFriendList); \
	DECLARE_FUNCTION(execGetAccount_RejectionLeaderBoard); \
	DECLARE_FUNCTION(execGetAudio_CrowdVolume); \
	DECLARE_FUNCTION(execGetAudio_EntVicMusicVolume); \
	DECLARE_FUNCTION(execGetAudio_MasterVolume); \
	DECLARE_FUNCTION(execGetAudio_MenuJukeBoxVolume); \
	DECLARE_FUNCTION(execGetAudio_MenuSoundEffectVolume); \
	DECLARE_FUNCTION(execGetAudio_OfflineGameJukeboxVolume); \
	DECLARE_FUNCTION(execGetAudio_OnlineGameJukeboxVolume); \
	DECLARE_FUNCTION(execGetAudio_RingAnnounceVolume); \
	DECLARE_FUNCTION(execGetAudio_SoundEffectVolume); \
	DECLARE_FUNCTION(execGetAudio_Subtitle); \
	DECLARE_FUNCTION(execGetAudio_VoiceChat); \
	DECLARE_FUNCTION(execGetAudio_VoiceChatNotifySFX); \
	DECLARE_FUNCTION(execGetAudio_VoiceChatVolume); \
	DECLARE_FUNCTION(execGetAudio_VoiceVolume); \
	DECLARE_FUNCTION(execGetDisplay_DLSS_OptionIndex); \
	DECLARE_FUNCTION(execGetDisplay_FpsValueIndex); \
	DECLARE_FUNCTION(execGetDisplay_XeSS_OptionIndex); \
	DECLARE_FUNCTION(execGetMatch_AIDifficulty); \
	DECLARE_FUNCTION(execGetMatch_AssistEffect); \
	DECLARE_FUNCTION(execGetMatch_Blood); \
	DECLARE_FUNCTION(execGetMatch_CameraPerformance); \
	DECLARE_FUNCTION(execGetMatch_CameraShake); \
	DECLARE_FUNCTION(execGetMatch_CardsDesign); \
	DECLARE_FUNCTION(execGetMatch_CasualMode); \
	DECLARE_FUNCTION(execGetMatch_CountOut); \
	DECLARE_FUNCTION(execGetMatch_DisplayShake); \
	DECLARE_FUNCTION(execGetMatch_DQ); \
	DECLARE_FUNCTION(execGetMatch_EntranceHUD); \
	DECLARE_FUNCTION(execGetMatch_ExplosionType); \
	DECLARE_FUNCTION(execGetMatch_FallsCountAnywhere); \
	DECLARE_FUNCTION(execGetMatch_GuideHUD); \
	DECLARE_FUNCTION(execGetMatch_Interference); \
	DECLARE_FUNCTION(execGetMatch_LimitTime); \
	DECLARE_FUNCTION(execGetMatch_LimitTimeForExplodingBarbedWireDeathMatch); \
	DECLARE_FUNCTION(execGetMatch_ManipulateTagPartner); \
	DECLARE_FUNCTION(execGetMatch_ManualTarget); \
	DECLARE_FUNCTION(execGetMatch_Pin); \
	DECLARE_FUNCTION(execGetMatch_PlayerIndicator); \
	DECLARE_FUNCTION(execGetMatch_RefereeType); \
	DECLARE_FUNCTION(execGetMatch_RopeBreak); \
	DECLARE_FUNCTION(execGetMatch_SSModeGuideHUD); \
	DECLARE_FUNCTION(execGetMatch_Submission); \
	DECLARE_FUNCTION(execGetMatch_TNTSkin); \
	DECLARE_FUNCTION(execGetMatch_UseFaceButtonsToCounter); \
	DECLARE_FUNCTION(execGetMenuOption_AutoLoadTransitionMode); \
	DECLARE_FUNCTION(execGetMouse_IgnorePADInput); \
	DECLARE_FUNCTION(execGetPAD_LongPressTime); \
	DECLARE_FUNCTION(execGetPAD_Vibration); \
	DECLARE_FUNCTION(execGetRegion_BaudrateTolerance); \
	DECLARE_FUNCTION(execGetRegion_Language); \
	DECLARE_FUNCTION(execGetRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execGetRegion_PhysicalUnit); \
	DECLARE_FUNCTION(execGetSSModeRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execGetSystem_GameTitleVersionName); \
	DECLARE_FUNCTION(execSetAccount_DisableCrossPlay); \
	DECLARE_FUNCTION(execSetAccount_HideProfanity); \
	DECLARE_FUNCTION(execSetAccount_RejectionFriendList); \
	DECLARE_FUNCTION(execSetAccount_RejectionLeaderBoard); \
	DECLARE_FUNCTION(execSetAudio_CrowdVolume); \
	DECLARE_FUNCTION(execSetAudio_EntVicMusicVolume); \
	DECLARE_FUNCTION(execSetAudio_MasterVolume); \
	DECLARE_FUNCTION(execSetAudio_MenuJukeBoxVolume); \
	DECLARE_FUNCTION(execSetAudio_MenuSoundEffectVolume); \
	DECLARE_FUNCTION(execSetAudio_OfflineGameJukeboxVolume); \
	DECLARE_FUNCTION(execSetAudio_OnlineGameJukeboxVolume); \
	DECLARE_FUNCTION(execSetAudio_RingAnnounceVolume); \
	DECLARE_FUNCTION(execSetAudio_SoundEffectVolume); \
	DECLARE_FUNCTION(execSetAudio_Subtitle); \
	DECLARE_FUNCTION(execSetAudio_VoiceChat); \
	DECLARE_FUNCTION(execSetAudio_VoiceChatNotifySFX); \
	DECLARE_FUNCTION(execSetAudio_VoiceChatVolume); \
	DECLARE_FUNCTION(execSetAudio_VoiceVolume); \
	DECLARE_FUNCTION(execSetDisplay_DLSS_OptionIndex); \
	DECLARE_FUNCTION(execSetDisplay_FpsValueIndex); \
	DECLARE_FUNCTION(execSetDisplay_XeSS_OptionIndex); \
	DECLARE_FUNCTION(execSetMatch_AIDifficulty); \
	DECLARE_FUNCTION(execSetMatch_AssistEffect); \
	DECLARE_FUNCTION(execSetMatch_Blood); \
	DECLARE_FUNCTION(execSetMatch_CameraPerformance); \
	DECLARE_FUNCTION(execSetMatch_CameraShake); \
	DECLARE_FUNCTION(execSetMatch_CardsDesign); \
	DECLARE_FUNCTION(execSetMatch_CasualMode); \
	DECLARE_FUNCTION(execSetMatch_CountOut); \
	DECLARE_FUNCTION(execSetMatch_DisplayShake); \
	DECLARE_FUNCTION(execSetMatch_DQ); \
	DECLARE_FUNCTION(execSetMatch_EntranceHUD); \
	DECLARE_FUNCTION(execSetMatch_ExplosionType); \
	DECLARE_FUNCTION(execSetMatch_FallsCountAnywhere); \
	DECLARE_FUNCTION(execSetMatch_GuideHUD); \
	DECLARE_FUNCTION(execSetMatch_Interference); \
	DECLARE_FUNCTION(execSetMatch_LimitTime); \
	DECLARE_FUNCTION(execSetMatch_LimitTimeForExplodingBarbedWireDeathMatch); \
	DECLARE_FUNCTION(execSetMatch_ManipulateTagPartner); \
	DECLARE_FUNCTION(execSetMatch_ManualTarget); \
	DECLARE_FUNCTION(execSetMatch_Pin); \
	DECLARE_FUNCTION(execSetMatch_PlayerIndicator); \
	DECLARE_FUNCTION(execSetMatch_RefereeType); \
	DECLARE_FUNCTION(execSetMatch_RopeBreak); \
	DECLARE_FUNCTION(execSetMatch_SSModeGuideHUD); \
	DECLARE_FUNCTION(execSetMatch_Submission); \
	DECLARE_FUNCTION(execSetMatch_TNTSkin); \
	DECLARE_FUNCTION(execSetMatch_UseFaceButtonsToCounter); \
	DECLARE_FUNCTION(execSetMenuOption_AutoLoadTransitionMode); \
	DECLARE_FUNCTION(execSetMouse_IgnorePADInput); \
	DECLARE_FUNCTION(execSetPAD_LongPressTime); \
	DECLARE_FUNCTION(execSetPAD_Vibration); \
	DECLARE_FUNCTION(execSetRegion_BaudrateTolerance); \
	DECLARE_FUNCTION(execSetRegion_Language); \
	DECLARE_FUNCTION(execSetRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execSetRegion_PhysicalUnit); \
	DECLARE_FUNCTION(execSetSSModeRegion_MatchMakeArea); \
	DECLARE_FUNCTION(execSetSystem_GameTitleVersionName);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_GameSystem(); \
	friend struct Z_Construct_UClass_USaveDataObject_GameSystem_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_GameSystem, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_GameSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_GameSystem(); \
	friend struct Z_Construct_UClass_USaveDataObject_GameSystem_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_GameSystem, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_GameSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_GameSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_GameSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_GameSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_GameSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_GameSystem(USaveDataObject_GameSystem&&); \
	NO_API USaveDataObject_GameSystem(const USaveDataObject_GameSystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_GameSystem(USaveDataObject_GameSystem&&); \
	NO_API USaveDataObject_GameSystem(const USaveDataObject_GameSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_GameSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_GameSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_GameSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_GameSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_GameSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
