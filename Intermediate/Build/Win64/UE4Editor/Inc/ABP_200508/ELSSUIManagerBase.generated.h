// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELSSUIManagerHandle;
class UObject;
class UELSSPanelBase;
class APlayerController;
class AELSSPlayer;
#ifdef ABP_200508_ELSSUIManagerBase_generated_h
#error "ELSSUIManagerBase.generated.h already included, missing '#pragma once' in ELSSUIManagerBase.h"
#endif
#define ABP_200508_ELSSUIManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execCreateFromHandle); \
	DECLARE_FUNCTION(execCreateFromUI); \
	DECLARE_FUNCTION(execCreateImmediate); \
	DECLARE_FUNCTION(execDump); \
	DECLARE_FUNCTION(execDumpHandleInfo); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsLoadComplete); \
	DECLARE_FUNCTION(execLoadAsync); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execUnload);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheck); \
	DECLARE_FUNCTION(execCreateFromHandle); \
	DECLARE_FUNCTION(execCreateFromUI); \
	DECLARE_FUNCTION(execCreateImmediate); \
	DECLARE_FUNCTION(execDump); \
	DECLARE_FUNCTION(execDumpHandleInfo); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsLoadComplete); \
	DECLARE_FUNCTION(execLoadAsync); \
	DECLARE_FUNCTION(execSetPlayerController); \
	DECLARE_FUNCTION(execUnload);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_EVENT_PARMS \
	struct ELSSUIManagerBase_eventOpenVictoryroyaleNamePlate_Parms \
	{ \
		AELSSPlayer* inPlayer; \
		int32 InChampionNum; \
		FString InRingName; \
		FString InGamerTag; \
	}; \
	struct ELSSUIManagerBase_eventSetLoadingScreen_Parms \
	{ \
		bool IsOpen; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSUIManagerBase(); \
	friend struct Z_Construct_UClass_AELSSUIManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELSSUIManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSUIManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAELSSUIManagerBase(); \
	friend struct Z_Construct_UClass_AELSSUIManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELSSUIManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSUIManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSUIManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSUIManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSUIManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSUIManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSUIManagerBase(AELSSUIManagerBase&&); \
	NO_API AELSSUIManagerBase(const AELSSUIManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSUIManagerBase(AELSSUIManagerBase&&); \
	NO_API AELSSUIManagerBase(const AELSSUIManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSUIManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSUIManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSUIManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HandleList() { return STRUCT_OFFSET(AELSSUIManagerBase, HandleList); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(AELSSUIManagerBase, PlayerController); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSUIManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSUIManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
