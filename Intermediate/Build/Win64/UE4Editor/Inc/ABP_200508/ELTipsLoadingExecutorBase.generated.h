// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETipsLoadingCategory : uint8;
struct FTipsLoadingResourceInfo;
#ifdef ABP_200508_ELTipsLoadingExecutorBase_generated_h
#error "ELTipsLoadingExecutorBase.generated.h already included, missing '#pragma once' in ELTipsLoadingExecutorBase.h"
#endif
#define ABP_200508_ELTipsLoadingExecutorBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_RPC_WRAPPERS \
	virtual void OnEndLoadingScreen_Implementation(); \
	virtual void OnStartLoadingScreen_Implementation(ETipsLoadingCategory _Category, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart); \
 \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execOnEndLoadingScreen); \
	DECLARE_FUNCTION(execOnStartLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndLoadingScreen_Implementation(); \
	virtual void OnStartLoadingScreen_Implementation(ETipsLoadingCategory _Category, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart); \
 \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execOnEndLoadingScreen); \
	DECLARE_FUNCTION(execOnStartLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_EVENT_PARMS \
	struct ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms \
	{ \
		ETipsLoadingCategory _Category; \
		FTipsLoadingResourceInfo _resourceInfo; \
		bool _isFadeInStart; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELTipsLoadingExecutorBase(); \
	friend struct Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELTipsLoadingExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELTipsLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELTipsLoadingExecutorBase(); \
	friend struct Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELTipsLoadingExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELTipsLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELTipsLoadingExecutorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELTipsLoadingExecutorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELTipsLoadingExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELTipsLoadingExecutorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELTipsLoadingExecutorBase(AELTipsLoadingExecutorBase&&); \
	NO_API AELTipsLoadingExecutorBase(const AELTipsLoadingExecutorBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELTipsLoadingExecutorBase(AELTipsLoadingExecutorBase&&); \
	NO_API AELTipsLoadingExecutorBase(const AELTipsLoadingExecutorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELTipsLoadingExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELTipsLoadingExecutorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELTipsLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompleteDelegate() { return STRUCT_OFFSET(AELTipsLoadingExecutorBase, CompleteDelegate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELTipsLoadingExecutorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELTipsLoadingExecutorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
