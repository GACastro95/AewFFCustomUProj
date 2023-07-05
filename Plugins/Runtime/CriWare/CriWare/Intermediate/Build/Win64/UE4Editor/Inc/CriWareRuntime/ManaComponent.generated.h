// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FManaEventPointInfo;
class UManaComponent;
class UManaMovie;
enum class EManaComponentStatus : uint8;
struct FTimespan;
enum class EManaSubtitlesEncoding : uint8;
class UManaTexture;
enum class EManaFrameAction : uint8;
enum class EManaMaxFrameDrop : uint8;
enum class EManaPlaybackTimer : uint8;
enum class EAtomSpeakerID : uint8;
#ifdef CRIWARERUNTIME_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define CRIWARERUNTIME_ManaComponent_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_31_DELEGATE \
struct ManaComponent_eventOnEventPoint_Parms \
{ \
	FManaEventPointInfo EventPointInfo; \
}; \
static inline void FOnEventPoint_DelegateWrapper(const FMulticastScriptDelegate& OnEventPoint, FManaEventPointInfo EventPointInfo) \
{ \
	ManaComponent_eventOnEventPoint_Parms Parms; \
	Parms.EventPointInfo=EventPointInfo; \
	OnEventPoint.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_30_DELEGATE \
struct ManaComponent_eventOnFrameOnTime_Parms \
{ \
	int32 FrameNumber; \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnFrameOnTime_DelegateWrapper(const FMulticastScriptDelegate& OnFrameOnTime, int32 FrameNumber, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnFrameOnTime_Parms Parms; \
	Parms.FrameNumber=FrameNumber; \
	Parms.ManaComponent=ManaComponent; \
	OnFrameOnTime.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_29_DELEGATE \
struct ManaComponent_eventOnMovieChanged_Parms \
{ \
	UManaMovie* Movie; \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnMovieChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovieChanged, UManaMovie* Movie, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnMovieChanged_Parms Parms; \
	Parms.Movie=Movie; \
	Parms.ManaComponent=ManaComponent; \
	OnMovieChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_28_DELEGATE \
struct ManaComponent_eventOnPlayerDestroyed_Parms \
{ \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnPlayerDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDestroyed, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnPlayerDestroyed_Parms Parms; \
	Parms.ManaComponent=ManaComponent; \
	OnPlayerDestroyed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_27_DELEGATE \
struct ManaComponent_eventOnRequestData_Parms \
{ \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnRequestData_DelegateWrapper(const FScriptDelegate& OnRequestData, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnRequestData_Parms Parms; \
	Parms.ManaComponent=ManaComponent; \
	OnRequestData.ProcessDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_26_DELEGATE \
struct ManaComponent_eventOnSeekCompleted_Parms \
{ \
	int32 FrameNumber; \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnSeekCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSeekCompleted, int32 FrameNumber, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnSeekCompleted_Parms Parms; \
	Parms.FrameNumber=FrameNumber; \
	Parms.ManaComponent=ManaComponent; \
	OnSeekCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_25_DELEGATE \
struct ManaComponent_eventOnStatusChanged_Parms \
{ \
	EManaComponentStatus Status; \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EManaComponentStatus Status, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnStatusChanged_Parms Parms; \
	Parms.Status=Status; \
	Parms.ManaComponent=ManaComponent; \
	OnStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_24_DELEGATE \
struct ManaComponent_eventOnSubtitleChanged_Parms \
{ \
	FText Subtitle; \
}; \
static inline void FOnSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSubtitleChanged, const FText& Subtitle) \
{ \
	ManaComponent_eventOnSubtitleChanged_Parms Parms; \
	Parms.Subtitle=Subtitle; \
	OnSubtitleChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_23_DELEGATE \
struct ManaComponent_eventOnTrackChanged_Parms \
{ \
	int32 TrackNumber; \
	UManaComponent* ManaComponent; \
}; \
static inline void FOnTrackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTrackChanged, int32 TrackNumber, UManaComponent* ManaComponent) \
{ \
	ManaComponent_eventOnTrackChanged_Parms Parms; \
	Parms.TrackNumber=TrackNumber; \
	Parms.ManaComponent=ManaComponent; \
	OnTrackChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execChangeSubtitlesChannel); \
	DECLARE_FUNCTION(execChangeSubtitlesEncoding); \
	DECLARE_FUNCTION(execEnableSeamless); \
	DECLARE_FUNCTION(execEnableSubtitles); \
	DECLARE_FUNCTION(execGetExtraVolume); \
	DECLARE_FUNCTION(execGetFrameNumber); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubVolume); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLoop); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execPreparePlaylistIndex); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execRemoveAudioCategory); \
	DECLARE_FUNCTION(execRemoveExtraAudioCategory); \
	DECLARE_FUNCTION(execRemoveSubAudioCategory); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSeekToPosition); \
	DECLARE_FUNCTION(execSetAlphaTrack); \
	DECLARE_FUNCTION(execSetAudioCategory); \
	DECLARE_FUNCTION(execSetAudioTrack); \
	DECLARE_FUNCTION(execSetEndFrameAction); \
	DECLARE_FUNCTION(execSetExtraAudioCategory); \
	DECLARE_FUNCTION(execSetExtraAudioTrack); \
	DECLARE_FUNCTION(execSetExtraVolume); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execSetMaxDropFrames); \
	DECLARE_FUNCTION(execSetMovie); \
	DECLARE_FUNCTION(execSetPlaybackTimer); \
	DECLARE_FUNCTION(execSetSubAudioCategory); \
	DECLARE_FUNCTION(execSetSubAudioSendLevel); \
	DECLARE_FUNCTION(execSetSubAudioTrack); \
	DECLARE_FUNCTION(execSetSubVolume); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execToIndex);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execChangeSubtitlesChannel); \
	DECLARE_FUNCTION(execChangeSubtitlesEncoding); \
	DECLARE_FUNCTION(execEnableSeamless); \
	DECLARE_FUNCTION(execEnableSubtitles); \
	DECLARE_FUNCTION(execGetExtraVolume); \
	DECLARE_FUNCTION(execGetFrameNumber); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubVolume); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLoop); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execPreparePlaylistIndex); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execRemoveAudioCategory); \
	DECLARE_FUNCTION(execRemoveExtraAudioCategory); \
	DECLARE_FUNCTION(execRemoveSubAudioCategory); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSeekToPosition); \
	DECLARE_FUNCTION(execSetAlphaTrack); \
	DECLARE_FUNCTION(execSetAudioCategory); \
	DECLARE_FUNCTION(execSetAudioTrack); \
	DECLARE_FUNCTION(execSetEndFrameAction); \
	DECLARE_FUNCTION(execSetExtraAudioCategory); \
	DECLARE_FUNCTION(execSetExtraAudioTrack); \
	DECLARE_FUNCTION(execSetExtraVolume); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execSetMaxDropFrames); \
	DECLARE_FUNCTION(execSetMovie); \
	DECLARE_FUNCTION(execSetPlaybackTimer); \
	DECLARE_FUNCTION(execSetSubAudioCategory); \
	DECLARE_FUNCTION(execSetSubAudioSendLevel); \
	DECLARE_FUNCTION(execSetSubAudioTrack); \
	DECLARE_FUNCTION(execSetSubVolume); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execToIndex);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UManaComponent, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UManaComponent, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__bLoop() { return STRUCT_OFFSET(UManaComponent, bLoop); } \
	FORCEINLINE static uint32 __PPO__AlphaTrack() { return STRUCT_OFFSET(UManaComponent, AlphaTrack); } \
	FORCEINLINE static uint32 __PPO__AudioTrack() { return STRUCT_OFFSET(UManaComponent, AudioTrack); } \
	FORCEINLINE static uint32 __PPO__SubAudioTrack() { return STRUCT_OFFSET(UManaComponent, SubAudioTrack); } \
	FORCEINLINE static uint32 __PPO__ExtraAudioTrack() { return STRUCT_OFFSET(UManaComponent, ExtraAudioTrack); } \
	FORCEINLINE static uint32 __PPO__AudioCategoryName() { return STRUCT_OFFSET(UManaComponent, AudioCategoryName); } \
	FORCEINLINE static uint32 __PPO__SubAudioCategoryName() { return STRUCT_OFFSET(UManaComponent, SubAudioCategoryName); } \
	FORCEINLINE static uint32 __PPO__ExtraAudioCategoryName() { return STRUCT_OFFSET(UManaComponent, ExtraAudioCategoryName); } \
	FORCEINLINE static uint32 __PPO__bSubtitlesEnabled() { return STRUCT_OFFSET(UManaComponent, bSubtitlesEnabled); } \
	FORCEINLINE static uint32 __PPO__SubtitlesChannel() { return STRUCT_OFFSET(UManaComponent, SubtitlesChannel); } \
	FORCEINLINE static uint32 __PPO__SubtitlesEncoding() { return STRUCT_OFFSET(UManaComponent, SubtitlesEncoding); } \
	FORCEINLINE static uint32 __PPO__EndFrameAction() { return STRUCT_OFFSET(UManaComponent, EndFrameAction); } \
	FORCEINLINE static uint32 __PPO__PlaybackTimer() { return STRUCT_OFFSET(UManaComponent, PlaybackTimer); } \
	FORCEINLINE static uint32 __PPO__MaxFrameDrop() { return STRUCT_OFFSET(UManaComponent, MaxFrameDrop); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_19_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
