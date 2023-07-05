// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSFadeManager_generated_h
#error "ELSSFadeManager.generated.h already included, missing '#pragma once' in ELSSFadeManager.h"
#endif
#define ABP_200508_ELSSFadeManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_EVENT_PARMS \
	struct ELSSFadeManager_eventCreateSimpleFade_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventCreateSimpleFade_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSFadeManager_eventDestroySimpleFade_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventDestroySimpleFade_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSFadeManager_eventGetSimpleFadeState_Parms \
	{ \
		bool outIsFadeIn; \
		bool outFadeCompleted; \
	}; \
	struct ELSSFadeManager_eventIsDoneSimpleFade_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventIsDoneSimpleFade_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSFadeManager_eventSimpleFadeIn_Parms \
	{ \
		float InDuration; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventSimpleFadeIn_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSFadeManager_eventSimpleFadeOut_Parms \
	{ \
		float InDuration; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventSimpleFadeOut_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSFadeManager_eventSimpleFadeReady_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFadeManager_eventSimpleFadeReady_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSFadeManager(); \
	friend struct Z_Construct_UClass_AELSSFadeManager_Statics; \
public: \
	DECLARE_CLASS(AELSSFadeManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSFadeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELSSFadeManager(); \
	friend struct Z_Construct_UClass_AELSSFadeManager_Statics; \
public: \
	DECLARE_CLASS(AELSSFadeManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSFadeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSFadeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSFadeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSFadeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSFadeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSFadeManager(AELSSFadeManager&&); \
	NO_API AELSSFadeManager(const AELSSFadeManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSFadeManager(AELSSFadeManager&&); \
	NO_API AELSSFadeManager(const AELSSFadeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSFadeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSFadeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSFadeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SimpleFadeTime() { return STRUCT_OFFSET(AELSSFadeManager, SimpleFadeTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSFadeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSFadeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
