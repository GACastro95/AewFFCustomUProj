// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UTexture;
struct FTransform;
#ifdef ABP_200508_ELWeaponModelCaptureManagerBase_generated_h
#error "ELWeaponModelCaptureManagerBase.generated.h already included, missing '#pragma once' in ELWeaponModelCaptureManagerBase.h"
#endif
#define ABP_200508_ELWeaponModelCaptureManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_EVENT_PARMS \
	struct ELWeaponModelCaptureManagerBase_eventOnAttachWeaponDecal_Parms \
	{ \
		FLinearColor InColor; \
		UTexture* InTexture; \
		UTexture* InSymbolTexture; \
	}; \
	struct ELWeaponModelCaptureManagerBase_eventOnChangeValidSceneCapture_Parms \
	{ \
		bool IsValid; \
	}; \
	struct ELWeaponModelCaptureManagerBase_eventOnCreateWeaponModel_Parms \
	{ \
		int32 inWeaponId; \
		bool InIsSSWeapon; \
		FTransform InTransform; \
	}; \
	struct ELWeaponModelCaptureManagerBase_eventOnForceRecreateDebugWeapon_Parms \
	{ \
		FTransform OffsetTransform; \
	}; \
	struct ELWeaponModelCaptureManagerBase_eventOnRotaionWeaponModel_Parms \
	{ \
		float AddRotaion; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELWeaponModelCaptureManagerBase(); \
	friend struct Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELWeaponModelCaptureManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELWeaponModelCaptureManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELWeaponModelCaptureManagerBase(); \
	friend struct Z_Construct_UClass_AELWeaponModelCaptureManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELWeaponModelCaptureManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELWeaponModelCaptureManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELWeaponModelCaptureManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELWeaponModelCaptureManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELWeaponModelCaptureManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELWeaponModelCaptureManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELWeaponModelCaptureManagerBase(AELWeaponModelCaptureManagerBase&&); \
	NO_API AELWeaponModelCaptureManagerBase(const AELWeaponModelCaptureManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELWeaponModelCaptureManagerBase(AELWeaponModelCaptureManagerBase&&); \
	NO_API AELWeaponModelCaptureManagerBase(const AELWeaponModelCaptureManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELWeaponModelCaptureManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELWeaponModelCaptureManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELWeaponModelCaptureManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELWeaponModelCaptureManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELWeaponModelCaptureManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
