// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ELBarricade_generated_h
#error "ELBarricade.generated.h already included, missing '#pragma once' in ELBarricade.h"
#endif
#define ELITE_GAME_ELBarricade_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_EVENT_PARMS \
	struct ELBarricade_eventIsConditionImpl_Fallendown_Parms \
	{ \
		bool Out_IsFallendown; \
	}; \
	struct ELBarricade_eventIsConditionImpl_LittleDiagonal_Parms \
	{ \
		bool Out_IsDiagonal; \
	}; \
	struct ELBarricade_eventIsConditionImpl_Normal_Parms \
	{ \
		bool Out_IsNormal; \
	}; \
	struct ELBarricade_eventIsEnableClimbUseImpl_Parms \
	{ \
		bool Out_IsEnable; \
	};


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELBarricade(); \
	friend struct Z_Construct_UClass_AELBarricade_Statics; \
public: \
	DECLARE_CLASS(AELBarricade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(AELBarricade)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELBarricade(); \
	friend struct Z_Construct_UClass_AELBarricade_Statics; \
public: \
	DECLARE_CLASS(AELBarricade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(AELBarricade)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELBarricade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELBarricade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELBarricade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELBarricade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELBarricade(AELBarricade&&); \
	NO_API AELBarricade(const AELBarricade&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELBarricade(AELBarricade&&); \
	NO_API AELBarricade(const AELBarricade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELBarricade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELBarricade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELBarricade)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class AELBarricade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELBarricade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
