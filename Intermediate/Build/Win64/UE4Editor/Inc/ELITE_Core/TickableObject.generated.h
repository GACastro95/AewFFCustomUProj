// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_TickableObject_generated_h
#error "TickableObject.generated.h already included, missing '#pragma once' in TickableObject.h"
#endif
#define ELITE_CORE_TickableObject_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_EVENT_PARMS \
	struct TickableObject_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableObject(); \
	friend struct Z_Construct_UClass_UTickableObject_Statics; \
public: \
	DECLARE_CLASS(UTickableObject, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UTickableObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUTickableObject(); \
	friend struct Z_Construct_UClass_UTickableObject_Statics; \
public: \
	DECLARE_CLASS(UTickableObject, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UTickableObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTickableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickableObject(UTickableObject&&); \
	NO_API UTickableObject(const UTickableObject&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickableObject(UTickableObject&&); \
	NO_API UTickableObject(const UTickableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableObject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UTickableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_TickableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
