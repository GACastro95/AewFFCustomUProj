// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EManaPlayerTrack : uint8;
struct FTimespan;
class UManaMovie;
enum class EManaComponentStatus : uint8;
class UManaTexture;
class UManaComponent;
class UManaPlaylist;
class UManaSource;
struct FManaPlayerOptions;
class UAtomComponent;
#ifdef CRIWARERUNTIME_ManaPlayer_generated_h
#error "ManaPlayer.generated.h already included, missing '#pragma once' in ManaPlayer.h"
#endif
#define CRIWARERUNTIME_ManaPlayer_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_25_DELEGATE \
struct ManaPlayer_eventOnFrameUpdatedDelegate_Parms \
{ \
	int32 FrameNumber; \
}; \
static inline void FOnFrameUpdatedDelegate_DelegateWrapper(const FScriptDelegate& OnFrameUpdatedDelegate, int32 FrameNumber) \
{ \
	ManaPlayer_eventOnFrameUpdatedDelegate_Parms Parms; \
	Parms.FrameNumber=FrameNumber; \
	OnFrameUpdatedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindOnFrameUpdated); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execDisableTrack); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMovieFrames); \
	DECLARE_FUNCTION(execGetMovieSource); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHandleManaComponentFrameOnTime); \
	DECLARE_FUNCTION(execHandleManaComponentMovieChanged); \
	DECLARE_FUNCTION(execHandleManaComponentPlayerDestroyed); \
	DECLARE_FUNCTION(execHandleManaComponentSeekCompleted); \
	DECLARE_FUNCTION(execHandleManaComponentStatusChanged); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsSeeking); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execOpenMovieSource); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetTimeSyncedSource); \
	DECLARE_FUNCTION(execSetVolume);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindOnFrameUpdated); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execDisableTrack); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMovieFrames); \
	DECLARE_FUNCTION(execGetMovieSource); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHandleManaComponentFrameOnTime); \
	DECLARE_FUNCTION(execHandleManaComponentMovieChanged); \
	DECLARE_FUNCTION(execHandleManaComponentPlayerDestroyed); \
	DECLARE_FUNCTION(execHandleManaComponentSeekCompleted); \
	DECLARE_FUNCTION(execHandleManaComponentStatusChanged); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsSeeking); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execOpenMovieSource); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetTimeSyncedSource); \
	DECLARE_FUNCTION(execSetVolume);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaPlayer(); \
	friend struct Z_Construct_UClass_UManaPlayer_Statics; \
public: \
	DECLARE_CLASS(UManaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlayer)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUManaPlayer(); \
	friend struct Z_Construct_UClass_UManaPlayer_Statics; \
public: \
	DECLARE_CLASS(UManaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlayer)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlayer(UManaPlayer&&); \
	NO_API UManaPlayer(const UManaPlayer&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlayer(UManaPlayer&&); \
	NO_API UManaPlayer(const UManaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaPlayer)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxFrameDrop() { return STRUCT_OFFSET(UManaPlayer, MaxFrameDrop); } \
	FORCEINLINE static uint32 __PPO__Playlist() { return STRUCT_OFFSET(UManaPlayer, Playlist); } \
	FORCEINLINE static uint32 __PPO__PlaylistIndex() { return STRUCT_OFFSET(UManaPlayer, PlaylistIndex); } \
	FORCEINLINE static uint32 __PPO__ManaComponent() { return STRUCT_OFFSET(UManaPlayer, ManaComponent); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_21_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
