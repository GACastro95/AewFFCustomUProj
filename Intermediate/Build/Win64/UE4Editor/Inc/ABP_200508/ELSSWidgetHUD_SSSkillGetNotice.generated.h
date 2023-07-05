// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWidgetHUD_SSSkillGetNotice_generated_h
#error "ELSSWidgetHUD_SSSkillGetNotice.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_SSSkillGetNotice.h"
#endif
#define ABP_200508_ELSSWidgetHUD_SSSkillGetNotice_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_EVENT_PARMS \
	struct ELSSWidgetHUD_SSSkillGetNotice_eventSetHeatSkillParam_Parms \
	{ \
		int32 InSkillInex; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSSkillGetNotice(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSSkillGetNotice, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSSkillGetNotice)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSSkillGetNotice(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSSkillGetNotice, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSSkillGetNotice)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_SSSkillGetNotice(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSSkillGetNotice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSSkillGetNotice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSSkillGetNotice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSSkillGetNotice(UELSSWidgetHUD_SSSkillGetNotice&&); \
	NO_API UELSSWidgetHUD_SSSkillGetNotice(const UELSSWidgetHUD_SSSkillGetNotice&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSSkillGetNotice(UELSSWidgetHUD_SSSkillGetNotice&&); \
	NO_API UELSSWidgetHUD_SSSkillGetNotice(const UELSSWidgetHUD_SSSkillGetNotice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSSkillGetNotice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSSkillGetNotice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSSkillGetNotice)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__LayoutWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, LayoutWidget); } \
	FORCEINLINE static uint32 __PPO__SkillIDArray() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, SkillIDArray); } \
	FORCEINLINE static uint32 __PPO__WaitTimeArray() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, WaitTimeArray); } \
	FORCEINLINE static uint32 __PPO__SkillNameArray() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, SkillNameArray); } \
	FORCEINLINE static uint32 __PPO__ShowElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, ShowElapsed); } \
	FORCEINLINE static uint32 __PPO__IsShow() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, IsShow); } \
	FORCEINLINE static uint32 __PPO__IsPlayingPlayOut() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, IsPlayingPlayOut); } \
	FORCEINLINE static uint32 __PPO__WINDOWSHOWMAXTIME() { return STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, WINDOWSHOWMAXTIME); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_SSSkillGetNotice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSSkillGetNotice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
