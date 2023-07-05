// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECareerProp : uint8;
#ifdef ABP_200508_ELCareerPropBase_generated_h
#error "ELCareerPropBase.generated.h already included, missing '#pragma once' in ELCareerPropBase.h"
#endif
#define ABP_200508_ELCareerPropBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_EVENT_PARMS \
	struct ELCareerPropBase_eventSetAnimInstanceClass_Parms \
	{ \
		ECareerProp ePeop; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerPropBase(); \
	friend struct Z_Construct_UClass_AELCareerPropBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerPropBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerPropBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerPropBase(); \
	friend struct Z_Construct_UClass_AELCareerPropBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerPropBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerPropBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerPropBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerPropBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerPropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerPropBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerPropBase(AELCareerPropBase&&); \
	NO_API AELCareerPropBase(const AELCareerPropBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerPropBase(AELCareerPropBase&&); \
	NO_API AELCareerPropBase(const AELCareerPropBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerPropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerPropBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerPropBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pCharacter() { return STRUCT_OFFSET(AELCareerPropBase, m_pCharacter); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerPropBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerPropBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
