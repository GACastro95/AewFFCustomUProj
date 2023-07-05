// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSaveDataHeader;
class USaveGame_RawData;
#ifdef ABP_200508_SaveDataObjectBase_generated_h
#error "SaveDataObjectBase.generated.h already included, missing '#pragma once' in SaveDataObjectBase.h"
#endif
#define ABP_200508_SaveDataObjectBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetRawDataSize); \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execIsUpdated); \
	DECLARE_FUNCTION(execIsValidData); \
	DECLARE_FUNCTION(execIsValidRawData); \
	DECLARE_FUNCTION(execIsValidType); \
	DECLARE_FUNCTION(execSetProductUserID);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetRawDataSize); \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execIsUpdated); \
	DECLARE_FUNCTION(execIsValidData); \
	DECLARE_FUNCTION(execIsValidRawData); \
	DECLARE_FUNCTION(execIsValidType); \
	DECLARE_FUNCTION(execSetProductUserID);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObjectBase(); \
	friend struct Z_Construct_UClass_USaveDataObjectBase_Statics; \
public: \
	DECLARE_CLASS(USaveDataObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObjectBase(); \
	friend struct Z_Construct_UClass_USaveDataObjectBase_Statics; \
public: \
	DECLARE_CLASS(USaveDataObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObjectBase(USaveDataObjectBase&&); \
	NO_API USaveDataObjectBase(const USaveDataObjectBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObjectBase(USaveDataObjectBase&&); \
	NO_API USaveDataObjectBase(const USaveDataObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObjectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObjectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcSaveGameBase() { return STRUCT_OFFSET(USaveDataObjectBase, m_pcSaveGameBase); }


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
