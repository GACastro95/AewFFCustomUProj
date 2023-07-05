// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSLogTextParam;
class UTexture2D;
#ifdef ABP_200508_ELSSWidgetHUD_SSLog_generated_h
#error "ELSSWidgetHUD_SSLog.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_SSLog.h"
#endif
#define ABP_200508_ELSSWidgetHUD_SSLog_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsShow); \
	DECLARE_FUNCTION(execPlayInOutAnimation); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetAnimationState); \
	DECLARE_FUNCTION(execSetTextAndColorByList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsShow); \
	DECLARE_FUNCTION(execPlayInOutAnimation); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetAnimationState); \
	DECLARE_FUNCTION(execSetTextAndColorByList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_EVENT_PARMS \
	struct ELSSWidgetHUD_SSLog_eventSetLogTextParam_Parms \
	{ \
		FSSLogTextParam InParam; \
		int32 InIndex; \
	}; \
	struct ELSSWidgetHUD_SSLog_eventSetLogTextVisible_Parms \
	{ \
		bool InVisible; \
		int32 InIndex; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSLog(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSLog, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_SSLog(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_SSLog_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_SSLog, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_SSLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_SSLog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSLog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSLog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSLog(UELSSWidgetHUD_SSLog&&); \
	NO_API UELSSWidgetHUD_SSLog(const UELSSWidgetHUD_SSLog&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_SSLog(UELSSWidgetHUD_SSLog&&); \
	NO_API UELSSWidgetHUD_SSLog(const UELSSWidgetHUD_SSLog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_SSLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_SSLog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_SSLog)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__LogIconImage() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LogIconImage); } \
	FORCEINLINE static uint32 __PPO__LayoutWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LayoutWidget); } \
	FORCEINLINE static uint32 __PPO__HorizonalBox() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, HorizonalBox); } \
	FORCEINLINE static uint32 __PPO__LogTextLen() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, LogTextLen); } \
	FORCEINLINE static uint32 __PPO__NoIconMargin() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, NoIconMargin); } \
	FORCEINLINE static uint32 __PPO__WithIconMargin() { return STRUCT_OFFSET(UELSSWidgetHUD_SSLog, WithIconMargin); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_SSLog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_SSLog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
