// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
#ifdef CRIWAREMOVIESCENES_MovieSceneAtomSection_generated_h
#error "MovieSceneAtomSection.generated.h already included, missing '#pragma once' in MovieSceneAtomSection.h"
#endif
#define CRIWAREMOVIESCENES_MovieSceneAtomSection_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_SPARSE_DATA
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetStartOffset);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetStartOffset);


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAtomSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAtomSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAtomSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareMovieScenes"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAtomSection)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAtomSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAtomSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAtomSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareMovieScenes"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAtomSection)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAtomSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAtomSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAtomSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAtomSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAtomSection(UMovieSceneAtomSection&&); \
	NO_API UMovieSceneAtomSection(const UMovieSceneAtomSection&); \
public:


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAtomSection(UMovieSceneAtomSection&&); \
	NO_API UMovieSceneAtomSection(const UMovieSceneAtomSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAtomSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAtomSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneAtomSection)


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sound() { return STRUCT_OFFSET(UMovieSceneAtomSection, Sound); } \
	FORCEINLINE static uint32 __PPO__StartFrameOffset() { return STRUCT_OFFSET(UMovieSceneAtomSection, StartFrameOffset); } \
	FORCEINLINE static uint32 __PPO__SoundVolume() { return STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume); } \
	FORCEINLINE static uint32 __PPO__PitchMultiplier() { return STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier); } \
	FORCEINLINE static uint32 __PPO__AttachActorData() { return STRUCT_OFFSET(UMovieSceneAtomSection, AttachActorData); } \
	FORCEINLINE static uint32 __PPO__ScalarParameterNamesAndCurves() { return STRUCT_OFFSET(UMovieSceneAtomSection, ScalarParameterNamesAndCurves); } \
	FORCEINLINE static uint32 __PPO__bSuppressSubtitles() { return STRUCT_OFFSET(UMovieSceneAtomSection, bSuppressSubtitles); } \
	FORCEINLINE static uint32 __PPO__bOverrideAttenuation() { return STRUCT_OFFSET(UMovieSceneAtomSection, bOverrideAttenuation); } \
	FORCEINLINE static uint32 __PPO__AttenuationSettings() { return STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationSettings); } \
	FORCEINLINE static uint32 __PPO__bContinueSoundWhenSequenceIsEnd() { return STRUCT_OFFSET(UMovieSceneAtomSection, bContinueSoundWhenSequenceIsEnd); } \
	FORCEINLINE static uint32 __PPO__AsrRackIDs() { return STRUCT_OFFSET(UMovieSceneAtomSection, AsrRackIDs); } \
	FORCEINLINE static uint32 __PPO__SelectorLabels() { return STRUCT_OFFSET(UMovieSceneAtomSection, SelectorLabels); } \
	FORCEINLINE static uint32 __PPO__bLooping() { return STRUCT_OFFSET(UMovieSceneAtomSection, bLooping); }


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_14_PROLOG
#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_SPARSE_DATA \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWAREMOVIESCENES_API UClass* StaticClass<class UMovieSceneAtomSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
