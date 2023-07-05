// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerEventActionMember : uint8;
enum class ECareerCutsceneMessageCastType : uint8;
enum class ECareerCutsceneExtraInfo : uint8;
#ifdef ABP_200508_ELCareerEventMessageWindowWidgetBase_generated_h
#error "ELCareerEventMessageWindowWidgetBase.generated.h already included, missing '#pragma once' in ELCareerEventMessageWindowWidgetBase.h"
#endif
#define ABP_200508_ELCareerEventMessageWindowWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCutOffMessage); \
	DECLARE_FUNCTION(execSetNowSpeaker);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCutOffMessage); \
	DECLARE_FUNCTION(execSetNowSpeaker);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_EVENT_PARMS \
	struct ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms \
	{ \
		FName MessageKey; \
		ECareerCutsceneMessageCastType eMessageCast; \
		ECareerCutsceneExtraInfo eExtraInfo; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerEventMessageWindowWidgetBase(); \
	friend struct Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCareerEventMessageWindowWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerEventMessageWindowWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerEventMessageWindowWidgetBase(); \
	friend struct Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELCareerEventMessageWindowWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerEventMessageWindowWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerEventMessageWindowWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerEventMessageWindowWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerEventMessageWindowWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerEventMessageWindowWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerEventMessageWindowWidgetBase(UELCareerEventMessageWindowWidgetBase&&); \
	NO_API UELCareerEventMessageWindowWidgetBase(const UELCareerEventMessageWindowWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerEventMessageWindowWidgetBase(UELCareerEventMessageWindowWidgetBase&&); \
	NO_API UELCareerEventMessageWindowWidgetBase(const UELCareerEventMessageWindowWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerEventMessageWindowWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerEventMessageWindowWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerEventMessageWindowWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerEventMessageWindowWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventMessageWindowWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
