// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UELReplicationManager;
class APlayerController;
#ifdef ABP_200508_ELNetworkFunctionLibrary_generated_h
#error "ELNetworkFunctionLibrary.generated.h already included, missing '#pragma once' in ELNetworkFunctionLibrary.h"
#endif
#define ABP_200508_ELNetworkFunctionLibrary_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetELReplicationManager); \
	DECLARE_FUNCTION(execGetFirstLocalPlayerController); \
	DECLARE_FUNCTION(execGetOwningCharacterIndex); \
	DECLARE_FUNCTION(execGetOwningPlayerIndex); \
	DECLARE_FUNCTION(execIsInOnlineGameMode); \
	DECLARE_FUNCTION(execIsInOnlineGameModeMenu); \
	DECLARE_FUNCTION(execIsNetworkAvailable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetELReplicationManager); \
	DECLARE_FUNCTION(execGetFirstLocalPlayerController); \
	DECLARE_FUNCTION(execGetOwningCharacterIndex); \
	DECLARE_FUNCTION(execGetOwningPlayerIndex); \
	DECLARE_FUNCTION(execIsInOnlineGameMode); \
	DECLARE_FUNCTION(execIsInOnlineGameModeMenu); \
	DECLARE_FUNCTION(execIsNetworkAvailable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELNetworkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UELNetworkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UELNetworkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetworkFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELNetworkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UELNetworkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UELNetworkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetworkFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNetworkFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNetworkFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetworkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetworkFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetworkFunctionLibrary(UELNetworkFunctionLibrary&&); \
	NO_API UELNetworkFunctionLibrary(const UELNetworkFunctionLibrary&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetworkFunctionLibrary(UELNetworkFunctionLibrary&&); \
	NO_API UELNetworkFunctionLibrary(const UELNetworkFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetworkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetworkFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELNetworkFunctionLibrary)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELNetworkFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
