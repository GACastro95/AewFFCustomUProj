// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EKeyMappingType : uint8;
class APlayerController;
class AELGameCommonPlayerControllerBase;
#ifdef ABP_200508_ELMainMenuWidgetBase_generated_h
#error "ELMainMenuWidgetBase.generated.h already included, missing '#pragma once' in ELMainMenuWidgetBase.h"
#endif
#define ABP_200508_ELMainMenuWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcGridCursor); \
	DECLARE_FUNCTION(execCalcGridCursorDown); \
	DECLARE_FUNCTION(execCalcGridCursorLeft); \
	DECLARE_FUNCTION(execCalcGridCursorRight); \
	DECLARE_FUNCTION(execCalcGridCursorUp); \
	DECLARE_FUNCTION(execCalcListCursor); \
	DECLARE_FUNCTION(execCalcListCursorDown); \
	DECLARE_FUNCTION(execCalcListCursorUp); \
	DECLARE_FUNCTION(execCancelHoldOk); \
	DECLARE_FUNCTION(execGetHoldOkControllerId); \
	DECLARE_FUNCTION(execGetLastInputGamepadKeyInfo); \
	DECLARE_FUNCTION(execGetLastInputKeyboardKeyInfo); \
	DECLARE_FUNCTION(execGetOkHoldTime); \
	DECLARE_FUNCTION(execIsBlockInputController); \
	DECLARE_FUNCTION(execIsEnableHoldOk); \
	DECLARE_FUNCTION(execIsEnableHoldOkPerController); \
	DECLARE_FUNCTION(execIsLastInputKeyByKeyboardMouse); \
	DECLARE_FUNCTION(execMouseStartHoldOk); \
	DECLARE_FUNCTION(execOnEndNative); \
	DECLARE_FUNCTION(execSetBlockInputController); \
	DECLARE_FUNCTION(execSetEnableHoldOk); \
	DECLARE_FUNCTION(execSetEnableHoldOkAllController); \
	DECLARE_FUNCTION(execSetEnableHoldOkPerController);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcGridCursor); \
	DECLARE_FUNCTION(execCalcGridCursorDown); \
	DECLARE_FUNCTION(execCalcGridCursorLeft); \
	DECLARE_FUNCTION(execCalcGridCursorRight); \
	DECLARE_FUNCTION(execCalcGridCursorUp); \
	DECLARE_FUNCTION(execCalcListCursor); \
	DECLARE_FUNCTION(execCalcListCursorDown); \
	DECLARE_FUNCTION(execCalcListCursorUp); \
	DECLARE_FUNCTION(execCancelHoldOk); \
	DECLARE_FUNCTION(execGetHoldOkControllerId); \
	DECLARE_FUNCTION(execGetLastInputGamepadKeyInfo); \
	DECLARE_FUNCTION(execGetLastInputKeyboardKeyInfo); \
	DECLARE_FUNCTION(execGetOkHoldTime); \
	DECLARE_FUNCTION(execIsBlockInputController); \
	DECLARE_FUNCTION(execIsEnableHoldOk); \
	DECLARE_FUNCTION(execIsEnableHoldOkPerController); \
	DECLARE_FUNCTION(execIsLastInputKeyByKeyboardMouse); \
	DECLARE_FUNCTION(execMouseStartHoldOk); \
	DECLARE_FUNCTION(execOnEndNative); \
	DECLARE_FUNCTION(execSetBlockInputController); \
	DECLARE_FUNCTION(execSetEnableHoldOk); \
	DECLARE_FUNCTION(execSetEnableHoldOkAllController); \
	DECLARE_FUNCTION(execSetEnableHoldOkPerController);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_EVENT_PARMS \
	struct ELMainMenuWidgetBase_eventOnInputAnalogLTrigger_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputAnalogRTrigger_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputAny_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputCancel_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputChangeOption_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputDecision_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonDown_Released_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonLeft_Released_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonRight_Released_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputFaceButtonUp_Released_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOK_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOKWithSetDecidePadID_Parms \
	{ \
		int32 DecideControllerID; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOpenChat_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOpenFriendList_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOpenSettings_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOpenStatus_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputOpenSwitchProfile_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputRStickDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputRStickLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputRStickRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputRStickUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputSelect_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputSmallTabLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputSmallTabRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputStart_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputStickL_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputStickR_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputStickRDirectionX_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputStickRDirectionY_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputTabLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputTabRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELMainMenuWidgetBase_eventOnInputUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMainMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMainMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMainMenuWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMainMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELMainMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMainMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMainMenuWidgetBase, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMainMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMainMenuWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMainMenuWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMainMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMainMenuWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMainMenuWidgetBase(UELMainMenuWidgetBase&&); \
	NO_API UELMainMenuWidgetBase(const UELMainMenuWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMainMenuWidgetBase(UELMainMenuWidgetBase&&); \
	NO_API UELMainMenuWidgetBase(const UELMainMenuWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMainMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMainMenuWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMainMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnStartHoldTimer() { return STRUCT_OFFSET(UELMainMenuWidgetBase, OnStartHoldTimer); } \
	FORCEINLINE static uint32 __PPO__OnEndHoldTimer() { return STRUCT_OFFSET(UELMainMenuWidgetBase, OnEndHoldTimer); } \
	FORCEINLINE static uint32 __PPO__OnEndDelegate() { return STRUCT_OFFSET(UELMainMenuWidgetBase, OnEndDelegate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMainMenuWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMainMenuWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
