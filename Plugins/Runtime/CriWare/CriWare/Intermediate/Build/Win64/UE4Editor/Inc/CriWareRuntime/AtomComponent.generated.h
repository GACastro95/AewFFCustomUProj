// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomComponent;
struct FAtomBeatSyncInfo;
struct FAtomSequenceInfo;
enum class EAtomAudioVolumeType : uint8;
class AAtomAudioVolume;
enum class EAtomComponentStatus : uint8;
struct FSoundAttenuationSettings;
class AAtomAreaSoundVolume;
class USoundAtomCue;
 
struct FVector;
class UAtom3dRegion;
class UAtomSoundObject;
#ifdef CRIWARERUNTIME_AtomComponent_generated_h
#error "AtomComponent.generated.h already included, missing '#pragma once' in AtomComponent.h"
#endif
#define CRIWARERUNTIME_AtomComponent_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_35_DELEGATE \
struct AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms \
{ \
	UAtomComponent* AtomComponent; \
	FAtomBeatSyncInfo BeatSyncInfo; \
}; \
static inline void FAtomBeatSyncCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomBeatSyncCallbackDelegate, UAtomComponent* AtomComponent, FAtomBeatSyncInfo const& BeatSyncInfo) \
{ \
	AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms Parms; \
	Parms.AtomComponent=AtomComponent; \
	Parms.BeatSyncInfo=BeatSyncInfo; \
	AtomBeatSyncCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_34_DELEGATE \
struct AtomComponent_eventAtomSequenceCallbackDelegate_Parms \
{ \
	UAtomComponent* AtomComponent; \
	FAtomSequenceInfo SequenceInfo; \
}; \
static inline void FAtomSequenceCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomSequenceCallbackDelegate, UAtomComponent* AtomComponent, FAtomSequenceInfo const& SequenceInfo) \
{ \
	AtomComponent_eventAtomSequenceCallbackDelegate_Parms Parms; \
	Parms.AtomComponent=AtomComponent; \
	Parms.SequenceInfo=SequenceInfo; \
	AtomSequenceCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_33_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_32_DELEGATE \
struct AtomComponent_eventOnAudioVolumeChanged_Parms \
{ \
	EAtomAudioVolumeType Type; \
	AAtomAudioVolume* AtomAudioVolume; \
	bool bIsCalledFromTick; \
}; \
static inline void FOnAudioVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeChanged, EAtomAudioVolumeType Type, AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick) \
{ \
	AtomComponent_eventOnAudioVolumeChanged_Parms Parms; \
	Parms.Type=Type; \
	Parms.AtomAudioVolume=AtomAudioVolume; \
	Parms.bIsCalledFromTick=bIsCalledFromTick ? true : false; \
	OnAudioVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_DELEGATE \
struct AtomComponent_eventOnStatusChanged_Parms \
{ \
	EAtomComponentStatus Status; \
	UAtomComponent* AtomComponent; \
}; \
static inline void FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EAtomComponentStatus Status, UAtomComponent* AtomComponent) \
{ \
	AtomComponent_eventOnStatusChanged_Parms Parms; \
	Parms.Status=Status; \
	Parms.AtomComponent=AtomComponent; \
	OnStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execAttachAreaSoundVolume); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execClearSelectorLabels); \
	DECLARE_FUNCTION(execDestroyComponentByID); \
	DECLARE_FUNCTION(execEnqueueSound); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execGetAtomComponentFromID); \
	DECLARE_FUNCTION(execGetAtomComponentID); \
	DECLARE_FUNCTION(execGetAudioVolumeValueMap); \
	DECLARE_FUNCTION(execGetCueName); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMargin); \
	DECLARE_FUNCTION(execGetCurrentBelongingAudioVolume); \
	DECLARE_FUNCTION(execGetCurrentCullingBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentCullingMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMargin); \
	DECLARE_FUNCTION(execGetEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetNumQueuedSounds); \
	DECLARE_FUNCTION(execGetSequencePosition); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHasBeenEconomicTick); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsReducingTickFrequency); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetAisacByName); \
	DECLARE_FUNCTION(execSetAsrRackID); \
	DECLARE_FUNCTION(execSetAsrRackIdArray); \
	DECLARE_FUNCTION(execSetBusSendLevel); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusSendLevelOffset); \
	DECLARE_FUNCTION(execSetBusSendLevelOffsetByName); \
	DECLARE_FUNCTION(execSetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execSetNextBlockIndex); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetSelectorLabel); \
	DECLARE_FUNCTION(execSetSound); \
	DECLARE_FUNCTION(execSetSoundObject); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopWithoutReleaseTime);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execAttachAreaSoundVolume); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execClearSelectorLabels); \
	DECLARE_FUNCTION(execDestroyComponentByID); \
	DECLARE_FUNCTION(execEnqueueSound); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execGetAtomComponentFromID); \
	DECLARE_FUNCTION(execGetAtomComponentID); \
	DECLARE_FUNCTION(execGetAudioVolumeValueMap); \
	DECLARE_FUNCTION(execGetCueName); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMargin); \
	DECLARE_FUNCTION(execGetCurrentBelongingAudioVolume); \
	DECLARE_FUNCTION(execGetCurrentCullingBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentCullingMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMargin); \
	DECLARE_FUNCTION(execGetEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetNumQueuedSounds); \
	DECLARE_FUNCTION(execGetSequencePosition); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHasBeenEconomicTick); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsReducingTickFrequency); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetAisacByName); \
	DECLARE_FUNCTION(execSetAsrRackID); \
	DECLARE_FUNCTION(execSetAsrRackIdArray); \
	DECLARE_FUNCTION(execSetBusSendLevel); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusSendLevelOffset); \
	DECLARE_FUNCTION(execSetBusSendLevelOffsetByName); \
	DECLARE_FUNCTION(execSetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execSetNextBlockIndex); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetSelectorLabel); \
	DECLARE_FUNCTION(execSetSound); \
	DECLARE_FUNCTION(execSetSoundObject); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopWithoutReleaseTime);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAtomComponent*>(this); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAtomComponent*>(this); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomComponent)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CueSheet() { return STRUCT_OFFSET(UAtomComponent, CueSheet); } \
	FORCEINLINE static uint32 __PPO__AppliedSoundObject() { return STRUCT_OFFSET(UAtomComponent, AppliedSoundObject); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_27_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
