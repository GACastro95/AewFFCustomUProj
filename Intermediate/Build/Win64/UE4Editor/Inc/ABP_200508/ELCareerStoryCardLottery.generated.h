// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerStoryCard;
struct FCareerStoryOpponent;
struct FCareerRegularRewardInfo;
enum class ECareerStoryCardRegularReward : uint8;
enum class ECareerStoryTiming : uint8;
#ifdef ABP_200508_ELCareerStoryCardLottery_generated_h
#error "ELCareerStoryCardLottery.generated.h already included, missing '#pragma once' in ELCareerStoryCardLottery.h"
#endif
#define ABP_200508_ELCareerStoryCardLottery_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Command); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Dark); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Debug); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Long); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_MiniGame); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_VeryShort); \
	DECLARE_FUNCTION(execAdd_StoryOpponent_RowData); \
	DECLARE_FUNCTION(execCombineStoryCards); \
	DECLARE_FUNCTION(execGetCareerStoryCardTable); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableCommand); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableDark); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableDebug); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableLong); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableMiniGame); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableVeryShort); \
	DECLARE_FUNCTION(execGetStoryCardRegularRewardAForMiniGame); \
	DECLARE_FUNCTION(execGetStoryCardRegularRewardAForVeryShort); \
	DECLARE_FUNCTION(execGetStoryCardRewardAForVeryShort); \
	DECLARE_FUNCTION(execLottery);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Command); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Dark); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Debug); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_Long); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_MiniGame); \
	DECLARE_FUNCTION(execAdd_StoryCard_RowData_VeryShort); \
	DECLARE_FUNCTION(execAdd_StoryOpponent_RowData); \
	DECLARE_FUNCTION(execCombineStoryCards); \
	DECLARE_FUNCTION(execGetCareerStoryCardTable); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableCommand); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableDark); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableDebug); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableLong); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableMiniGame); \
	DECLARE_FUNCTION(execGetCareerStoryCardTableVeryShort); \
	DECLARE_FUNCTION(execGetStoryCardRegularRewardAForMiniGame); \
	DECLARE_FUNCTION(execGetStoryCardRegularRewardAForVeryShort); \
	DECLARE_FUNCTION(execGetStoryCardRewardAForVeryShort); \
	DECLARE_FUNCTION(execLottery);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerStoryCardLottery(); \
	friend struct Z_Construct_UClass_AELCareerStoryCardLottery_Statics; \
public: \
	DECLARE_CLASS(AELCareerStoryCardLottery, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStoryCardLottery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerStoryCardLottery(); \
	friend struct Z_Construct_UClass_AELCareerStoryCardLottery_Statics; \
public: \
	DECLARE_CLASS(AELCareerStoryCardLottery, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerStoryCardLottery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerStoryCardLottery(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerStoryCardLottery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStoryCardLottery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStoryCardLottery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStoryCardLottery(AELCareerStoryCardLottery&&); \
	NO_API AELCareerStoryCardLottery(const AELCareerStoryCardLottery&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerStoryCardLottery(AELCareerStoryCardLottery&&); \
	NO_API AELCareerStoryCardLottery(const AELCareerStoryCardLottery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerStoryCardLottery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerStoryCardLottery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerStoryCardLottery)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCard() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCard); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardVeryShort() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardVeryShort); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardCommand() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardCommand); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardLong() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardLong); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardMiniGame() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardMiniGame); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardDark() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardDark); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryCardDebug() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryCardDebug); } \
	FORCEINLINE static uint32 __PPO__m_CareerStoryOpponent() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_CareerStoryOpponent); } \
	FORCEINLINE static uint32 __PPO__m_TempStoryCard() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_TempStoryCard); } \
	FORCEINLINE static uint32 __PPO__m_OpponentAll() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentAll); } \
	FORCEINLINE static uint32 __PPO__m_OpponentHERO() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentHERO); } \
	FORCEINLINE static uint32 __PPO__m_OpponentSHY() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentSHY); } \
	FORCEINLINE static uint32 __PPO__m_OpponentCONFIOENT() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentCONFIOENT); } \
	FORCEINLINE static uint32 __PPO__m_OpponentENIGMA() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentENIGMA); } \
	FORCEINLINE static uint32 __PPO__m_OpponentMONSTER() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentMONSTER); } \
	FORCEINLINE static uint32 __PPO__m_OpponentJERK() { return STRUCT_OFFSET(AELCareerStoryCardLottery, m_OpponentJERK); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerStoryCardLottery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerStoryCardLottery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
