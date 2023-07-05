// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELAudienceManager_New_generated_h
#error "ELAudienceManager_New.generated.h already included, missing '#pragma once' in ELAudienceManager_New.h"
#endif
#define ABP_200508_ELAudienceManager_New_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyAudience_N); \
	DECLARE_FUNCTION(execListupAudience);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyAudience_N); \
	DECLARE_FUNCTION(execListupAudience);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_EVENT_PARMS \
	struct ELAudienceManager_New_eventTick_UpdateCrowd_N_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELAudienceManager_New(); \
	friend struct Z_Construct_UClass_AELAudienceManager_New_Statics; \
public: \
	DECLARE_CLASS(AELAudienceManager_New, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELAudienceManager_New)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELAudienceManager_New(); \
	friend struct Z_Construct_UClass_AELAudienceManager_New_Statics; \
public: \
	DECLARE_CLASS(AELAudienceManager_New, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELAudienceManager_New)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELAudienceManager_New(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELAudienceManager_New) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELAudienceManager_New); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELAudienceManager_New); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELAudienceManager_New(AELAudienceManager_New&&); \
	NO_API AELAudienceManager_New(const AELAudienceManager_New&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELAudienceManager_New(AELAudienceManager_New&&); \
	NO_API AELAudienceManager_New(const AELAudienceManager_New&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELAudienceManager_New); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELAudienceManager_New); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELAudienceManager_New)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudienceArray() { return STRUCT_OFFSET(AELAudienceManager_New, AudienceArray); } \
	FORCEINLINE static uint32 __PPO__BillboardAudienceArray() { return STRUCT_OFFSET(AELAudienceManager_New, BillboardAudienceArray); } \
	FORCEINLINE static uint32 __PPO__WiseAudienceArray() { return STRUCT_OFFSET(AELAudienceManager_New, WiseAudienceArray); } \
	FORCEINLINE static uint32 __PPO__UpdateIndex() { return STRUCT_OFFSET(AELAudienceManager_New, UpdateIndex); } \
	FORCEINLINE static uint32 __PPO__bRequestDestroy_N() { return STRUCT_OFFSET(AELAudienceManager_New, bRequestDestroy_N); } \
	FORCEINLINE static uint32 __PPO__bDestroyed_N() { return STRUCT_OFFSET(AELAudienceManager_New, bDestroyed_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_6_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELAudienceManager_New>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELAudienceManager_New_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
