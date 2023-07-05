// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELNetPawn_generated_h
#error "ELNetPawn.generated.h already included, missing '#pragma once' in ELNetPawn.h"
#endif
#define ABP_200508_ELNetPawn_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasELNetAuthorityBP); \
	DECLARE_FUNCTION(execHasELNetExecAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetAuthorityBP); \
	DECLARE_FUNCTION(execSetELNetModeBP); \
	DECLARE_FUNCTION(execSetELNetTemporaryAuthorityBP);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_EVENT_PARMS \
	struct ELNetPawn_eventEventInput_EntranceCamera_ZoomOut_Parms \
	{ \
		float AxisValue; \
	}; \
	struct ELNetPawn_eventEventInput_EntranceCamera_ZoomUp_Parms \
	{ \
		float AxisValue; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELNetPawn(); \
	friend struct Z_Construct_UClass_AELNetPawn_Statics; \
public: \
	DECLARE_CLASS(AELNetPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetPawn*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELNetPawn(); \
	friend struct Z_Construct_UClass_AELNetPawn_Statics; \
public: \
	DECLARE_CLASS(AELNetPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELNetPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AELNetPawn*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELNetPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELNetPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetPawn(AELNetPawn&&); \
	NO_API AELNetPawn(const AELNetPawn&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELNetPawn(AELNetPawn&&); \
	NO_API AELNetPawn(const AELNetPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELNetPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELNetPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELNetPawn)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELNetRole() { return STRUCT_OFFSET(AELNetPawn, ELNetRole); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELNetPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELNetPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
