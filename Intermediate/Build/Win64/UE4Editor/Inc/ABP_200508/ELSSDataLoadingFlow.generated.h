// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSDataLoadingFlowState : uint8;
#ifdef ABP_200508_ELSSDataLoadingFlow_generated_h
#error "ELSSDataLoadingFlow.generated.h already included, missing '#pragma once' in ELSSDataLoadingFlow.h"
#endif
#define ABP_200508_ELSSDataLoadingFlow_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsState);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_EVENT_PARMS \
	struct ELSSDataLoadingFlow_eventTickState_AssetLoading_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSDataLoadingFlow_eventTickState_Closing_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSDataLoadingFlow_eventTickState_Exit_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSDataLoadingFlow_eventTickState_Initialize_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSDataLoadingFlow_eventTickState_MasterDataUpdate_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSDataLoadingFlow_eventTickState_NextLevelLoading_Parms \
	{ \
		float inDeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSDataLoadingFlow(); \
	friend struct Z_Construct_UClass_AELSSDataLoadingFlow_Statics; \
public: \
	DECLARE_CLASS(AELSSDataLoadingFlow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDataLoadingFlow)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELSSDataLoadingFlow(); \
	friend struct Z_Construct_UClass_AELSSDataLoadingFlow_Statics; \
public: \
	DECLARE_CLASS(AELSSDataLoadingFlow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDataLoadingFlow)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSDataLoadingFlow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSDataLoadingFlow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDataLoadingFlow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDataLoadingFlow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDataLoadingFlow(AELSSDataLoadingFlow&&); \
	NO_API AELSSDataLoadingFlow(const AELSSDataLoadingFlow&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDataLoadingFlow(AELSSDataLoadingFlow&&); \
	NO_API AELSSDataLoadingFlow(const AELSSDataLoadingFlow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDataLoadingFlow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDataLoadingFlow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSDataLoadingFlow)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Result() { return STRUCT_OFFSET(AELSSDataLoadingFlow, Result); } \
	FORCEINLINE static uint32 __PPO__PrevState() { return STRUCT_OFFSET(AELSSDataLoadingFlow, PrevState); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSDataLoadingFlow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDataLoadingFlow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
