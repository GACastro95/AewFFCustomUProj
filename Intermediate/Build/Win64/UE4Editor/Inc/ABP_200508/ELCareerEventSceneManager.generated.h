// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
enum class ECareerEventState : uint8;
enum class ECareerStoryResultCondition : uint8;
struct FCareerEventMessage;
class AELCareerEventBase;
enum class ECareerEventFade : uint8;
#ifdef ABP_200508_ELCareerEventSceneManager_generated_h
#error "ELCareerEventSceneManager.generated.h already included, missing '#pragma once' in ELCareerEventSceneManager.h"
#endif
#define ABP_200508_ELCareerEventSceneManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execChangeStateSnapShotPrepare); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetEventSceneResult); \
	DECLARE_FUNCTION(execGetNextEventMessageName); \
	DECLARE_FUNCTION(execGetUseEventMessageData); \
	DECLARE_FUNCTION(execSetBackStageObject); \
	DECLARE_FUNCTION(execSetEventSceneResult); \
	DECLARE_FUNCTION(execSetNextEventMessageName); \
	DECLARE_FUNCTION(execSetUseEventMessageData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execChangeStateSnapShotPrepare); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetEventSceneResult); \
	DECLARE_FUNCTION(execGetNextEventMessageName); \
	DECLARE_FUNCTION(execGetUseEventMessageData); \
	DECLARE_FUNCTION(execSetBackStageObject); \
	DECLARE_FUNCTION(execSetEventSceneResult); \
	DECLARE_FUNCTION(execSetNextEventMessageName); \
	DECLARE_FUNCTION(execSetUseEventMessageData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_EVENT_PARMS \
	struct ELCareerEventSceneManager_eventOpenDialog_Tutorial_Parms \
	{ \
		FName DispTutorial; \
	}; \
	struct ELCareerEventSceneManager_eventSetSkipBottomHelp_Parms \
	{ \
		bool bFlag; \
	}; \
	struct ELCareerEventSceneManager_eventStartSkipFade_Parms \
	{ \
		ECareerEventFade eFade; \
		float fFadeTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerEventSceneManager(); \
	friend struct Z_Construct_UClass_AELCareerEventSceneManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerEventSceneManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerEventSceneManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerEventSceneManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerEventSceneManager(); \
	friend struct Z_Construct_UClass_AELCareerEventSceneManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerEventSceneManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerEventSceneManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerEventSceneManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerEventSceneManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerEventSceneManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerEventSceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerEventSceneManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerEventSceneManager(AELCareerEventSceneManager&&); \
	NO_API AELCareerEventSceneManager(const AELCareerEventSceneManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerEventSceneManager(AELCareerEventSceneManager&&); \
	NO_API AELCareerEventSceneManager(const AELCareerEventSceneManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerEventSceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerEventSceneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerEventSceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_EventSceneResult() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_EventSceneResult); } \
	FORCEINLINE static uint32 __PPO__m_NextEventMessageName() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_NextEventMessageName); } \
	FORCEINLINE static uint32 __PPO__m_UseEventMessageData() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_UseEventMessageData); } \
	FORCEINLINE static uint32 __PPO__m_CurrentState() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_CurrentState); } \
	FORCEINLINE static uint32 __PPO__m_SpecialRewards() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_SpecialRewards); } \
	FORCEINLINE static uint32 __PPO__m_RegularRewards() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_RegularRewards); } \
	FORCEINLINE static uint32 __PPO__m_RewardGet() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_RewardGet); } \
	FORCEINLINE static uint32 __PPO__m_SelectResultList() { return STRUCT_OFFSET(AELCareerEventSceneManager, m_SelectResultList); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_17_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerEventSceneManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventSceneManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
