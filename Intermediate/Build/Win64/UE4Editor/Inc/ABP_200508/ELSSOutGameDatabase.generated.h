// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSAbilityParam;
class UTexture2D;
enum class ESSHeatSkillCategory : uint8;
struct FSSHeatSkillParam;
struct FSSMenuFinisherParam;
struct FSSMoveParam;
enum class ESSAbilitySortType : uint8;
enum class EWrestlerID_N : uint8;
struct FSSWrestlerParam;
enum class ESSWrestlerType : uint8;
struct FSSWrestlerTypeParam;
#ifdef ABP_200508_ELSSOutGameDatabase_generated_h
#error "ELSSOutGameDatabase.generated.h already included, missing '#pragma once' in ELSSOutGameDatabase.h"
#endif
#define ABP_200508_ELSSOutGameDatabase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetMenuFinisherParamArray); \
	DECLARE_FUNCTION(execGetMenuFinisherParamById); \
	DECLARE_FUNCTION(execGetMenuFinisherParamByIndex); \
	DECLARE_FUNCTION(execGetMenuFinisherParamCount); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetSortedAbilityParamArray); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilityParam); \
	DECLARE_FUNCTION(execGetHeatSkillIconTexture); \
	DECLARE_FUNCTION(execGetHeatSkillIdAndLevelFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillIdFromTree); \
	DECLARE_FUNCTION(execGetHeatSkillParam); \
	DECLARE_FUNCTION(execGetMenuFinisherParamArray); \
	DECLARE_FUNCTION(execGetMenuFinisherParamById); \
	DECLARE_FUNCTION(execGetMenuFinisherParamByIndex); \
	DECLARE_FUNCTION(execGetMenuFinisherParamCount); \
	DECLARE_FUNCTION(execGetMoveParamById); \
	DECLARE_FUNCTION(execGetSortedAbilityParamArray); \
	DECLARE_FUNCTION(execGetWrestlerParam); \
	DECLARE_FUNCTION(execGetWrestlerTypeParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSOutGameDatabase(); \
	friend struct Z_Construct_UClass_AELSSOutGameDatabase_Statics; \
public: \
	DECLARE_CLASS(AELSSOutGameDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOutGameDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAELSSOutGameDatabase(); \
	friend struct Z_Construct_UClass_AELSSOutGameDatabase_Statics; \
public: \
	DECLARE_CLASS(AELSSOutGameDatabase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOutGameDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSOutGameDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSOutGameDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOutGameDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOutGameDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOutGameDatabase(AELSSOutGameDatabase&&); \
	NO_API AELSSOutGameDatabase(const AELSSOutGameDatabase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOutGameDatabase(AELSSOutGameDatabase&&); \
	NO_API AELSSOutGameDatabase(const AELSSOutGameDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOutGameDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOutGameDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSOutGameDatabase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_21_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSOutGameDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSOutGameDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
