// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef ELITE_CORE_ELCharacterComponent_generated_h
#error "ELCharacterComponent.generated.h already included, missing '#pragma once' in ELCharacterComponent.h"
#endif
#define ELITE_CORE_ELCharacterComponent_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwnerAsCharacter);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwnerAsCharacter);


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCharacterComponent(); \
	friend struct Z_Construct_UClass_UELCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UELCharacterComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UELCharacterComponent)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELCharacterComponent(); \
	friend struct Z_Construct_UClass_UELCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UELCharacterComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UELCharacterComponent)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCharacterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCharacterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCharacterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCharacterComponent(UELCharacterComponent&&); \
	NO_API UELCharacterComponent(const UELCharacterComponent&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCharacterComponent(UELCharacterComponent&&); \
	NO_API UELCharacterComponent(const UELCharacterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCharacterComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELCharacterComponent)


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UELCharacterComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__OwnerRoot() { return STRUCT_OFFSET(UELCharacterComponent, OwnerRoot); }


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_9_PROLOG
#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UELCharacterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_ELCharacterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
