// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELCareerPlayerStatus_generated_h
#error "ELCareerPlayerStatus.generated.h already included, missing '#pragma once' in ELCareerPlayerStatus.h"
#endif
#define ABP_200508_ELCareerPlayerStatus_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetEnergyRate); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetPPVLogoIndex); \
	DECLARE_FUNCTION(execGetSkillPoint); \
	DECLARE_FUNCTION(execGetTextMotivation); \
	DECLARE_FUNCTION(execGetTextRoadToPPV); \
	DECLARE_FUNCTION(execGetTextWeek); \
	DECLARE_FUNCTION(execIsInjury); \
	DECLARE_FUNCTION(execUpdateParameter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetEnergyRate); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetPPVLogoIndex); \
	DECLARE_FUNCTION(execGetSkillPoint); \
	DECLARE_FUNCTION(execGetTextMotivation); \
	DECLARE_FUNCTION(execGetTextRoadToPPV); \
	DECLARE_FUNCTION(execGetTextWeek); \
	DECLARE_FUNCTION(execIsInjury); \
	DECLARE_FUNCTION(execUpdateParameter);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_EVENT_PARMS \
	struct ELCareerPlayerStatus_eventUpdateFinisherBuff_Parms \
	{ \
		bool bFlag; \
	}; \
	struct ELCareerPlayerStatus_eventUpdateInjury_Parms \
	{ \
		bool Flag; \
	}; \
	struct ELCareerPlayerStatus_eventUpdateMomentumBuff_Parms \
	{ \
		bool bFlag; \
	}; \
	struct ELCareerPlayerStatus_eventUpdateSkillPointBuff_Parms \
	{ \
		bool bFlag; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerPlayerStatus(); \
	friend struct Z_Construct_UClass_UELCareerPlayerStatus_Statics; \
public: \
	DECLARE_CLASS(UELCareerPlayerStatus, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerPlayerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerPlayerStatus(); \
	friend struct Z_Construct_UClass_UELCareerPlayerStatus_Statics; \
public: \
	DECLARE_CLASS(UELCareerPlayerStatus, UELMenuWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerPlayerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerPlayerStatus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerPlayerStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerPlayerStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerPlayerStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerPlayerStatus(UELCareerPlayerStatus&&); \
	NO_API UELCareerPlayerStatus(const UELCareerPlayerStatus&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerPlayerStatus(UELCareerPlayerStatus&&); \
	NO_API UELCareerPlayerStatus(const UELCareerPlayerStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerPlayerStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerPlayerStatus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerPlayerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerPlayerStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPlayerStatus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
