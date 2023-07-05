// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ELITE_GAME_ELAnimInstance_FootIK_generated_h
#error "ELAnimInstance_FootIK.generated.h already included, missing '#pragma once' in ELAnimInstance_FootIK.h"
#endif
#define ELITE_GAME_ELAnimInstance_FootIK_generated_h

#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentHipsOffset); \
	DECLARE_FUNCTION(execUpdateHipsBlendRatio);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentHipsOffset); \
	DECLARE_FUNCTION(execUpdateHipsBlendRatio);


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELAnimInstance_FootIK(); \
	friend struct Z_Construct_UClass_UELAnimInstance_FootIK_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_FootIK, UELAnimInstance_IK, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_FootIK)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELAnimInstance_FootIK(); \
	friend struct Z_Construct_UClass_UELAnimInstance_FootIK_Statics; \
public: \
	DECLARE_CLASS(UELAnimInstance_FootIK, UELAnimInstance_IK, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ELITE_Game"), NO_API) \
	DECLARE_SERIALIZER(UELAnimInstance_FootIK)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELAnimInstance_FootIK(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELAnimInstance_FootIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_FootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_FootIK); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_FootIK(UELAnimInstance_FootIK&&); \
	NO_API UELAnimInstance_FootIK(const UELAnimInstance_FootIK&); \
public:


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELAnimInstance_FootIK(UELAnimInstance_FootIK&&); \
	NO_API UELAnimInstance_FootIK(const UELAnimInstance_FootIK&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELAnimInstance_FootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELAnimInstance_FootIK); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELAnimInstance_FootIK)


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHipsOffset() { return STRUCT_OFFSET(UELAnimInstance_FootIK, CurrentHipsOffset); } \
	FORCEINLINE static uint32 __PPO__HipsOffset() { return STRUCT_OFFSET(UELAnimInstance_FootIK, HipsOffset); } \
	FORCEINLINE static uint32 __PPO__KneeLeft() { return STRUCT_OFFSET(UELAnimInstance_FootIK, KneeLeft); } \
	FORCEINLINE static uint32 __PPO__KneeRight() { return STRUCT_OFFSET(UELAnimInstance_FootIK, KneeRight); } \
	FORCEINLINE static uint32 __PPO__FootLeft() { return STRUCT_OFFSET(UELAnimInstance_FootIK, FootLeft); } \
	FORCEINLINE static uint32 __PPO__FootRight() { return STRUCT_OFFSET(UELAnimInstance_FootIK, FootRight); } \
	FORCEINLINE static uint32 __PPO__bHipsBlend() { return STRUCT_OFFSET(UELAnimInstance_FootIK, bHipsBlend); } \
	FORCEINLINE static uint32 __PPO__HipsBlendRatio() { return STRUCT_OFFSET(UELAnimInstance_FootIK, HipsBlendRatio); } \
	FORCEINLINE static uint32 __PPO__DefaultHipsBlendSpeed() { return STRUCT_OFFSET(UELAnimInstance_FootIK, DefaultHipsBlendSpeed); }


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_8_PROLOG
#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_GAME_API UClass* StaticClass<class UELAnimInstance_FootIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ELAnimInstance_FootIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
