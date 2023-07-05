// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerStartInfo : uint8;
enum class ECareerModeDifficulty : uint8;
struct FGuid;
enum class EWrestlerID_N : uint8;
enum class ECareerOtherMenu : uint8;
enum class ECareerOtherMenuExit : uint8;
enum class EPersonalityType : uint8;
#ifdef ABP_200508_ELCareerDelivery_generated_h
#error "ELCareerDelivery.generated.h already included, missing '#pragma once' in ELCareerDelivery.h"
#endif
#define ABP_200508_ELCareerDelivery_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCareerStartInfo); \
	DECLARE_FUNCTION(execGetDecisionDifficulty); \
	DECLARE_FUNCTION(execGetDecisionDispTutorialDialog); \
	DECLARE_FUNCTION(execGetDecisionPresetNo); \
	DECLARE_FUNCTION(execGetDecisionSubtitles); \
	DECLARE_FUNCTION(execGetDecisionVegetarian); \
	DECLARE_FUNCTION(execGetDecisionWrestlerGUID); \
	DECLARE_FUNCTION(execGetDecisionWrestlerID); \
	DECLARE_FUNCTION(execGetOtherMenu); \
	DECLARE_FUNCTION(execGetOtherMenuExit); \
	DECLARE_FUNCTION(execGetPersonalityType); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetCareerStartInfo); \
	DECLARE_FUNCTION(execSetDecisionDifficulty); \
	DECLARE_FUNCTION(execSetDecisionDispTutorialDialog); \
	DECLARE_FUNCTION(execSetDecisionPresetNo); \
	DECLARE_FUNCTION(execSetDecisionSubtitles); \
	DECLARE_FUNCTION(execSetDecisionVegetarian); \
	DECLARE_FUNCTION(execSetDecisionWrestlerGUID); \
	DECLARE_FUNCTION(execSetDecisionWrestlerID); \
	DECLARE_FUNCTION(execSetOtherMenu); \
	DECLARE_FUNCTION(execSetPersonalityType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCareerStartInfo); \
	DECLARE_FUNCTION(execGetDecisionDifficulty); \
	DECLARE_FUNCTION(execGetDecisionDispTutorialDialog); \
	DECLARE_FUNCTION(execGetDecisionPresetNo); \
	DECLARE_FUNCTION(execGetDecisionSubtitles); \
	DECLARE_FUNCTION(execGetDecisionVegetarian); \
	DECLARE_FUNCTION(execGetDecisionWrestlerGUID); \
	DECLARE_FUNCTION(execGetDecisionWrestlerID); \
	DECLARE_FUNCTION(execGetOtherMenu); \
	DECLARE_FUNCTION(execGetOtherMenuExit); \
	DECLARE_FUNCTION(execGetPersonalityType); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSetCareerStartInfo); \
	DECLARE_FUNCTION(execSetDecisionDifficulty); \
	DECLARE_FUNCTION(execSetDecisionDispTutorialDialog); \
	DECLARE_FUNCTION(execSetDecisionPresetNo); \
	DECLARE_FUNCTION(execSetDecisionSubtitles); \
	DECLARE_FUNCTION(execSetDecisionVegetarian); \
	DECLARE_FUNCTION(execSetDecisionWrestlerGUID); \
	DECLARE_FUNCTION(execSetDecisionWrestlerID); \
	DECLARE_FUNCTION(execSetOtherMenu); \
	DECLARE_FUNCTION(execSetPersonalityType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerDelivery(); \
	friend struct Z_Construct_UClass_UELCareerDelivery_Statics; \
public: \
	DECLARE_CLASS(UELCareerDelivery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerDelivery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerDelivery(); \
	friend struct Z_Construct_UClass_UELCareerDelivery_Statics; \
public: \
	DECLARE_CLASS(UELCareerDelivery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerDelivery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerDelivery(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerDelivery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerDelivery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerDelivery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerDelivery(UELCareerDelivery&&); \
	NO_API UELCareerDelivery(const UELCareerDelivery&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerDelivery(UELCareerDelivery&&); \
	NO_API UELCareerDelivery(const UELCareerDelivery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerDelivery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerDelivery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerDelivery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerDelivery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerDelivery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
