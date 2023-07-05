// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSVehicleType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_VehicleStatus_generated_h
#error "ELSSWidgetHUD_VehicleStatus.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_VehicleStatus.h"
#endif
#define ABP_200508_ELSSWidgetHUD_VehicleStatus_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVehicleDurability); \
	DECLARE_FUNCTION(execApplyVehicleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVehicleDurability); \
	DECLARE_FUNCTION(execApplyVehicleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_VehicleStatus(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_VehicleStatus_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_VehicleStatus, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_VehicleStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_VehicleStatus(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_VehicleStatus_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_VehicleStatus, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_VehicleStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_VehicleStatus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_VehicleStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_VehicleStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_VehicleStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_VehicleStatus(UELSSWidgetHUD_VehicleStatus&&); \
	NO_API UELSSWidgetHUD_VehicleStatus(const UELSSWidgetHUD_VehicleStatus&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_VehicleStatus(UELSSWidgetHUD_VehicleStatus&&); \
	NO_API UELSSWidgetHUD_VehicleStatus(const UELSSWidgetHUD_VehicleStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_VehicleStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_VehicleStatus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_VehicleStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, GaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__GaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, GaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__VehicleTextures() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, VehicleTextures); } \
	FORCEINLINE static uint32 __PPO__VehicleIconImage() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, VehicleIconImage); } \
	FORCEINLINE static uint32 __PPO__LayoutWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, LayoutWidget); } \
	FORCEINLINE static uint32 __PPO__DurableMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, DurableMaxValue); } \
	FORCEINLINE static uint32 __PPO__IdealDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, IdealDurableValue); } \
	FORCEINLINE static uint32 __PPO__VehicleDurability() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, VehicleDurability); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, Duration); } \
	FORCEINLINE static uint32 __PPO__Elapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, Elapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, IsCompleteDuration); } \
	FORCEINLINE static uint32 __PPO__IsShowGauge() { return STRUCT_OFFSET(UELSSWidgetHUD_VehicleStatus, IsShowGauge); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_VehicleStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_VehicleStatus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
