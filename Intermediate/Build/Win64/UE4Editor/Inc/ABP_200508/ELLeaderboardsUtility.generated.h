// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FELLeaderboardUserData;
class UELLeaderboards;
struct FDateTime;
class UELLeaderboardUserSeasonStats;
class UELLeaderboardUserStats;
#ifdef ABP_200508_ELLeaderboardsUtility_generated_h
#error "ELLeaderboardsUtility.generated.h already included, missing '#pragma once' in ELLeaderboardsUtility.h"
#endif
#define ABP_200508_ELLeaderboardsUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindLeaderboardUserData); \
	DECLARE_FUNCTION(execFindLeaderboardUserDataByLeaderboadName); \
	DECLARE_FUNCTION(execFindMyLeaderboardRank); \
	DECLARE_FUNCTION(execFindMyLeaderboardUserData); \
	DECLARE_FUNCTION(execFindMyLeaderboardUserDataByLeaderboadName); \
	DECLARE_FUNCTION(execFindMyUserData); \
	DECLARE_FUNCTION(execFindMyUserScoreRank); \
	DECLARE_FUNCTION(execFindUserData); \
	DECLARE_FUNCTION(execFindUserLeaderboardRank); \
	DECLARE_FUNCTION(execFindUserScoreRank); \
	DECLARE_FUNCTION(execGetELLeaderboards); \
	DECLARE_FUNCTION(execGetLeaderboardProductUserIds); \
	DECLARE_FUNCTION(execGetLeaderboardQueryDateTime); \
	DECLARE_FUNCTION(execGetLeaderboardUserSeasonStats); \
	DECLARE_FUNCTION(execGetLeaderboardUserStats); \
	DECLARE_FUNCTION(execGetLeaderboardUserStatsQueryDateTime); \
	DECLARE_FUNCTION(execGetSubLeaderboardUserData); \
	DECLARE_FUNCTION(execGetUserScoreQueryDateTime);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindLeaderboardUserData); \
	DECLARE_FUNCTION(execFindLeaderboardUserDataByLeaderboadName); \
	DECLARE_FUNCTION(execFindMyLeaderboardRank); \
	DECLARE_FUNCTION(execFindMyLeaderboardUserData); \
	DECLARE_FUNCTION(execFindMyLeaderboardUserDataByLeaderboadName); \
	DECLARE_FUNCTION(execFindMyUserData); \
	DECLARE_FUNCTION(execFindMyUserScoreRank); \
	DECLARE_FUNCTION(execFindUserData); \
	DECLARE_FUNCTION(execFindUserLeaderboardRank); \
	DECLARE_FUNCTION(execFindUserScoreRank); \
	DECLARE_FUNCTION(execGetELLeaderboards); \
	DECLARE_FUNCTION(execGetLeaderboardProductUserIds); \
	DECLARE_FUNCTION(execGetLeaderboardQueryDateTime); \
	DECLARE_FUNCTION(execGetLeaderboardUserSeasonStats); \
	DECLARE_FUNCTION(execGetLeaderboardUserStats); \
	DECLARE_FUNCTION(execGetLeaderboardUserStatsQueryDateTime); \
	DECLARE_FUNCTION(execGetSubLeaderboardUserData); \
	DECLARE_FUNCTION(execGetUserScoreQueryDateTime);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELLeaderboardsUtility(); \
	friend struct Z_Construct_UClass_UELLeaderboardsUtility_Statics; \
public: \
	DECLARE_CLASS(UELLeaderboardsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLeaderboardsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELLeaderboardsUtility(); \
	friend struct Z_Construct_UClass_UELLeaderboardsUtility_Statics; \
public: \
	DECLARE_CLASS(UELLeaderboardsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLeaderboardsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELLeaderboardsUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELLeaderboardsUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLeaderboardsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLeaderboardsUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLeaderboardsUtility(UELLeaderboardsUtility&&); \
	NO_API UELLeaderboardsUtility(const UELLeaderboardsUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLeaderboardsUtility(UELLeaderboardsUtility&&); \
	NO_API UELLeaderboardsUtility(const UELLeaderboardsUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLeaderboardsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLeaderboardsUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELLeaderboardsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELLeaderboardsUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboardsUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
