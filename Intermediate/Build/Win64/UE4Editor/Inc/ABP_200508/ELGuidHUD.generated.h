// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCharacter_Native;
#ifdef ABP_200508_ELGuidHUD_generated_h
#error "ELGuidHUD.generated.h already included, missing '#pragma once' in ELGuidHUD.h"
#endif
#define ABP_200508_ELGuidHUD_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execSetPlayer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execSetPlayer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGuidHUD(); \
	friend struct Z_Construct_UClass_UELGuidHUD_Statics; \
public: \
	DECLARE_CLASS(UELGuidHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGuidHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELGuidHUD(); \
	friend struct Z_Construct_UClass_UELGuidHUD_Statics; \
public: \
	DECLARE_CLASS(UELGuidHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGuidHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGuidHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGuidHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGuidHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGuidHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGuidHUD(UELGuidHUD&&); \
	NO_API UELGuidHUD(const UELGuidHUD&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGuidHUD(UELGuidHUD&&); \
	NO_API UELGuidHUD(const UELGuidHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGuidHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGuidHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGuidHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowHUD() { return STRUCT_OFFSET(UELGuidHUD, bShowHUD); } \
	FORCEINLINE static uint32 __PPO__bUseCustomPosition() { return STRUCT_OFFSET(UELGuidHUD, bUseCustomPosition); } \
	FORCEINLINE static uint32 __PPO__OwnerMesh() { return STRUCT_OFFSET(UELGuidHUD, OwnerMesh); } \
	FORCEINLINE static uint32 __PPO__Font() { return STRUCT_OFFSET(UELGuidHUD, Font); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGuidHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGuidHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
