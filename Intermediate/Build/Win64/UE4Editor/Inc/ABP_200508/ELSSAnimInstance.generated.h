// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
enum class ESSUpperBodyAnimState : uint8;
#ifdef ABP_200508_ELSSAnimInstance_generated_h
#error "ELSSAnimInstance.generated.h already included, missing '#pragma once' in ELSSAnimInstance.h"
#endif
#define ABP_200508_ELSSAnimInstance_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckDisableNotifyMontage); \
	DECLARE_FUNCTION(execDisableNotifyMontage); \
	DECLARE_FUNCTION(execGetUpperBodyAnimAlpha); \
	DECLARE_FUNCTION(execIsEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execSetEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execSetUpperBodyAnimState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckDisableNotifyMontage); \
	DECLARE_FUNCTION(execDisableNotifyMontage); \
	DECLARE_FUNCTION(execGetUpperBodyAnimAlpha); \
	DECLARE_FUNCTION(execIsEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execSetEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execSetUpperBodyAnimState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSAnimInstance(); \
	friend struct Z_Construct_UClass_UELSSAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UELSSAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSAnimInstance(); \
	friend struct Z_Construct_UClass_UELSSAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UELSSAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSAnimInstance(UELSSAnimInstance&&); \
	NO_API UELSSAnimInstance(const UELSSAnimInstance&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSAnimInstance(UELSSAnimInstance&&); \
	NO_API UELSSAnimInstance(const UELSSAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__disableNotifyMontages() { return STRUCT_OFFSET(UELSSAnimInstance, disableNotifyMontages); } \
	FORCEINLINE static uint32 __PPO__UpperBodyAnimEnable() { return STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimEnable); } \
	FORCEINLINE static uint32 __PPO__UpperBodyAnimState() { return STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimState); } \
	FORCEINLINE static uint32 __PPO__UpperBodyAnimAlpha() { return STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimAlpha); } \
	FORCEINLINE static uint32 __PPO__UpperBodyAnimAlphaBlendTime() { return STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimAlphaBlendTime); } \
	FORCEINLINE static uint32 __PPO__bActiveUpperBodyAnim() { return STRUCT_OFFSET(UELSSAnimInstance, bActiveUpperBodyAnim); } \
	FORCEINLINE static uint32 __PPO__AimOffsetAlpha() { return STRUCT_OFFSET(UELSSAnimInstance, AimOffsetAlpha); } \
	FORCEINLINE static uint32 __PPO__GunAimOffsetYaw() { return STRUCT_OFFSET(UELSSAnimInstance, GunAimOffsetYaw); } \
	FORCEINLINE static uint32 __PPO__GunAimOffsetPitch() { return STRUCT_OFFSET(UELSSAnimInstance, GunAimOffsetPitch); } \
	FORCEINLINE static uint32 __PPO__bShouldSkipUpdateSubAnimInst() { return STRUCT_OFFSET(UELSSAnimInstance, bShouldSkipUpdateSubAnimInst); } \
	FORCEINLINE static uint32 __PPO__bShouldSkipUpdateFacialAnimInst() { return STRUCT_OFFSET(UELSSAnimInstance, bShouldSkipUpdateFacialAnimInst); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
