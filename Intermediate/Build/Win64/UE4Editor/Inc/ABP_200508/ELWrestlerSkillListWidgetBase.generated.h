// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FELWrestlerSkill_Action;
enum class ECareerSkillState : uint8;
class UTexture2D;
struct FELWrestlerSkill_Parameter;
enum class ECareerSkillLevelState : uint8;
struct FELWrestlerSkill_Passive;
#ifdef ABP_200508_ELWrestlerSkillListWidgetBase_generated_h
#error "ELWrestlerSkillListWidgetBase.generated.h already included, missing '#pragma once' in ELWrestlerSkillListWidgetBase.h"
#endif
#define ABP_200508_ELWrestlerSkillListWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActionSkill_ItemParam); \
	DECLARE_FUNCTION(execGetCareerMenuText); \
	DECLARE_FUNCTION(execGetCareerSkillText); \
	DECLARE_FUNCTION(execGetCareerSkillTextFromLocalizeKey); \
	DECLARE_FUNCTION(execGetParameterSkill_ItemParam); \
	DECLARE_FUNCTION(execGetPassiveSkill_ItemParam); \
	DECLARE_FUNCTION(execSetupSkillData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionSkill_ItemParam); \
	DECLARE_FUNCTION(execGetCareerMenuText); \
	DECLARE_FUNCTION(execGetCareerSkillText); \
	DECLARE_FUNCTION(execGetCareerSkillTextFromLocalizeKey); \
	DECLARE_FUNCTION(execGetParameterSkill_ItemParam); \
	DECLARE_FUNCTION(execGetPassiveSkill_ItemParam); \
	DECLARE_FUNCTION(execSetupSkillData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELWrestlerSkillListWidgetBase(); \
	friend struct Z_Construct_UClass_UELWrestlerSkillListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELWrestlerSkillListWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELWrestlerSkillListWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELWrestlerSkillListWidgetBase(); \
	friend struct Z_Construct_UClass_UELWrestlerSkillListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELWrestlerSkillListWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELWrestlerSkillListWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELWrestlerSkillListWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELWrestlerSkillListWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELWrestlerSkillListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELWrestlerSkillListWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELWrestlerSkillListWidgetBase(UELWrestlerSkillListWidgetBase&&); \
	NO_API UELWrestlerSkillListWidgetBase(const UELWrestlerSkillListWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELWrestlerSkillListWidgetBase(UELWrestlerSkillListWidgetBase&&); \
	NO_API UELWrestlerSkillListWidgetBase(const UELWrestlerSkillListWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELWrestlerSkillListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELWrestlerSkillListWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELWrestlerSkillListWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ActionSkillTableBase() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_ActionSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_PassiveSkillTableBase() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_PassiveSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_ParameterSkillTableBase() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_ParameterSkillTableBase); } \
	FORCEINLINE static uint32 __PPO__m_MenuTextTableMapBase() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_MenuTextTableMapBase); } \
	FORCEINLINE static uint32 __PPO__m_SkillTextTableMapBase() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_SkillTextTableMapBase); } \
	FORCEINLINE static uint32 __PPO__m_SkillLocalizeTextTable() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_SkillLocalizeTextTable); } \
	FORCEINLINE static uint32 __PPO__m_CareerSkillManagerPtr() { return STRUCT_OFFSET(UELWrestlerSkillListWidgetBase, m_CareerSkillManagerPtr); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELWrestlerSkillListWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELWrestlerSkillListWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
