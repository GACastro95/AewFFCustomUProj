// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class ACineCameraActor;
enum class ECareerCutsceneMessageCastType : uint8;
enum class ECareerCutsceneExtraInfo : uint8;
enum class ECareerCutSceneState : uint8;
enum class ECareerRingObject : uint8;
#ifdef ABP_200508_ELCareerCutSceneManager_generated_h
#error "ELCareerCutSceneManager.generated.h already included, missing '#pragma once' in ELCareerCutSceneManager.h"
#endif
#define ABP_200508_ELCareerCutSceneManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEventInput_AnalogL_Pressed); \
	DECLARE_FUNCTION(execEventInput_AnalogL_Released); \
	DECLARE_FUNCTION(execEventInput_AnalogLDirectionX); \
	DECLARE_FUNCTION(execEventInput_AnalogLDirectionY); \
	DECLARE_FUNCTION(execEventInput_AnalogLTrigger); \
	DECLARE_FUNCTION(execEventInput_AnalogR_Pressed); \
	DECLARE_FUNCTION(execEventInput_AnalogR_Released); \
	DECLARE_FUNCTION(execEventInput_AnalogRDirectionX); \
	DECLARE_FUNCTION(execEventInput_AnalogRDirectionY); \
	DECLARE_FUNCTION(execEventInput_AnalogRTrigger); \
	DECLARE_FUNCTION(execEventInput_AnyKey); \
	DECLARE_FUNCTION(execEventInput_BumperL_Pressed); \
	DECLARE_FUNCTION(execEventInput_BumperL_Released); \
	DECLARE_FUNCTION(execEventInput_BumperR_Pressed); \
	DECLARE_FUNCTION(execEventInput_BumperR_Released); \
	DECLARE_FUNCTION(execEventInput_ChatAction_Pressed); \
	DECLARE_FUNCTION(execEventInput_ChatAction_Released); \
	DECLARE_FUNCTION(execEventInput_DPadDown_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadDown_Released); \
	DECLARE_FUNCTION(execEventInput_DPadLeft_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadLeft_Released); \
	DECLARE_FUNCTION(execEventInput_DPadRight_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadRight_Released); \
	DECLARE_FUNCTION(execEventInput_DPadUp_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadUp_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonDown_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonDown_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonLeft_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonLeft_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonRight_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonRight_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonUp_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonUp_Released); \
	DECLARE_FUNCTION(execEventInput_LShiftKey_Pressed); \
	DECLARE_FUNCTION(execEventInput_LShiftKey_Released); \
	DECLARE_FUNCTION(execEventInput_MouseButtonL_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseButtonL_Released); \
	DECLARE_FUNCTION(execEventInput_MouseButtonR_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseButtonR_Released); \
	DECLARE_FUNCTION(execEventInput_MouseWheel_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseWheel_Released); \
	DECLARE_FUNCTION(execEventInput_MouseWheelClick_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseWheelClick_Released); \
	DECLARE_FUNCTION(execEventInput_Select_Pressed); \
	DECLARE_FUNCTION(execEventInput_Select_Released); \
	DECLARE_FUNCTION(execEventInput_SpaceKey_Pressed); \
	DECLARE_FUNCTION(execEventInput_SpaceKey_Released); \
	DECLARE_FUNCTION(execEventInput_Start_Pressed); \
	DECLARE_FUNCTION(execEventInput_Start_Released); \
	DECLARE_FUNCTION(execEventInput_TriggerL_Pressed); \
	DECLARE_FUNCTION(execEventInput_TriggerL_Released); \
	DECLARE_FUNCTION(execEventInput_TriggerR_Pressed); \
	DECLARE_FUNCTION(execEventInput_TriggerR_Released); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execSetCameraHeightCorrection); \
	DECLARE_FUNCTION(execSetCutSceneMessage); \
	DECLARE_FUNCTION(execSetCutSceneMessageIndex); \
	DECLARE_FUNCTION(execSetState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEventInput_AnalogL_Pressed); \
	DECLARE_FUNCTION(execEventInput_AnalogL_Released); \
	DECLARE_FUNCTION(execEventInput_AnalogLDirectionX); \
	DECLARE_FUNCTION(execEventInput_AnalogLDirectionY); \
	DECLARE_FUNCTION(execEventInput_AnalogLTrigger); \
	DECLARE_FUNCTION(execEventInput_AnalogR_Pressed); \
	DECLARE_FUNCTION(execEventInput_AnalogR_Released); \
	DECLARE_FUNCTION(execEventInput_AnalogRDirectionX); \
	DECLARE_FUNCTION(execEventInput_AnalogRDirectionY); \
	DECLARE_FUNCTION(execEventInput_AnalogRTrigger); \
	DECLARE_FUNCTION(execEventInput_AnyKey); \
	DECLARE_FUNCTION(execEventInput_BumperL_Pressed); \
	DECLARE_FUNCTION(execEventInput_BumperL_Released); \
	DECLARE_FUNCTION(execEventInput_BumperR_Pressed); \
	DECLARE_FUNCTION(execEventInput_BumperR_Released); \
	DECLARE_FUNCTION(execEventInput_ChatAction_Pressed); \
	DECLARE_FUNCTION(execEventInput_ChatAction_Released); \
	DECLARE_FUNCTION(execEventInput_DPadDown_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadDown_Released); \
	DECLARE_FUNCTION(execEventInput_DPadLeft_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadLeft_Released); \
	DECLARE_FUNCTION(execEventInput_DPadRight_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadRight_Released); \
	DECLARE_FUNCTION(execEventInput_DPadUp_Pressed); \
	DECLARE_FUNCTION(execEventInput_DPadUp_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonDown_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonDown_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonLeft_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonLeft_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonRight_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonRight_Released); \
	DECLARE_FUNCTION(execEventInput_FaceButtonUp_Pressed); \
	DECLARE_FUNCTION(execEventInput_FaceButtonUp_Released); \
	DECLARE_FUNCTION(execEventInput_LShiftKey_Pressed); \
	DECLARE_FUNCTION(execEventInput_LShiftKey_Released); \
	DECLARE_FUNCTION(execEventInput_MouseButtonL_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseButtonL_Released); \
	DECLARE_FUNCTION(execEventInput_MouseButtonR_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseButtonR_Released); \
	DECLARE_FUNCTION(execEventInput_MouseWheel_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseWheel_Released); \
	DECLARE_FUNCTION(execEventInput_MouseWheelClick_Pressed); \
	DECLARE_FUNCTION(execEventInput_MouseWheelClick_Released); \
	DECLARE_FUNCTION(execEventInput_Select_Pressed); \
	DECLARE_FUNCTION(execEventInput_Select_Released); \
	DECLARE_FUNCTION(execEventInput_SpaceKey_Pressed); \
	DECLARE_FUNCTION(execEventInput_SpaceKey_Released); \
	DECLARE_FUNCTION(execEventInput_Start_Pressed); \
	DECLARE_FUNCTION(execEventInput_Start_Released); \
	DECLARE_FUNCTION(execEventInput_TriggerL_Pressed); \
	DECLARE_FUNCTION(execEventInput_TriggerL_Released); \
	DECLARE_FUNCTION(execEventInput_TriggerR_Pressed); \
	DECLARE_FUNCTION(execEventInput_TriggerR_Released); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execSetCameraHeightCorrection); \
	DECLARE_FUNCTION(execSetCutSceneMessage); \
	DECLARE_FUNCTION(execSetCutSceneMessageIndex); \
	DECLARE_FUNCTION(execSetState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_EVENT_PARMS \
	struct ELCareerCutSceneManager_eventDispRingObject_Parms \
	{ \
		ECareerRingObject eRingObject; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerCutSceneManager(); \
	friend struct Z_Construct_UClass_AELCareerCutSceneManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerCutSceneManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerCutSceneManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerCutSceneManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerCutSceneManager(); \
	friend struct Z_Construct_UClass_AELCareerCutSceneManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerCutSceneManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerCutSceneManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerCutSceneManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerCutSceneManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerCutSceneManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerCutSceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerCutSceneManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerCutSceneManager(AELCareerCutSceneManager&&); \
	NO_API AELCareerCutSceneManager(const AELCareerCutSceneManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerCutSceneManager(AELCareerCutSceneManager&&); \
	NO_API AELCareerCutSceneManager(const AELCareerCutSceneManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerCutSceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerCutSceneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerCutSceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerCutSceneManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerCutSceneManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
