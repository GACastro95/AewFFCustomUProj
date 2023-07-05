// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESSHeatSkillCategory : uint8;
#ifdef ABP_200508_ELSSSaveDataUtility_generated_h
#error "ELSSSaveDataUtility.generated.h already included, missing '#pragma once' in ELSSSaveDataUtility.h"
#endif
#define ABP_200508_ELSSSaveDataUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyGameDataToSSModeSaveData); \
	DECLARE_FUNCTION(execCopySSModeSaveDataToGameData); \
	DECLARE_FUNCTION(execGetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execGetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execGetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execGetLoadoutPresetName); \
	DECLARE_FUNCTION(execGetLoadoutPresetNameMaxLength); \
	DECLARE_FUNCTION(execGetLoadoutPresetNum); \
	DECLARE_FUNCTION(execGetUsingLoadoutPresetFlag); \
	DECLARE_FUNCTION(execInitializeLoadoutSettings); \
	DECLARE_FUNCTION(execIsFinishedSetupSSModeSaveData); \
	DECLARE_FUNCTION(execResetSSModeSaveData); \
	DECLARE_FUNCTION(execSaveRequestSSModeSaveData); \
	DECLARE_FUNCTION(execSetDefaultLoadoutPresetName); \
	DECLARE_FUNCTION(execSetDefaultLoadoutPresetNameAll); \
	DECLARE_FUNCTION(execSetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execSetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execSetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execSetLoadoutPresetName); \
	DECLARE_FUNCTION(execSetupSSModeSaveData); \
	DECLARE_FUNCTION(execSetUsingLoadoutPresetFlag);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyGameDataToSSModeSaveData); \
	DECLARE_FUNCTION(execCopySSModeSaveDataToGameData); \
	DECLARE_FUNCTION(execGetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execGetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execGetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execGetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execGetLoadoutPresetName); \
	DECLARE_FUNCTION(execGetLoadoutPresetNameMaxLength); \
	DECLARE_FUNCTION(execGetLoadoutPresetNum); \
	DECLARE_FUNCTION(execGetUsingLoadoutPresetFlag); \
	DECLARE_FUNCTION(execInitializeLoadoutSettings); \
	DECLARE_FUNCTION(execIsFinishedSetupSSModeSaveData); \
	DECLARE_FUNCTION(execResetSSModeSaveData); \
	DECLARE_FUNCTION(execSaveRequestSSModeSaveData); \
	DECLARE_FUNCTION(execSetDefaultLoadoutPresetName); \
	DECLARE_FUNCTION(execSetDefaultLoadoutPresetNameAll); \
	DECLARE_FUNCTION(execSetLoadoutPresetAbility); \
	DECLARE_FUNCTION(execSetLoadoutPresetFinisherId); \
	DECLARE_FUNCTION(execSetLoadoutPresetHeatSkillTreeEquipFlag); \
	DECLARE_FUNCTION(execSetLoadoutPresetIndex); \
	DECLARE_FUNCTION(execSetLoadoutPresetName); \
	DECLARE_FUNCTION(execSetupSSModeSaveData); \
	DECLARE_FUNCTION(execSetUsingLoadoutPresetFlag);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSSaveDataUtility(); \
	friend struct Z_Construct_UClass_UELSSSaveDataUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSSaveDataUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSSaveDataUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSSaveDataUtility(); \
	friend struct Z_Construct_UClass_UELSSSaveDataUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSSaveDataUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSSaveDataUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSSaveDataUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSSaveDataUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSSaveDataUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSSaveDataUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSSaveDataUtility(UELSSSaveDataUtility&&); \
	NO_API UELSSSaveDataUtility(const UELSSSaveDataUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSSaveDataUtility(UELSSSaveDataUtility&&); \
	NO_API UELSSSaveDataUtility(const UELSSSaveDataUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSSaveDataUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSSaveDataUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSSaveDataUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSSaveDataUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSSaveDataUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
