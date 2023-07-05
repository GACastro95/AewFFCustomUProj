// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELBottomHelpManager;
class UUserWidget;
class UELLocalizeFontManager;
class UELMenuNotifyOnlineErrorManager;
#ifdef ABP_200508_MenuWidgetSubsystem_generated_h
#error "MenuWidgetSubsystem.generated.h already included, missing '#pragma once' in MenuWidgetSubsystem.h"
#endif
#define ABP_200508_MenuWidgetSubsystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBottomHelpManager); \
	DECLARE_FUNCTION(execGetCommonLayout); \
	DECLARE_FUNCTION(execGetLocalizeFontManager); \
	DECLARE_FUNCTION(execGetMenuNotifyOnlineErrorManager); \
	DECLARE_FUNCTION(execIsShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetupBottomHelpManager);


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBottomHelpManager); \
	DECLARE_FUNCTION(execGetCommonLayout); \
	DECLARE_FUNCTION(execGetLocalizeFontManager); \
	DECLARE_FUNCTION(execGetMenuNotifyOnlineErrorManager); \
	DECLARE_FUNCTION(execIsShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetupBottomHelpManager);


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidgetSubsystem(); \
	friend struct Z_Construct_UClass_UMenuWidgetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMenuWidgetSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidgetSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMenuWidgetSubsystem(); \
	friend struct Z_Construct_UClass_UMenuWidgetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMenuWidgetSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidgetSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidgetSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidgetSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidgetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidgetSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidgetSubsystem(UMenuWidgetSubsystem&&); \
	NO_API UMenuWidgetSubsystem(const UMenuWidgetSubsystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidgetSubsystem(UMenuWidgetSubsystem&&); \
	NO_API UMenuWidgetSubsystem(const UMenuWidgetSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidgetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidgetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMenuWidgetSubsystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_BottomHelpManager() { return STRUCT_OFFSET(UMenuWidgetSubsystem, m_BottomHelpManager); } \
	FORCEINLINE static uint32 __PPO__m_LocalizeFontManager() { return STRUCT_OFFSET(UMenuWidgetSubsystem, m_LocalizeFontManager); } \
	FORCEINLINE static uint32 __PPO__m_MenuNotifyOnlineErrorManager() { return STRUCT_OFFSET(UMenuWidgetSubsystem, m_MenuNotifyOnlineErrorManager); } \
	FORCEINLINE static uint32 __PPO__bLayoutWidgetVisible() { return STRUCT_OFFSET(UMenuWidgetSubsystem, bLayoutWidgetVisible); }


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UMenuWidgetSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
