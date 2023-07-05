// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCommentaryLoadingExecResource;
#ifdef ABP_200508_ELCommentaryLoadingExecutorBase_generated_h
#error "ELCommentaryLoadingExecutorBase.generated.h already included, missing '#pragma once' in ELCommentaryLoadingExecutorBase.h"
#endif
#define ABP_200508_ELCommentaryLoadingExecutorBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_RPC_WRAPPERS \
	virtual void OnEndLoadingScreen_Implementation(); \
	virtual void OnOverrideZOrder_Implementation(const int32 ZOrder); \
	virtual void OnStartLoadingScreen_Implementation(FCommentaryLoadingExecResource _textureInfo, FText const& _commentText); \
 \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execOnEndLoadingScreen); \
	DECLARE_FUNCTION(execOnOverrideZOrder); \
	DECLARE_FUNCTION(execOnStartLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndLoadingScreen_Implementation(); \
	virtual void OnOverrideZOrder_Implementation(const int32 ZOrder); \
	virtual void OnStartLoadingScreen_Implementation(FCommentaryLoadingExecResource _textureInfo, FText const& _commentText); \
 \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execOnEndLoadingScreen); \
	DECLARE_FUNCTION(execOnOverrideZOrder); \
	DECLARE_FUNCTION(execOnStartLoadingScreen);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_EVENT_PARMS \
	struct ELCommentaryLoadingExecutorBase_eventOnOverrideZOrder_Parms \
	{ \
		int32 ZOrder; \
	}; \
	struct ELCommentaryLoadingExecutorBase_eventOnStartLoadingScreen_Parms \
	{ \
		FCommentaryLoadingExecResource _textureInfo; \
		FText _commentText; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCommentaryLoadingExecutorBase(); \
	friend struct Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELCommentaryLoadingExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCommentaryLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAELCommentaryLoadingExecutorBase(); \
	friend struct Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics; \
public: \
	DECLARE_CLASS(AELCommentaryLoadingExecutorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCommentaryLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCommentaryLoadingExecutorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCommentaryLoadingExecutorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCommentaryLoadingExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCommentaryLoadingExecutorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCommentaryLoadingExecutorBase(AELCommentaryLoadingExecutorBase&&); \
	NO_API AELCommentaryLoadingExecutorBase(const AELCommentaryLoadingExecutorBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCommentaryLoadingExecutorBase(AELCommentaryLoadingExecutorBase&&); \
	NO_API AELCommentaryLoadingExecutorBase(const AELCommentaryLoadingExecutorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCommentaryLoadingExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCommentaryLoadingExecutorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCommentaryLoadingExecutorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompleteDelegate() { return STRUCT_OFFSET(AELCommentaryLoadingExecutorBase, CompleteDelegate); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCommentaryLoadingExecutorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCommentaryLoadingExecutorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
