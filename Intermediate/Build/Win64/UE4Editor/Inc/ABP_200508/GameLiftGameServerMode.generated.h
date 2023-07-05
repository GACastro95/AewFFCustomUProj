// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameLiftGameSession_Response;
class APlayerState;
struct FSSOnlinePlayerData;
class AController;
#ifdef ABP_200508_GameLiftGameServerMode_generated_h
#error "GameLiftGameServerMode.generated.h already included, missing '#pragma once' in GameLiftGameServerMode.h"
#endif
#define ABP_200508_GameLiftGameServerMode_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGameServerEnd); \
	DECLARE_FUNCTION(execGetCreatePlayerPawnNum); \
	DECLARE_FUNCTION(execGetGameSessionPlayerMax); \
	DECLARE_FUNCTION(execGetJoinGameSessionData); \
	DECLARE_FUNCTION(execGetJoinPlayerNum); \
	DECLARE_FUNCTION(execGetLoginPlayerData); \
	DECLARE_FUNCTION(execGetLoginPlayerDataToController); \
	DECLARE_FUNCTION(execGetLoginPlayerNum); \
	DECLARE_FUNCTION(execGetLoginPlayerToPlayerState); \
	DECLARE_FUNCTION(execGetServerJoinOptionName); \
	DECLARE_FUNCTION(execIsEnableSDK); \
	DECLARE_FUNCTION(execIsFirstPlayerJoinEnd); \
	DECLARE_FUNCTION(execIsGameServerActivate); \
	DECLARE_FUNCTION(execIsPlayerJoinEnd); \
	DECLARE_FUNCTION(execIsPlayerLoginEnd); \
	DECLARE_FUNCTION(execIsStartGameSession); \
	DECLARE_FUNCTION(execPrepareGameSession); \
	DECLARE_FUNCTION(execUpdatePlayerSessionPolicyIsStopPlayerJoin);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGameServerEnd); \
	DECLARE_FUNCTION(execGetCreatePlayerPawnNum); \
	DECLARE_FUNCTION(execGetGameSessionPlayerMax); \
	DECLARE_FUNCTION(execGetJoinGameSessionData); \
	DECLARE_FUNCTION(execGetJoinPlayerNum); \
	DECLARE_FUNCTION(execGetLoginPlayerData); \
	DECLARE_FUNCTION(execGetLoginPlayerDataToController); \
	DECLARE_FUNCTION(execGetLoginPlayerNum); \
	DECLARE_FUNCTION(execGetLoginPlayerToPlayerState); \
	DECLARE_FUNCTION(execGetServerJoinOptionName); \
	DECLARE_FUNCTION(execIsEnableSDK); \
	DECLARE_FUNCTION(execIsFirstPlayerJoinEnd); \
	DECLARE_FUNCTION(execIsGameServerActivate); \
	DECLARE_FUNCTION(execIsPlayerJoinEnd); \
	DECLARE_FUNCTION(execIsPlayerLoginEnd); \
	DECLARE_FUNCTION(execIsStartGameSession); \
	DECLARE_FUNCTION(execPrepareGameSession); \
	DECLARE_FUNCTION(execUpdatePlayerSessionPolicyIsStopPlayerJoin);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameLiftGameServerMode(); \
	friend struct Z_Construct_UClass_AGameLiftGameServerMode_Statics; \
public: \
	DECLARE_CLASS(AGameLiftGameServerMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AGameLiftGameServerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameLiftGameServerMode(); \
	friend struct Z_Construct_UClass_AGameLiftGameServerMode_Statics; \
public: \
	DECLARE_CLASS(AGameLiftGameServerMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AGameLiftGameServerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameLiftGameServerMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameLiftGameServerMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLiftGameServerMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLiftGameServerMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLiftGameServerMode(AGameLiftGameServerMode&&); \
	NO_API AGameLiftGameServerMode(const AGameLiftGameServerMode&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLiftGameServerMode(AGameLiftGameServerMode&&); \
	NO_API AGameLiftGameServerMode(const AGameLiftGameServerMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLiftGameServerMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLiftGameServerMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameLiftGameServerMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__gameJoinPlayer() { return STRUCT_OFFSET(AGameLiftGameServerMode, gameJoinPlayer); } \
	FORCEINLINE static uint32 __PPO__joinGameSessionData() { return STRUCT_OFFSET(AGameLiftGameServerMode, joinGameSessionData); } \
	FORCEINLINE static uint32 __PPO__joinPlayerDataToDummy() { return STRUCT_OFFSET(AGameLiftGameServerMode, joinPlayerDataToDummy); }


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AGameLiftGameServerMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GameLiftGameServerMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
