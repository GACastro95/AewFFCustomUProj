// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EWrestlerDataGamePlayFlag : uint8;
struct FRosterInfoParam;
class UMyWrestlerDataObject;
struct FGuid;
struct FEditWrestlerParam;
struct FPresetParam;
struct FBodyAdjustParam;
struct FAttireParam;
struct FELWrestlerProfile_CutScene;
enum class EFaceType : uint8;
struct FHomeTownID;
class UTexture;
struct FWrestlerMoves;
struct FPersonalityParam;
enum class EBasicWrestlerIntParamType : uint8;
struct FWrestlingSkillParam;
struct FWrestlerNameText;
struct FWrestlerSetupParam;
struct FELWrestlerNameProfileParam;
struct FNamedPresetParam;
struct FCostumeParam;
struct FEditBodyParam;
enum class EGender : uint8;
class UTextureRenderTarget2D;
#ifdef ABP_200508_MyWrestlerDataObject_generated_h
#error "MyWrestlerDataObject.generated.h already included, missing '#pragma once' in MyWrestlerDataObject.h"
#endif
#define ABP_200508_MyWrestlerDataObject_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_40_DELEGATE \
struct MyWrestlerDataObject_eventOnChangedValue_Parms \
{ \
	UObject* Object; \
}; \
static inline void FOnChangedValue_DelegateWrapper(const FMulticastScriptDelegate& OnChangedValue, UObject* Object) \
{ \
	MyWrestlerDataObject_eventOnChangedValue_Parms Parms; \
	Parms.Object=Object; \
	OnChangedValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGamePlayFlag); \
	DECLARE_FUNCTION(execAddPreset); \
	DECLARE_FUNCTION(execCanAddPreset); \
	DECLARE_FUNCTION(execCanEditStreetClothes); \
	DECLARE_FUNCTION(execChangeOuter); \
	DECLARE_FUNCTION(execCheckAvailablePresetNum); \
	DECLARE_FUNCTION(execClearGamePlayStatus); \
	DECLARE_FUNCTION(execCreateDefaultRosterDataObject); \
	DECLARE_FUNCTION(execCreateNewWrestlerDataObject); \
	DECLARE_FUNCTION(execCreateScoutWrestlerDataObject); \
	DECLARE_FUNCTION(execExportJson); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execFinalizeBodyParam); \
	DECLARE_FUNCTION(execFindPresetByName); \
	DECLARE_FUNCTION(execFindPresetIndex); \
	DECLARE_FUNCTION(execGetAdjustBodyParam); \
	DECLARE_FUNCTION(execGetBirthDay); \
	DECLARE_FUNCTION(execGetBirthDayText); \
	DECLARE_FUNCTION(execGetCloneObject); \
	DECLARE_FUNCTION(execGetDefaultAttire); \
	DECLARE_FUNCTION(execGetDefaultPresetNo); \
	DECLARE_FUNCTION(execGetEntranceParam); \
	DECLARE_FUNCTION(execGetFaceType); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetHeightRatio); \
	DECLARE_FUNCTION(execGetHeightText); \
	DECLARE_FUNCTION(execGetHomeTown); \
	DECLARE_FUNCTION(execGetMatchupPose); \
	DECLARE_FUNCTION(execGetMatchupTexture); \
	DECLARE_FUNCTION(execGetMovesParam); \
	DECLARE_FUNCTION(execGetMuscleRatio); \
	DECLARE_FUNCTION(execGetNickNameText); \
	DECLARE_FUNCTION(execGetPersonalityParam); \
	DECLARE_FUNCTION(execGetPersonParam); \
	DECLARE_FUNCTION(execGetPresetByIndex); \
	DECLARE_FUNCTION(execGetPresetByName); \
	DECLARE_FUNCTION(execGetPresetIndexByName); \
	DECLARE_FUNCTION(execGetPresetName); \
	DECLARE_FUNCTION(execGetPresetNameList); \
	DECLARE_FUNCTION(execGetPresetNum); \
	DECLARE_FUNCTION(execGetRosterMatchAttireIDList); \
	DECLARE_FUNCTION(execGetRosterPlainAttireIDList); \
	DECLARE_FUNCTION(execGetShortNameText); \
	DECLARE_FUNCTION(execGetSkillParam); \
	DECLARE_FUNCTION(execGetSnsNameText); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetWeightRatio); \
	DECLARE_FUNCTION(execGetWeightText); \
	DECLARE_FUNCTION(execGetWrestlerMultilineNameText); \
	DECLARE_FUNCTION(execGetWrestlerNameParam); \
	DECLARE_FUNCTION(execGetWrestlerNameText); \
	DECLARE_FUNCTION(execHasGamePlayFlag); \
	DECLARE_FUNCTION(execImportFromSetupData); \
	DECLARE_FUNCTION(execImportPersonInfoData); \
	DECLARE_FUNCTION(execImportWrestlerNameByELWrestler); \
	DECLARE_FUNCTION(execInitPresets); \
	DECLARE_FUNCTION(execInitRosterPlainAttire); \
	DECLARE_FUNCTION(execInitScoutPlainAttire); \
	DECLARE_FUNCTION(execIsDisplayBirthday); \
	DECLARE_FUNCTION(execIsDisplayHeight); \
	DECLARE_FUNCTION(execIsDisplayHomeTown); \
	DECLARE_FUNCTION(execIsDisplayWeight); \
	DECLARE_FUNCTION(execMakeBodyParam); \
	DECLARE_FUNCTION(execMakeWrestlerSetupParam); \
	DECLARE_FUNCTION(execReleaseMatchupTexture); \
	DECLARE_FUNCTION(execRemoveGamePlayFlag); \
	DECLARE_FUNCTION(execRemovePreset); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetDefaultScout); \
	DECLARE_FUNCTION(execSetDefaultAttire); \
	DECLARE_FUNCTION(execSetDefaultPresetNo); \
	DECLARE_FUNCTION(execSetEntranceParam); \
	DECLARE_FUNCTION(execSetHomeTown); \
	DECLARE_FUNCTION(execSetMatchupPose); \
	DECLARE_FUNCTION(execSetMatchupThumb); \
	DECLARE_FUNCTION(execSetMovesParam); \
	DECLARE_FUNCTION(execSetPersonalityParam); \
	DECLARE_FUNCTION(execSetPersonParam); \
	DECLARE_FUNCTION(execSetPresetName); \
	DECLARE_FUNCTION(execSetSkillParam); \
	DECLARE_FUNCTION(execUpdatePreset);


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGamePlayFlag); \
	DECLARE_FUNCTION(execAddPreset); \
	DECLARE_FUNCTION(execCanAddPreset); \
	DECLARE_FUNCTION(execCanEditStreetClothes); \
	DECLARE_FUNCTION(execChangeOuter); \
	DECLARE_FUNCTION(execCheckAvailablePresetNum); \
	DECLARE_FUNCTION(execClearGamePlayStatus); \
	DECLARE_FUNCTION(execCreateDefaultRosterDataObject); \
	DECLARE_FUNCTION(execCreateNewWrestlerDataObject); \
	DECLARE_FUNCTION(execCreateScoutWrestlerDataObject); \
	DECLARE_FUNCTION(execExportJson); \
	DECLARE_FUNCTION(execFinalize); \
	DECLARE_FUNCTION(execFinalizeBodyParam); \
	DECLARE_FUNCTION(execFindPresetByName); \
	DECLARE_FUNCTION(execFindPresetIndex); \
	DECLARE_FUNCTION(execGetAdjustBodyParam); \
	DECLARE_FUNCTION(execGetBirthDay); \
	DECLARE_FUNCTION(execGetBirthDayText); \
	DECLARE_FUNCTION(execGetCloneObject); \
	DECLARE_FUNCTION(execGetDefaultAttire); \
	DECLARE_FUNCTION(execGetDefaultPresetNo); \
	DECLARE_FUNCTION(execGetEntranceParam); \
	DECLARE_FUNCTION(execGetFaceType); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetHeightRatio); \
	DECLARE_FUNCTION(execGetHeightText); \
	DECLARE_FUNCTION(execGetHomeTown); \
	DECLARE_FUNCTION(execGetMatchupPose); \
	DECLARE_FUNCTION(execGetMatchupTexture); \
	DECLARE_FUNCTION(execGetMovesParam); \
	DECLARE_FUNCTION(execGetMuscleRatio); \
	DECLARE_FUNCTION(execGetNickNameText); \
	DECLARE_FUNCTION(execGetPersonalityParam); \
	DECLARE_FUNCTION(execGetPersonParam); \
	DECLARE_FUNCTION(execGetPresetByIndex); \
	DECLARE_FUNCTION(execGetPresetByName); \
	DECLARE_FUNCTION(execGetPresetIndexByName); \
	DECLARE_FUNCTION(execGetPresetName); \
	DECLARE_FUNCTION(execGetPresetNameList); \
	DECLARE_FUNCTION(execGetPresetNum); \
	DECLARE_FUNCTION(execGetRosterMatchAttireIDList); \
	DECLARE_FUNCTION(execGetRosterPlainAttireIDList); \
	DECLARE_FUNCTION(execGetShortNameText); \
	DECLARE_FUNCTION(execGetSkillParam); \
	DECLARE_FUNCTION(execGetSnsNameText); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetWeightRatio); \
	DECLARE_FUNCTION(execGetWeightText); \
	DECLARE_FUNCTION(execGetWrestlerMultilineNameText); \
	DECLARE_FUNCTION(execGetWrestlerNameParam); \
	DECLARE_FUNCTION(execGetWrestlerNameText); \
	DECLARE_FUNCTION(execHasGamePlayFlag); \
	DECLARE_FUNCTION(execImportFromSetupData); \
	DECLARE_FUNCTION(execImportPersonInfoData); \
	DECLARE_FUNCTION(execImportWrestlerNameByELWrestler); \
	DECLARE_FUNCTION(execInitPresets); \
	DECLARE_FUNCTION(execInitRosterPlainAttire); \
	DECLARE_FUNCTION(execInitScoutPlainAttire); \
	DECLARE_FUNCTION(execIsDisplayBirthday); \
	DECLARE_FUNCTION(execIsDisplayHeight); \
	DECLARE_FUNCTION(execIsDisplayHomeTown); \
	DECLARE_FUNCTION(execIsDisplayWeight); \
	DECLARE_FUNCTION(execMakeBodyParam); \
	DECLARE_FUNCTION(execMakeWrestlerSetupParam); \
	DECLARE_FUNCTION(execReleaseMatchupTexture); \
	DECLARE_FUNCTION(execRemoveGamePlayFlag); \
	DECLARE_FUNCTION(execRemovePreset); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetDefaultScout); \
	DECLARE_FUNCTION(execSetDefaultAttire); \
	DECLARE_FUNCTION(execSetDefaultPresetNo); \
	DECLARE_FUNCTION(execSetEntranceParam); \
	DECLARE_FUNCTION(execSetHomeTown); \
	DECLARE_FUNCTION(execSetMatchupPose); \
	DECLARE_FUNCTION(execSetMatchupThumb); \
	DECLARE_FUNCTION(execSetMovesParam); \
	DECLARE_FUNCTION(execSetPersonalityParam); \
	DECLARE_FUNCTION(execSetPersonParam); \
	DECLARE_FUNCTION(execSetPresetName); \
	DECLARE_FUNCTION(execSetSkillParam); \
	DECLARE_FUNCTION(execUpdatePreset);


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyWrestlerDataObject(); \
	friend struct Z_Construct_UClass_UMyWrestlerDataObject_Statics; \
