// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELLocalPlayer;
struct FyMenuInputParam;
#ifdef ABP_200508_ELGameCommonPlayerControllerBase_generated_h
#error "ELGameCommonPlayerControllerBase.generated.h already included, missing '#pragma once' in ELGameCommonPlayerControllerBase.h"
#endif
#define ABP_200508_ELGameCommonPlayerControllerBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerId); \
	DECLARE_FUNCTION(execGetELLocalPlayer); \
	DECLARE_FUNCTION(execGetInputParam); \
	DECLARE_FUNCTION(execIsKeyRepeat); \
	DECLARE_FUNCTION(execIsLastInputMouse); \
	DECLARE_FUNCTION(execSetControllerEnabled); \
	DECLARE_FUNCTION(execSetEnableSimultaneousInputByLRStick); \
	DECLARE_FUNCTION(execSetInputParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerId); \
	DECLARE_FUNCTION(execGetELLocalPlayer); \
	DECLARE_FUNCTION(execGetInputParam); \
	DECLARE_FUNCTION(execIsKeyRepeat); \
	DECLARE_FUNCTION(execIsLastInputMouse); \
	DECLARE_FUNCTION(execSetControllerEnabled); \
	DECLARE_FUNCTION(execSetEnableSimultaneousInputByLRStick); \
	DECLARE_FUNCTION(execSetInputParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELGameCommonPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AELGameCommonPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameCommonPlayerControllerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELGameCommonPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AELGameCommonPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AELGameCommonPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELGameCommonPlayerControllerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELGameCommonPlayerControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELGameCommonPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameCommonPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameCommonPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameCommonPlayerControllerBase(AELGameCommonPlayerControllerBase&&); \
	NO_API AELGameCommonPlayerControllerBase(const AELGameCommonPlayerControllerBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELGameCommonPlayerControllerBase(AELGameCommonPlayerControllerBase&&); \
	NO_API AELGameCommonPlayerControllerBase(const AELGameCommonPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELGameCommonPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELGameCommonPlayerControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELGameCommonPlayerControllerBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputKeyStateNow() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyStateNow); } \
	FORCEINLINE static uint32 __PPO__InputKeyStatePre() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyStatePre); } \
	FORCEINLINE static uint32 __PPO__ExecInputKeyNow() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, ExecInputKeyNow); } \
	FORCEINLINE static uint32 __PPO__ExecInputKeyPre() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, ExecInputKeyPre); } \
	FORCEINLINE static uint32 __PPO__RepeatCheckKey() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RepeatCheckKey); } \
	FORCEINLINE static uint32 __PPO__LStickX() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LStickX); } \
	FORCEINLINE static uint32 __PPO__LStickY() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LStickY); } \
	FORCEINLINE static uint32 __PPO__RStickX() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RStickX); } \
	FORCEINLINE static uint32 __PPO__RStickY() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RStickY); } \
	FORCEINLINE static uint32 __PPO__LTrigger() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, LTrigger); } \
	FORCEINLINE static uint32 __PPO__RTrigger() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RTrigger); } \
	FORCEINLINE static uint32 __PPO__MousePosX() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, MousePosX); } \
	FORCEINLINE static uint32 __PPO__MousePosY() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, MousePosY); } \
	FORCEINLINE static uint32 __PPO__IsCheckRepeat() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, IsCheckRepeat); } \
	FORCEINLINE static uint32 __PPO__CurrentRepeatSpan() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, CurrentRepeatSpan); } \
	FORCEINLINE static uint32 __PPO__RepeatElapsedTime() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, RepeatElapsedTime); } \
	FORCEINLINE static uint32 __PPO__CheckingKeyboardMouseInputState() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, CheckingKeyboardMouseInputState); } \
	FORCEINLINE static uint32 __PPO__InputKeyboardStateNow() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, InputKeyboardStateNow); } \
	FORCEINLINE static uint32 __PPO__IsInputLimit() { return STRUCT_OFFSET(AELGameCommonPlayerControllerBase, IsInputLimit); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELGameCommonPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameCommonPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
