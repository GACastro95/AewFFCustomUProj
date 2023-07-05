// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerActionSkillData;
struct FCareerParameterSkillData;
struct FCareerPassiveSkillData;
struct FCareerParameterSkillArray;
class UTexture2D;
enum class ECareerSkillState : uint8;
#ifdef ABP_200508_ELCareerSkillManager_generated_h
#error "ELCareerSkillManager.generated.h already included, missing '#pragma once' in ELCareerSkillManager.h"
#endif
#define ABP_200508_ELCareerSkillManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCareerActionSkillData); \
	DECLARE_FUNCTION(execAddCareerParameterSkillData); \
	DECLARE_FUNCTION(execAddCareerPassiveSkillData); \
	DECLARE_FUNCTION(execCheckOpenParameterSkill); \
	DECLARE_FUNCTION(execGetActionSkillStateList); \
	DECLARE_FUNCTION(execGetCareerActionSkillTableBase); \
	DECLARE_FUNCTION(execGetCareerParameterSkillTableBase); \
	DECLARE_FUNCTION(execGetCareerPassiveSkillTableBase); \
	DECLARE_FUNCTION(execGetDescriptionStringID); \
	DECLARE_FUNCTION(execGetParameterSkillLevel); \
	DECLARE_FUNCTION(execGetParameterSkillStateArrayList); \
	DECLARE_FUNCTION(execGetPassiveSkillStateList); \
	DECLARE_FUNCTION(execGetSkillCategory); \
	DECLARE_FUNCTION(execGetSkillImage); \
	DECLARE_FUNCTION(execGetSkillNameStringID); \
	DECLARE_FUNCTION(execGetSkillNo); \
	DECLARE_FUNCTION(execGetSkillSort); \
	DECLARE_FUNCTION(execGetSkillState); \
	DECLARE_FUNCTION(execGetSkillThumbnail); \
	DECLARE_FUNCTION(execGetSkillUsed); \
	DECLARE_FUNCTION(execGetUnlockCost); \
	DECLARE_FUNCTION(execLoadSkillManagerParam); \
	DECLARE_FUNCTION(execSaveWrestlerParam); \
	DECLARE_FUNCTION(execSetSkillCategory); \
	DECLARE_FUNCTION(execUnlockSkill);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCareerActionSkillData); \
	DECLARE_FUNCTION(execAddCareerParameterSkillData); \
	DECLARE_FUNCTION(execAddCareerPassiveSkillData); \
	DECLARE_FUNCTION(execCheckOpenParameterSkill); \
	DECLARE_FUNCTION(execGetActionSkillStateList); \
	DECLARE_FUNCTION(execGetCareerActionSkillTableBase); \
	DECLARE_FUNCTION(execGetCareerParameterSkillTableBase); \
	DECLARE_FUNCTION(execGetCareerPassiveSkillTableBase); \
	DECLARE_FUNCTION(execGetDescriptionStringID); \
	DECLARE_FUNCTION(execGetParameterSkillLevel); \
	DECLARE_FUNCTION(execGetParameterSkillStateArrayList); \
	DECLARE_FUNCTION(execGetPassiveSkillStateList); \
	DECLARE_FUNCTION(execGetSkillCategory); \
	DECLARE_FUNCTION(execGetSkillImage); \
	DECLARE_FUNCTION(execGetSkillNameStringID); \
	DECLARE_FUNCTION(execGetSkillNo); \
	DECLARE_FUNCTION(execGetSkillSort); \
	DECLARE_FUNCTION(execGetSkillState); \
	DECLARE_FUNCTION(execGetSkillThumbnail); \
	DECLARE_FUNCTION(execGetSkillUsed); \
	DECLARE_FUNCTION(execGetUnlockCost); \
	DECLARE_FUNCTION(execLoadSkillManagerParam); \
	DECLARE_FUNCTION(execSaveWrestlerParam); \
	DECLARE_FUNCTION(execSetSkillCategory); \
	DECLARE_FUNCTION(execUnlockSkill);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerSkillManager(); \
	friend struct Z_Construct_UClass_AELCareerSkillManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerSkillManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSkillManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerSkillManager(); \
	friend struct Z_Construct_UClass_AELCareerSkillManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerSkillManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSkillManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerSkillManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerSkillManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSkillManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSkillManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSkillManager(AELCareerSkillManager&&); \
	NO_API AELCareerSkillManager(const AELCareerSkillManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSkillManager(AELCareerSkillManager&&); \
	NO_API AELCareerSkillManager(const AELCareerSkillManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSkillManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSkillManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerSkillManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CareerParameterSkillTableBase() { return STRUCT_OFFSET(AELCareerSkillManager, m_CareerParameterSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_ParameterSkillState() { return STRUCT_OFFSET(AELCareerSkillManager, m_ParameterSkillState); } \
	FORCEINLINE static uint32 __PPO__m_CareerActionSkillTableBase() { return STRUCT_OFFSET(AELCareerSkillManager, m_CareerActionSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_ActionSkillState() { return STRUCT_OFFSET(AELCareerSkillManager, m_ActionSkillState); } \
	FORCEINLINE static uint32 __PPO__m_CareerPassiveSkillTableBase() { return STRUCT_OFFSET(AELCareerSkillManager, m_CareerPassiveSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_PassiveSkillState() { return STRUCT_OFFSET(AELCareerSkillManager, m_PassiveSkillState); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerSkillManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSkillManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
