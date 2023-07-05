// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
enum class ECareerCityMoveVehicleType : uint8;
#ifdef ABP_200508_ELCareerVehicleActor_generated_h
#error "ELCareerVehicleActor.generated.h already included, missing '#pragma once' in ELCareerVehicleActor.h"
#endif
#define ABP_200508_ELCareerVehicleActor_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execEventInput_TriggerR_Released);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execEventInput_TriggerR_Released);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_EVENT_PARMS \
	struct ELCareerVehicleActor_eventMeshVisibleBP_Parms \
	{ \
		ECareerCityMoveVehicleType eVehicleType; \
	}; \
	struct ELCareerVehicleActor_eventUpdateBottomHelp_Parms \
	{ \
		bool bFlag; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerVehicleActor(); \
	friend struct Z_Construct_UClass_AELCareerVehicleActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerVehicleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerVehicleActor) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerVehicleActor*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerVehicleActor(); \
	friend struct Z_Construct_UClass_AELCareerVehicleActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerVehicleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerVehicleActor) \
	virtual UObject* _getUObject() const override { return const_cast<AELCareerVehicleActor*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerVehicleActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerVehicleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerVehicleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerVehicleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerVehicleActor(AELCareerVehicleActor&&); \
	NO_API AELCareerVehicleActor(const AELCareerVehicleActor&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerVehicleActor(AELCareerVehicleActor&&); \
	NO_API AELCareerVehicleActor(const AELCareerVehicleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerVehicleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerVehicleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerVehicleActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnFinishedVehicleMove() { return STRUCT_OFFSET(AELCareerVehicleActor, OnFinishedVehicleMove); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerVehicleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerVehicleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
