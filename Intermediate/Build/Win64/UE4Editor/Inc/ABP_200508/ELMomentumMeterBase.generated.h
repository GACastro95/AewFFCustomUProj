// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEliteMeterStateType_N : uint8;
class AELCharacter_Native;
enum class ESeesawBuffType_N : uint8;
enum class ESpecialMovesType : uint8;
#ifdef ABP_200508_ELMomentumMeterBase_generated_h
#error "ELMomentumMeterBase.generated.h already included, missing '#pragma once' in ELMomentumMeterBase.h"
#endif
#define ABP_200508_ELMomentumMeterBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeterPercent_N); \
	DECLARE_FUNCTION(execGetMeterRate_N); \
	DECLARE_FUNCTION(execGetMeterValue_N); \
	DECLARE_FUNCTION(execGetRemoveSec_N); \
	DECLARE_FUNCTION(execGetState_N); \
	DECLARE_FUNCTION(execIsDangerState_N); \
	DECLARE_FUNCTION(execIsExciteState_N); \
	DECLARE_FUNCTION(execIsRemoveState_N); \
	DECLARE_FUNCTION(execIsSpecialState_N); \
	DECLARE_FUNCTION(execSetParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeterPercent_N); \
	DECLARE_FUNCTION(execGetMeterRate_N); \
	DECLARE_FUNCTION(execGetMeterValue_N); \
	DECLARE_FUNCTION(execGetRemoveSec_N); \
	DECLARE_FUNCTION(execGetState_N); \
	DECLARE_FUNCTION(execIsDangerState_N); \
	DECLARE_FUNCTION(execIsExciteState_N); \
	DECLARE_FUNCTION(execIsRemoveState_N); \
	DECLARE_FUNCTION(execIsSpecialState_N); \
	DECLARE_FUNCTION(execSetParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_EVENT_PARMS \
	struct ELMomentumMeterBase_eventAddMeterValue_Impl_Parms \
	{ \
		float Value; \
		bool Direct; \
	}; \
	struct ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms \
	{ \
		float DeltaTime; \
		AELCharacter_Native* Chara; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMomentumMeterBase_eventGetFixAddValueForNavigationState_Impl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELMomentumMeterBase_eventMomentumStock_Impl_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMomentumMeterBase_eventMomentumStock_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELMomentumMeterBase_eventSetMeterPercent_Impl_Parms \
	{ \
		float Percent; \
		bool WithFeedback; \
	}; \
	struct ELMomentumMeterBase_eventSetSeesawBuff_Impl_Parms \
	{ \
		AELCharacter_Native* Chara; \
		ESeesawBuffType_N NewBuffType; \
	}; \
	struct ELMomentumMeterBase_eventSubMeterValue_Impl_Parms \
	{ \
		float Value; \
		bool Direct; \
		ESpecialMovesType RecieveSpecialDamageType; \
		bool RemoveMode; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMomentumMeterBase(); \
	friend struct Z_Construct_UClass_UELMomentumMeterBase_Statics; \
public: \
	DECLARE_CLASS(UELMomentumMeterBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMomentumMeterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExciteState=NETFIELD_REP_START, \
		bSpecialState, \
		bDangerState, \
		EliteMeterState_N, \
		UnlimitedState_N, \
		RemoveState_N, \
		NETFIELD_REP_END=RemoveState_N	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELMomentumMeterBase(); \
	friend struct Z_Construct_UClass_UELMomentumMeterBase_Statics; \
public: \
	DECLARE_CLASS(UELMomentumMeterBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMomentumMeterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExciteState=NETFIELD_REP_START, \
		bSpecialState, \
		bDangerState, \
		EliteMeterState_N, \
		UnlimitedState_N, \
		RemoveState_N, \
		NETFIELD_REP_END=RemoveState_N	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMomentumMeterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMomentumMeterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMomentumMeterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMomentumMeterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMomentumMeterBase(UELMomentumMeterBase&&); \
	NO_API UELMomentumMeterBase(const UELMomentumMeterBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMomentumMeterBase(UELMomentumMeterBase&&); \
	NO_API UELMomentumMeterBase(const UELMomentumMeterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMomentumMeterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMomentumMeterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELMomentumMeterBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeterValue_N() { return STRUCT_OFFSET(UELMomentumMeterBase, MeterValue_N); } \
	FORCEINLINE static uint32 __PPO__MeterDefaultValue_N() { return STRUCT_OFFSET(UELMomentumMeterBase, MeterDefaultValue_N); } \
	FORCEINLINE static uint32 __PPO__bExciteState() { return STRUCT_OFFSET(UELMomentumMeterBase, bExciteState); } \
	FORCEINLINE static uint32 __PPO__bSpecialState() { return STRUCT_OFFSET(UELMomentumMeterBase, bSpecialState); } \
	FORCEINLINE static uint32 __PPO__bDangerState() { return STRUCT_OFFSET(UELMomentumMeterBase, bDangerState); } \
	FORCEINLINE static uint32 __PPO__EliteMeterState_N() { return STRUCT_OFFSET(UELMomentumMeterBase, EliteMeterState_N); } \
	FORCEINLINE static uint32 __PPO__UnlimitedState_N() { return STRUCT_OFFSET(UELMomentumMeterBase, UnlimitedState_N); } \
	FORCEINLINE static uint32 __PPO__RemoveState_N() { return STRUCT_OFFSET(UELMomentumMeterBase, RemoveState_N); } \
	FORCEINLINE static uint32 __PPO__RemoveSec_N() { return STRUCT_OFFSET(UELMomentumMeterBase, RemoveSec_N); } \
	FORCEINLINE static uint32 __PPO__RemoveValue_N() { return STRUCT_OFFSET(UELMomentumMeterBase, RemoveValue_N); } \
	FORCEINLINE static uint32 __PPO__RemoveEndPercent_N() { return STRUCT_OFFSET(UELMomentumMeterBase, RemoveEndPercent_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMomentumMeterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMomentumMeterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
