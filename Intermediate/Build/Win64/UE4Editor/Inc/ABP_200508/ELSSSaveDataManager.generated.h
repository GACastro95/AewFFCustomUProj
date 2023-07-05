// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSHeatSkillCategory : uint8;
struct FSSPlayerEquipSettings;
#ifdef ABP_200508_ELSSSaveDataManager_generated_h
#error "ELSSSaveDataManager.generated.h already included, missing '#pragma once' in ELSSSaveDataManager.h"
#endif
#define ABP_200508_ELSSSaveDataManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertJsonTest); \
	DECLARE_FUNCTION(execGetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execGetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkill); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillSetting); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execGetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execGetLoadoutPresetName); \
	DECLARE_FUNCTION(execGetLoadoutPresetNameMaxLength); \
	DECLARE_FUNCTION(execGetLoadoutPresetNum); \
	DECLARE_FUNCTION(execGetSSPlayerEquipSettingsFromSaveData); \
	DECLARE_FUNCTION(execSetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execSetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkill); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillSetting); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execSetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execSetLoadoutPresetName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertJsonTest); \
	DECLARE_FUNCTION(execGetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execGetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkill); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillSetting); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execGetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execGetLoadoutPresetName); \
	DECLARE_FUNCTION(execGetLoadoutPresetNameMaxLength); \
	DECLARE_FUNCTION(execGetLoadoutPresetNum); \
	DECLARE_FUNCTION(execGetSSPlayerEquipSettingsFromSaveData); \
	DECLARE_FUNCTION(execSetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execSetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkill); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillSetting); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execSetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execSetLoadoutPresetName);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSSaveDataManager(); \
	friend struct Z_Construct_UClass_AELSSSaveDataManager_Statics; \
public: \
	DECLARE_CLASS(AELSSSaveDataManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSaveDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSSaveDataManager(); \
	friend struct Z_Construct_UClass_AELSSSaveDataManager_Statics; \
public: \
	DECLARE_CLASS(AELSSSaveDataManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSSaveDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSSaveDataManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSSaveDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSaveDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSaveDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSaveDataManager(AELSSSaveDataManager&&); \
	NO_API AELSSSaveDataManager(const AELSSSaveDataManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSSaveDataManager(AELSSSaveDataManager&&); \
	NO_API AELSSSaveDataManager(const AELSSSaveDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSSaveDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSSaveDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSSaveDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadoutSettingsDummy() { return STRUCT_OFFSET(AELSSSaveDataManager, LoadoutSettingsDummy); } \
	FORCEINLINE static uint32 __PPO__WrestlerSettingsDummy() { return STRUCT_OFFSET(AELSSSaveDataManager, WrestlerSettingsDummy); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSSaveDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
