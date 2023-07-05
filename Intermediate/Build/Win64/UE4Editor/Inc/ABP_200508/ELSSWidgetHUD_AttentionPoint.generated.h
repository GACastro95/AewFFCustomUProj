// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSAttentionReason : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_AttentionPoint_generated_h
#error "ELSSWidgetHUD_AttentionPoint.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_AttentionPoint.h"
#endif
#define ABP_200508_ELSSWidgetHUD_AttentionPoint_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActText); \
	DECLARE_FUNCTION(execGetPointText); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execPlayOut); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetupState); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActText); \
	DECLARE_FUNCTION(execGetPointText); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execPlayOut); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetupState); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_EVENT_PARMS \
	struct ELSSWidgetHUD_AttentionPoint_eventPlayIn_Parms \
	{ \
		int32 InAddValue; \
		ESSAttentionReason InActType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AttentionPoint(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AttentionPoint, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AttentionPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AttentionPoint(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AttentionPoint_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AttentionPoint, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AttentionPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_AttentionPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_AttentionPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AttentionPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AttentionPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AttentionPoint(UELSSWidgetHUD_AttentionPoint&&); \
	NO_API UELSSWidgetHUD_AttentionPoint(const UELSSWidgetHUD_AttentionPoint&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AttentionPoint(UELSSWidgetHUD_AttentionPoint&&); \
	NO_API UELSSWidgetHUD_AttentionPoint(const UELSSWidgetHUD_AttentionPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AttentionPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AttentionPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_AttentionPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, PlayInAnim); } \
	FORCEINLINE static uint32 __PPO__PlayOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, PlayOutAnim); } \
	FORCEINLINE static uint32 __PPO__FontPoint() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, FontPoint); } \
	FORCEINLINE static uint32 __PPO__ShowAttentionPointTime() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, ShowAttentionPointTime); } \
	FORCEINLINE static uint32 __PPO__IsShowAttentionPoint() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, IsShowAttentionPoint); } \
	FORCEINLINE static uint32 __PPO__IsDoneStartPlayOutPoint() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionPoint, IsDoneStartPlayOutPoint); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_AttentionPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
