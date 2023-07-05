// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELApplicationStatus : uint8;
enum class EELNetworkStatus : uint8;
enum class EELNetworkType : uint8;
#ifdef ABP_200508_ELNetworkObserverBase_generated_h
#error "ELNetworkObserverBase.generated.h already included, missing '#pragma once' in ELNetworkObserverBase.h"
#endif
#define ABP_200508_ELNetworkObserverBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebug_SetDisableEOS); \
	DECLARE_FUNCTION(execDebug_SetDisableNetwork); \
	DECLARE_FUNCTION(execDebug_SetDisableYGS2); \
	DECLARE_FUNCTION(execGetAppStatus); \
	DECLARE_FUNCTION(execGetNetStatus); \
	DECLARE_FUNCTION(execGetNetType); \
	DECLARE_FUNCTION(execSetNetworkEquipment);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebug_SetDisableEOS); \
	DECLARE_FUNCTION(execDebug_SetDisableNetwork); \
	DECLARE_FUNCTION(execDebug_SetDisableYGS2); \
	DECLARE_FUNCTION(execGetAppStatus); \
	DECLARE_FUNCTION(execGetNetStatus); \
	DECLARE_FUNCTION(execGetNetType); \
	DECLARE_FUNCTION(execSetNetworkEquipment);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELNetworkObserverBase(); \
	friend struct Z_Construct_UClass_UELNetworkObserverBase_Statics; \
public: \
	DECLARE_CLASS(UELNetworkObserverBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetworkObserverBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELNetworkObserverBase(); \
	friend struct Z_Construct_UClass_UELNetworkObserverBase_Statics; \
public: \
	DECLARE_CLASS(UELNetworkObserverBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELNetworkObserverBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELNetworkObserverBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELNetworkObserverBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetworkObserverBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetworkObserverBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetworkObserverBase(UELNetworkObserverBase&&); \
	NO_API UELNetworkObserverBase(const UELNetworkObserverBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELNetworkObserverBase(UELNetworkObserverBase&&); \
	NO_API UELNetworkObserverBase(const UELNetworkObserverBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELNetworkObserverBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELNetworkObserverBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELNetworkObserverBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELNetworkObserverBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetworkObserverBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
