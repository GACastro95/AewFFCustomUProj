// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELGameCommonPlayerControllerBase;
#ifdef ELITE_ELCAWMenuWidgetBase_generated_h
#error "ELCAWMenuWidgetBase.generated.h already included, missing '#pragma once' in ELCAWMenuWidgetBase.h"
#endif
#define ELITE_ELCAWMenuWidgetBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlockLock); \
	DECLARE_FUNCTION(execIsActiveController); \
	DECLARE_FUNCTION(execIsDisplayUnitUS); \
	DECLARE_FUNCTION(execIsLockedBlockAllInput); \
	DECLARE_FUNCTION(execLockBlockAllInput); \
	DECLARE_FUNCTION(execSetBlockAllInput); \
	DECLARE_FUNCTION(execSetBlockLock); \
	DECLARE_FUNCTION(execUnlockBlockAllInput);


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlockLock); \
	DECLARE_FUNCTION(execIsActiveController); \
	DECLARE_FUNCTION(execIsDisplayUnitUS); \
	DECLARE_FUNCTION(execIsLockedBlockAllInput); \
	DECLARE_FUNCTION(execLockBlockAllInput); \
	DECLARE_FUNCTION(execSetBlockAllInput); \
	DECLARE_FUNCTION(execSetBlockLock); \
	DECLARE_FUNCTION(execUnlockBlockAllInput);


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_EVENT_PARMS \
	struct ELCAWMenuWidgetBase_eventOnInputStickLDirectionX_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELCAWMenuWidgetBase_eventOnInputStickLDirectionY_Parms \
	{ \
		AELGameCommonPlayerControllerBase* Controller; \
		float Amount; \
	}; \
	struct ELCAWMenuWidgetBase_eventOnInputZoomLevel_Parms \
	{ \
		float Amount; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCAWMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELCAWMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCAWMenuWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELCAWMenuWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELCAWMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELCAWMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCAWMenuWidgetBase, UELMainMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELCAWMenuWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCAWMenuWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCAWMenuWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAWMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAWMenuWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAWMenuWidgetBase(UELCAWMenuWidgetBase&&); \
	NO_API UELCAWMenuWidgetBase(const UELCAWMenuWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCAWMenuWidgetBase(UELCAWMenuWidgetBase&&); \
	NO_API UELCAWMenuWidgetBase(const UELCAWMenuWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCAWMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCAWMenuWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCAWMenuWidgetBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomSpeed() { return STRUCT_OFFSET(UELCAWMenuWidgetBase, ZoomSpeed); } \
	FORCEINLINE static uint32 __PPO__TriggerAccSpeed() { return STRUCT_OFFSET(UELCAWMenuWidgetBase, TriggerAccSpeed); } \
	FORCEINLINE static uint32 __PPO__TriggerCurve() { return STRUCT_OFFSET(UELCAWMenuWidgetBase, TriggerCurve); }


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELCAWMenuWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELCAWMenuWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
