// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWrestlerDataObjectFlag : uint8;
struct FDateTime;
enum class EGender : uint8;
struct FGuid;
enum class EWrestlerID_N : uint8;
#ifdef ELITE_GAME_WrestlerDataObjectBase_generated_h
#error "WrestlerDataObjectBase.generated.h already included, missing '#pragma once' in WrestlerDataObjectBase.h"
#endif
#define ELITE_GAME_WrestlerDataObjectBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddWrestlerDataFlag); \
	DECLARE_FUNCTION(execCancelSaveRequest); \
	DECLARE_FUNCTION(execCheckModify); \
	DECLARE_FUNCTION(execClearAllWrestlerDataFlag); \
	DECLARE_FUNCTION(execGetCreateDate); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execHasWrestlerDataFlag); \
	DECLARE_FUNCTION(execIsDisable); \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsFemale); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execIsMale); \
	DECLARE_FUNCTION(execIsModify); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsRoster); \
	DECLARE_FUNCTION(execIsSaveTarget); \
	DECLARE_FUNCTION(execIsScoutWrestler); \
	DECLARE_FUNCTION(execIsUsingCareer); \
	DECLARE_FUNCTION(execIsUsingCreateTeam); \
	DECLARE_FUNCTION(execRemoveWrestlerDataFlag); \
	DECLARE_FUNCTION(execSaveRequest); \
	DECLARE_FUNCTION(execSetWrestlerDataFlag); \
	DECLARE_FUNCTION(execSwitchGender);


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddWrestlerDataFlag); \
	DECLARE_FUNCTION(execCancelSaveRequest); \
	DECLARE_FUNCTION(execCheckModify); \
	DECLARE_FUNCTION(execClearAllWrestlerDataFlag); \
	DECLARE_FUNCTION(execGetCreateDate); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execHasWrestlerDataFlag); \
	DECLARE_FUNCTION(execIsDisable); \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsFemale); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execIsMale); \
	DECLARE_FUNCTION(execIsModify); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsRoster); \
	DECLARE_FUNCTION(execIsSaveTarget); \
	DECLARE_FUNCTION(execIsScoutWrestler); \
	DECLARE_FUNCTION(execIsUsingCareer); \
	DECLARE_FUNCTION(execIsUsingCreateTeam); \
	DECLARE_FUNCTION(execRemoveWrestlerDataFlag); \
	DECLARE_FUNCTION(execSaveRequest); \
	DECLARE_FUNCTION(execSetWrestlerDataFlag); \
	DECLARE_FUNCTION(execSwitchGender);


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWrestlerDataObjectBase(); \
	friend struct Z_Construct_UClass_UWrestlerDataObjectBase_Statics; \
public: \
	DECLARE_CLASS(UWrestlerDataObjectBase, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UWrestlerDataObjectBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWrestlerDataObjectBase(); \
	friend struct Z_Construct_UClass_UWrestlerDataObjectBase_Statics; \
public: \
	DECLARE_CLASS(UWrestlerDataObjectBase, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UWrestlerDataObjectBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrestlerDataObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrestlerDataObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrestlerDataObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrestlerDataObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrestlerDataObjectBase(UWrestlerDataObjectBase&&); \
	NO_API UWrestlerDataObjectBase(const UWrestlerDataObjectBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrestlerDataObjectBase(UWrestlerDataObjectBase&&); \
	NO_API UWrestlerDataObjectBase(const UWrestlerDataObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrestlerDataObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrestlerDataObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWrestlerDataObjectBase)


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StatusFlags() { return STRUCT_OFFSET(UWrestlerDataObjectBase, StatusFlags); } \
	FORCEINLINE static uint32 __PPO__CreateDate() { return STRUCT_OFFSET(UWrestlerDataObjectBase, CreateDate); }


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UWrestlerDataObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_WrestlerDataObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
