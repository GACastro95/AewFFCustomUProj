// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetAnimation;
class AELCharacter_Native;
struct FVector2D;
#ifdef ABP_200508_ELTagMatchIconBase_generated_h
#error "ELTagMatchIconBase.generated.h already included, missing '#pragma once' in ELTagMatchIconBase.h"
#endif
#define ABP_200508_ELTagMatchIconBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChangedTagWait); \
	DECLARE_FUNCTION(execSetNativeParam); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChangedTagWait); \
	DECLARE_FUNCTION(execSetNativeParam); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_EVENT_PARMS \
	struct ELTagMatchIconBase_eventTagWaitChanged_Parms \
	{ \
		bool Flag; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELTagMatchIconBase(); \
	friend struct Z_Construct_UClass_UELTagMatchIconBase_Statics; \
public: \
	DECLARE_CLASS(UELTagMatchIconBase, UELIngameHUDBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTagMatchIconBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELTagMatchIconBase(); \
	friend struct Z_Construct_UClass_UELTagMatchIconBase_Statics; \
public: \
	DECLARE_CLASS(UELTagMatchIconBase, UELIngameHUDBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELTagMatchIconBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELTagMatchIconBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELTagMatchIconBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTagMatchIconBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTagMatchIconBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTagMatchIconBase(UELTagMatchIconBase&&); \
	NO_API UELTagMatchIconBase(const UELTagMatchIconBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELTagMatchIconBase(UELTagMatchIconBase&&); \
	NO_API UELTagMatchIconBase(const UELTagMatchIconBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELTagMatchIconBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELTagMatchIconBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELTagMatchIconBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELTagMatchIconBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTagMatchIconBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
