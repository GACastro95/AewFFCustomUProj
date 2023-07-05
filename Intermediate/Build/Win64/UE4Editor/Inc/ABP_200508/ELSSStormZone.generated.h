// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSStormSchedule;
struct FVector;
#ifdef ABP_200508_ELSSStormZone_generated_h
#error "ELSSStormZone.generated.h already included, missing '#pragma once' in ELSSStormZone.h"
#endif
#define ABP_200508_ELSSStormZone_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_RPC_WRAPPERS \
	virtual void AddSchedule_Implementation(FSSStormSchedule const& schedule); \
 \
	DECLARE_FUNCTION(execAddSchedule); \
	DECLARE_FUNCTION(execCalcDamageAreaSELocation); \
	DECLARE_FUNCTION(execCheckOutside); \
	DECLARE_FUNCTION(execGetLatestSchedulePhase); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execOnRep_CurrentSchedule); \
	DECLARE_FUNCTION(execOnRep_TimeSinceStart); \
	DECLARE_FUNCTION(execSetTimeSinceStart); \
	DECLARE_FUNCTION(execUpdateCurrentSchedule); \
	DECLARE_FUNCTION(execUpdateTransform);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddSchedule_Implementation(FSSStormSchedule const& schedule); \
 \
	DECLARE_FUNCTION(execAddSchedule); \
	DECLARE_FUNCTION(execCalcDamageAreaSELocation); \
	DECLARE_FUNCTION(execCheckOutside); \
	DECLARE_FUNCTION(execGetLatestSchedulePhase); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execOnRep_CurrentSchedule); \
	DECLARE_FUNCTION(execOnRep_TimeSinceStart); \
	DECLARE_FUNCTION(execSetTimeSinceStart); \
	DECLARE_FUNCTION(execUpdateCurrentSchedule); \
	DECLARE_FUNCTION(execUpdateTransform);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_EVENT_PARMS \
	struct ELSSStormZone_eventAddSchedule_Parms \
	{ \
		FSSStormSchedule schedule; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSStormZone(); \
	friend struct Z_Construct_UClass_AELSSStormZone_Statics; \
public: \
	DECLARE_CLASS(AELSSStormZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStormZone) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentSchedule=NETFIELD_REP_START, \
		timeSinceStart, \
		NETFIELD_REP_END=timeSinceStart	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELSSStormZone(); \
	friend struct Z_Construct_UClass_AELSSStormZone_Statics; \
public: \
	DECLARE_CLASS(AELSSStormZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStormZone) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentSchedule=NETFIELD_REP_START, \
		timeSinceStart, \
		NETFIELD_REP_END=timeSinceStart	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSStormZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSStormZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStormZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStormZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStormZone(AELSSStormZone&&); \
	NO_API AELSSStormZone(const AELSSStormZone&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStormZone(AELSSStormZone&&); \
	NO_API AELSSStormZone(const AELSSStormZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStormZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStormZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSStormZone)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(AELSSStormZone, Radius); } \
	FORCEINLINE static uint32 __PPO__currentSchedule() { return STRUCT_OFFSET(AELSSStormZone, currentSchedule); } \
	FORCEINLINE static uint32 __PPO__timeSinceStart() { return STRUCT_OFFSET(AELSSStormZone, timeSinceStart); } \
	FORCEINLINE static uint32 __PPO__schedules() { return STRUCT_OFFSET(AELSSStormZone, schedules); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSStormZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSStormZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
