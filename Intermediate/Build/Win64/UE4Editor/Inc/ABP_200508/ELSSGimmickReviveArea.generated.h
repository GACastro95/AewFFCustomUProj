// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ABP_200508_ELSSGimmickReviveArea_generated_h
#error "ELSSGimmickReviveArea.generated.h already included, missing '#pragma once' in ELSSGimmickReviveArea.h"
#endif
#define ABP_200508_ELSSGimmickReviveArea_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAreaBeginOverlap); \
	DECLARE_FUNCTION(execOnAreaEndOverlap);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAreaBeginOverlap); \
	DECLARE_FUNCTION(execOnAreaEndOverlap);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_EVENT_PARMS \
	struct ELSSGimmickReviveArea_eventUpdateRiveArea_Parms \
	{ \
		bool NewIsAnyOverlap; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGimmickReviveArea(); \
	friend struct Z_Construct_UClass_AELSSGimmickReviveArea_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickReviveArea, AELSSGimmickBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickReviveArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGimmickReviveArea(); \
	friend struct Z_Construct_UClass_AELSSGimmickReviveArea_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickReviveArea, AELSSGimmickBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickReviveArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGimmickReviveArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGimmickReviveArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickReviveArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickReviveArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickReviveArea(AELSSGimmickReviveArea&&); \
	NO_API AELSSGimmickReviveArea(const AELSSGimmickReviveArea&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickReviveArea(AELSSGimmickReviveArea&&); \
	NO_API AELSSGimmickReviveArea(const AELSSGimmickReviveArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickReviveArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickReviveArea); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSGimmickReviveArea)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaCollision() { return STRUCT_OFFSET(AELSSGimmickReviveArea, AreaCollision); } \
	FORCEINLINE static uint32 __PPO__RecoveryKoHPCycle() { return STRUCT_OFFSET(AELSSGimmickReviveArea, RecoveryKoHPCycle); } \
	FORCEINLINE static uint32 __PPO__RecoveryKoHPRate() { return STRUCT_OFFSET(AELSSGimmickReviveArea, RecoveryKoHPRate); } \
	FORCEINLINE static uint32 __PPO__ReviveHpRecoverPercent() { return STRUCT_OFFSET(AELSSGimmickReviveArea, ReviveHpRecoverPercent); } \
	FORCEINLINE static uint32 __PPO__OverlapPlayers() { return STRUCT_OFFSET(AELSSGimmickReviveArea, OverlapPlayers); } \
	FORCEINLINE static uint32 __PPO__isAnyOverlap() { return STRUCT_OFFSET(AELSSGimmickReviveArea, isAnyOverlap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGimmickReviveArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickReviveArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
