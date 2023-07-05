// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELNetworkGUID;
class UObject;
enum class EELNetObjectGuid : uint8;
#ifdef ABP_200508_ELNetObjectMap_generated_h
#error "ELNetObjectMap.generated.h already included, missing '#pragma once' in ELNetObjectMap.h"
#endif
#define ABP_200508_ELNetObjectMap_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddSpecialObject); \
	DECLARE_FUNCTION(execContainsObject); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execRemoveObjectById);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddSpecialObject); \
	DECLARE_FUNCTION(execContainsObject); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execRemoveObjectById);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELNetObjectMap(); \
	friend struct Z_Construct_UClass_UELNetObjectMap_Statics; \
public: \
	DECLARE_CLASS(UELNetObjectMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetObjectMap)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELNetObjectMap(); \
	friend struct Z_Construct_UClass_UELNetObjectMap_Statics; \
public: \
	DECLARE_CLASS(UELNetObjectMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetObjectMap)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNetObjectMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNetObjectMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetObjectMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetObjectMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetObjectMap(UELNetObjectMap&&); \
	NO_API UELNetObjectMap(const UELNetObjectMap&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetObjectMap(UELNetObjectMap&&); \
	NO_API UELNetObjectMap(const UELNetObjectMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetObjectMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetObjectMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELNetObjectMap)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectLookup() { return STRUCT_OFFSET(UELNetObjectMap, ObjectLookup); } \
	FORCEINLINE static uint32 __PPO__GuidLookup() { return STRUCT_OFFSET(UELNetObjectMap, GuidLookup); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELNetObjectMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetObjectMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
