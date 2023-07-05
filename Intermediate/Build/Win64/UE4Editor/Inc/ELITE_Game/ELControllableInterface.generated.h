// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef ELITE_GAME_ELControllableInterface_generated_h
#error "ELControllableInterface.generated.h already included, missing '#pragma once' in ELControllableInterface.h"
#endif
#define ELITE_GAME_ELControllableInterface_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_RPC_WRAPPERS \
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


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELControllableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELControllableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELControllableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELControllableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELControllableInterface(UELControllableInterface&&); \
	NO_API UELControllableInterface(const UELControllableInterface&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELControllableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELControllableInterface(UELControllableInterface&&); \
	NO_API UELControllableInterface(const UELControllableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELControllableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELControllableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELControllableInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELControllableInterface(); \
	friend struct Z_Construct_UClass_UELControllableInterface_Statics; \
public: \
	DECLARE_CLASS(UELControllableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELControllableInterface)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELControllableInterface() {} \
public: \
	typedef UELControllableInterface UClassType; \
	typedef IELControllableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IELControllableInterface() {} \
public: \
	typedef UELControllableInterface UClassType; \
	typedef IELControllableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_7_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELControllableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELControllableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
