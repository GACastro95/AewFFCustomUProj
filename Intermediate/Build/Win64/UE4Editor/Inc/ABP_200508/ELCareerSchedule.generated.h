// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerSchedule;
enum class ECareerScenario : uint8;
enum class ECareerScenarioNo : uint8;
#ifdef ABP_200508_ELCareerSchedule_generated_h
#error "ELCareerSchedule.generated.h already included, missing '#pragma once' in ELCareerSchedule.h"
#endif
#define ABP_200508_ELCareerSchedule_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCareerScheduleData); \
	DECLARE_FUNCTION(execCareerInitSaveScheduleParam); \
	DECLARE_FUNCTION(execGetCareerScheduleTableBase); \
	DECLARE_FUNCTION(execGetCurrentScheduleData); \
	DECLARE_FUNCTION(execGetCurrentWeek); \
	DECLARE_FUNCTION(execGetPostCommandEventTableIndex); \
	DECLARE_FUNCTION(execGetProgressScenarioTurn); \
	DECLARE_FUNCTION(execGetScenario); \
	DECLARE_FUNCTION(execGetScheduleTurn); \
	DECLARE_FUNCTION(execGetScheduleTurnMax); \
	DECLARE_FUNCTION(execIsChangeScenario); \
	DECLARE_FUNCTION(execIsDynamite); \
	DECLARE_FUNCTION(execIsFirstWeekStart); \
	DECLARE_FUNCTION(execIsPrologue); \
	DECLARE_FUNCTION(execIsWeekStart); \
	DECLARE_FUNCTION(execSetScenario); \
	DECLARE_FUNCTION(execSetScenarioTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCareerScheduleData); \
	DECLARE_FUNCTION(execCareerInitSaveScheduleParam); \
	DECLARE_FUNCTION(execGetCareerScheduleTableBase); \
	DECLARE_FUNCTION(execGetCurrentScheduleData); \
	DECLARE_FUNCTION(execGetCurrentWeek); \
	DECLARE_FUNCTION(execGetPostCommandEventTableIndex); \
	DECLARE_FUNCTION(execGetProgressScenarioTurn); \
	DECLARE_FUNCTION(execGetScenario); \
	DECLARE_FUNCTION(execGetScheduleTurn); \
	DECLARE_FUNCTION(execGetScheduleTurnMax); \
	DECLARE_FUNCTION(execIsChangeScenario); \
	DECLARE_FUNCTION(execIsDynamite); \
	DECLARE_FUNCTION(execIsFirstWeekStart); \
	DECLARE_FUNCTION(execIsPrologue); \
	DECLARE_FUNCTION(execIsWeekStart); \
	DECLARE_FUNCTION(execSetScenario); \
	DECLARE_FUNCTION(execSetScenarioTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_EVENT_PARMS \
	struct ELCareerSchedule_eventSetupCareerPostCommandEventList_Parms \
	{ \
		ECareerScenarioNo eScenarioNo; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerSchedule(); \
	friend struct Z_Construct_UClass_AELCareerSchedule_Statics; \
public: \
	DECLARE_CLASS(AELCareerSchedule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSchedule)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerSchedule(); \
	friend struct Z_Construct_UClass_AELCareerSchedule_Statics; \
public: \
	DECLARE_CLASS(AELCareerSchedule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSchedule)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerSchedule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerSchedule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSchedule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSchedule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSchedule(AELCareerSchedule&&); \
	NO_API AELCareerSchedule(const AELCareerSchedule&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSchedule(AELCareerSchedule&&); \
	NO_API AELCareerSchedule(const AELCareerSchedule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSchedule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSchedule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerSchedule)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CareerScheduleTableBase() { return STRUCT_OFFSET(AELCareerSchedule, m_CareerScheduleTableBase); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerSchedule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSchedule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
