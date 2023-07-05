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
struct FSSAbilityParam;
class AELSSOutGameDatabase;
class UTexture2D;
struct FSSHeatSkillParam;
struct FSSMenuFinisherParam;
struct FSSMoveParam;
enum class EWrestlerID_N : uint8;
struct FSSWrestlerParam;
enum class ESSWrestlerType : uint8;
struct FSSWrestlerTypeParam;
#ifdef ABP_200508_ELSSOutGameParamUtility_generated_h
#error "ELSSOutGameParamUtility.generated.h already included, missing '#pragma once' in ELSSOutGameParamUtility.h"
#endif
#define ABP_200508_ELSSOutGameParamUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetSSOutGameAbilityParam); \
	DECLARE_FUNCTION(execGetSSOutGameDatabase); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillParam); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamArray); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamById); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamByIndex); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamCount); \
	DECLARE_FUNCTION(execGetSSOutGameMoveParamById); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetSSOutGameAbilityParam); \
	DECLARE_FUNCTION(execGetSSOutGameDatabase); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetSSOutGameHeatSkillParam); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamArray); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamById); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamByIndex); \
	DECLARE_FUNCTION(execGetSSOutGameMenuFinisherParamCount); \
	DECLARE_FUNCTION(execGetSSOutGameMoveParamById); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSOutGameParamUtility(); \
	friend struct Z_Construct_UClass_UELSSOutGameParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSOutGameParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSOutGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELSSOutGameParamUtility(); \
	friend struct Z_Construct_UClass_UELSSOutGameParamUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSOutGameParamUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSOutGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSOutGameParamUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSOutGameParamUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSOutGameParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSOutGameParamUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSOutGameParamUtility(UELSSOutGameParamUtility&&); \
	NO_API UELSSOutGameParamUtility(const UELSSOutGameParamUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSOutGameParamUtility(UELSSOutGameParamUtility&&); \
	NO_API UELSSOutGameParamUtility(const UELSSOutGameParamUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSOutGameParamUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSOutGameParamUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSOutGameParamUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSOutGameParamUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameParamUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
