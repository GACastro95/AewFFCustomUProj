// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerStory;
class UDataTable;
#ifdef ABP_200508_ELCareerStoryDataActor_generated_h
#error "ELCareerStoryDataActor.generated.h already included, missing '#pragma once' in ELCareerStoryDataActor.h"
#endif
#define ABP_200508_ELCareerStoryDataActor_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCareerStoryData); \
	DECLARE_FUNCTION(execClearStoryDataTable); \
	DECLARE_FUNCTION(execGetCareerStoryDataTableByString); \
	DECLARE_FUNCTION(execGetCareerStoryFirstData); \
	DECLARE_FUNCTION(execGetCareerStoryRowData); \
	DECLARE_FUNCTION(execGetStoryDataTable); \
	DECLARE_FUNCTION(execIsLoadStoryData); \
	DECLARE_FUNCTION(execSetStoryDataTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCareerStoryData); \
	DECLARE_FUNCTION(execClearStoryDataTable); \
	DECLARE_FUNCTION(execGetCareerStoryDataTableByString); \
	DECLARE_FUNCTION(execGetCareerStoryFirstData); \
	DECLARE_FUNCTION(execGetCareerStoryRowData); \
	DECLARE_FUNCTION(execGetStoryDataTable); \
	DECLARE_FUNCTION(execIsLoadStoryData); \
	DECLARE_FUNCTION(execSetStoryDataTable);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_EVENT_PARMS \
	struct ELCareerStoryDataActor_eventSetupStoryDataFromStoryList_Parms \
	{ \
		FName _key; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerStoryDataActor(); \
	friend struct Z_Construct_UClass_AELCareerStoryDataActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerStoryDataActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStoryDataActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerStoryDataActor(); \
	friend struct Z_Construct_UClass_AELCareerStoryDataActor_Statics; \
public: \
	DECLARE_CLASS(AELCareerStoryDataActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStoryDataActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerStoryDataActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerStoryDataActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStoryDataActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStoryDataActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStoryDataActor(AELCareerStoryDataActor&&); \
	NO_API AELCareerStoryDataActor(const AELCareerStoryDataActor&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStoryDataActor(AELCareerStoryDataActor&&); \
	NO_API AELCareerStoryDataActor(const AELCareerStoryDataActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStoryDataActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStoryDataActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerStoryDataActor)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_StoryDataTable() { return STRUCT_OFFSET(AELCareerStoryDataActor, m_StoryDataTable); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerStoryDataActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryDataActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
