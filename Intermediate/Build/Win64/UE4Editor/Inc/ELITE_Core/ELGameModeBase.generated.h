// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_ELGameModeBase_generated_h
#error "ELGameModeBase.generated.h already included, missing '#pragma once' in ELGameModeBase.h"
#endif
#define ELITE_CORE_ELGameModeBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_RPC_WRAPPERS \
	virtual bool CheckCanStartGame_Implementation() const; \
	virtual void OnInitialize_Implementation(); \
	virtual void OnStartGame_Implementation(); \
 \
	DECLARE_FUNCTION(execCheckCanStartGame); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execOnStartGame);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CheckCanStartGame_Implementation() const; \
	virtual void OnInitialize_Implementation(); \
	virtual void OnStartGame_Implementation(); \
 \
	DECLARE_FUNCTION(execCheckCanStartGame); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execOnStartGame);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_EVENT_PARMS \
	struct ELGameModeBase_eventCheckCanStartGame_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameModeBase_eventCheckCanStartGame_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELGameModeBase(); \
	friend struct Z_Construct_UClass_AELGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELGameModeBase(); \
	friend struct Z_Construct_UClass_AELGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AELGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(AELGameModeBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeBase(AELGameModeBase&&); \
	NO_API AELGameModeBase(const AELGameModeBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameModeBase(AELGameModeBase&&); \
	NO_API AELGameModeBase(const AELGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELGameModeBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bStartGame() { return STRUCT_OFFSET(AELGameModeBase, bStartGame); }


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class AELGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_ELGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
