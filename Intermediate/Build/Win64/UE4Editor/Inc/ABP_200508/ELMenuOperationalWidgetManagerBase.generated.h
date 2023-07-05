// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELOperationalWidgetBase;
enum class yEnMenuWidgetType : uint8;
#ifdef ABP_200508_ELMenuOperationalWidgetManagerBase_generated_h
#error "ELMenuOperationalWidgetManagerBase.generated.h already included, missing '#pragma once' in ELMenuOperationalWidgetManagerBase.h"
#endif
#define ABP_200508_ELMenuOperationalWidgetManagerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseAllWidgets); \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execGetCurrentWidgetType); \
	DECLARE_FUNCTION(execGetMenuWidgetArray); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetCurrentWidget); \
	DECLARE_FUNCTION(execSetManagedMenuWidget);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseAllWidgets); \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execGetCurrentWidgetType); \
	DECLARE_FUNCTION(execGetMenuWidgetArray); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetCurrentWidget); \
	DECLARE_FUNCTION(execSetManagedMenuWidget);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELMenuOperationalWidgetManagerBase(); \
	friend struct Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELMenuOperationalWidgetManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMenuOperationalWidgetManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAELMenuOperationalWidgetManagerBase(); \
	friend struct Z_Construct_UClass_AELMenuOperationalWidgetManagerBase_Statics; \
public: \
	DECLARE_CLASS(AELMenuOperationalWidgetManagerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMenuOperationalWidgetManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELMenuOperationalWidgetManagerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELMenuOperationalWidgetManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMenuOperationalWidgetManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMenuOperationalWidgetManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMenuOperationalWidgetManagerBase(AELMenuOperationalWidgetManagerBase&&); \
	NO_API AELMenuOperationalWidgetManagerBase(const AELMenuOperationalWidgetManagerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMenuOperationalWidgetManagerBase(AELMenuOperationalWidgetManagerBase&&); \
	NO_API AELMenuOperationalWidgetManagerBase(const AELMenuOperationalWidgetManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMenuOperationalWidgetManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMenuOperationalWidgetManagerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELMenuOperationalWidgetManagerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuWidgetArray() { return STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, MenuWidgetArray); } \
	FORCEINLINE static uint32 __PPO__ChangeInputDeviceDelegate() { return STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, ChangeInputDeviceDelegate); } \
	FORCEINLINE static uint32 __PPO__OnChangeWidget() { return STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnChangeWidget); } \
	FORCEINLINE static uint32 __PPO__OnChangedWidgetType() { return STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnChangedWidgetType); } \
	FORCEINLINE static uint32 __PPO__OnResetWidgetAll() { return STRUCT_OFFSET(AELMenuOperationalWidgetManagerBase, OnResetWidgetAll); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELMenuOperationalWidgetManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMenuOperationalWidgetManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
