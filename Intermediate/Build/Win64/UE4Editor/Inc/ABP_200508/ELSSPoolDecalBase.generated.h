// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDecalComponent;
struct FVector;
struct FRotator;
class USceneComponent;
#ifdef ABP_200508_ELSSPoolDecalBase_generated_h
#error "ELSSPoolDecalBase.generated.h already included, missing '#pragma once' in ELSSPoolDecalBase.h"
#endif
#define ABP_200508_ELSSPoolDecalBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_RPC_WRAPPERS \
	virtual UDecalComponent* PlayAtLocation_Implementation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan); \
	virtual void PlayAttached_Implementation(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan); \
 \
	DECLARE_FUNCTION(execGetDecalComponent); \
	DECLARE_FUNCTION(execPlayAtLocation); \
	DECLARE_FUNCTION(execPlayAttached);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UDecalComponent* PlayAtLocation_Implementation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan); \
	virtual void PlayAttached_Implementation(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan); \
 \
	DECLARE_FUNCTION(execGetDecalComponent); \
	DECLARE_FUNCTION(execPlayAtLocation); \
	DECLARE_FUNCTION(execPlayAttached);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_EVENT_PARMS \
	struct ELSSPoolDecalBase_eventPlayAtLocation_Parms \
	{ \
		FVector DecalSize; \
		FVector Location; \
		FRotator Rotation; \
		float LifeSpan; \
		UDecalComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPoolDecalBase_eventPlayAtLocation_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPoolDecalBase_eventPlayAttached_Parms \
	{ \
		FVector DecalSize; \
		USceneComponent* AttachToComponent; \
		FName AttachPointName; \
		FVector Location; \
		FRotator Rotation; \
		TEnumAsByte<EAttachLocation::Type> LocationType; \
		float LifeSpan; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSPoolDecalBase(); \
	friend struct Z_Construct_UClass_AELSSPoolDecalBase_Statics; \
public: \
	DECLARE_CLASS(AELSSPoolDecalBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPoolDecalBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPoolDecalBase*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAELSSPoolDecalBase(); \
	friend struct Z_Construct_UClass_AELSSPoolDecalBase_Statics; \
public: \
	DECLARE_CLASS(AELSSPoolDecalBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPoolDecalBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPoolDecalBase*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSPoolDecalBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSPoolDecalBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPoolDecalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPoolDecalBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPoolDecalBase(AELSSPoolDecalBase&&); \
	NO_API AELSSPoolDecalBase(const AELSSPoolDecalBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPoolDecalBase(AELSSPoolDecalBase&&); \
	NO_API AELSSPoolDecalBase(const AELSSPoolDecalBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPoolDecalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPoolDecalBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSPoolDecalBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecalComponent() { return STRUCT_OFFSET(AELSSPoolDecalBase, DecalComponent); } \
	FORCEINLINE static uint32 __PPO__RemainTime() { return STRUCT_OFFSET(AELSSPoolDecalBase, RemainTime); } \
	FORCEINLINE static uint32 __PPO__IsDisplay() { return STRUCT_OFFSET(AELSSPoolDecalBase, IsDisplay); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSPoolDecalBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPoolDecalBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
