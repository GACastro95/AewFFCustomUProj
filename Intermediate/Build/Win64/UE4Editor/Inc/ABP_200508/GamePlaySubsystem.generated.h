// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataAccessorEvent : uint8;
class USaveData_AccessorBase;
enum class ESaveDataProcResult : uint8;
#ifdef ABP_200508_GamePlaySubsystem_generated_h
#error "GamePlaySubsystem.generated.h already included, missing '#pragma once' in GamePlaySubsystem.h"
#endif
#define ABP_200508_GamePlaySubsystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSavedOnlineInfo); \
	DECLARE_FUNCTION(execOnSavedPlayerData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSavedOnlineInfo); \
	DECLARE_FUNCTION(execOnSavedPlayerData);


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamePlaySubsystem(); \
	friend struct Z_Construct_UClass_UGamePlaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UGamePlaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGamePlaySubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGamePlaySubsystem(); \
	friend struct Z_Construct_UClass_UGamePlaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UGamePlaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGamePlaySubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamePlaySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamePlaySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamePlaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePlaySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamePlaySubsystem(UGamePlaySubsystem&&); \
	NO_API UGamePlaySubsystem(const UGamePlaySubsystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamePlaySubsystem(UGamePlaySubsystem&&); \
	NO_API UGamePlaySubsystem(const UGamePlaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamePlaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePlaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGamePlaySubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGamePlaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GamePlaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
