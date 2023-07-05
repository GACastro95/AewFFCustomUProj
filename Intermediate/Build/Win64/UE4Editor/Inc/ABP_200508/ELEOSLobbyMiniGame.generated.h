// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELEOSLobbyMiniGameInfo;
enum class EELEOSLobbyMiniGameSteps : uint8;
enum class EELEOSLobbyPacketType : uint8;
class ULobbyPacketBase;
class UEOSUserBase;
class UEOSUser;
class UELEOSLobby;
#ifdef ABP_200508_ELEOSLobbyMiniGame_generated_h
#error "ELEOSLobbyMiniGame.generated.h already included, missing '#pragma once' in ELEOSLobbyMiniGame.h"
#endif
#define ABP_200508_ELEOSLobbyMiniGame_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetELEOSLobbyMiniGameInfo); \
	DECLARE_FUNCTION(execGetNowStep); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnReceivePacket); \
	DECLARE_FUNCTION(execSendOwnerSelectInfo); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetELEOSLobbyMiniGameInfo); \
	DECLARE_FUNCTION(execGetNowStep); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnReceivePacket); \
	DECLARE_FUNCTION(execSendOwnerSelectInfo); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELEOSLobbyMiniGame(); \
	friend struct Z_Construct_UClass_AELEOSLobbyMiniGame_Statics; \
public: \
	DECLARE_CLASS(AELEOSLobbyMiniGame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEOSLobbyMiniGame)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAELEOSLobbyMiniGame(); \
	friend struct Z_Construct_UClass_AELEOSLobbyMiniGame_Statics; \
public: \
	DECLARE_CLASS(AELEOSLobbyMiniGame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELEOSLobbyMiniGame)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELEOSLobbyMiniGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELEOSLobbyMiniGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEOSLobbyMiniGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEOSLobbyMiniGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEOSLobbyMiniGame(AELEOSLobbyMiniGame&&); \
	NO_API AELEOSLobbyMiniGame(const AELEOSLobbyMiniGame&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELEOSLobbyMiniGame(AELEOSLobbyMiniGame&&); \
	NO_API AELEOSLobbyMiniGame(const AELEOSLobbyMiniGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELEOSLobbyMiniGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELEOSLobbyMiniGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELEOSLobbyMiniGame)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSetup() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, bSetup); } \
	FORCEINLINE static uint32 __PPO__SelfPUID() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, SelfPUID); } \
	FORCEINLINE static uint32 __PPO__ELEOSLobby() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, ELEOSLobby); } \
	FORCEINLINE static uint32 __PPO__Step() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, Step); } \
	FORCEINLINE static uint32 __PPO__ELEOSLobbyMiniGameInfo() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, ELEOSLobbyMiniGameInfo); } \
	FORCEINLINE static uint32 __PPO__RequestMiniGameInfoTimerHandle() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, RequestMiniGameInfoTimerHandle); } \
	FORCEINLINE static uint32 __PPO__RequestMiniGameMemberStepsTimerHandle() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, RequestMiniGameMemberStepsTimerHandle); } \
	FORCEINLINE static uint32 __PPO__MemberSteps() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, MemberSteps); } \
	FORCEINLINE static uint32 __PPO__OnSetupCompleteEvent() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, OnSetupCompleteEvent); } \
	FORCEINLINE static uint32 __PPO__OnMiniGameOwnerSelectInfoEvent() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, OnMiniGameOwnerSelectInfoEvent); } \
	FORCEINLINE static uint32 __PPO__OnMiniGameNotifyEvent() { return STRUCT_OFFSET(AELEOSLobbyMiniGame, OnMiniGameNotifyEvent); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELEOSLobbyMiniGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobbyMiniGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
