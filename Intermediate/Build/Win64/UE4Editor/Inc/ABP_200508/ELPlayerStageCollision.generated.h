// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FTransform;
struct FHitResult;
#ifdef ABP_200508_ELPlayerStageCollision_generated_h
#error "ELPlayerStageCollision.generated.h already included, missing '#pragma once' in ELPlayerStageCollision.h"
#endif
#define ABP_200508_ELPlayerStageCollision_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_RPC_WRAPPERS \
	virtual bool IsAlreadyHit_Implementation(FName const& Tag); \
	virtual bool IsMyMovesStageCollisionValue_Implementation(); \
	virtual bool IsTargetMovesStageCollisionValue_Implementation(); \
 \
	DECLARE_FUNCTION(execIsAlreadyHit); \
	DECLARE_FUNCTION(execIsMyMovesStageCollisionValue); \
	DECLARE_FUNCTION(execIsTargetMovesStageCollisionValue); \
	DECLARE_FUNCTION(execMoveCapsule);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsAlreadyHit_Implementation(FName const& Tag); \
	virtual bool IsMyMovesStageCollisionValue_Implementation(); \
	virtual bool IsTargetMovesStageCollisionValue_Implementation(); \
 \
	DECLARE_FUNCTION(execIsAlreadyHit); \
	DECLARE_FUNCTION(execIsMyMovesStageCollisionValue); \
	DECLARE_FUNCTION(execIsTargetMovesStageCollisionValue); \
	DECLARE_FUNCTION(execMoveCapsule);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_EVENT_PARMS \
	struct ELPlayerStageCollision_eventIsAlreadyHit_Parms \
	{ \
		FName Tag; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELPlayerStageCollision_eventIsAlreadyHit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPlayerStageCollision(); \
	friend struct Z_Construct_UClass_UELPlayerStageCollision_Statics; \
public: \
	DECLARE_CLASS(UELPlayerStageCollision, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerStageCollision)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELPlayerStageCollision(); \
	friend struct Z_Construct_UClass_UELPlayerStageCollision_Statics; \
public: \
	DECLARE_CLASS(UELPlayerStageCollision, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerStageCollision)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPlayerStageCollision(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPlayerStageCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerStageCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerStageCollision); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerStageCollision(UELPlayerStageCollision&&); \
	NO_API UELPlayerStageCollision(const UELPlayerStageCollision&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerStageCollision(UELPlayerStageCollision&&); \
	NO_API UELPlayerStageCollision(const UELPlayerStageCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerStageCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerStageCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELPlayerStageCollision)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPlayerStageCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerStageCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
