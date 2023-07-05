// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSAreaCountDownTextType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_AreaCountDown_generated_h
#error "ELSSWidgetHUD_AreaCountDown.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_AreaCountDown.h"
#endif
#define ABP_200508_ELSSWidgetHUD_AreaCountDown_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAreaCountDown); \
	DECLARE_FUNCTION(execApplyCountText); \
	DECLARE_FUNCTION(execGetAnnounceText); \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execPlayOut);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAreaCountDown); \
	DECLARE_FUNCTION(execApplyCountText); \
	DECLARE_FUNCTION(execGetAnnounceText); \
	DECLARE_FUNCTION(execPlayIn); \
	DECLARE_FUNCTION(execPlayOut);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_EVENT_PARMS \
	struct ELSSWidgetHUD_AreaCountDown_eventApplyAreaShrinkText_Parms \
	{ \
		ESSAreaCountDownTextType InTextType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AreaCountDown(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AreaCountDown, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AreaCountDown)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AreaCountDown(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AreaCountDown_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AreaCountDown, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AreaCountDown)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_AreaCountDown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_AreaCountDown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AreaCountDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AreaCountDown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AreaCountDown(UELSSWidgetHUD_AreaCountDown&&); \
	NO_API UELSSWidgetHUD_AreaCountDown(const UELSSWidgetHUD_AreaCountDown&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AreaCountDown(UELSSWidgetHUD_AreaCountDown&&); \
	NO_API UELSSWidgetHUD_AreaCountDown(const UELSSWidgetHUD_AreaCountDown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AreaCountDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AreaCountDown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_AreaCountDown)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CountMinute_10Material() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountMinute_10Material); } \
	FORCEINLINE static uint32 __PPO__CountMinute_01Material() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountMinute_01Material); } \
	FORCEINLINE static uint32 __PPO__CountSecond_10Material() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountSecond_10Material); } \
	FORCEINLINE static uint32 __PPO__CountSecond_01Material() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, CountSecond_01Material); } \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__Minutes() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, Minutes); } \
	FORCEINLINE static uint32 __PPO__Seconds() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, Seconds); } \
	FORCEINLINE static uint32 __PPO__IsShowAreaCountDown() { return STRUCT_OFFSET(UELSSWidgetHUD_AreaCountDown, IsShowAreaCountDown); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_AreaCountDown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AreaCountDown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
