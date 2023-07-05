// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCrateItemStateParam;
struct FCrateItemParam;
#ifdef ABP_200508_ELCrateManager_generated_h
#error "ELCrateManager.generated.h already included, missing '#pragma once' in ELCrateManager.h"
#endif
#define ABP_200508_ELCrateManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllEjectItemParamList); \
	DECLARE_FUNCTION(execGetEjectedItemsRate); \
	DECLARE_FUNCTION(execGetRemainCrateItemNum); \
	DECLARE_FUNCTION(execOnUnlockableItemPurchased); \
	DECLARE_FUNCTION(execOnUpdatePossessedItem); \
	DECLARE_FUNCTION(execSetupCrateDataTable); \
	DECLARE_FUNCTION(execStartEjectingItems); \
	DECLARE_FUNCTION(execUpdateEjectedItemData); \
	DECLARE_FUNCTION(execUpdateRandomSeed);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllEjectItemParamList); \
	DECLARE_FUNCTION(execGetEjectedItemsRate); \
	DECLARE_FUNCTION(execGetRemainCrateItemNum); \
	DECLARE_FUNCTION(execOnUnlockableItemPurchased); \
	DECLARE_FUNCTION(execOnUpdatePossessedItem); \
	DECLARE_FUNCTION(execSetupCrateDataTable); \
	DECLARE_FUNCTION(execStartEjectingItems); \
	DECLARE_FUNCTION(execUpdateEjectedItemData); \
	DECLARE_FUNCTION(execUpdateRandomSeed);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCrateManager(); \
	friend struct Z_Construct_UClass_UELCrateManager_Statics; \
public: \
	DECLARE_CLASS(UELCrateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCrateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELCrateManager(); \
	friend struct Z_Construct_UClass_UELCrateManager_Statics; \
public: \
	DECLARE_CLASS(UELCrateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCrateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCrateManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCrateManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCrateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCrateManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCrateManager(UELCrateManager&&); \
	NO_API UELCrateManager(const UELCrateManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCrateManager(UELCrateManager&&); \
	NO_API UELCrateManager(const UELCrateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCrateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCrateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCrateManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CrateItemDataTable() { return STRUCT_OFFSET(UELCrateManager, m_CrateItemDataTable); } \
	FORCEINLINE static uint32 __PPO__m_CrateItemStateMap() { return STRUCT_OFFSET(UELCrateManager, m_CrateItemStateMap); } \
	FORCEINLINE static uint32 __PPO__m_CrateEmissionItemMap() { return STRUCT_OFFSET(UELCrateManager, m_CrateEmissionItemMap); } \
	FORCEINLINE static uint32 __PPO__m_CrateEjectedItemList() { return STRUCT_OFFSET(UELCrateManager, m_CrateEjectedItemList); } \
	FORCEINLINE static uint32 __PPO__m_DebugForceEjectItemList() { return STRUCT_OFFSET(UELCrateManager, m_DebugForceEjectItemList); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCrateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCrateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
