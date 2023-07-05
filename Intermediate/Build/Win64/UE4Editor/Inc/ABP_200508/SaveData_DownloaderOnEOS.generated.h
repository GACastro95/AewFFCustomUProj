// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSTitleStorageEvent : uint8;
class UEOSTitleStorageBase;
struct FEOSTitleStorageProgress;
enum class EEOSUserContentsEvent : uint8;
class UEOSUserContentsBase;
struct FEOSUserContentProgress;
class UEOSUserContents;
class UEOSTitleStorage;
#ifdef ABP_200508_SaveData_DownloaderOnEOS_generated_h
#error "SaveData_DownloaderOnEOS.generated.h already included, missing '#pragma once' in SaveData_DownloaderOnEOS.h"
#endif
#define ABP_200508_SaveData_DownloaderOnEOS_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTitleStorageEvent); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execSetupEOS);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTitleStorageEvent); \
	DECLARE_FUNCTION(execOnUserContentsEvent); \
	DECLARE_FUNCTION(execSetupEOS);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveData_DownloaderOnEOS(); \
	friend struct Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics; \
public: \
	DECLARE_CLASS(USaveData_DownloaderOnEOS, USaveData_DownloaderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_DownloaderOnEOS)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSaveData_DownloaderOnEOS(); \
	friend struct Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics; \
public: \
	DECLARE_CLASS(USaveData_DownloaderOnEOS, USaveData_DownloaderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_DownloaderOnEOS)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveData_DownloaderOnEOS(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveData_DownloaderOnEOS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_DownloaderOnEOS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_DownloaderOnEOS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_DownloaderOnEOS(USaveData_DownloaderOnEOS&&); \
	NO_API USaveData_DownloaderOnEOS(const USaveData_DownloaderOnEOS&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_DownloaderOnEOS(USaveData_DownloaderOnEOS&&); \
	NO_API USaveData_DownloaderOnEOS(const USaveData_DownloaderOnEOS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_DownloaderOnEOS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_DownloaderOnEOS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveData_DownloaderOnEOS)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveData_DownloaderOnEOS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveData_DownloaderOnEOS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
