// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplayDialogBoxStackInfo;
enum class yEnMenuWidgetType : uint8;
class UELOperationalWidgetBase;
enum class yEnDialogBoxChoices : uint8;
class UELDialogBoxWidgetBase;
class UTexture2D;
#ifdef ELITE_ELDialogBoxManagerBase_generated_h
#error "ELDialogBoxManagerBase.generated.h already included, missing '#pragma once' in ELDialogBoxManagerBase.h"
#endif
#define ELITE_ELDialogBoxManagerBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListEmpty); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListFindItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListGetItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListPopItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListPushItem);


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListEmpty); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListFindItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListGetItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListPopItem); \
	DECLARE_FUNCTION(execDisplayDialogBoxStackListPushItem);


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_EVENT_PARMS \
	struct ELDialogBoxManagerBase_eventCallDialogResult_Parms \
	{ \
		bool IsCancel; \
	}; \
	struct ELDialogBoxManagerBase_eventGetCurrentDialogWidgetType_Parms \
	{ \
		yEnMenuWidgetType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELDialogBoxManagerBase_eventGetCurrentDialogWidgetType_Parms() \
			: ReturnValue((yEnMenuWidgetType)0) \
		{ \
		} \
	}; \
	struct ELDialogBoxManagerBase_eventIsOpenedDialog_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELDialogBoxManagerBase_eventIsOpenedDialog_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELDialogBoxManagerBase_eventIsOpenedDialogOrTutorial_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELDialogBoxManagerBase_eventIsStackedDialog_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELDialogBoxManagerBase_eventIsStackedDialog_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELDialogBoxManagerBase_eventRequestDisconnectedGamePadMessageDialog_Parms \
	{ \
		int32 MessageType; \
		FText Text; \
		TArray<yEnDialogBoxChoices> Choises; \
		bool IsSystemDialog; \
		FDialogBoxResultDelegate ResultDelegate; \
		FDialogBoxBeginResultDelegate BeginResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestForceCloseDialog_Parms \
	{ \
		bool CloseALL; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenMessageDialog_Parms \
	{ \
		int32 MessageType; \
		FText Text; \
		TArray<yEnDialogBoxChoices> Choises; \
		FDialogBoxResultDelegate ResultDelegate; \
		int32 DefaultIndex; \
		bool IsSystemDialog; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenMessageDialogNoResult_Parms \
	{ \
		int32 MessageType; \
		FText Text; \
		yEnDialogBoxChoices Choise; \
		bool IsSystemDialog; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenOnlyPictureDialog_Parms \
	{ \
		const UTexture2D* Texture; \
		FText HeaderText; \
		TArray<FText> AskTexts; \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenOnlyTextDialog_Parms \
	{ \
		FText HeaderText; \
		FText MainText; \
		TArray<FText> AskTexts; \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenSingleItemGetDialog_Parms \
	{ \
		TSoftObjectPtr<UTexture2D> Texture; \
		FText HeaderText; \
		FText MainText; \
		TArray<FText> AskTexts; \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenSinglePictureAndTextDialog_Parms \
	{ \
		const UTexture2D* Texture; \
		FText HeaderText; \
		FText TargetText; \
		TArray<FText> AskTexts; \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenTextEntryDialog_Parms \
	{ \
		FText Title; \
		FString Text; \
		int32 MaxNum; \
		FDialogBoxResultDelegate ResultDelegate; \
		bool UseInfoText; \
		bool IsSystemDialog; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenThreePictureAndTextDialog_Parms \
	{ \
		TArray<UTexture2D*> Texture; \
		FText HeaderText; \
		TArray<FText> MainTextList; \
		TArray<FText> AskTexts; \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	}; \
	struct ELDialogBoxManagerBase_eventRequestOpenTutorialDialog_Parms \
	{ \
		FDialogBoxResultDelegate ResultDelegate; \
		UELDialogBoxWidgetBase* ResultDialog; \
		bool ResultOpen; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELDialogBoxManagerBase(); \
	friend struct Z_Construct_UClass_UELDialogBoxManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELDialogBoxManagerBase, USingletonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELDialogBoxManagerBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELDialogBoxManagerBase(); \
	friend struct Z_Construct_UClass_UELDialogBoxManagerBase_Statics; \
public: \
	DECLARE_CLASS(UELDialogBoxManagerBase, USingletonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELDialogBoxManagerBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELDialogBoxManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELDialogBoxManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDialogBoxManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDialogBoxManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDialogBoxManagerBase(UELDialogBoxManagerBase&&); \
	NO_API UELDialogBoxManagerBase(const UELDialogBoxManagerBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELDialogBoxManagerBase(UELDialogBoxManagerBase&&); \
	NO_API UELDialogBoxManagerBase(const UELDialogBoxManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELDialogBoxManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELDialogBoxManagerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELDialogBoxManagerBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_15_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELDialogBoxManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELDialogBoxManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
