// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSFootIKParam;
#ifdef ABP_200508_ELSSFootIK_generated_h
#error "ELSSFootIK.generated.h already included, missing '#pragma once' in ELSSFootIK.h"
#endif
#define ABP_200508_ELSSFootIK_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_EVENT_PARMS \
	struct ELSSFootIK_eventCalcFootIKParam_Parms \
	{ \
		FSSFootIKParam ReturnValue; \
	}; \
	struct ELSSFootIK_eventUpdateFloorIK_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSFootIK_eventUpdateFloorIK_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSFootIK(); \
	friend struct Z_Construct_UClass_UELSSFootIK_Statics; \
public: \
	DECLARE_CLASS(UELSSFootIK, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUELSSFootIK(); \
	friend struct Z_Construct_UClass_UELSSFootIK_Statics; \
public: \
	DECLARE_CLASS(UELSSFootIK, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSFootIK(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSFootIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSFootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSFootIK); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSFootIK(UELSSFootIK&&); \
	NO_API UELSSFootIK(const UELSSFootIK&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSFootIK(UELSSFootIK&&); \
	NO_API UELSSFootIK(const UELSSFootIK&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSFootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSFootIK); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableIK() { return STRUCT_OFFSET(UELSSFootIK, bEnableIK); } \
	FORCEINLINE static uint32 __PPO__bEnableDrivingIK() { return STRUCT_OFFSET(UELSSFootIK, bEnableDrivingIK); } \
	FORCEINLINE static uint32 __PPO__CurrentParam() { return STRUCT_OFFSET(UELSSFootIK, CurrentParam); } \
	FORCEINLINE static uint32 __PPO__FootBoneName_L() { return STRUCT_OFFSET(UELSSFootIK, FootBoneName_L); } \
	FORCEINLINE static uint32 __PPO__FootBoneName_R() { return STRUCT_OFFSET(UELSSFootIK, FootBoneName_R); } \
	FORCEINLINE static uint32 __PPO__ActiveRangeFromCamera() { return STRUCT_OFFSET(UELSSFootIK, ActiveRangeFromCamera); } \
	FORCEINLINE static uint32 __PPO__bPlayerDisabled() { return STRUCT_OFFSET(UELSSFootIK, bPlayerDisabled); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSFootIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSFootIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
