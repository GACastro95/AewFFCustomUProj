// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSDebugHUD_generated_h
#error "ELSSDebugHUD.generated.h already included, missing '#pragma once' in ELSSDebugHUD.h"
#endif
#define ABP_200508_ELSSDebugHUD_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDebugText);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDebugText);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_EVENT_PARMS \
	struct ELSSDebugHUD_eventSetDebugString_Parms \
	{ \
		bool InIsShow; \
		FString InDebugString; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSDebugHUD(); \
	friend struct Z_Construct_UClass_AELSSDebugHUD_Statics; \
public: \
	DECLARE_CLASS(AELSSDebugHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDebugHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELSSDebugHUD(); \
	friend struct Z_Construct_UClass_AELSSDebugHUD_Statics; \
public: \
	DECLARE_CLASS(AELSSDebugHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDebugHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSDebugHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSDebugHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDebugHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDebugHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDebugHUD(AELSSDebugHUD&&); \
	NO_API AELSSDebugHUD(const AELSSDebugHUD&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDebugHUD(AELSSDebugHUD&&); \
	NO_API AELSSDebugHUD(const AELSSDebugHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDebugHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDebugHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSDebugHUD)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsShowLog() { return STRUCT_OFFSET(AELSSDebugHUD, IsShowLog); } \
	FORCEINLINE static uint32 __PPO__UpdateLogState() { return STRUCT_OFFSET(AELSSDebugHUD, UpdateLogState); } \
	FORCEINLINE static uint32 __PPO__DebugText() { return STRUCT_OFFSET(AELSSDebugHUD, DebugText); } \
	FORCEINLINE static uint32 __PPO__ResetEveryFrame() { return STRUCT_OFFSET(AELSSDebugHUD, ResetEveryFrame); } \
	FORCEINLINE static uint32 __PPO__EnabledCategory() { return STRUCT_OFFSET(AELSSDebugHUD, EnabledCategory); } \
	FORCEINLINE static uint32 __PPO__DebugStringParamTable() { return STRUCT_OFFSET(AELSSDebugHUD, DebugStringParamTable); } \
	FORCEINLINE static uint32 __PPO__DebugStringParam() { return STRUCT_OFFSET(AELSSDebugHUD, DebugStringParam); } \
	FORCEINLINE static uint32 __PPO__DebugStringStatus() { return STRUCT_OFFSET(AELSSDebugHUD, DebugStringStatus); } \
	FORCEINLINE static uint32 __PPO__DebugStringBuffer() { return STRUCT_OFFSET(AELSSDebugHUD, DebugStringBuffer); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSDebugHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
