// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UAnimMontage;
#ifdef ABP_200508_ELCareerAnimInstance_generated_h
#error "ELCareerAnimInstance.generated.h already included, missing '#pragma once' in ELCareerAnimInstance.h"
#endif
#define ABP_200508_ELCareerAnimInstance_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLookAtAlpha); \
	DECLARE_FUNCTION(execGetLookAtEyeAngleH); \
	DECLARE_FUNCTION(execGetLookAtEyeTargetVector); \
	DECLARE_FUNCTION(execGetLookAtFaceAngleV); \
	DECLARE_FUNCTION(execGetLookAtTargetLocation); \
	DECLARE_FUNCTION(execInitializeVariables); \
	DECLARE_FUNCTION(execIsCutScene); \
	DECLARE_FUNCTION(execIsEnableLookAt); \
	DECLARE_FUNCTION(execRequestEventAnimation); \
	DECLARE_FUNCTION(execRequestFacialAnimation); \
	DECLARE_FUNCTION(execRequestNoBlendAnimation); \
	DECLARE_FUNCTION(execRequestTalkAnimation); \
	DECLARE_FUNCTION(execResetAnimBlend); \
	DECLARE_FUNCTION(execUpdateVariables);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLookAtAlpha); \
	DECLARE_FUNCTION(execGetLookAtEyeAngleH); \
	DECLARE_FUNCTION(execGetLookAtEyeTargetVector); \
	DECLARE_FUNCTION(execGetLookAtFaceAngleV); \
	DECLARE_FUNCTION(execGetLookAtTargetLocation); \
	DECLARE_FUNCTION(execInitializeVariables); \
	DECLARE_FUNCTION(execIsCutScene); \
	DECLARE_FUNCTION(execIsEnableLookAt); \
	DECLARE_FUNCTION(execRequestEventAnimation); \
	DECLARE_FUNCTION(execRequestFacialAnimation); \
	DECLARE_FUNCTION(execRequestNoBlendAnimation); \
	DECLARE_FUNCTION(execRequestTalkAnimation); \
	DECLARE_FUNCTION(execResetAnimBlend); \
	DECLARE_FUNCTION(execUpdateVariables);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerAnimInstance(); \
	friend struct Z_Construct_UClass_UELCareerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UELCareerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerAnimInstance(); \
	friend struct Z_Construct_UClass_UELCareerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UELCareerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerAnimInstance(UELCareerAnimInstance&&); \
	NO_API UELCareerAnimInstance(const UELCareerAnimInstance&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerAnimInstance(UELCareerAnimInstance&&); \
	NO_API UELCareerAnimInstance(const UELCareerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerAnimInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strCurrentFacialAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentFacialAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strRequestFacialAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestFacialAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strCurrentTalkAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentTalkAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strRequestTalkAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestTalkAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strCurrentMenuAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentMenuAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strRequestMenuAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestMenuAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strCurrentEventAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentEventAnimation); } \
	FORCEINLINE static uint32 __PPO__m_strRequestEventAnimation() { return STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestEventAnimation); } \
	FORCEINLINE static uint32 __PPO__m_pTargetActor() { return STRUCT_OFFSET(UELCareerAnimInstance, m_pTargetActor); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
