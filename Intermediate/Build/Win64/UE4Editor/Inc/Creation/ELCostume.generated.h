// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEditPartsSlot : uint8;
class UEditWrestlerPartsAsset;
class USkeletalMeshComponent;
class USkeletalMesh;
class UMaterialInterface;
class UMaterialInstanceDynamic;
enum class EBasicFindResult : uint8;
struct FEditPartsCategoryName;
struct FAttireParam;
struct FAttireData;
struct FEditPaintData;
struct FEditPartsData;
class UTexture;
struct FVector;
#ifdef CREATION_ELCostume_generated_h
#error "ELCostume.generated.h already included, missing '#pragma once' in ELCostume.h"
#endif
#define CREATION_ELCostume_generated_h

#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_RPC_WRAPPERS \
	virtual void GetMeshes_Implementation(TArray<USkeletalMeshComponent*>& List); \
	virtual void OnSetupAttire_Implementation(FAttireData const& AttireData); \
	virtual bool OnSetupPaint_Implementation(FEditPaintData const& EditPaintData); \
	virtual USkeletalMeshComponent* OnSetupParts_Implementation(const EEditPartsSlot Slot, FEditPartsData const& EditPartsData); \
	virtual USkeletalMeshComponent* OnUpdateParts_Implementation(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName); \
 \
	DECLARE_FUNCTION(execAddPartsAsset); \
	DECLARE_FUNCTION(execAddPartsMesh); \
	DECLARE_FUNCTION(execBindDynamicMaterial); \
	DECLARE_FUNCTION(execBindDynamicMaterials); \
	DECLARE_FUNCTION(execGetEyeMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execGetMeshes); \
	DECLARE_FUNCTION(execGetPartsMesh); \
	DECLARE_FUNCTION(execGetPartsMeshWithResult); \
	DECLARE_FUNCTION(execIsEquippedParts); \
	DECLARE_FUNCTION(execLoadAttireParam); \
	DECLARE_FUNCTION(execOnSetupAttire); \
	DECLARE_FUNCTION(execOnSetupPaint); \
	DECLARE_FUNCTION(execOnSetupParts); \
	DECLARE_FUNCTION(execOnUpdateParts); \
	DECLARE_FUNCTION(execRemovePartsMesh); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetMaterials); \
	DECLARE_FUNCTION(execSetAdjustSkinToneEnable); \
	DECLARE_FUNCTION(execSetMaterialSectionVisibility); \
	DECLARE_FUNCTION(execSetScalarParameter); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetupCostume); \
	DECLARE_FUNCTION(execSetupPartsMeshComponent); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execUnbindDynamicMaterials); \
	DECLARE_FUNCTION(execUpdateEyeColorParameter); \
	DECLARE_FUNCTION(execUpdateEyeHighlightParameter);


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetMeshes_Implementation(TArray<USkeletalMeshComponent*>& List); \
	virtual void OnSetupAttire_Implementation(FAttireData const& AttireData); \
	virtual bool OnSetupPaint_Implementation(FEditPaintData const& EditPaintData); \
	virtual USkeletalMeshComponent* OnSetupParts_Implementation(const EEditPartsSlot Slot, FEditPartsData const& EditPartsData); \
	virtual USkeletalMeshComponent* OnUpdateParts_Implementation(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName); \
 \
	DECLARE_FUNCTION(execAddPartsAsset); \
	DECLARE_FUNCTION(execAddPartsMesh); \
	DECLARE_FUNCTION(execBindDynamicMaterial); \
	DECLARE_FUNCTION(execBindDynamicMaterials); \
	DECLARE_FUNCTION(execGetEyeMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execGetMeshes); \
	DECLARE_FUNCTION(execGetPartsMesh); \
	DECLARE_FUNCTION(execGetPartsMeshWithResult); \
	DECLARE_FUNCTION(execIsEquippedParts); \
	DECLARE_FUNCTION(execLoadAttireParam); \
	DECLARE_FUNCTION(execOnSetupAttire); \
	DECLARE_FUNCTION(execOnSetupPaint); \
	DECLARE_FUNCTION(execOnSetupParts); \
	DECLARE_FUNCTION(execOnUpdateParts); \
	DECLARE_FUNCTION(execRemovePartsMesh); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetMaterials); \
	DECLARE_FUNCTION(execSetAdjustSkinToneEnable); \
	DECLARE_FUNCTION(execSetMaterialSectionVisibility); \
	DECLARE_FUNCTION(execSetScalarParameter); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetupCostume); \
	DECLARE_FUNCTION(execSetupPartsMeshComponent); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execUnbindDynamicMaterials); \
	DECLARE_FUNCTION(execUpdateEyeColorParameter); \
	DECLARE_FUNCTION(execUpdateEyeHighlightParameter);


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_EVENT_PARMS \
	struct ELCostume_eventGetMeshes_Parms \
	{ \
		TArray<USkeletalMeshComponent*> List; \
	}; \
	struct ELCostume_eventOnSetupAttire_Parms \
	{ \
		FAttireData AttireData; \
	}; \
	struct ELCostume_eventOnSetupPaint_Parms \
	{ \
		FEditPaintData EditPaintData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCostume_eventOnSetupPaint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELCostume_eventOnSetupParts_Parms \
	{ \
		EEditPartsSlot Slot; \
		FEditPartsData EditPartsData; \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCostume_eventOnSetupParts_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCostume_eventOnUpdateParts_Parms \
	{ \
		EEditPartsSlot Slot; \
		USkeletalMesh* NewMesh; \
		FName InSocketName; \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCostume_eventOnUpdateParts_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCostume(); \
	friend struct Z_Construct_UClass_UELCostume_Statics; \
public: \
	DECLARE_CLASS(UELCostume, UELCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELCostume)


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUELCostume(); \
	friend struct Z_Construct_UClass_UELCostume_Statics; \
public: \
	DECLARE_CLASS(UELCostume, UELCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Creation"), NO_API) \
	DECLARE_SERIALIZER(UELCostume)


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCostume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCostume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCostume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCostume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCostume(UELCostume&&); \
	NO_API UELCostume(const UELCostume&); \
public:


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCostume(UELCostume&&); \
	NO_API UELCostume(const UELCostume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCostume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCostume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCostume)


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExtraMeshes() { return STRUCT_OFFSET(UELCostume, ExtraMeshes); } \
	FORCEINLINE static uint32 __PPO__EquippedPartsCategorySet() { return STRUCT_OFFSET(UELCostume, EquippedPartsCategorySet); } \
	FORCEINLINE static uint32 __PPO__DynamicMaterials() { return STRUCT_OFFSET(UELCostume, DynamicMaterials); } \
	FORCEINLINE static uint32 __PPO__MaskMaterial() { return STRUCT_OFFSET(UELCostume, MaskMaterial); } \
	FORCEINLINE static uint32 __PPO__ForceHiddenMaterialSlotNames() { return STRUCT_OFFSET(UELCostume, ForceHiddenMaterialSlotNames); } \
	FORCEINLINE static uint32 __PPO__bCanSkinTone() { return STRUCT_OFFSET(UELCostume, bCanSkinTone); } \
	FORCEINLINE static uint32 __PPO__DefaultEyeHighlightLevel() { return STRUCT_OFFSET(UELCostume, DefaultEyeHighlightLevel); }


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_21_PROLOG \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_EVENT_PARMS


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_INCLASS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_Creation_Public_ELCostume_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CREATION_API UClass* StaticClass<class UELCostume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_Creation_Public_ELCostume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
