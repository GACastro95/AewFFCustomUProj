// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FCreateTeamParam;
struct FELWrestlerProfile_CutScene;
enum class EFanReaction : uint8;
struct FELMoves_Finisher;
struct FCreateTeamMemberInfo;
struct FGuid;
#ifdef ABP_200508_SaveDataObject_UGC_Team_generated_h
#error "SaveDataObject_UGC_Team.generated.h already included, missing '#pragma once' in SaveDataObject_UGC_Team.h"
#endif
#define ABP_200508_SaveDataObject_UGC_Team_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnnounceId); \
	DECLARE_FUNCTION(execGetCreatedDate); \
	DECLARE_FUNCTION(execGetCreateTeamParam); \
	DECLARE_FUNCTION(execGetCreateTeamParam_All); \
	DECLARE_FUNCTION(execGetCutScene); \
	DECLARE_FUNCTION(execGetFanReaction); \
	DECLARE_FUNCTION(execGetLastModifiedDate); \
	DECLARE_FUNCTION(execGetSnsName); \
	DECLARE_FUNCTION(execGetTagFinisher01); \
	DECLARE_FUNCTION(execGetTagFinisher02); \
	DECLARE_FUNCTION(execGetTeamMembers); \
	DECLARE_FUNCTION(execGetTeamName); \
	DECLARE_FUNCTION(execGetTeamUID); \
	DECLARE_FUNCTION(execSetAnnounceId); \
	DECLARE_FUNCTION(execSetCreatedDate); \
	DECLARE_FUNCTION(execSetCreateTeamParam); \
	DECLARE_FUNCTION(execSetCreateTeamParam_All); \
	DECLARE_FUNCTION(execSetCutScene); \
	DECLARE_FUNCTION(execSetFanReaction); \
	DECLARE_FUNCTION(execSetLastModifiedDate); \
	DECLARE_FUNCTION(execSetSnsName); \
	DECLARE_FUNCTION(execSetTagFinisher01); \
	DECLARE_FUNCTION(execSetTagFinisher02); \
	DECLARE_FUNCTION(execSetTeamMembers); \
	DECLARE_FUNCTION(execSetTeamName); \
	DECLARE_FUNCTION(execSetTeamUID);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnnounceId); \
	DECLARE_FUNCTION(execGetCreatedDate); \
	DECLARE_FUNCTION(execGetCreateTeamParam); \
	DECLARE_FUNCTION(execGetCreateTeamParam_All); \
	DECLARE_FUNCTION(execGetCutScene); \
	DECLARE_FUNCTION(execGetFanReaction); \
	DECLARE_FUNCTION(execGetLastModifiedDate); \
	DECLARE_FUNCTION(execGetSnsName); \
	DECLARE_FUNCTION(execGetTagFinisher01); \
	DECLARE_FUNCTION(execGetTagFinisher02); \
	DECLARE_FUNCTION(execGetTeamMembers); \
	DECLARE_FUNCTION(execGetTeamName); \
	DECLARE_FUNCTION(execGetTeamUID); \
	DECLARE_FUNCTION(execSetAnnounceId); \
	DECLARE_FUNCTION(execSetCreatedDate); \
	DECLARE_FUNCTION(execSetCreateTeamParam); \
	DECLARE_FUNCTION(execSetCreateTeamParam_All); \
	DECLARE_FUNCTION(execSetCutScene); \
	DECLARE_FUNCTION(execSetFanReaction); \
	DECLARE_FUNCTION(execSetLastModifiedDate); \
	DECLARE_FUNCTION(execSetSnsName); \
	DECLARE_FUNCTION(execSetTagFinisher01); \
	DECLARE_FUNCTION(execSetTagFinisher02); \
	DECLARE_FUNCTION(execSetTeamMembers); \
	DECLARE_FUNCTION(execSetTeamName); \
	DECLARE_FUNCTION(execSetTeamUID);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataObject_UGC_Team(); \
	friend struct Z_Construct_UClass_USaveDataObject_UGC_Team_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_UGC_Team, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_UGC_Team)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataObject_UGC_Team(); \
	friend struct Z_Construct_UClass_USaveDataObject_UGC_Team_Statics; \
public: \
	DECLARE_CLASS(USaveDataObject_UGC_Team, USaveDataObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataObject_UGC_Team)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataObject_UGC_Team(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataObject_UGC_Team) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_UGC_Team); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_UGC_Team); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_UGC_Team(USaveDataObject_UGC_Team&&); \
	NO_API USaveDataObject_UGC_Team(const USaveDataObject_UGC_Team&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataObject_UGC_Team(USaveDataObject_UGC_Team&&); \
	NO_API USaveDataObject_UGC_Team(const USaveDataObject_UGC_Team&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataObject_UGC_Team); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataObject_UGC_Team); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataObject_UGC_Team)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_13_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataObject_UGC_Team>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataObject_UGC_Team_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
