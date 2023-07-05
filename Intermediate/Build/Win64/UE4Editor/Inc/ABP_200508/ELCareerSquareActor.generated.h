// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FCareerSquareData;
#ifdef ABP_200508_ELCareerSquareActor_generated_h
#error "ELCareerSquareActor.generated.h already included, missing '#pragma once' in ELCareerSquareActor.h"
#endif
#define ABP_200508_ELCareerSquareActor_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastActionFinished); \
	DECLARE_FUNCTION(execGetHeliport); \
	DECLARE_FUNCTION(execGetSquareData); \
	DECLARE_FUNCTION(execSetSquareData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastActionFinished); \
	DECLARE_FUNCTION(execGetHeliport); \
	DECLARE_FUNCTION(execGetSquareData); \
	DECLARE_FUNCTION(execSetSquareData);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerSquareActor(); \
	friend struct Z_Construct_UClass_AELCareerSquareActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerSquareActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSquareActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerSquareActor(); \
	friend struct Z_Construct_UClass_AELCareerSquareActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerSquareActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerSquareActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerSquareActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerSquareActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSquareActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSquareActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSquareActor(AELCareerSquareActor&&); \
	NO_API AELCareerSquareActor(const AELCareerSquareActor&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerSquareActor(AELCareerSquareActor&&); \
	NO_API AELCareerSquareActor(const AELCareerSquareActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerSquareActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerSquareActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerSquareActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SquareID() { return STRUCT_OFFSET(AELCareerSquareActor, SquareID); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerSquareActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerSquareActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
