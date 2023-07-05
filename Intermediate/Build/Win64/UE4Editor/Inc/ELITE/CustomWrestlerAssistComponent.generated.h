// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPreviewAttire : uint8;
enum class EEditTexTarget : uint8;
struct FEditPaintParam;
enum class EEditPartsSlot : uint8;
struct FEditPartsParam;
class UEditWrestlerPaintAsset;
class UEditWrestlerPartsAsset;
struct FEditPaintData;
struct FEditPartsData;
class UMyWrestlerDataObject;
class UTemplateScoutAsset;
enum class EScoutWrestlerTemplateOption : uint8;
enum class EBasicFunctionResult : uint8;
struct FAttireData;
struct FEditPartsCategoryDetails;
enum class EAttireType : uint8;
struct FNamedPresetParam;
struct FAttireParam;
struct FEditPersonParam;
enum class EFaceType : uint8;
enum class EGender : uint8;
enum class EBasicWrestlerIntParamType : uint8;
enum class EBasicFindResult : uint8;
struct FGuid;
enum class EWrestlerID_N : uint8;
struct FEditColorParam;
struct FEditColorPack;
struct FEditPartsCategoryName;
struct FEditPartsKey;
struct FIndexedColorList;
#ifdef ELITE_CustomWrestlerAssistComponent_generated_h
#error "CustomWrestlerAssistComponent.generated.h already included, missing '#pragma once' in CustomWrestlerAssistComponent.h"
#endif
#define ELITE_CustomWrestlerAssistComponent_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_RPC_WRAPPERS \
	virtual TSet<FEditPartsCategoryName> MakeIgnoreCategories_Implementation(const EWrestlerID_N WrestlerID, const EGender Gender); \
	virtual void OnCompleteAssetLoad_Implementation(); \
	virtual void OnFinishCustomize_Implementation(); \
	virtual void OnReset_Implementation(UMyWrestlerDataObject* NewData, const int32 PresetNo); \
	virtual void OnStartCustomize_Implementation(); \
 \
	DECLARE_FUNCTION(execAddEditPaintParam); \
	DECLARE_FUNCTION(execAddEditPartsParam); \
	DECLARE_FUNCTION(execAddLoadEditPaintsAsset); \
	DECLARE_FUNCTION(execAddLoadEditPartsAsset); \
	DECLARE_FUNCTION(execAddNewPreset); \
	DECLARE_FUNCTION(execAddPreviewPaintData); \
	DECLARE_FUNCTION(execAddPreviewPartsData); \
	DECLARE_FUNCTION(execApplyTemplateData); \
	DECLARE_FUNCTION(execCanEditStreetClothes); \
	DECLARE_FUNCTION(execCheckCompatiableImpl); \
	DECLARE_FUNCTION(execCheckFinishedAssetLoad); \
	DECLARE_FUNCTION(execCheckFinishLoadEditPaints); \
	DECLARE_FUNCTION(execCheckFinishLoadEditParts); \
	DECLARE_FUNCTION(execCheckModify); \
	DECLARE_FUNCTION(execClearAllLoadCue); \
	DECLARE_FUNCTION(execCopyAllAttire); \
	DECLARE_FUNCTION(execCopyAttire); \
	DECLARE_FUNCTION(execGetAllEquippedPartsIDs); \
	DECLARE_FUNCTION(execGetAssetCompatibleData); \
	DECLARE_FUNCTION(execGetCurrentAttireType); \
	DECLARE_FUNCTION(execGetCurrentPreset); \
	DECLARE_FUNCTION(execGetEditAttireParam); \
	DECLARE_FUNCTION(execGetEditPaintParam); \
	DECLARE_FUNCTION(execGetEditPartsParam); \
	DECLARE_FUNCTION(execGetEditPerson); \
	DECLARE_FUNCTION(execGetFaceType); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetNickName); \
	DECLARE_FUNCTION(execGetNickNameText); \
	DECLARE_FUNCTION(execGetPersonParam); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execGetPresetNames); \
	DECLARE_FUNCTION(execGetPreviewAttire); \
	DECLARE_FUNCTION(execGetPreviewAttireConst); \
	DECLARE_FUNCTION(execGetPreviewCoordinate); \
	DECLARE_FUNCTION(execGetPreviewPaintData); \
	DECLARE_FUNCTION(execGetPreviewPartsData); \
	DECLARE_FUNCTION(execGetShortName); \
	DECLARE_FUNCTION(execGetShortNameText); \
	DECLARE_FUNCTION(execGetSnsName); \
	DECLARE_FUNCTION(execGetSnsNameText); \
	DECLARE_FUNCTION(execGetTemporaryAttire); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execGetWrestlerNameText); \
	DECLARE_FUNCTION(execGetWrestlerProfilesTexts); \
	DECLARE_FUNCTION(execIsDisplayBirthday); \
	DECLARE_FUNCTION(execIsDisplayHeight); \
	DECLARE_FUNCTION(execIsDisplayHomeTown); \
	DECLARE_FUNCTION(execIsDisplayWeight); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execIsModify); \
	DECLARE_FUNCTION(execLoadEditPaintsAssets); \
	DECLARE_FUNCTION(execLoadEditPartsAssets); \
	DECLARE_FUNCTION(execMakeColorPacks); \
	DECLARE_FUNCTION(execMakeIgnoreCategories); \
	DECLARE_FUNCTION(execOnCompleteAssetLoad); \
	DECLARE_FUNCTION(execOnFinishCustomize); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStartCustomize); \
	DECLARE_FUNCTION(execPostLoad_EditPaintAsset); \
	DECLARE_FUNCTION(execPostLoad_EditPartsAsset); \
	DECLARE_FUNCTION(execRelocateFacialParts); \
	DECLARE_FUNCTION(execRemoveAttires); \
	DECLARE_FUNCTION(execRemoveEditPaintParam); \
	DECLARE_FUNCTION(execRemoveEditPartsParam); \
	DECLARE_FUNCTION(execRemovePreset); \
	DECLARE_FUNCTION(execRemovePreviewPaintData); \
	DECLARE_FUNCTION(execRemovePreviewPartsData); \
	DECLARE_FUNCTION(execResetModify); \
	DECLARE_FUNCTION(execResetPreviewAttire); \
	DECLARE_FUNCTION(execResetTemporaryAttire); \
	DECLARE_FUNCTION(execSearchFaceType); \
	DECLARE_FUNCTION(execSelectPreset); \
	DECLARE_FUNCTION(execSetCurrentAttireType); \
	DECLARE_FUNCTION(execSetNickName); \
	DECLARE_FUNCTION(execSetPersonParam); \
	DECLARE_FUNCTION(execSetPreset); \
	DECLARE_FUNCTION(execSetPreviewAttire); \
	DECLARE_FUNCTION(execSetPreviewBodyMode); \
	DECLARE_FUNCTION(execSetShortName); \
	DECLARE_FUNCTION(execSetSnsName); \
	DECLARE_FUNCTION(execSetWrestlerName); \
	DECLARE_FUNCTION(execUpdateAssetLoadingStatus); \
	DECLARE_FUNCTION(execUpdateIgnoreCategories); \
	DECLARE_FUNCTION(execUpdatePaintAttire); \
	DECLARE_FUNCTION(execUpdatePaintColor); \
	DECLARE_FUNCTION(execUpdatePaintColors); \
	DECLARE_FUNCTION(execUpdatePartsAttire); \
	DECLARE_FUNCTION(execUpdatePartsColor); \
	DECLARE_FUNCTION(execUpdatePartsColors); \
	DECLARE_FUNCTION(execUpdatePresetName); \
	DECLARE_FUNCTION(execUpdatePreviewPersonParam); \
	DECLARE_FUNCTION(execValidateFaceType);


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSet<FEditPartsCategoryName> MakeIgnoreCategories_Implementation(const EWrestlerID_N WrestlerID, const EGender Gender); \
	virtual void OnCompleteAssetLoad_Implementation(); \
	virtual void OnFinishCustomize_Implementation(); \
	virtual void OnReset_Implementation(UMyWrestlerDataObject* NewData, const int32 PresetNo); \
	virtual void OnStartCustomize_Implementation(); \
 \
	DECLARE_FUNCTION(execAddEditPaintParam); \
	DECLARE_FUNCTION(execAddEditPartsParam); \
	DECLARE_FUNCTION(execAddLoadEditPaintsAsset); \
	DECLARE_FUNCTION(execAddLoadEditPartsAsset); \
	DECLARE_FUNCTION(execAddNewPreset); \
	DECLARE_FUNCTION(execAddPreviewPaintData); \
	DECLARE_FUNCTION(execAddPreviewPartsData); \
	DECLARE_FUNCTION(execApplyTemplateData); \
	DECLARE_FUNCTION(execCanEditStreetClothes); \
	DECLARE_FUNCTION(execCheckCompatiableImpl); \
	DECLARE_FUNCTION(execCheckFinishedAssetLoad); \
	DECLARE_FUNCTION(execCheckFinishLoadEditPaints); \
	DECLARE_FUNCTION(execCheckFinishLoadEditParts); \
	DECLARE_FUNCTION(execCheckModify); \
	DECLARE_FUNCTION(execClearAllLoadCue); \
	DECLARE_FUNCTION(execCopyAllAttire); \
	DECLARE_FUNCTION(execCopyAttire); \
	DECLARE_FUNCTION(execGetAllEquippedPartsIDs); \
	DECLARE_FUNCTION(execGetAssetCompatibleData); \
	DECLARE_FUNCTION(execGetCurrentAttireType); \
	DECLARE_FUNCTION(execGetCurrentPreset); \
	DECLARE_FUNCTION(execGetEditAttireParam); \
	DECLARE_FUNCTION(execGetEditPaintParam); \
	DECLARE_FUNCTION(execGetEditPartsParam); \
	DECLARE_FUNCTION(execGetEditPerson); \
	DECLARE_FUNCTION(execGetFaceType); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetNickName); \
	DECLARE_FUNCTION(execGetNickNameText); \
	DECLARE_FUNCTION(execGetPersonParam); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execGetPresetNames); \
	DECLARE_FUNCTION(execGetPreviewAttire); \
	DECLARE_FUNCTION(execGetPreviewAttireConst); \
	DECLARE_FUNCTION(execGetPreviewCoordinate); \
	DECLARE_FUNCTION(execGetPreviewPaintData); \
	DECLARE_FUNCTION(execGetPreviewPartsData); \
	DECLARE_FUNCTION(execGetShortName); \
	DECLARE_FUNCTION(execGetShortNameText); \
	DECLARE_FUNCTION(execGetSnsName); \
	DECLARE_FUNCTION(execGetSnsNameText); \
	DECLARE_FUNCTION(execGetTemporaryAttire); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execGetWrestlerNameText); \
	DECLARE_FUNCTION(execGetWrestlerProfilesTexts); \
	DECLARE_FUNCTION(execIsDisplayBirthday); \
	DECLARE_FUNCTION(execIsDisplayHeight); \
	DECLARE_FUNCTION(execIsDisplayHomeTown); \
	DECLARE_FUNCTION(execIsDisplayWeight); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execIsModify); \
	DECLARE_FUNCTION(execLoadEditPaintsAssets); \
	DECLARE_FUNCTION(execLoadEditPartsAssets); \
	DECLARE_FUNCTION(execMakeColorPacks); \
	DECLARE_FUNCTION(execMakeIgnoreCategories); \
	DECLARE_FUNCTION(execOnCompleteAssetLoad); \
	DECLARE_FUNCTION(execOnFinishCustomize); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnStartCustomize); \
	DECLARE_FUNCTION(execPostLoad_EditPaintAsset); \
	DECLARE_FUNCTION(execPostLoad_EditPartsAsset); \
	DECLARE_FUNCTION(execRelocateFacialParts); \
	DECLARE_FUNCTION(execRemoveAttires); \
	DECLARE_FUNCTION(execRemoveEditPaintParam); \
	DECLARE_FUNCTION(execRemoveEditPartsParam); \
	DECLARE_FUNCTION(execRemovePreset); \
	DECLARE_FUNCTION(execRemovePreviewPaintData); \
	DECLARE_FUNCTION(execRemovePreviewPartsData); \
	DECLARE_FUNCTION(execResetModify); \
	DECLARE_FUNCTION(execResetPreviewAttire); \
	DECLARE_FUNCTION(execResetTemporaryAttire); \
	DECLARE_FUNCTION(execSearchFaceType); \
	DECLARE_FUNCTION(execSelectPreset); \
	DECLARE_FUNCTION(execSetCurrentAttireType); \
	DECLARE_FUNCTION(execSetNickName); \
	DECLARE_FUNCTION(execSetPersonParam); \
	DECLARE_FUNCTION(execSetPreset); \
	DECLARE_FUNCTION(execSetPreviewAttire); \
	DECLARE_FUNCTION(execSetPreviewBodyMode); \
	DECLARE_FUNCTION(execSetShortName); \
	DECLARE_FUNCTION(execSetSnsName); \
	DECLARE_FUNCTION(execSetWrestlerName); \
	DECLARE_FUNCTION(execUpdateAssetLoadingStatus); \
	DECLARE_FUNCTION(execUpdateIgnoreCategories); \
	DECLARE_FUNCTION(execUpdatePaintAttire); \
	DECLARE_FUNCTION(execUpdatePaintColor); \
	DECLARE_FUNCTION(execUpdatePaintColors); \
	DECLARE_FUNCTION(execUpdatePartsAttire); \
	DECLARE_FUNCTION(execUpdatePartsColor); \
	DECLARE_FUNCTION(execUpdatePartsColors); \
	DECLARE_FUNCTION(execUpdatePresetName); \
	DECLARE_FUNCTION(execUpdatePreviewPersonParam); \
	DECLARE_FUNCTION(execValidateFaceType);


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_EVENT_PARMS \
	struct CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms \
	{ \
		EWrestlerID_N WrestlerID; \
		EGender Gender; \
		TSet<FEditPartsCategoryName> ReturnValue; \
	}; \
	struct CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms \
	{ \
		EFaceType NewFaceType; \
		EFaceType PrevFaceType; \
		bool bPreview; \
	}; \
	struct CustomWrestlerAssistComponent_eventOnReset_Parms \
	{ \
		UMyWrestlerDataObject* NewData; \
		int32 PresetNo; \
	};


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomWrestlerAssistComponent(); \
	friend struct Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomWrestlerAssistComponent, UMyWrestlerDataEditComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UCustomWrestlerAssistComponent)


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUCustomWrestlerAssistComponent(); \
	friend struct Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomWrestlerAssistComponent, UMyWrestlerDataEditComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UCustomWrestlerAssistComponent)


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomWrestlerAssistComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomWrestlerAssistComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWrestlerAssistComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWrestlerAssistComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWrestlerAssistComponent(UCustomWrestlerAssistComponent&&); \
	NO_API UCustomWrestlerAssistComponent(const UCustomWrestlerAssistComponent&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWrestlerAssistComponent(UCustomWrestlerAssistComponent&&); \
	NO_API UCustomWrestlerAssistComponent(const UCustomWrestlerAssistComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWrestlerAssistComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWrestlerAssistComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCustomWrestlerAssistComponent)


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IgnoreCategory() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, IgnoreCategory); } \
	FORCEINLINE static uint32 __PPO__TemporaryAttire() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, TemporaryAttire); } \
	FORCEINLINE static uint32 __PPO__PreviewAttire() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewAttire); } \
	FORCEINLINE static uint32 __PPO__CurrentAttireType() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, CurrentAttireType); } \
	FORCEINLINE static uint32 __PPO__bPreviewBodyMode() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, bPreviewBodyMode); } \
	FORCEINLINE static uint32 __PPO__PreviewData() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewData); } \
	FORCEINLINE static uint32 __PPO__ActivePartsSlot() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, ActivePartsSlot); } \
	FORCEINLINE static uint32 __PPO__ExclusionParts() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, ExclusionParts); } \
	FORCEINLINE static uint32 __PPO__PreviewModel_Match() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Match); } \
	FORCEINLINE static uint32 __PPO__PreviewModel_Entrance() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Entrance); } \
	FORCEINLINE static uint32 __PPO__PreviewModel_Plain() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Plain); } \
	FORCEINLINE static uint32 __PPO__RosterPreviewCostume() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, RosterPreviewCostume); } \
	FORCEINLINE static uint32 __PPO__BodyPreviewAttire_Male() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, BodyPreviewAttire_Male); } \
	FORCEINLINE static uint32 __PPO__BodyPreviewAttire_Female() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, BodyPreviewAttire_Female); } \
	FORCEINLINE static uint32 __PPO__bAssetLoading() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, bAssetLoading); } \
	FORCEINLINE static uint32 __PPO__LoadingPartsCue() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, LoadingPartsCue); } \
	FORCEINLINE static uint32 __PPO__LoadingPaintCue() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, LoadingPaintCue); } \
	FORCEINLINE static uint32 __PPO__CachedAssets() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, CachedAssets); } \
	FORCEINLINE static uint32 __PPO__OriginalData() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, OriginalData); } \
	FORCEINLINE static uint32 __PPO__PoseTablePath() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, PoseTablePath); } \
	FORCEINLINE static uint32 __PPO__FightStyleTablePath() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, FightStyleTablePath); } \
	FORCEINLINE static uint32 __PPO__WeaponTablePath() { return STRUCT_OFFSET(UCustomWrestlerAssistComponent, WeaponTablePath); }


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_43_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UCustomWrestlerAssistComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_CustomWrestlerAssistComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
