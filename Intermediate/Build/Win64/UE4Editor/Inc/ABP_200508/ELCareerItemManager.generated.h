// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELCareerGameParam;
struct FCareerItemData;
enum class ECareerItemEffect : uint8;
enum class ECareerDisappearItemEffect : uint8;
enum class ECareerItemNo : uint8;
#ifdef ABP_200508_ELCareerItemManager_generated_h
#error "ELCareerItemManager.generated.h already included, missing '#pragma once' in ELCareerItemManager.h"
#endif
#define ABP_200508_ELCareerItemManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActiveItemEffect); \
	DECLARE_FUNCTION(execAddCareerItemData); \
	DECLARE_FUNCTION(execCanUseItem); \
	DECLARE_FUNCTION(execDeactiveItemEffect); \
	DECLARE_FUNCTION(execGetCareerItemData); \
	DECLARE_FUNCTION(execGetCareerItemTableBase); \
	DECLARE_FUNCTION(execUseItems);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActiveItemEffect); \
	DECLARE_FUNCTION(execAddCareerItemData); \
	DECLARE_FUNCTION(execCanUseItem); \
	DECLARE_FUNCTION(execDeactiveItemEffect); \
	DECLARE_FUNCTION(execGetCareerItemData); \
	DECLARE_FUNCTION(execGetCareerItemTableBase); \
	DECLARE_FUNCTION(execUseItems);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerItemManager(); \
	friend struct Z_Construct_UClass_AELCareerItemManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerItemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerItemManager(); \
	friend struct Z_Construct_UClass_AELCareerItemManager_Statics; \
public: \
	DECLARE_CLASS(AELCareerItemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerItemManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerItemManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerItemManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerItemManager(AELCareerItemManager&&); \
	NO_API AELCareerItemManager(const AELCareerItemManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerItemManager(AELCareerItemManager&&); \
	NO_API AELCareerItemManager(const AELCareerItemManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerItemManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CareerItemTableBase() { return STRUCT_OFFSET(AELCareerItemManager, m_CareerItemTableBase); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerItemManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerItemManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
