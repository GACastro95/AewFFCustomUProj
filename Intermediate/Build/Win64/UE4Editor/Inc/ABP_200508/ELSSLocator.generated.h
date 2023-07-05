// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
enum class ESSLocatorType : uint8;
enum class ESSPlayerStartLocatorAreaId : uint8;
enum class ESSPlayerStartLocatorType : uint8;
#ifdef ABP_200508_ELSSLocator_generated_h
#error "ELSSLocator.generated.h already included, missing '#pragma once' in ELSSLocator.h"
#endif
#define ABP_200508_ELSSLocator_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorRotationYawOnly); \
	DECLARE_FUNCTION(execGetFilterID); \
	DECLARE_FUNCTION(execGetLocatorType); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorAreaId); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorType); \
	DECLARE_FUNCTION(execGetSortOrder);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorRotationYawOnly); \
	DECLARE_FUNCTION(execGetFilterID); \
	DECLARE_FUNCTION(execGetLocatorType); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorAreaId); \
	DECLARE_FUNCTION(execGetPlayerStartLocatorType); \
	DECLARE_FUNCTION(execGetSortOrder);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSLocator(); \
	friend struct Z_Construct_UClass_AELSSLocator_Statics; \
public: \
	DECLARE_CLASS(AELSSLocator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSLocator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSLocator(); \
	friend struct Z_Construct_UClass_AELSSLocator_Statics; \
public: \
	DECLARE_CLASS(AELSSLocator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSLocator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSLocator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSLocator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSLocator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSLocator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSLocator(AELSSLocator&&); \
	NO_API AELSSLocator(const AELSSLocator&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSLocator(AELSSLocator&&); \
	NO_API AELSSLocator(const AELSSLocator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSLocator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSLocator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSLocator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(AELSSLocator, Type); } \
	FORCEINLINE static uint32 __PPO__PlayerStartType() { return STRUCT_OFFSET(AELSSLocator, PlayerStartType); } \
	FORCEINLINE static uint32 __PPO__PlayerStartAreaId() { return STRUCT_OFFSET(AELSSLocator, PlayerStartAreaId); } \
	FORCEINLINE static uint32 __PPO__FilterID() { return STRUCT_OFFSET(AELSSLocator, FilterID); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSLocator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSLocator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
