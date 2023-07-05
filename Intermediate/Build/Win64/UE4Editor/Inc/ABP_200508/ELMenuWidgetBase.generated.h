// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef ABP_200508_ELMenuWidgetBase_generated_h
#error "ELMenuWidgetBase.generated.h already included, missing '#pragma once' in ELMenuWidgetBase.h"
#endif
#define ABP_200508_ELMenuWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_RPC_WRAPPERS \
	virtual void CloseMenu_Implementation(); \
	virtual bool IsPreparedMenu_Implementation(); \
	virtual void OpenMenu_Implementation(); \
	virtual void UpdateFromStackPrevious_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastCanceledMenu); \
	DECLARE_FUNCTION(execBroadcastFinishedMenu); \
	DECLARE_FUNCTION(execBroadcastFinishedMenuWithResult_Integer); \
	DECLARE_FUNCTION(execBroadcastInAnimFinished); \
	DECLARE_FUNCTION(execBroadcastOutAnimFinished); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execIsDecisionKeyboard); \
	DECLARE_FUNCTION(execIsPreparedMenu); \
	DECLARE_FUNCTION(execOpenMenu); \
	DECLARE_FUNCTION(execResetTabCursor); \
	DECLARE_FUNCTION(execSetDecisionKeyboard); \
	DECLARE_FUNCTION(execSetMenuTop); \
	DECLARE_FUNCTION(execUpdateFromStackPrevious);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CloseMenu_Implementation(); \
	virtual bool IsPreparedMenu_Implementation(); \
	virtual void OpenMenu_Implementation(); \
	virtual void UpdateFromStackPrevious_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastCanceledMenu); \
	DECLARE_FUNCTION(execBroadcastFinishedMenu); \
	DECLARE_FUNCTION(execBroadcastFinishedMenuWithResult_Integer); \
	DECLARE_FUNCTION(execBroadcastInAnimFinished); \
	DECLARE_FUNCTION(execBroadcastOutAnimFinished); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execIsDecisionKeyboard); \
	DECLARE_FUNCTION(execIsPreparedMenu); \
	DECLARE_FUNCTION(execOpenMenu); \
	DECLARE_FUNCTION(execResetTabCursor); \
	DECLARE_FUNCTION(execSetDecisionKeyboard); \
	DECLARE_FUNCTION(execSetMenuTop); \
	DECLARE_FUNCTION(execUpdateFromStackPrevious);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_EVENT_PARMS \
	struct ELMenuWidgetBase_eventIsPreparedMenu_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMenuWidgetBase_eventIsPreparedMenu_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMenuWidgetBase_eventOnMoveRStickLR_Parms \
	{ \
		bool IsLeft; \
	}; \
	struct ELMenuWidgetBase_eventOnMoveTab_Parms \
	{ \
		bool IsLeft; \
	}; \
	struct ELMenuWidgetBase_eventOnSkipMoveTab_Parms \
	{ \
		int32 NewTabIndex; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMenuWidgetBase, UELOperationalWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMenuWidgetBase, UELOperationalWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMenuWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMenuWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMenuWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMenuWidgetBase(UELMenuWidgetBase&&); \
	NO_API UELMenuWidgetBase(const UELMenuWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMenuWidgetBase(UELMenuWidgetBase&&); \
	NO_API UELMenuWidgetBase(const UELMenuWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMenuWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuTop() { return STRUCT_OFFSET(UELMenuWidgetBase, MenuTop); } \
	FORCEINLINE static uint32 __PPO__TabIndex() { return STRUCT_OFFSET(UELMenuWidgetBase, TabIndex); } \
	FORCEINLINE static uint32 __PPO__PreTabIndex() { return STRUCT_OFFSET(UELMenuWidgetBase, PreTabIndex); } \
	FORCEINLINE static uint32 __PPO__TabCursorIndexArray() { return STRUCT_OFFSET(UELMenuWidgetBase, TabCursorIndexArray); } \
	FORCEINLINE static uint32 __PPO__PreTabIndex2P() { return STRUCT_OFFSET(UELMenuWidgetBase, PreTabIndex2P); } \
	FORCEINLINE static uint32 __PPO__TabCursorIndexArray2P() { return STRUCT_OFFSET(UELMenuWidgetBase, TabCursorIndexArray2P); } \
	FORCEINLINE static uint32 __PPO__LastTabIndex() { return STRUCT_OFFSET(UELMenuWidgetBase, LastTabIndex); } \
	FORCEINLINE static uint32 __PPO__bDecisionKeyboard() { return STRUCT_OFFSET(UELMenuWidgetBase, bDecisionKeyboard); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMenuWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMenuWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
