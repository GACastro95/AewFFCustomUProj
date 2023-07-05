// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ABP_200508_ELSSGimmickBase_generated_h
#error "ELSSGimmickBase.generated.h already included, missing '#pragma once' in ELSSGimmickBase.h"
#endif
#define ABP_200508_ELSSGimmickBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_RPC_WRAPPERS \
	virtual void OnActorLanded_Implementation(AActor* Actor); \
	virtual void OnActorLanding_Implementation(AActor* Actor); \
 \
	DECLARE_FUNCTION(execOnActorLanded); \
	DECLARE_FUNCTION(execOnActorLanding);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActorLanded_Implementation(AActor* Actor); \
	virtual void OnActorLanding_Implementation(AActor* Actor); \
 \
	DECLARE_FUNCTION(execOnActorLanded); \
	DECLARE_FUNCTION(execOnActorLanding);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_EVENT_PARMS \
	struct ELSSGimmickBase_eventOnActorLanded_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct ELSSGimmickBase_eventOnActorLanding_Parms \
	{ \
		AActor* Actor; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGimmickBase(); \
	friend struct Z_Construct_UClass_AELSSGimmickBase_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSGimmickBase*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGimmickBase(); \
	friend struct Z_Construct_UClass_AELSSGimmickBase_Statics; \
public: \
	DECLARE_CLASS(AELSSGimmickBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGimmickBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSGimmickBase*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGimmickBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGimmickBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickBase(AELSSGimmickBase&&); \
	NO_API AELSSGimmickBase(const AELSSGimmickBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGimmickBase(AELSSGimmickBase&&); \
	NO_API AELSSGimmickBase(const AELSSGimmickBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGimmickBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGimmickBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSGimmickBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGimmickBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGimmickBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
