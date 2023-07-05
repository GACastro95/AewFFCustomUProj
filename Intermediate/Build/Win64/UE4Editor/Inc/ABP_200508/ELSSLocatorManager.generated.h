// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSLocatorType : uint8;
struct FVector;
class AELSSLocator;
enum class ESSPlayerStartLocatorType : uint8;
#ifdef ABP_200508_ELSSLocatorManager_generated_h
#error "ELSSLocatorManager.generated.h already included, missing '#pragma once' in ELSSLocatorManager.h"
#endif
#define ABP_200508_ELSSLocatorManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocatorListFromNear); \
	DECLARE_FUNCTION(execGetLocatorListWithFiltering); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocatorListFromNear); \
	DECLARE_FUNCTION(execGetLocatorListWithFiltering); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSLocatorManager(); \
	friend struct Z_Construct_UClass_AELSSLocatorManager_Statics; \
public: \
	DECLARE_CLASS(AELSSLocatorManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSLocatorManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSLocatorManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELSSLocatorManager(); \
	friend struct Z_Construct_UClass_AELSSLocatorManager_Statics; \
public: \
	DECLARE_CLASS(AELSSLocatorManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSLocatorManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSLocatorManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSLocatorManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSLocatorManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSLocatorManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSLocatorManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSLocatorManager(AELSSLocatorManager&&); \
	NO_API AELSSLocatorManager(const AELSSLocatorManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSLocatorManager(AELSSLocatorManager&&); \
	NO_API AELSSLocatorManager(const AELSSLocatorManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSLocatorManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSLocatorManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSLocatorManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocatorList_Default() { return STRUCT_OFFSET(AELSSLocatorManager, LocatorList_Default); } \
	FORCEINLINE static uint32 __PPO__LocatorList_ItemBox() { return STRUCT_OFFSET(AELSSLocatorManager, LocatorList_ItemBox); } \
	FORCEINLINE static uint32 __PPO__LocatorList_PlayerStart() { return STRUCT_OFFSET(AELSSLocatorManager, LocatorList_PlayerStart); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSLocatorManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocatorManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
