// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSPlayerEquipSettings;
enum class ESSWrestlerType : uint8;
enum class EWrestlerID_N : uint8;
class USSMenuWrestlerSelectData;
struct FSSPlayerRankParam;
struct FSSStampedeRankParam;
class UELSSUserData;
struct FYGS2SSPlayerData;
#ifdef ABP_200508_ELSSGameModeDataManager_generated_h
#error "ELSSGameModeDataManager.generated.h already included, missing '#pragma once' in ELSSGameModeDataManager.h"
#endif
#define ABP_200508_ELSSGameModeDataManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckSelectedWrestlerIsValid); \
	DECLARE_FUNCTION(execGetPlayerEquipSettings); \
	DECLARE_FUNCTION(execGetSelectedEditWrestlerType); \
	DECLARE_FUNCTION(execGetSelectedWrestlerID); \
	DECLARE_FUNCTION(execGetSSMenuWrestlerSelectData); \
	DECLARE_FUNCTION(execGetSSPlayerRankTable); \
	DECLARE_FUNCTION(execGetSSStampedeRankTable); \
	DECLARE_FUNCTION(execGetSSTempPlayerNetworkID); \
	DECLARE_FUNCTION(execGetSSUserData); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetSSTempPlayerNetworkID); \
	DECLARE_FUNCTION(execSetSSUserData); \
	DECLARE_FUNCTION(execSetSSUserDataToDummy);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckSelectedWrestlerIsValid); \
	DECLARE_FUNCTION(execGetPlayerEquipSettings); \
	DECLARE_FUNCTION(execGetSelectedEditWrestlerType); \
	DECLARE_FUNCTION(execGetSelectedWrestlerID); \
	DECLARE_FUNCTION(execGetSSMenuWrestlerSelectData); \
	DECLARE_FUNCTION(execGetSSPlayerRankTable); \
	DECLARE_FUNCTION(execGetSSStampedeRankTable); \
	DECLARE_FUNCTION(execGetSSTempPlayerNetworkID); \
	DECLARE_FUNCTION(execGetSSUserData); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetSSTempPlayerNetworkID); \
	DECLARE_FUNCTION(execSetSSUserData); \
	DECLARE_FUNCTION(execSetSSUserDataToDummy);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSGameModeDataManager(); \
	friend struct Z_Construct_UClass_UELSSGameModeDataManager_Statics; \
public: \
	DECLARE_CLASS(UELSSGameModeDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameModeDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELSSGameModeDataManager(); \
	friend struct Z_Construct_UClass_UELSSGameModeDataManager_Statics; \
public: \
	DECLARE_CLASS(UELSSGameModeDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameModeDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSGameModeDataManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSGameModeDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameModeDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameModeDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameModeDataManager(UELSSGameModeDataManager&&); \
	NO_API UELSSGameModeDataManager(const UELSSGameModeDataManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameModeDataManager(UELSSGameModeDataManager&&); \
	NO_API UELSSGameModeDataManager(const UELSSGameModeDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameModeDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameModeDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSGameModeDataManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ssUserData() { return STRUCT_OFFSET(UELSSGameModeDataManager, ssUserData); } \
	FORCEINLINE static uint32 __PPO__selectWrestlerData() { return STRUCT_OFFSET(UELSSGameModeDataManager, selectWrestlerData); } \
	FORCEINLINE static uint32 __PPO__LoadoutSettings() { return STRUCT_OFFSET(UELSSGameModeDataManager, LoadoutSettings); } \
	FORCEINLINE static uint32 __PPO__WrestlerSettings() { return STRUCT_OFFSET(UELSSGameModeDataManager, WrestlerSettings); } \
	FORCEINLINE static uint32 __PPO__LastPlayRecord() { return STRUCT_OFFSET(UELSSGameModeDataManager, LastPlayRecord); } \
	FORCEINLINE static uint32 __PPO__equipSettings() { return STRUCT_OFFSET(UELSSGameModeDataManager, equipSettings); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSGameModeDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameModeDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
