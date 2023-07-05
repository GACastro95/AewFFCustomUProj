// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGLAPI_Base;
class UGameLiftMatchMakeSystem;
struct FCreateGameSession_RequestParam;
struct FGameLiftGameSession_Response;
struct FGameLiftPlayerSession_Response;
class UGameLiftClientObject;
struct FDescribeGameSessions_RequestParam;
struct FSSPlayerSessionParam;
struct FCreatePlayerSession_RequestParam;
struct FGLAPI_ErrorData;
struct FGameLiftGameSessions_Response;
enum class EMatchMakeExecuteType : uint8;
struct FRandomJoinMatchData;
enum class EWrestlerID_N : uint8;
#ifdef ABP_200508_GameLiftMatchMakeSystem_generated_h
#error "GameLiftMatchMakeSystem.generated.h already included, missing '#pragma once' in GameLiftMatchMakeSystem.h"
#endif
#define ABP_200508_GameLiftMatchMakeSystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateMatchMakeAPI); \
	DECLARE_FUNCTION(execCreateClientJsonData); \
	DECLARE_FUNCTION(execCreateGameLiftMatchMakeSystem); \
	DECLARE_FUNCTION(execCreateMatchMake); \
	DECLARE_FUNCTION(execCreateMatchMakeToRequest); \
	DECLARE_FUNCTION(execCreateMatchMakeToSessionParam); \
	DECLARE_FUNCTION(execGetGameServerJoinData); \
	DECLARE_FUNCTION(execGetJoinGamePlayerSessionData); \
	DECLARE_FUNCTION(execGetPlayerSessionId); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsMatchMakeEnd); \
	DECLARE_FUNCTION(execJoinGameServerIpPort); \
	DECLARE_FUNCTION(execJoinGameSession); \
	DECLARE_FUNCTION(execJoinGameSessionToGameSessionData); \
	DECLARE_FUNCTION(execJoinGameSessionToRequest); \
	DECLARE_FUNCTION(execJoinPlayerSession); \
	DECLARE_FUNCTION(execJoinPlayerSessionToParam); \
	DECLARE_FUNCTION(execJoinPlayerSessionToRequestParam); \
	DECLARE_FUNCTION(execOnCreateGameSessionSuccess); \
	DECLARE_FUNCTION(execOnErrorEvent); \
	DECLARE_FUNCTION(execOnJoinGameSessionSuccess); \
	DECLARE_FUNCTION(execOnJoinGameSessionToDelay); \
	DECLARE_FUNCTION(execOnJoinPlayerSessionSuccess); \
	DECLARE_FUNCTION(execOnSearchGameSessionSuccess); \
	DECLARE_FUNCTION(execOnSuccessEvent); \
	DECLARE_FUNCTION(execRandomGameSessionJoinOrCreate); \
	DECLARE_FUNCTION(execSearchGameSessionToAlias); \
	DECLARE_FUNCTION(execSetUserSelectedData); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateMatchMakeAPI); \
	DECLARE_FUNCTION(execCreateClientJsonData); \
	DECLARE_FUNCTION(execCreateGameLiftMatchMakeSystem); \
	DECLARE_FUNCTION(execCreateMatchMake); \
	DECLARE_FUNCTION(execCreateMatchMakeToRequest); \
	DECLARE_FUNCTION(execCreateMatchMakeToSessionParam); \
	DECLARE_FUNCTION(execGetGameServerJoinData); \
	DECLARE_FUNCTION(execGetJoinGamePlayerSessionData); \
	DECLARE_FUNCTION(execGetPlayerSessionId); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsMatchMakeEnd); \
	DECLARE_FUNCTION(execJoinGameServerIpPort); \
	DECLARE_FUNCTION(execJoinGameSession); \
	DECLARE_FUNCTION(execJoinGameSessionToGameSessionData); \
	DECLARE_FUNCTION(execJoinGameSessionToRequest); \
	DECLARE_FUNCTION(execJoinPlayerSession); \
	DECLARE_FUNCTION(execJoinPlayerSessionToParam); \
	DECLARE_FUNCTION(execJoinPlayerSessionToRequestParam); \
	DECLARE_FUNCTION(execOnCreateGameSessionSuccess); \
	DECLARE_FUNCTION(execOnErrorEvent); \
	DECLARE_FUNCTION(execOnJoinGameSessionSuccess); \
	DECLARE_FUNCTION(execOnJoinGameSessionToDelay); \
	DECLARE_FUNCTION(execOnJoinPlayerSessionSuccess); \
	DECLARE_FUNCTION(execOnSearchGameSessionSuccess); \
	DECLARE_FUNCTION(execOnSuccessEvent); \
	DECLARE_FUNCTION(execRandomGameSessionJoinOrCreate); \
	DECLARE_FUNCTION(execSearchGameSessionToAlias); \
	DECLARE_FUNCTION(execSetUserSelectedData); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameLiftMatchMakeSystem(); \
	friend struct Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics; \
public: \
	DECLARE_CLASS(UGameLiftMatchMakeSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGameLiftMatchMakeSystem(); \
	friend struct Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics; \
public: \
	DECLARE_CLASS(UGameLiftMatchMakeSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UGameLiftMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameLiftMatchMakeSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameLiftMatchMakeSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftMatchMakeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftMatchMakeSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftMatchMakeSystem(UGameLiftMatchMakeSystem&&); \
	NO_API UGameLiftMatchMakeSystem(const UGameLiftMatchMakeSystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameLiftMatchMakeSystem(UGameLiftMatchMakeSystem&&); \
	NO_API UGameLiftMatchMakeSystem(const UGameLiftMatchMakeSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameLiftMatchMakeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameLiftMatchMakeSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameLiftMatchMakeSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__onCallEndEventSuccess() { return STRUCT_OFFSET(UGameLiftMatchMakeSystem, onCallEndEventSuccess); } \
	FORCEINLINE static uint32 __PPO__onCallEndEventFailed() { return STRUCT_OFFSET(UGameLiftMatchMakeSystem, onCallEndEventFailed); } \
	FORCEINLINE static uint32 __PPO__onDelayTimerEvent() { return STRUCT_OFFSET(UGameLiftMatchMakeSystem, onDelayTimerEvent); } \
	FORCEINLINE static uint32 __PPO__SelectedWrestlerID() { return STRUCT_OFFSET(UGameLiftMatchMakeSystem, SelectedWrestlerID); }


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_24_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UGameLiftMatchMakeSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GameLiftMatchMakeSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
