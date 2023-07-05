// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ELITE_CORE_ELGameMode_generated_h
#error "ELGameMode.generated.h already included, missing '#pragma once' in ELGameMode.h"
#endif
#define ELITE_CORE_ELGameMode_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleGlobalInvalidation);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleGlobalInvalidation);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_EVENT_PARMS \
	struct ELGameMode_eventGetPauseMenuManagerActor_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameMode_eventGetPauseMenuManagerActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELGameMode(); \
	friend struct Z_Construct_UClass_AELGameMode_Statics; \
public: \
	DECLARE_CLASS(AELGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(AELGameMode)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELGameMode(); \
	friend struct Z_Construct_UClass_AELGameMode_Statics; \
public: \
	DECLARE_CLASS(AELGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(AELGameMode)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameMode(AELGameMode&&); \
	NO_API AELGameMode(const AELGameMode&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameMode(AELGameMode&&); \
	NO_API AELGameMode(const AELGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELGameMode)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_8_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class AELGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_ELGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
