// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_AtomBusSampler_generated_h
#error "AtomBusSampler.generated.h already included, missing '#pragma once' in AtomBusSampler.h"
#endif
#define CRIWARERUNTIME_AtomBusSampler_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_11_DELEGATE \
static inline void FOnRecordingFinished_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingFinished) \
{ \
	OnRecordingFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_10_DELEGATE \
static inline void FOnRecordingStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingStarted) \
{ \
	OnRecordingStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanPlayRecordedSound); \
	DECLARE_FUNCTION(execCanRecord); \
	DECLARE_FUNCTION(execFinishRecording); \
	DECLARE_FUNCTION(execIsPausedRecordedSound); \
	DECLARE_FUNCTION(execIsPlayingRecordedSound); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execPauseRecordedSound); \
	DECLARE_FUNCTION(execPauseRecording); \
	DECLARE_FUNCTION(execPlayRecordedSound); \
	DECLARE_FUNCTION(execResumeRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execStopRecordedSound); \
	DECLARE_FUNCTION(execStopRecordedSoundWithoutReleaseTime);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanPlayRecordedSound); \
	DECLARE_FUNCTION(execCanRecord); \
	DECLARE_FUNCTION(execFinishRecording); \
	DECLARE_FUNCTION(execIsPausedRecordedSound); \
	DECLARE_FUNCTION(execIsPlayingRecordedSound); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execPauseRecordedSound); \
	DECLARE_FUNCTION(execPauseRecording); \
	DECLARE_FUNCTION(execPlayRecordedSound); \
	DECLARE_FUNCTION(execResumeRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execStopRecordedSound); \
	DECLARE_FUNCTION(execStopRecordedSoundWithoutReleaseTime);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomBusSampler(); \
	friend struct Z_Construct_UClass_UAtomBusSampler_Statics; \
public: \
	DECLARE_CLASS(UAtomBusSampler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusSampler)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAtomBusSampler(); \
	friend struct Z_Construct_UClass_UAtomBusSampler_Statics; \
public: \
	DECLARE_CLASS(UAtomBusSampler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomBusSampler)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomBusSampler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomBusSampler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusSampler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusSampler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusSampler(UAtomBusSampler&&); \
	NO_API UAtomBusSampler(const UAtomBusSampler&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomBusSampler(UAtomBusSampler&&); \
	NO_API UAtomBusSampler(const UAtomBusSampler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomBusSampler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomBusSampler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomBusSampler)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_6_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomBusSampler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomBusSampler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
