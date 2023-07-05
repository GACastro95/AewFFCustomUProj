// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
#ifdef ABP_200508_ELCareerAssetLoadBase_generated_h
#error "ELCareerAssetLoadBase.generated.h already included, missing '#pragma once' in ELCareerAssetLoadBase.h"
#endif
#define ABP_200508_ELCareerAssetLoadBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAsset_CareerMenu); \
	DECLARE_FUNCTION(execLoadAsset_Event); \
	DECLARE_FUNCTION(execSetDataTable_EventAnimation); \
	DECLARE_FUNCTION(execSetDataTable_FacialAnimation); \
	DECLARE_FUNCTION(execSetDataTable_MenuAnimation); \
	DECLARE_FUNCTION(execSetDataTable_Prop); \
	DECLARE_FUNCTION(execSetDataTable_PropAnimation); \
	DECLARE_FUNCTION(execSetDataTable_TalkAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAsset_CareerMenu); \
	DECLARE_FUNCTION(execLoadAsset_Event); \
	DECLARE_FUNCTION(execSetDataTable_EventAnimation); \
	DECLARE_FUNCTION(execSetDataTable_FacialAnimation); \
	DECLARE_FUNCTION(execSetDataTable_MenuAnimation); \
	DECLARE_FUNCTION(execSetDataTable_Prop); \
	DECLARE_FUNCTION(execSetDataTable_PropAnimation); \
	DECLARE_FUNCTION(execSetDataTable_TalkAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerAssetLoadBase(); \
	friend struct Z_Construct_UClass_AELCareerAssetLoadBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerAssetLoadBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerAssetLoadBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerAssetLoadBase(); \
	friend struct Z_Construct_UClass_AELCareerAssetLoadBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerAssetLoadBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerAssetLoadBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerAssetLoadBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerAssetLoadBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerAssetLoadBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerAssetLoadBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerAssetLoadBase(AELCareerAssetLoadBase&&); \
	NO_API AELCareerAssetLoadBase(const AELCareerAssetLoadBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerAssetLoadBase(AELCareerAssetLoadBase&&); \
	NO_API AELCareerAssetLoadBase(const AELCareerAssetLoadBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerAssetLoadBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerAssetLoadBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerAssetLoadBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pMenuAnimation() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pMenuAnimation); } \
	FORCEINLINE static uint32 __PPO__m_pEventAnimation() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pEventAnimation); } \
	FORCEINLINE static uint32 __PPO__m_pFacialAnimation() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pFacialAnimation); } \
	FORCEINLINE static uint32 __PPO__m_pTalkAnimation() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pTalkAnimation); } \
	FORCEINLINE static uint32 __PPO__m_EventAnimationHiddenTimeArray() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_EventAnimationHiddenTimeArray); } \
	FORCEINLINE static uint32 __PPO__m_pPropModel() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pPropModel); } \
	FORCEINLINE static uint32 __PPO__m_AttachSocketArray() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_AttachSocketArray); } \
	FORCEINLINE static uint32 __PPO__m_PositionArray() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_PositionArray); } \
	FORCEINLINE static uint32 __PPO__m_RotationArray() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_RotationArray); } \
	FORCEINLINE static uint32 __PPO__m_pPropAnimation() { return STRUCT_OFFSET(AELCareerAssetLoadBase, m_pPropAnimation); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerAssetLoadBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerAssetLoadBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
