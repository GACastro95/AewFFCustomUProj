// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef ABP_200508_ELWeaponFallMove_generated_h
#error "ELWeaponFallMove.generated.h already included, missing '#pragma once' in ELWeaponFallMove.h"
#endif
#define ABP_200508_ELWeaponFallMove_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeaponHeight); \
	DECLARE_FUNCTION(execIsEnableFootIKOnly);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponHeight); \
	DECLARE_FUNCTION(execIsEnableFootIKOnly);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_EVENT_PARMS \
	struct ELWeaponFallMove_eventBeginExcludedFromPlayerCollision_Parms \
	{ \
		AActor* HitActor; \
	}; \
	struct ELWeaponFallMove_eventGetFloorCollision_Parms \
	{ \
		bool IsOnOneFoot; \
		UPrimitiveComponent* ignoreComponent; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELWeaponFallMove(); \
	friend struct Z_Construct_UClass_AELWeaponFallMove_Statics; \
public: \
	DECLARE_CLASS(AELWeaponFallMove, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELWeaponFallMove)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELWeaponFallMove(); \
	friend struct Z_Construct_UClass_AELWeaponFallMove_Statics; \
public: \
	DECLARE_CLASS(AELWeaponFallMove, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELWeaponFallMove)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELWeaponFallMove(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELWeaponFallMove) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELWeaponFallMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELWeaponFallMove); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELWeaponFallMove(AELWeaponFallMove&&); \
	NO_API AELWeaponFallMove(const AELWeaponFallMove&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELWeaponFallMove(AELWeaponFallMove&&); \
	NO_API AELWeaponFallMove(const AELWeaponFallMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELWeaponFallMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELWeaponFallMove); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELWeaponFallMove)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponHeight() { return STRUCT_OFFSET(AELWeaponFallMove, WeaponHeight); } \
	FORCEINLINE static uint32 __PPO__bEnableFootIKOnly_N() { return STRUCT_OFFSET(AELWeaponFallMove, bEnableFootIKOnly_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELWeaponFallMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponFallMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
