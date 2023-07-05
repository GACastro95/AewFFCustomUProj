// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class APlayerCameraManager;
class ACharacter;
class APawn;
#ifdef ABP_200508_ELGameplayStatics_generated_h
#error "ELGameplayStatics.generated.h already included, missing '#pragma once' in ELGameplayStatics.h"
#endif
#define ABP_200508_ELGameplayStatics_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execHasGameViewportFocus); \
	DECLARE_FUNCTION(execSetPlayerControllerID);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execHasGameViewportFocus); \
	DECLARE_FUNCTION(execSetPlayerControllerID);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGameplayStatics(); \
	friend struct Z_Construct_UClass_UELGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UELGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameplayStatics)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELGameplayStatics(); \
	friend struct Z_Construct_UClass_UELGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UELGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameplayStatics)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGameplayStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameplayStatics(UELGameplayStatics&&); \
	NO_API UELGameplayStatics(const UELGameplayStatics&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameplayStatics(UELGameplayStatics&&); \
	NO_API UELGameplayStatics(const UELGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameplayStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGameplayStatics)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
