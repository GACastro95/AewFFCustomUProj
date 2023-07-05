// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTemplateScoutParam;
enum class EGender : uint8;
#ifdef ELITE_TemplateScoutComponent_generated_h
#error "TemplateScoutComponent.generated.h already included, missing '#pragma once' in TemplateScoutComponent.h"
#endif
#define ELITE_TemplateScoutComponent_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScoutTemplateList);


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScoutTemplateList);


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateScoutComponent(); \
	friend struct Z_Construct_UClass_UTemplateScoutComponent_Statics; \
public: \
	DECLARE_CLASS(UTemplateScoutComponent, UMyWrestlerDataEditComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UTemplateScoutComponent)


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTemplateScoutComponent(); \
	friend struct Z_Construct_UClass_UTemplateScoutComponent_Statics; \
public: \
	DECLARE_CLASS(UTemplateScoutComponent, UMyWrestlerDataEditComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UTemplateScoutComponent)


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateScoutComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateScoutComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateScoutComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateScoutComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateScoutComponent(UTemplateScoutComponent&&); \
	NO_API UTemplateScoutComponent(const UTemplateScoutComponent&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateScoutComponent(UTemplateScoutComponent&&); \
	NO_API UTemplateScoutComponent(const UTemplateScoutComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateScoutComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateScoutComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTemplateScoutComponent)


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TemplateListAsset_Male() { return STRUCT_OFFSET(UTemplateScoutComponent, TemplateListAsset_Male); } \
	FORCEINLINE static uint32 __PPO__TemplateListAsset_Female() { return STRUCT_OFFSET(UTemplateScoutComponent, TemplateListAsset_Female); }


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_10_PROLOG
#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UTemplateScoutComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_TemplateScoutComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
