// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataProcResult : uint8;
struct FSaveData_FileInfo;
struct FSaveData_QuotaInfo;
class USaveGame_RawData;
#ifdef ABP_200508_SaveData_LowerEngineBase_generated_h
#error "SaveData_LowerEngineBase.generated.h already included, missing '#pragma once' in SaveData_LowerEngineBase.h"
#endif
#define ABP_200508_SaveData_LowerEngineBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckValidAllocationOnLocal); \
	DECLARE_FUNCTION(execDeleteRawData); \
	DECLARE_FUNCTION(execGetLocalFileList); \
	DECLARE_FUNCTION(execGetLocalFileListByType); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execIsExistsRawData); \
	DECLARE_FUNCTION(execLoadRawData); \
	DECLARE_FUNCTION(execLoadRawData_PS4); \
	DECLARE_FUNCTION(execSaveRawData); \
	DECLARE_FUNCTION(execUpdateLocalFileList);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckValidAllocationOnLocal); \
	DECLARE_FUNCTION(execDeleteRawData); \
	DECLARE_FUNCTION(execGetLocalFileList); \
	DECLARE_FUNCTION(execGetLocalFileListByType); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execIsExistsRawData); \
	DECLARE_FUNCTION(execLoadRawData); \
	DECLARE_FUNCTION(execLoadRawData_PS4); \
	DECLARE_FUNCTION(execSaveRawData); \
	DECLARE_FUNCTION(execUpdateLocalFileList);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveData_LowerEngineBase(); \
	friend struct Z_Construct_UClass_USaveData_LowerEngineBase_Statics; \
public: \
	DECLARE_CLASS(USaveData_LowerEngineBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_LowerEngineBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSaveData_LowerEngineBase(); \
	friend struct Z_Construct_UClass_USaveData_LowerEngineBase_Statics; \
public: \
	DECLARE_CLASS(USaveData_LowerEngineBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_LowerEngineBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveData_LowerEngineBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveData_LowerEngineBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_LowerEngineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_LowerEngineBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_LowerEngineBase(USaveData_LowerEngineBase&&); \
	NO_API USaveData_LowerEngineBase(const USaveData_LowerEngineBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_LowerEngineBase(USaveData_LowerEngineBase&&); \
	NO_API USaveData_LowerEngineBase(const USaveData_LowerEngineBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_LowerEngineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_LowerEngineBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveData_LowerEngineBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveData_LowerEngineBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveData_LowerEngineBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
