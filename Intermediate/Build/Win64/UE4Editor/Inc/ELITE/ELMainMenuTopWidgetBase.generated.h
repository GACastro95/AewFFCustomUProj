// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_ELMainMenuTopWidgetBase_generated_h
#error "ELMainMenuTopWidgetBase.generated.h already included, missing '#pragma once' in ELMainMenuTopWidgetBase.h"
#endif
#define ELITE_ELMainMenuTopWidgetBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_RPC_WRAPPERS \
	virtual void OnUpdateCheckEOSSSParamEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMenuEOSSSParamStatus); \
	DECLARE_FUNCTION(execOnFinalizeCheckEOSSSParamEvent); \
	DECLARE_FUNCTION(execOnStartupCheckEOSSSParamEvent); \
	DECLARE_FUNCTION(execOnUpdateCheckEOSSSParamEvent);


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUpdateCheckEOSSSParamEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMenuEOSSSParamStatus); \
	DECLARE_FUNCTION(execOnFinalizeCheckEOSSSParamEvent); \
	DECLARE_FUNCTION(execOnStartupCheckEOSSSParamEvent); \
	DECLARE_FUNCTION(execOnUpdateCheckEOSSSParamEvent);


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_EVENT_PARMS \
	struct ELMainMenuTopWidgetBase_eventGetJoinPartyOwnerPUIDImpl_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventGetKeyboardFontImpl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventGetLastSubMenuStateImpl_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventGetLastSubMenuStateImpl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms \
	{ \
		bool Previous; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventGetNextSubMenuStateImpl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventIsInOnlineMenuImpl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventIsJoinOnlineMiniGameImpl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventIsJoinOnlinePatyMatchImpl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMainMenuTopWidgetBase_eventIsVisibleShopMenuImpl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnChangeDefaultSubMenuBlockInput_Parms \
	{ \
		bool Valid; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnChangeKeyboardFont_Parms \
	{ \
		bool Valid; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnChangeSubMenu_Parms \
	{ \
		int32 SubMenuType; \
		int32 TransitionType; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnChangeVisibleWrestlerSelectMenu_Parms \
	{ \
		bool IsVisible; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnCloseSubMenuDialog_Parms \
	{ \
		bool IsCancel; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnNextSubMenu_Parms \
	{ \
		int32 StackNextType; \
		int32 TransitionType; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnPrevSubMenu_Parms \
	{ \
		int32 TransitionType; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnRequestInAnimation_Parms \
	{ \
		bool IsShop; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnSetJoinPartyOwnerPUID_Parms \
	{ \
		FString PUID; \
	}; \
	struct ELMainMenuTopWidgetBase_eventOnSetSelectCursorPUID_Parms \
	{ \
		FString PUID; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMainMenuTopWidgetBase(); \
	friend struct Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMainMenuTopWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELMainMenuTopWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELMainMenuTopWidgetBase(); \
	friend struct Z_Construct_UClass_UELMainMenuTopWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMainMenuTopWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELMainMenuTopWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMainMenuTopWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMainMenuTopWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMainMenuTopWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMainMenuTopWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMainMenuTopWidgetBase(UELMainMenuTopWidgetBase&&); \
	NO_API UELMainMenuTopWidgetBase(const UELMainMenuTopWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMainMenuTopWidgetBase(UELMainMenuTopWidgetBase&&); \
	NO_API UELMainMenuTopWidgetBase(const UELMainMenuTopWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMainMenuTopWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMainMenuTopWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMainMenuTopWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELMainMenuTopWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELMainMenuTopWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
