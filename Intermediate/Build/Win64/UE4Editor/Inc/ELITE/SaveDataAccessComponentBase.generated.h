// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataType : uint8;
class UELSaveDataAccessObjectBase;
#ifdef ELITE_SaveDataAccessComponentBase_generated_h
#error "SaveDataAccessComponentBase.generated.h already included, missing '#pragma once' in SaveDataAccessComponentBase.h"
#endif
#define ELITE_SaveDataAccessComponentBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveDataAccessObject); \
	DECLARE_FUNCTION(execLoadProcess); \
	DECLARE_FUNCTION(execSaveProcess); \
	DECLARE_FUNCTION(execStartLoad); \
	DECLARE_FUNCTION(execStartSave);


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveDataAccessObject); \
	DECLARE_FUNCTION(execLoadProcess); \
	DECLARE_FUNCTION(execSaveProcess); \
	DECLARE_FUNCTION(execStartLoad); \
	DECLARE_FUNCTION(execStartSave);


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataAccessComponentBase(); \
	friend struct Z_Construct_UClass_USaveDataAccessComponentBase_Statics; \
public: \
	DECLARE_CLASS(USaveDataAccessComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(USaveDataAccessComponentBase)


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataAccessComponentBase(); \
	friend struct Z_Construct_UClass_USaveDataAccessComponentBase_Statics; \
public: \
	DECLARE_CLASS(USaveDataAccessComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(USaveDataAccessComponentBase)


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataAccessComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataAccessComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataAccessComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataAccessComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataAccessComponentBase(USaveDataAccessComponentBase&&); \
	NO_API USaveDataAccessComponentBase(const USaveDataAccessComponentBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataAccessComponentBase(USaveDataAccessComponentBase&&); \
	NO_API USaveDataAccessComponentBase(const USaveDataAccessComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataAccessComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataAccessComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USaveDataAccessComponentBase)


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bBusy() { return STRUCT_OFFSET(USaveDataAccessComponentBase, bBusy); } \
	FORCEINLINE static uint32 __PPO__JobIndex() { return STRUCT_OFFSET(USaveDataAccessComponentBase, JobIndex); } \
	FORCEINLINE static uint32 __PPO__Params() { return STRUCT_OFFSET(USaveDataAccessComponentBase, Params); } \
	FORCEINLINE static uint32 __PPO__SaveDataAccessObjectMap() { return STRUCT_OFFSET(USaveDataAccessComponentBase, SaveDataAccessObjectMap); } \
	FORCEINLINE static uint32 __PPO__AccessDataSet() { return STRUCT_OFFSET(USaveDataAccessComponentBase, AccessDataSet); } \
	FORCEINLINE static uint32 __PPO__bSilent() { return STRUCT_OFFSET(USaveDataAccessComponentBase, bSilent); } \
	FORCEINLINE static uint32 __PPO__bCreateNew() { return STRUCT_OFFSET(USaveDataAccessComponentBase, bCreateNew); } \
	FORCEINLINE static uint32 __PPO__AccessDataList() { return STRUCT_OFFSET(USaveDataAccessComponentBase, AccessDataList); } \
	FORCEINLINE static uint32 __PPO__LoadedSaveDataType() { return STRUCT_OFFSET(USaveDataAccessComponentBase, LoadedSaveDataType); } \
	FORCEINLINE static uint32 __PPO__SaveDataTypeList() { return STRUCT_OFFSET(USaveDataAccessComponentBase, SaveDataTypeList); }


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_10_PROLOG
#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class USaveDataAccessComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_SaveDataAccessComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
