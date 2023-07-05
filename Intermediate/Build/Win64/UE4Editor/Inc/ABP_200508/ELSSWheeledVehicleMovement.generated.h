// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWheeledVehicleMovement_generated_h
#error "ELSSWheeledVehicleMovement.generated.h already included, missing '#pragma once' in ELSSWheeledVehicleMovement.h"
#endif
#define ABP_200508_ELSSWheeledVehicleMovement_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_RPC_WRAPPERS \
	virtual void ServerUpdateStateExtend_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear, float InRawThrottleInput); \
 \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetReplicatedRawThrottleInput); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execServerUpdateStateExtend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerUpdateStateExtend_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear, float InRawThrottleInput); \
 \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetReplicatedRawThrottleInput); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execServerUpdateStateExtend);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_EVENT_PARMS \
	struct ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms \
	{ \
		float InSteeringInput; \
		float InThrottleInput; \
		float InBrakeInput; \
		float InHandbrakeInput; \
		int32 CurrentGear; \
		float InRawThrottleInput; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWheeledVehicleMovement(); \
	friend struct Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics; \
public: \
	DECLARE_CLASS(UELSSWheeledVehicleMovement, UWheeledVehicleMovementComponent4W, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWheeledVehicleMovement) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedRawThrottleInput=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedRawThrottleInput	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWheeledVehicleMovement(); \
	friend struct Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics; \
public: \
	DECLARE_CLASS(UELSSWheeledVehicleMovement, UWheeledVehicleMovementComponent4W, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWheeledVehicleMovement) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedRawThrottleInput=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedRawThrottleInput	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWheeledVehicleMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWheeledVehicleMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWheeledVehicleMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWheeledVehicleMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWheeledVehicleMovement(UELSSWheeledVehicleMovement&&); \
	NO_API UELSSWheeledVehicleMovement(const UELSSWheeledVehicleMovement&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWheeledVehicleMovement(UELSSWheeledVehicleMovement&&); \
	NO_API UELSSWheeledVehicleMovement(const UELSSWheeledVehicleMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWheeledVehicleMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWheeledVehicleMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWheeledVehicleMovement)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedRawThrottleInput() { return STRUCT_OFFSET(UELSSWheeledVehicleMovement, ReplicatedRawThrottleInput); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWheeledVehicleMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWheeledVehicleMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
