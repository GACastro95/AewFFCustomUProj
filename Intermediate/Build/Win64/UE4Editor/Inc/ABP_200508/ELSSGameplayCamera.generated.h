// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSActionCameraID : uint8;
enum class ESSCameraShakeType : uint8;
class UELSSCameraShake;
class AELSSPlayer;
class UELSSActionCameraController;
enum class ESSCameraPosition : uint8;
class APawn;
class ASceneCapture2D;
#ifdef ABP_200508_ELSSGameplayCamera_generated_h
#error "ELSSGameplayCamera.generated.h already included, missing '#pragma once' in ELSSGameplayCamera.h"
#endif
#define ABP_200508_ELSSGameplayCamera_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndActionCamera); \
	DECLARE_FUNCTION(execForceEndActionCamera); \
	DECLARE_FUNCTION(execGetCameraShake); \
	DECLARE_FUNCTION(execIsPlayingActionCamera); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execOnLanded); \
	DECLARE_FUNCTION(execPlayActionCamera); \
	DECLARE_FUNCTION(execProgressActionCamera); \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execSetCameraPosition); \
	DECLARE_FUNCTION(execSetControlledPawn); \
	DECLARE_FUNCTION(execSetSceneCapture2D); \
	DECLARE_FUNCTION(execSetSceneCaptureEnable); \
	DECLARE_FUNCTION(execSwitchCameraPosition);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndActionCamera); \
	DECLARE_FUNCTION(execForceEndActionCamera); \
	DECLARE_FUNCTION(execGetCameraShake); \
	DECLARE_FUNCTION(execIsPlayingActionCamera); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execOnLanded); \
	DECLARE_FUNCTION(execPlayActionCamera); \
	DECLARE_FUNCTION(execProgressActionCamera); \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execSetCameraPosition); \
	DECLARE_FUNCTION(execSetControlledPawn); \
	DECLARE_FUNCTION(execSetSceneCapture2D); \
	DECLARE_FUNCTION(execSetSceneCaptureEnable); \
	DECLARE_FUNCTION(execSwitchCameraPosition);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGameplayCamera(); \
	friend struct Z_Construct_UClass_AELSSGameplayCamera_Statics; \
public: \
	DECLARE_CLASS(AELSSGameplayCamera, AGameplayCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameplayCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGameplayCamera(); \
	friend struct Z_Construct_UClass_AELSSGameplayCamera_Statics; \
public: \
	DECLARE_CLASS(AELSSGameplayCamera, AGameplayCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameplayCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGameplayCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGameplayCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameplayCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameplayCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameplayCamera(AELSSGameplayCamera&&); \
	NO_API AELSSGameplayCamera(const AELSSGameplayCamera&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameplayCamera(AELSSGameplayCamera&&); \
	NO_API AELSSGameplayCamera(const AELSSGameplayCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameplayCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameplayCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSGameplayCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MouseMoveInputScale() { return STRUCT_OFFSET(AELSSGameplayCamera, MouseMoveInputScale); } \
	FORCEINLINE static uint32 __PPO__SleepWatcherCameraDuration_AfterResetCamera() { return STRUCT_OFFSET(AELSSGameplayCamera, SleepWatcherCameraDuration_AfterResetCamera); } \
	FORCEINLINE static uint32 __PPO__WatcherCameraRotationInterpSpeed() { return STRUCT_OFFSET(AELSSGameplayCamera, WatcherCameraRotationInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__WatcherResetCameraDisable() { return STRUCT_OFFSET(AELSSGameplayCamera, WatcherResetCameraDisable); } \
	FORCEINLINE static uint32 __PPO__CameraPosition() { return STRUCT_OFFSET(AELSSGameplayCamera, CameraPosition); } \
	FORCEINLINE static uint32 __PPO__CameraShakeDic() { return STRUCT_OFFSET(AELSSGameplayCamera, CameraShakeDic); } \
	FORCEINLINE static uint32 __PPO__ActionCameraController() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraController); } \
	FORCEINLINE static uint32 __PPO__ActionCameraControllerTypes() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraControllerTypes); } \
	FORCEINLINE static uint32 __PPO__ActionCameraControllerDic() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraControllerDic); } \
	FORCEINLINE static uint32 __PPO__ActionCameraLocation() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLocation); } \
	FORCEINLINE static uint32 __PPO__ActionCameraLocationInterpSpeed() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLocationInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__ActionCameraLerpAlpha() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLerpAlpha); } \
	FORCEINLINE static uint32 __PPO__ActionCameraLerpBlendExp() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraLerpBlendExp); } \
	FORCEINLINE static uint32 __PPO__ActionCameraAlphaInterpSpeed() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraAlphaInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__ActionCameraAlphaEndInterpSpeed() { return STRUCT_OFFSET(AELSSGameplayCamera, ActionCameraAlphaEndInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__SceneCapture2D() { return STRUCT_OFFSET(AELSSGameplayCamera, SceneCapture2D); } \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(AELSSGameplayCamera, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AELSSGameplayCamera, SpringArm); } \
	FORCEINLINE static uint32 __PPO__CameraParent() { return STRUCT_OFFSET(AELSSGameplayCamera, CameraParent); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AELSSGameplayCamera, Camera); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(AELSSGameplayCamera, PlayerController); } \
	FORCEINLINE static uint32 __PPO__ControlledPawn() { return STRUCT_OFFSET(AELSSGameplayCamera, ControlledPawn); } \
	FORCEINLINE static uint32 __PPO__OverrideCameraTargetActor() { return STRUCT_OFFSET(AELSSGameplayCamera, OverrideCameraTargetActor); } \
	FORCEINLINE static uint32 __PPO__ParamManagerType() { return STRUCT_OFFSET(AELSSGameplayCamera, ParamManagerType); } \
	FORCEINLINE static uint32 __PPO__Param() { return STRUCT_OFFSET(AELSSGameplayCamera, Param); } \
	FORCEINLINE static uint32 __PPO__ControlMode() { return STRUCT_OFFSET(AELSSGameplayCamera, ControlMode); } \
	FORCEINLINE static uint32 __PPO__StateControlParam() { return STRUCT_OFFSET(AELSSGameplayCamera, StateControlParam); } \
	FORCEINLINE static uint32 __PPO__Location() { return STRUCT_OFFSET(AELSSGameplayCamera, Location); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(AELSSGameplayCamera, Rotation); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_26_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGameplayCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameplayCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
