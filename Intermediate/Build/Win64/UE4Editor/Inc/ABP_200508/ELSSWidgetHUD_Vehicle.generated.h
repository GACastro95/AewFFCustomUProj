// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSVehicleType : uint8;
class AActor;
struct FVector;
#ifdef ABP_200508_ELSSWidgetHUD_Vehicle_generated_h
#error "ELSSWidgetHUD_Vehicle.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_Vehicle.h"
#endif
#define ABP_200508_ELSSWidgetHUD_Vehicle_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVehicleDurability); \
	DECLARE_FUNCTION(execApplyVehicleGauge); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVehicleDurability); \
	DECLARE_FUNCTION(execApplyVehicleGauge); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Vehicle(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Vehicle, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Vehicle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_Vehicle(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_Vehicle, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_Vehicle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_Vehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_Vehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Vehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Vehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Vehicle(UELSSWidgetHUD_Vehicle&&); \
	NO_API UELSSWidgetHUD_Vehicle(const UELSSWidgetHUD_Vehicle&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_Vehicle(UELSSWidgetHUD_Vehicle&&); \
	NO_API UELSSWidgetHUD_Vehicle(const UELSSWidgetHUD_Vehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_Vehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_Vehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_Vehicle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, GaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__GaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, GaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__VehicleTextures() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleTextures); } \
	FORCEINLINE static uint32 __PPO__VehicleIconImage() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleIconImage); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, PlayerController); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Offset); } \
	FORCEINLINE static uint32 __PPO__DurableMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, DurableMaxValue); } \
	FORCEINLINE static uint32 __PPO__IdealDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, IdealDurableValue); } \
	FORCEINLINE static uint32 __PPO__VehicleDurability() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleDurability); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Duration); } \
	FORCEINLINE static uint32 __PPO__Elapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Elapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, IsCompleteDuration); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_Vehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_Vehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
