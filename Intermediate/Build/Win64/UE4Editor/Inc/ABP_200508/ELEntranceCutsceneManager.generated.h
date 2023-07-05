// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FELEntranceCutsceneInfo;
enum class EDisplayButtonIconType : uint8;
class UObject;
class AActor;
struct FVector;
struct FRotator;
enum class EWrestlerID_N : uint8;
struct FGuid;
struct FELEntranceCutsceneWrestlerInfo;
class UParticleSystem;
struct FELEntranceCutsceneEmitterData;
class USoundAtomCue;
struct FELWrestlerProfile_CutScene;
enum class EELEntranceCutsceneItemType : uint8;
enum class EELEntranceCamera_ChameleonEffectType : uint8;
enum class EELBeltAttachPosition : uint8;
struct FKey;
enum class EMoviePlayerEvent : uint8;
class UELMoviePlayerBase;
class UAnimInstance;
class ALevelSequenceActor;
class AELCharacter_Native;
class USkeletalMeshComponent;
class UDataTable;
class USceneComponent;
enum class EELBelt : uint8;
struct FCharacterModelName;
#ifdef ABP_200508_ELEntranceCutsceneManager_generated_h
#error "ELEntranceCutsceneManager.generated.h already included, missing '#pragma once' in ELEntranceCutsceneManager.h"
#endif
#define ABP_200508_ELEntranceCutsceneManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_RPC_WRAPPERS \
	virtual void OnFullScreenTitantron_N_Implementation(bool Flag); \
 \
	DECLARE_FUNCTION(execAssetLoadCompleteEvent); \
	DECLARE_FUNCTION(execDestroyAssets); \
	DECLARE_FUNCTION(execDisableLookAtWrestler); \
	DECLARE_FUNCTION(execGetAnimMontage); \
	DECLARE_FUNCTION(execGetEntranceHUDButtonType); \
	DECLARE_FUNCTION(execGetEntranceSceneCastActor); \
	DECLARE_FUNCTION(execGetManagerMontage); \
	DECLARE_FUNCTION(execGetMatchRecord_Single); \
	DECLARE_FUNCTION(execGetMatchRecord_Tag); \
	DECLARE_FUNCTION(execGetMusicIndex); \
	DECLARE_FUNCTION(execGetParticle); \
	DECLARE_FUNCTION(execGetProfileCutsceneFromUnlockItemID); \
	DECLARE_FUNCTION(execGetRootLocationAndRotation); \
	DECLARE_FUNCTION(execGetScreenFilter); \
	DECLARE_FUNCTION(execGetScreenFilterDataTableID); \
	DECLARE_FUNCTION(execGetUseBeltAttachPosition); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOut); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOutKey_Pressed); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOutKey_Released); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUp); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUpKey_Pressed); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUpKey_Released); \
	DECLARE_FUNCTION(execIsEnableInputEvent); \
	DECLARE_FUNCTION(execIsNowLoading); \
	DECLARE_FUNCTION(execLoadAssetForSingle); \
	DECLARE_FUNCTION(execLoadAssetForTag); \
	DECLARE_FUNCTION(execMakeComponentList); \
	DECLARE_FUNCTION(execMoviePlayerEvent); \
	DECLARE_FUNCTION(execOnFinishedEvent); \
	DECLARE_FUNCTION(execOnFullScreenTitantron_N); \
	DECLARE_FUNCTION(execPlayFingerSignMontage); \
	DECLARE_FUNCTION(execRequestPlayLevelSequence); \
	DECLARE_FUNCTION(execSetCastInfo); \
	DECLARE_FUNCTION(execSetFullScreenTitantron); \
	DECLARE_FUNCTION(execSetSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetupBGModelsForEditor); \
	DECLARE_FUNCTION(execSkipScene); \
	DECLARE_FUNCTION(execStartDropObject); \
	DECLARE_FUNCTION(execStartParticles); \
	DECLARE_FUNCTION(execSwitchParticles); \
	DECLARE_FUNCTION(execUpdateDefaultEntranceFlag);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFullScreenTitantron_N_Implementation(bool Flag); \
 \
	DECLARE_FUNCTION(execAssetLoadCompleteEvent); \
	DECLARE_FUNCTION(execDestroyAssets); \
	DECLARE_FUNCTION(execDisableLookAtWrestler); \
	DECLARE_FUNCTION(execGetAnimMontage); \
	DECLARE_FUNCTION(execGetEntranceHUDButtonType); \
	DECLARE_FUNCTION(execGetEntranceSceneCastActor); \
	DECLARE_FUNCTION(execGetManagerMontage); \
	DECLARE_FUNCTION(execGetMatchRecord_Single); \
	DECLARE_FUNCTION(execGetMatchRecord_Tag); \
	DECLARE_FUNCTION(execGetMusicIndex); \
	DECLARE_FUNCTION(execGetParticle); \
	DECLARE_FUNCTION(execGetProfileCutsceneFromUnlockItemID); \
	DECLARE_FUNCTION(execGetRootLocationAndRotation); \
	DECLARE_FUNCTION(execGetScreenFilter); \
	DECLARE_FUNCTION(execGetScreenFilterDataTableID); \
	DECLARE_FUNCTION(execGetUseBeltAttachPosition); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOut); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOutKey_Pressed); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomOutKey_Released); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUp); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUpKey_Pressed); \
	DECLARE_FUNCTION(execInputEvent_CameraZoomUpKey_Released); \
	DECLARE_FUNCTION(execIsEnableInputEvent); \
	DECLARE_FUNCTION(execIsNowLoading); \
	DECLARE_FUNCTION(execLoadAssetForSingle); \
	DECLARE_FUNCTION(execLoadAssetForTag); \
	DECLARE_FUNCTION(execMakeComponentList); \
	DECLARE_FUNCTION(execMoviePlayerEvent); \
	DECLARE_FUNCTION(execOnFinishedEvent); \
	DECLARE_FUNCTION(execOnFullScreenTitantron_N); \
	DECLARE_FUNCTION(execPlayFingerSignMontage); \
	DECLARE_FUNCTION(execRequestPlayLevelSequence); \
	DECLARE_FUNCTION(execSetCastInfo); \
	DECLARE_FUNCTION(execSetFullScreenTitantron); \
	DECLARE_FUNCTION(execSetSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetupBGModelsForEditor); \
	DECLARE_FUNCTION(execSkipScene); \
	DECLARE_FUNCTION(execStartDropObject); \
	DECLARE_FUNCTION(execStartParticles); \
	DECLARE_FUNCTION(execSwitchParticles); \
	DECLARE_FUNCTION(execUpdateDefaultEntranceFlag);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_EVENT_PARMS \
	struct ELEntranceCutsceneManager_eventAttachBeltToWaist_Impl_Parms \
	{ \
		EELBelt Belt; \
	}; \
	struct ELEntranceCutsceneManager_eventGetCAWMeshList_Impl_Parms \
	{ \
		TArray<TSoftObjectPtr<UObject> > AssetList; \
		FELEntranceCutsceneWrestlerInfo WrestlerInfo; \
	}; \
	struct ELEntranceCutsceneManager_eventGetModelName_Impl_Parms \
	{ \
		FCharacterModelName ModelName; \
		FELEntranceCutsceneWrestlerInfo WrestlerInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELEntranceCutsceneManager_eventGetModelName_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELEntranceCutsceneManager_eventGetMovieNumber_Parms \
	{ \
		int32 UnlockItemId; \
		int32 Number; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELEntranceCutsceneManager_eventGetMovieNumber_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELEntranceCutsceneManager_eventGetMoviePath_Parms \
	{ \
		FString MoviePath; \
		int32 MovieDataID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELEntranceCutsceneManager_eventGetMoviePath_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELEntranceCutsceneManager_eventInputEvent_CameraZoom_Parms \
	{ \
		float ZoomUp; \
		float ZoomOut; \
	}; \
	struct ELEntranceCutsceneManager_eventOnFullScreenTitantron_N_Parms \
	{ \
		bool Flag; \
	}; \
	struct ELEntranceCutsceneManager_eventOnPausedLevelSequence_Impl_Parms \
	{ \
		float PauseDuration; \
	}; \
	struct ELEntranceCutsceneManager_eventOnPlayedLevelSequence_Impl_Parms \
	{ \
		float InSceneDuration; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELEntranceCutsceneManager(); \
	friend struct Z_Construct_UClass_AELEntranceCutsceneManager_Statics; \
public: \
	DECLARE_CLASS(AELEntranceCutsceneManager, AELNetPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEntranceCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAELEntranceCutsceneManager(); \
	friend struct Z_Construct_UClass_AELEntranceCutsceneManager_Statics; \
public: \
	DECLARE_CLASS(AELEntranceCutsceneManager, AELNetPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEntranceCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELEntranceCutsceneManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELEntranceCutsceneManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEntranceCutsceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEntranceCutsceneManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEntranceCutsceneManager(AELEntranceCutsceneManager&&); \
	NO_API AELEntranceCutsceneManager(const AELEntranceCutsceneManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEntranceCutsceneManager(AELEntranceCutsceneManager&&); \
	NO_API AELEntranceCutsceneManager(const AELEntranceCutsceneManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEntranceCutsceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEntranceCutsceneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELEntranceCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneAnimationData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneAnimationData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneMultiBeltAnimationData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneMultiBeltAnimationData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneParticleData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneParticleData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneBGModelData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneBGModelData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneManagerAnimationData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneManagerAnimationData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneFingerSignData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneFingerSignData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneScreenFilterData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneScreenFilterData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneMusicData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneMusicData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneWrestlerSettingsData() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneWrestlerSettingsData); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneBeltAttachOffset() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneBeltAttachOffset); } \
	FORCEINLINE static uint32 __PPO__EntranceCutsceneManagerParam() { return STRUCT_OFFSET(AELEntranceCutsceneManager, EntranceCutsceneManagerParam); } \
	FORCEINLINE static uint32 __PPO__DataManager() { return STRUCT_OFFSET(AELEntranceCutsceneManager, DataManager); } \
	FORCEINLINE static uint32 __PPO__RibbonActor() { return STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor); } \
	FORCEINLINE static uint32 __PPO__RibbonActor_R() { return STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_R); } \
	FORCEINLINE static uint32 __PPO__RibbonActor_G() { return STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_G); } \
	FORCEINLINE static uint32 __PPO__RibbonActor_B() { return STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_B); } \
	FORCEINLINE static uint32 __PPO__RibbonActor_Y() { return STRUCT_OFFSET(AELEntranceCutsceneManager, RibbonActor_Y); } \
	FORCEINLINE static uint32 __PPO__DroppedRibbonActor() { return STRUCT_OFFSET(AELEntranceCutsceneManager, DroppedRibbonActor); } \
	FORCEINLINE static uint32 __PPO__UseMovieSlotForTitantron() { return STRUCT_OFFSET(AELEntranceCutsceneManager, UseMovieSlotForTitantron); } \
	FORCEINLINE static uint32 __PPO__OnCameraFade() { return STRUCT_OFFSET(AELEntranceCutsceneManager, OnCameraFade); } \
	FORCEINLINE static uint32 __PPO__CutsceneList_N() { return STRUCT_OFFSET(AELEntranceCutsceneManager, CutsceneList_N); } \
	FORCEINLINE static uint32 __PPO__SequenceIndex_N() { return STRUCT_OFFSET(AELEntranceCutsceneManager, SequenceIndex_N); } \
	FORCEINLINE static uint32 __PPO__LastFadeDuration() { return STRUCT_OFFSET(AELEntranceCutsceneManager, LastFadeDuration); } \
	FORCEINLINE static uint32 __PPO__BeltPositionTwo() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionTwo); } \
	FORCEINLINE static uint32 __PPO__BeltPositionThree() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionThree); } \
	FORCEINLINE static uint32 __PPO__BeltPositionFour() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionFour); } \
	FORCEINLINE static uint32 __PPO__BeltPositionFive() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BeltPositionFive); } \
	FORCEINLINE static uint32 __PPO__CurrentProfile_Cutscene() { return STRUCT_OFFSET(AELEntranceCutsceneManager, CurrentProfile_Cutscene); } \
	FORCEINLINE static uint32 __PPO__LevelSequenceActor() { return STRUCT_OFFSET(AELEntranceCutsceneManager, LevelSequenceActor); } \
	FORCEINLINE static uint32 __PPO__ParticleSystemComponents() { return STRUCT_OFFSET(AELEntranceCutsceneManager, ParticleSystemComponents); } \
	FORCEINLINE static uint32 __PPO__BGModel_SkeletalMesh() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BGModel_SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__BGModel_StaticMesh() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BGModel_StaticMesh); } \
	FORCEINLINE static uint32 __PPO__BGModelActors() { return STRUCT_OFFSET(AELEntranceCutsceneManager, BGModelActors); } \
	FORCEINLINE static uint32 __PPO__DroppedRibbonInstance() { return STRUCT_OFFSET(AELEntranceCutsceneManager, DroppedRibbonInstance); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_43_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELEntranceCutsceneManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEntranceCutsceneManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
