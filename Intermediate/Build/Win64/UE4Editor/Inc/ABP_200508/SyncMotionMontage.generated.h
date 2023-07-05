// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class ACharacter;
class AActor;
class AELCharacter_Native;
enum class ESyncPosRotKind : uint8;
#ifdef ABP_200508_SyncMotionMontage_generated_h
#error "SyncMotionMontage.generated.h already included, missing '#pragma once' in SyncMotionMontage.h"
#endif
#define ABP_200508_SyncMotionMontage_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBasePointLocationAndRotation); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetSyncActor); \
	DECLARE_FUNCTION(execGetSyncActorIncludeSyncFinishedActor); \
	DECLARE_FUNCTION(execGetSyncActorNum); \
	DECLARE_FUNCTION(execGetSyncChar); \
	DECLARE_FUNCTION(execIsEnableSweep); \
	DECLARE_FUNCTION(execIsEnableSweepAfterSyncOff); \
	DECLARE_FUNCTION(execIsNoSyncRotation); \
	DECLARE_FUNCTION(execIsSyncOff); \
	DECLARE_FUNCTION(execIsUseCharacterHeight); \
	DECLARE_FUNCTION(execSetBasePointLocationAndRotation); \
	DECLARE_FUNCTION(execSetBasePointLocationTeleport); \
	DECLARE_FUNCTION(execSetEnableSweepAfterSyncOff); \
	DECLARE_FUNCTION(execSetEnableUpdateTransform); \
	DECLARE_FUNCTION(execSetSkipCollisionResetForDestroy); \
	DECLARE_FUNCTION(execSetSyncOff); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBasePointLocationAndRotation); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetSyncActor); \
	DECLARE_FUNCTION(execGetSyncActorIncludeSyncFinishedActor); \
	DECLARE_FUNCTION(execGetSyncActorNum); \
	DECLARE_FUNCTION(execGetSyncChar); \
	DECLARE_FUNCTION(execIsEnableSweep); \
	DECLARE_FUNCTION(execIsEnableSweepAfterSyncOff); \
	DECLARE_FUNCTION(execIsNoSyncRotation); \
	DECLARE_FUNCTION(execIsSyncOff); \
	DECLARE_FUNCTION(execIsUseCharacterHeight); \
	DECLARE_FUNCTION(execSetBasePointLocationAndRotation); \
	DECLARE_FUNCTION(execSetBasePointLocationTeleport); \
	DECLARE_FUNCTION(execSetEnableSweepAfterSyncOff); \
	DECLARE_FUNCTION(execSetEnableUpdateTransform); \
	DECLARE_FUNCTION(execSetSkipCollisionResetForDestroy); \
	DECLARE_FUNCTION(execSetSyncOff); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASyncMotionMontage(); \
	friend struct Z_Construct_UClass_ASyncMotionMontage_Statics; \
public: \
	DECLARE_CLASS(ASyncMotionMontage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ASyncMotionMontage)


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASyncMotionMontage(); \
	friend struct Z_Construct_UClass_ASyncMotionMontage_Statics; \
public: \
	DECLARE_CLASS(ASyncMotionMontage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(ASyncMotionMontage)


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASyncMotionMontage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASyncMotionMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASyncMotionMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASyncMotionMontage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASyncMotionMontage(ASyncMotionMontage&&); \
	NO_API ASyncMotionMontage(const ASyncMotionMontage&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASyncMotionMontage(ASyncMotionMontage&&); \
	NO_API ASyncMotionMontage(const ASyncMotionMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASyncMotionMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASyncMotionMontage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASyncMotionMontage)


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class ASyncMotionMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SyncMotionMontage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
