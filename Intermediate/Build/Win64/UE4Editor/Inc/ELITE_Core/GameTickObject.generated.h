// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_GameTickObject_generated_h
#error "GameTickObject.generated.h already included, missing '#pragma once' in GameTickObject.h"
#endif
#define ELITE_CORE_GameTickObject_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_EVENT_PARMS \
	struct GameTickObject_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameTickObject(); \
	friend struct Z_Construct_UClass_UGameTickObject_Statics; \
public: \
	DECLARE_CLASS(UGameTickObject, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UGameTickObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUGameTickObject(); \
	friend struct Z_Construct_UClass_UGameTickObject_Statics; \
public: \
	DECLARE_CLASS(UGameTickObject, UCommonObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UGameTickObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameTickObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameTickObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameTickObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameTickObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameTickObject(UGameTickObject&&); \
	NO_API UGameTickObject(const UGameTickObject&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameTickObject(UGameTickObject&&); \
	NO_API UGameTickObject(const UGameTickObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameTickObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameTickObject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameTickObject)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bTickableWhenPaused() { return STRUCT_OFFSET(UGameTickObject, bTickableWhenPaused); } \
	FORCEINLINE static uint32 __PPO__bTickableInEditor() { return STRUCT_OFFSET(UGameTickObject, bTickableInEditor); }


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_6_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UGameTickObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_GameTickObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