public: \
	DECLARE_CLASS(UMyWrestlerDataObject, UWrestlerDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMyWrestlerDataObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMyWrestlerDataObject(); \
	friend struct Z_Construct_UClass_UMyWrestlerDataObject_Statics; \
public: \
	DECLARE_CLASS(UMyWrestlerDataObject, UWrestlerDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMyWrestlerDataObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyWrestlerDataObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyWrestlerDataObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyWrestlerDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyWrestlerDataObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyWrestlerDataObject(UMyWrestlerDataObject&&); \
	NO_API UMyWrestlerDataObject(const UMyWrestlerDataObject&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyWrestlerDataObject(UMyWrestlerDataObject&&); \
	NO_API UMyWrestlerDataObject(const UMyWrestlerDataObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyWrestlerDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyWrestlerDataObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyWrestlerDataObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PresetUnlockID() { return STRUCT_OFFSET(UMyWrestlerDataObject, PresetUnlockID); } \
	FORCEINLINE static uint32 __PPO__ScoutPlainAttire() { return STRUCT_OFFSET(UMyWrestlerDataObject, ScoutPlainAttire); } \
	FORCEINLINE static uint32 __PPO__RosterPlainAttire() { return STRUCT_OFFSET(UMyWrestlerDataObject, RosterPlainAttire); } \
	FORCEINLINE static uint32 __PPO__MatchUpTexture() { return STRUCT_OFFSET(UMyWrestlerDataObject, MatchUpTexture); } \
	FORCEINLINE static uint32 __PPO__MatchUpTex() { return STRUCT_OFFSET(UMyWrestlerDataObject, MatchUpTex); } \
	FORCEINLINE static uint32 __PPO__GamePlayFlags() { return STRUCT_OFFSET(UMyWrestlerDataObject, GamePlayFlags); } \
	FORCEINLINE static uint32 __PPO__MatchRecordsWrestlerInfo() { return STRUCT_OFFSET(UMyWrestlerDataObject, MatchRecordsWrestlerInfo); }


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_36_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UMyWrestlerDataObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MyWrestlerDataObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
