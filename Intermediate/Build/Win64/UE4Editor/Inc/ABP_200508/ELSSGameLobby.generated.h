// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELSSLobbyMatchPlayerDataToClient;
enum class eSSLobbyState : uint8;
class AGameMode;
struct FSSGameLobbyData;
class AELSSPlayerState;
class APlayerController;
struct FSSOnlinePlayerData;
#ifdef ABP_200508_ELSSGameLobby_generated_h
#error "ELSSGameLobby.generated.h already included, missing '#pragma once' in ELSSGameLobby.h"
#endif
#define ABP_200508_ELSSGameLobby_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceLobbySyncDataNoticeToClient); \
	DECLARE_FUNCTION(execGetGameStartTime); \
	DECLARE_FUNCTION(execGetLobbyHottestPlayerDataToClient); \
	DECLARE_FUNCTION(execGetLobbyPlayerCount); \
	DECLARE_FUNCTION(execGetLobbyState); \
	DECLARE_FUNCTION(execGetMatchPlayerData); \
	DECLARE_FUNCTION(execInitializeForClient); \
	DECLARE_FUNCTION(execInitializeLobby); \
	DECLARE_FUNCTION(execIsEmptyLobby); \
	DECLARE_FUNCTION(execIsLobbyEnd); \
	DECLARE_FUNCTION(execIsLobbyMatchAIPlayer); \
	DECLARE_FUNCTION(execIsLobbyMatchPlayerToCheckClient); \
	DECLARE_FUNCTION(execOnRep_SSGameLobbyData); \
	DECLARE_FUNCTION(execOnRep_SSGameLobbyState); \
	DECLARE_FUNCTION(execOnRep_SSGameNpcCount); \
	DECLARE_FUNCTION(execOnRep_SSGameStartLimitTime); \
	DECLARE_FUNCTION(execOnRep_SSGameValidPlayerCount); \
	DECLARE_FUNCTION(execSSGameServerJoinPlayerNotifyEvent); \
	DECLARE_FUNCTION(execStartupLobby); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceLobbySyncDataNoticeToClient); \
	DECLARE_FUNCTION(execGetGameStartTime); \
	DECLARE_FUNCTION(execGetLobbyHottestPlayerDataToClient); \
	DECLARE_FUNCTION(execGetLobbyPlayerCount); \
	DECLARE_FUNCTION(execGetLobbyState); \
	DECLARE_FUNCTION(execGetMatchPlayerData); \
	DECLARE_FUNCTION(execInitializeForClient); \
	DECLARE_FUNCTION(execInitializeLobby); \
	DECLARE_FUNCTION(execIsEmptyLobby); \
	DECLARE_FUNCTION(execIsLobbyEnd); \
	DECLARE_FUNCTION(execIsLobbyMatchAIPlayer); \
	DECLARE_FUNCTION(execIsLobbyMatchPlayerToCheckClient); \
	DECLARE_FUNCTION(execOnRep_SSGameLobbyData); \
	DECLARE_FUNCTION(execOnRep_SSGameLobbyState); \
	DECLARE_FUNCTION(execOnRep_SSGameNpcCount); \
	DECLARE_FUNCTION(execOnRep_SSGameStartLimitTime); \
	DECLARE_FUNCTION(execOnRep_SSGameValidPlayerCount); \
	DECLARE_FUNCTION(execSSGameServerJoinPlayerNotifyEvent); \
	DECLARE_FUNCTION(execStartupLobby); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSGameLobby(); \
	friend struct Z_Construct_UClass_UELSSGameLobby_Statics; \
public: \
	DECLARE_CLASS(UELSSGameLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameLobby) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		tGameStartLimit=NETFIELD_REP_START, \
		ssGamePlayerCount, \
		ssGameNpcCount, \
		ssGameLobbyState, \
		ssLobbyData, \
		NETFIELD_REP_END=ssLobbyData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UELSSGameLobby) \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUELSSGameLobby(); \
	friend struct Z_Construct_UClass_UELSSGameLobby_Statics; \
public: \
	DECLARE_CLASS(UELSSGameLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSGameLobby) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		tGameStartLimit=NETFIELD_REP_START, \
		ssGamePlayerCount, \
		ssGameNpcCount, \
		ssGameLobbyState, \
		ssLobbyData, \
		NETFIELD_REP_END=ssLobbyData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UELSSGameLobby) \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSGameLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSGameLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameLobby(UELSSGameLobby&&); \
	NO_API UELSSGameLobby(const UELSSGameLobby&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSGameLobby(UELSSGameLobby&&); \
	NO_API UELSSGameLobby(const UELSSGameLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSGameLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSGameLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSGameLobby)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ssMatchPlayerDataList() { return STRUCT_OFFSET(UELSSGameLobby, ssMatchPlayerDataList); } \
	FORCEINLINE static uint32 __PPO__SSGameLobbyData() { return STRUCT_OFFSET(UELSSGameLobby, SSGameLobbyData); } \
	FORCEINLINE static uint32 __PPO__tGameStartLimit() { return STRUCT_OFFSET(UELSSGameLobby, tGameStartLimit); } \
	FORCEINLINE static uint32 __PPO__ssGamePlayerCount() { return STRUCT_OFFSET(UELSSGameLobby, ssGamePlayerCount); } \
	FORCEINLINE static uint32 __PPO__ssGameNpcCount() { return STRUCT_OFFSET(UELSSGameLobby, ssGameNpcCount); } \
	FORCEINLINE static uint32 __PPO__ssGameLobbyState() { return STRUCT_OFFSET(UELSSGameLobby, ssGameLobbyState); } \
	FORCEINLINE static uint32 __PPO__clientMatchPlayerList() { return STRUCT_OFFSET(UELSSGameLobby, clientMatchPlayerList); } \
	FORCEINLINE static uint32 __PPO__clientPlayerAIList() { return STRUCT_OFFSET(UELSSGameLobby, clientPlayerAIList); } \
	FORCEINLINE static uint32 __PPO__ssLobbyData() { return STRUCT_OFFSET(UELSSGameLobby, ssLobbyData); } \
	FORCEINLINE static uint32 __PPO__IsInitialized() { return STRUCT_OFFSET(UELSSGameLobby, IsInitialized); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSGameLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
