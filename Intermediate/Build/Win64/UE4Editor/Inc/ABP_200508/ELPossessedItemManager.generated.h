// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddPossessItemQuantity;
struct FPossessedItemParam;
struct FPossessedItemSaveData;
enum class EPossessedItemConsumeTarget : uint8;
enum class EPossessedItemExtendTarget : uint8;
enum class EPossessedItemType : uint8;
class UDataTable;
class UObject;
#ifdef ABP_200508_ELPossessedItemManager_generated_h
#error "ELPossessedItemManager.generated.h already included, missing '#pragma once' in ELPossessedItemManager.h"
#endif
#define ABP_200508_ELPossessedItemManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddItemQuantity); \
	DECLARE_FUNCTION(execGetAllItemParam); \
	DECLARE_FUNCTION(execGetAllItemSaveData); \
	DECLARE_FUNCTION(execGetConsumeItemParamFromTarget); \
	DECLARE_FUNCTION(execGetExtendItemParamFromTarget); \
	DECLARE_FUNCTION(execGetItemParamFromID); \
	DECLARE_FUNCTION(execGetItemParamFromItemType); \
	DECLARE_FUNCTION(execGetPossessedItemInfoFromID); \
	DECLARE_FUNCTION(execGetPossessedItemInfoFromIdList); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromIdList); \
	DECLARE_FUNCTION(execSetupPossessedItemDataTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddItemQuantity); \
	DECLARE_FUNCTION(execGetAllItemParam); \
	DECLARE_FUNCTION(execGetAllItemSaveData); \
	DECLARE_FUNCTION(execGetConsumeItemParamFromTarget); \
	DECLARE_FUNCTION(execGetExtendItemParamFromTarget); \
	DECLARE_FUNCTION(execGetItemParamFromID); \
	DECLARE_FUNCTION(execGetItemParamFromItemType); \
	DECLARE_FUNCTION(execGetPossessedItemInfoFromID); \
	DECLARE_FUNCTION(execGetPossessedItemInfoFromIdList); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromID); \
	DECLARE_FUNCTION(execGetPossessedItemSaveDataFromIdList); \
	DECLARE_FUNCTION(execSetupPossessedItemDataTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPossessedItemManager(); \
	friend struct Z_Construct_UClass_UELPossessedItemManager_Statics; \
public: \
	DECLARE_CLASS(UELPossessedItemManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPossessedItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELPossessedItemManager(); \
	friend struct Z_Construct_UClass_UELPossessedItemManager_Statics; \
public: \
	DECLARE_CLASS(UELPossessedItemManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPossessedItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPossessedItemManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPossessedItemManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPossessedItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPossessedItemManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPossessedItemManager(UELPossessedItemManager&&); \
	NO_API UELPossessedItemManager(const UELPossessedItemManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPossessedItemManager(UELPossessedItemManager&&); \
	NO_API UELPossessedItemManager(const UELPossessedItemManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPossessedItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPossessedItemManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELPossessedItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ItemParamList() { return STRUCT_OFFSET(UELPossessedItemManager, m_ItemParamList); } \
	FORCEINLINE static uint32 __PPO__m_UpdateItemQuantityCompleteDelegate() { return STRUCT_OFFSET(UELPossessedItemManager, m_UpdateItemQuantityCompleteDelegate); } \
	FORCEINLINE static uint32 __PPO__m_ReserveUpdateItemQuantitData() { return STRUCT_OFFSET(UELPossessedItemManager, m_ReserveUpdateItemQuantitData); } \
	FORCEINLINE static uint32 __PPO__m_ItemInfoMap() { return STRUCT_OFFSET(UELPossessedItemManager, m_ItemInfoMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_16_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPossessedItemManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPossessedItemManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
