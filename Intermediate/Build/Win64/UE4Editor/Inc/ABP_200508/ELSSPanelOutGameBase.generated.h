// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOutGamePanelEventType : uint8;
class AELSSUIManagerOutGame;
struct FSSPrepareMovieStack;
class AELSSUIManagerBase;
class UUserWidget;
class AELGameCommonPlayerControllerBase;
enum class EPlayMovieDelayTimeType : uint8;
#ifdef ABP_200508_ELSSPanelOutGameBase_generated_h
#error "ELSSPanelOutGameBase.generated.h already included, missing '#pragma once' in ELSSPanelOutGameBase.h"
#endif
#define ABP_200508_ELSSPanelOutGameBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateOutGameEvent); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execGetOutGameUIManager); \
	DECLARE_FUNCTION(execGetPrepareMovieData); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execPlaySE); \
	DECLARE_FUNCTION(execSetPanelVisible); \
	DECLARE_FUNCTION(execSetPrepareMovieData); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateOutGameEvent); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execGetOutGameUIManager); \
	DECLARE_FUNCTION(execGetPrepareMovieData); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execPlaySE); \
	DECLARE_FUNCTION(execSetPanelVisible); \
	DECLARE_FUNCTION(execSetPrepareMovieData); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_EVENT_PARMS \
	struct ELSSPanelOutGameBase_eventEvent_Setup_Parms \
	{ \
		UUserWidget* movieWidget; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputAnalogLTrigger_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputAnalogRTrigger_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputAny_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputCancel_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputChangeOption_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputDecision_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputFaceButtonDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputFaceButtonLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputFaceButtonRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputFaceButtonUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputOK_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputOpenChat_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputOpenFriendList_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputOpenSettings_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputOpenStatus_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputRStickDown_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputRStickLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputRStickRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputRStickUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputSelect_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputSmallTabLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputSmallTabRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputStart_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputStickL_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputStickR_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputStickRDirectionX_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputStickRDirectionY_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputTabLeft_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputTabRight_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventOnInputUp_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		bool IsRepeat; \
	}; \
	struct ELSSPanelOutGameBase_eventPlayBGM_Parms \
	{ \
		int32 bgmId; \
	}; \
	struct ELSSPanelOutGameBase_eventPlayMovie_Parms \
	{ \
		FString MovieID; \
		bool IsLoop; \
		bool isAutoPlay; \
		float addDelayTime; \
		EPlayMovieDelayTimeType delayType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSPanelOutGameBase(); \
	friend struct Z_Construct_UClass_UELSSPanelOutGameBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelOutGameBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelOutGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELSSPanelOutGameBase(); \
	friend struct Z_Construct_UClass_UELSSPanelOutGameBase_Statics; \
public: \
	DECLARE_CLASS(UELSSPanelOutGameBase, UELSSPanelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSPanelOutGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSPanelOutGameBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSPanelOutGameBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelOutGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelOutGameBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelOutGameBase(UELSSPanelOutGameBase&&); \
	NO_API UELSSPanelOutGameBase(const UELSSPanelOutGameBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSPanelOutGameBase(UELSSPanelOutGameBase&&); \
	NO_API UELSSPanelOutGameBase(const UELSSPanelOutGameBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSPanelOutGameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSPanelOutGameBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSPanelOutGameBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__panelId() { return STRUCT_OFFSET(UELSSPanelOutGameBase, panelId); } \
	FORCEINLINE static uint32 __PPO__uiOutGameManager() { return STRUCT_OFFSET(UELSSPanelOutGameBase, uiOutGameManager); } \
	FORCEINLINE static uint32 __PPO__uiMovieWidget() { return STRUCT_OFFSET(UELSSPanelOutGameBase, uiMovieWidget); } \
	FORCEINLINE static uint32 __PPO__prepareMovieData() { return STRUCT_OFFSET(UELSSPanelOutGameBase, prepareMovieData); } \
	FORCEINLINE static uint32 __PPO__isParentInputEnable() { return STRUCT_OFFSET(UELSSPanelOutGameBase, isParentInputEnable); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSPanelOutGameBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPanelOutGameBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
