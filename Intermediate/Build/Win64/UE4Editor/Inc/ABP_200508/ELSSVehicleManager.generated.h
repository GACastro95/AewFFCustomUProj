// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FSSRoundParam;
struct FTransform;
struct FSSVehicleSpawnParamForRound;
class AELSSLocator_Vehicle;
#ifdef ABP_200508_ELSSVehicleManager_generated_h
#error "ELSSVehicleManager.generated.h already included, missing '#pragma once' in ELSSVehicleManager.h"
#endif
#define ABP_200508_ELSSVehicleManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVehicleClass); \
	DECLARE_FUNCTION(execLoadAsyncVehicleClasses); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSpawnVehicle); \
	DECLARE_FUNCTION(execSpawnVehicleFromRound); \
	DECLARE_FUNCTION(execSpawnVehicleToLocator);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVehicleClass); \
	DECLARE_FUNCTION(execLoadAsyncVehicleClasses); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSpawnVehicle); \
	DECLARE_FUNCTION(execSpawnVehicleFromRound); \
	DECLARE_FUNCTION(execSpawnVehicleToLocator);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSVehicleManager(); \
	friend struct Z_Construct_UClass_AELSSVehicleManager_Statics; \
public: \
	DECLARE_CLASS(AELSSVehicleManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSVehicleManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSVehicleManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAELSSVehicleManager(); \
	friend struct Z_Construct_UClass_AELSSVehicleManager_Statics; \
public: \
	DECLARE_CLASS(AELSSVehicleManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSVehicleManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSVehicleManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSVehicleManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSVehicleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSVehicleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSVehicleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSVehicleManager(AELSSVehicleManager&&); \
	NO_API AELSSVehicleManager(const AELSSVehicleManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSVehicleManager(AELSSVehicleManager&&); \
	NO_API AELSSVehicleManager(const AELSSVehicleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSVehicleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSVehicleManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSVehicleManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadedVehicleClassMap() { return STRUCT_OFFSET(AELSSVehicleManager, LoadedVehicleClassMap); } \
	FORCEINLINE static uint32 __PPO__ValidVehicles() { return STRUCT_OFFSET(AELSSVehicleManager, ValidVehicles); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSVehicleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
