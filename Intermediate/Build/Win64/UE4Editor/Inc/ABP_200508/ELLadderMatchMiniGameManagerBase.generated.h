// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
class UELLadderMatchMiniGameHUDBase;
#ifdef ABP_200508_ELLadderMatchMiniGameManagerBase_generated_h
#error "ELLadderMatchMiniGameManagerBase.generated.h already included, missing '#pragma once' in ELLadderMatchMiniGameManagerBase.h"
#endif
#define ABP_200508_ELLadderMatchMiniGameManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHUDFinishedFailedAnim); \
	DECLARE_FUNCTION(execHUDFinishedSucceedAnim); \
	DECLARE_FUNCTION(execHUDFinishedUnlockAnim); \
	DECLARE_FUNCTION(execInitialize_N); \
	DECLARE_FUNCTION(execSetMiniGameHUD); \
	DECLARE_FUNCTION(execSetProgress);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHUDFinishedFailedAnim); \
	DECLARE_FUNCTION(execHUDFinishedSucceedAnim); \
	DECLARE_FUNCTION(execHUDFinishedUnlockAnim); \
	DECLARE_FUNCTION(execInitialize_N); \
	DECLARE_FUNCTION(execSetMiniGameHUD); \
	DECLARE_FUNCTION(execSetProgress);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_EVENT_PARMS \
	struct ELLadderMatchMiniGameManagerBase_eventOnProgressEvent_BP_Parms \
	{ \
		int32 Progress; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELLadderMatchMiniGameManagerBase(); \
	friend struct Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELLadderMatchMiniGameManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELLadderMatchMiniGameManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELLadderMatchMiniGameManagerBase(); \
	friend struct Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELLadderMatchMiniGameManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELLadderMatchMiniGameManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELLadderMatchMiniGameManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELLadderMatchMiniGameManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELLadderMatchMiniGameManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELLadderMatchMiniGameManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELLadderMatchMiniGameManagerBase(AELLadderMatchMiniGameManagerBase&&); \
	NO_API AELLadderMatchMiniGameManagerBase(const AELLadderMatchMiniGameManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELLadderMatchMiniGameManagerBase(AELLadderMatchMiniGameManagerBase&&); \
	NO_API AELLadderMatchMiniGameManagerBase(const AELLadderMatchMiniGameManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELLadderMatchMiniGameManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELLadderMatchMiniGameManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELLadderMatchMiniGameManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELLadderMatchMiniGameManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELLadderMatchMiniGameManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
