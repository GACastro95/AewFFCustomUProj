// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWrestlerID_N : uint8;
enum class ESSServerState : uint8;
class AELSSPlayerState;
class AELSSLocator;
enum class ESSModeLaunchType : uint8;
class AActor;
#ifdef ABP_200508_ELSSGameMode_generated_h
#error "ELSSGameMode.generated.h already included, missing '#pragma once' in ELSSGameMode.h"
#endif
#define ABP_200508_ELSSGameMode_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_RPC_WRAPPERS \
	virtual bool CanEndClosing_Implementation() const; \
	virtual bool CanStartOfMatch_Implementation(); \
	virtual bool DebugForciblyEndMatch_Implementation(); \
	virtual bool EndOfMatch_Implementation(); \
	virtual void EnterState_Closing_Implementation(); \
	virtual void EnterState_DownloadTitleStorage_Implementation(); \
	virtual void EnterState_WaitStartGameSession_Implementation(); \
	virtual void ExitState_Closing_Implementation(); \
	virtual void ExitState_DownloadTitleStorage_Implementation(); \
	virtual void ExitState_WaitStartGameSession_Implementation(); \
	virtual bool InitializeCharacterPlacement_Implementation(int32 playerStartID, bool isShuffle); \
	virtual bool InitializeManagerActors_Implementation(); \
	virtual bool SetupCharacterPlacement_Implementation(); \
	virtual bool StartOfMatch_Implementation(); \
	virtual void TickState_Closing_Implementation(float inDeltaSeconds); \
	virtual void TickState_DownloadTitleStorage_Implementation(float inDeltaSeconds); \
	virtual void TickState_WaitStartGameSession_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execCalcRandomWrestlerIDs); \
	DECLARE_FUNCTION(execCanEndClosing); \
	DECLARE_FUNCTION(execCanLobbyStartCountdown); \
	DECLARE_FUNCTION(execCanLobbyStartHottestPlayer); \
	DECLARE_FUNCTION(execCanRequestDownloadTitleStorage); \
	DECLARE_FUNCTION(execCanStartOfMatch); \
	DECLARE_FUNCTION(execChangeServerState); \
	DECLARE_FUNCTION(execDebugForciblyEndMatch); \
	DECLARE_FUNCTION(execDebugGetAIEditWrestlerNum); \
	DECLARE_FUNCTION(execDebugIsAIOnlyMode); \
	DECLARE_FUNCTION(execEndOfMatch); \
	DECLARE_FUNCTION(execEnterState_Closing); \
	DECLARE_FUNCTION(execEnterState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execEnterState_WaitStartGameSession); \
	DECLARE_FUNCTION(execExitState_Closing); \
	DECLARE_FUNCTION(execExitState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execExitState_WaitStartGameSession); \
	DECLARE_FUNCTION(execGetGameServerMatchingData); \
	DECLARE_FUNCTION(execGetReservedPlayerStartLocator); \
	DECLARE_FUNCTION(execGetServerState); \
	DECLARE_FUNCTION(execInitializeCharacterPlacement); \
	DECLARE_FUNCTION(execInitializeManagerActors); \
	DECLARE_FUNCTION(execIsAcceptMatching); \
	DECLARE_FUNCTION(execIsCompletedDownloadTitleStorage); \
	DECLARE_FUNCTION(execIsDownloadingTitleStorage); \
	DECLARE_FUNCTION(execIsLaunchType); \
	DECLARE_FUNCTION(execIsServerState); \
	DECLARE_FUNCTION(execNotice_LobbyFinished); \
	DECLARE_FUNCTION(execOnReadTitleStorage); \
	DECLARE_FUNCTION(execOnStartHottestPlayer); \
	DECLARE_FUNCTION(execOnStartLobbyCountdown); \
	DECLARE_FUNCTION(execOnStartReadyState); \
	DECLARE_FUNCTION(execOnStartTipsLoading); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execRequestDownloadTitleStorage); \
	DECLARE_FUNCTION(execSetupCharacterPlacement); \
	DECLARE_FUNCTION(execSpawnManagerActor); \
	DECLARE_FUNCTION(execStartOfMatch); \
	DECLARE_FUNCTION(execTickLobby_Native); \
	DECLARE_FUNCTION(execTickState_Closing); \
	DECLARE_FUNCTION(execTickState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execTickState_WaitStartGameSession); \
	DECLARE_FUNCTION(execWrestlerIdToCastEnum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanEndClosing_Implementation() const; \
	virtual bool CanStartOfMatch_Implementation(); \
	virtual bool DebugForciblyEndMatch_Implementation(); \
	virtual bool EndOfMatch_Implementation(); \
	virtual void EnterState_Closing_Implementation(); \
	virtual void EnterState_DownloadTitleStorage_Implementation(); \
	virtual void EnterState_WaitStartGameSession_Implementation(); \
	virtual void ExitState_Closing_Implementation(); \
	virtual void ExitState_DownloadTitleStorage_Implementation(); \
	virtual void ExitState_WaitStartGameSession_Implementation(); \
	virtual bool InitializeCharacterPlacement_Implementation(int32 playerStartID, bool isShuffle); \
	virtual bool InitializeManagerActors_Implementation(); \
	virtual bool SetupCharacterPlacement_Implementation(); \
	virtual bool StartOfMatch_Implementation(); \
	virtual void TickState_Closing_Implementation(float inDeltaSeconds); \
	virtual void TickState_DownloadTitleStorage_Implementation(float inDeltaSeconds); \
	virtual void TickState_WaitStartGameSession_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execCalcRandomWrestlerIDs); \
	DECLARE_FUNCTION(execCanEndClosing); \
	DECLARE_FUNCTION(execCanLobbyStartCountdown); \
	DECLARE_FUNCTION(execCanLobbyStartHottestPlayer); \
	DECLARE_FUNCTION(execCanRequestDownloadTitleStorage); \
	DECLARE_FUNCTION(execCanStartOfMatch); \
	DECLARE_FUNCTION(execChangeServerState); \
	DECLARE_FUNCTION(execDebugForciblyEndMatch); \
	DECLARE_FUNCTION(execDebugGetAIEditWrestlerNum); \
	DECLARE_FUNCTION(execDebugIsAIOnlyMode); \
	DECLARE_FUNCTION(execEndOfMatch); \
	DECLARE_FUNCTION(execEnterState_Closing); \
	DECLARE_FUNCTION(execEnterState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execEnterState_WaitStartGameSession); \
	DECLARE_FUNCTION(execExitState_Closing); \
	DECLARE_FUNCTION(execExitState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execExitState_WaitStartGameSession); \
	DECLARE_FUNCTION(execGetGameServerMatchingData); \
	DECLARE_FUNCTION(execGetReservedPlayerStartLocator); \
	DECLARE_FUNCTION(execGetServerState); \
	DECLARE_FUNCTION(execInitializeCharacterPlacement); \
	DECLARE_FUNCTION(execInitializeManagerActors); \
	DECLARE_FUNCTION(execIsAcceptMatching); \
	DECLARE_FUNCTION(execIsCompletedDownloadTitleStorage); \
	DECLARE_FUNCTION(execIsDownloadingTitleStorage); \
	DECLARE_FUNCTION(execIsLaunchType); \
	DECLARE_FUNCTION(execIsServerState); \
	DECLARE_FUNCTION(execNotice_LobbyFinished); \
	DECLARE_FUNCTION(execOnReadTitleStorage); \
	DECLARE_FUNCTION(execOnStartHottestPlayer); \
	DECLARE_FUNCTION(execOnStartLobbyCountdown); \
	DECLARE_FUNCTION(execOnStartReadyState); \
	DECLARE_FUNCTION(execOnStartTipsLoading); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execRequestDownloadTitleStorage); \
	DECLARE_FUNCTION(execSetupCharacterPlacement); \
	DECLARE_FUNCTION(execSpawnManagerActor); \
	DECLARE_FUNCTION(execStartOfMatch); \
	DECLARE_FUNCTION(execTickLobby_Native); \
	DECLARE_FUNCTION(execTickState_Closing); \
	DECLARE_FUNCTION(execTickState_DownloadTitleStorage); \
	DECLARE_FUNCTION(execTickState_WaitStartGameSession); \
	DECLARE_FUNCTION(execWrestlerIdToCastEnum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_EVENT_PARMS \
	struct ELSSGameMode_eventCanEndClosing_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventCanEndClosing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventCanStartOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventCanStartOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventDebugForciblyEndMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventDebugForciblyEndMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventEndOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventEndOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventGetChangeListByAsset_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventGetChangeListByAsset_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventInitializeCharacterPlacement_Parms \
	{ \
		int32 playerStartID; \
		bool isShuffle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventInitializeCharacterPlacement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventInitializeManagerActors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventInitializeManagerActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventSetupCharacterPlacement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventSetupCharacterPlacement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventStartOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameMode_eventStartOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameMode_eventTickState_Closing_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_DataLoading_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_DownloadTitleStorage_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_Exit_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_Initialize_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_InProgress_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_Matching_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_WaitSpawnClientActor_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameMode_eventTickState_WaitStartGameSession_Parms \
	{ \
		float inDeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGameMode(); \
	friend struct Z_Construct_UClass_AELSSGameMode_Statics; \
public: \
	DECLARE_CLASS(AELSSGameMode, AGameLiftGameServerMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGameMode(); \
	friend struct Z_Construct_UClass_AELSSGameMode_Statics; \
public: \
	DECLARE_CLASS(AELSSGameMode, AGameLiftGameServerMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameMode(AELSSGameMode&&); \
	NO_API AELSSGameMode(const AELSSGameMode&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameMode(AELSSGameMode&&); \
	NO_API AELSSGameMode(const AELSSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSGameMode)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameServerEnvName() { return STRUCT_OFFSET(AELSSGameMode, GameServerEnvName); } \
	FORCEINLINE static uint32 __PPO__DataVersion() { return STRUCT_OFFSET(AELSSGameMode, DataVersion); } \
	FORCEINLINE static uint32 __PPO__GroupId() { return STRUCT_OFFSET(AELSSGameMode, GroupId); } \
	FORCEINLINE static uint32 __PPO__Platform() { return STRUCT_OFFSET(AELSSGameMode, Platform); } \
	FORCEINLINE static uint32 __PPO__TitleVersion() { return STRUCT_OFFSET(AELSSGameMode, TitleVersion); } \
	FORCEINLINE static uint32 __PPO__BuildVersion() { return STRUCT_OFFSET(AELSSGameMode, BuildVersion); } \
	FORCEINLINE static uint32 __PPO__SSModeVersion() { return STRUCT_OFFSET(AELSSGameMode, SSModeVersion); } \
	FORCEINLINE static uint32 __PPO__ChangeList() { return STRUCT_OFFSET(AELSSGameMode, ChangeList); } \
	FORCEINLINE static uint32 __PPO__YGS2URL() { return STRUCT_OFFSET(AELSSGameMode, YGS2URL); } \
	FORCEINLINE static uint32 __PPO__LaunchType() { return STRUCT_OFFSET(AELSSGameMode, LaunchType); } \
	FORCEINLINE static uint32 __PPO__NumberOfPlayersRequiredToStart() { return STRUCT_OFFSET(AELSSGameMode, NumberOfPlayersRequiredToStart); } \
	FORCEINLINE static uint32 __PPO__NumberOfPlayersMax() { return STRUCT_OFFSET(AELSSGameMode, NumberOfPlayersMax); } \
	FORCEINLINE static uint32 __PPO__CandidateAIWrestlerIDs() { return STRUCT_OFFSET(AELSSGameMode, CandidateAIWrestlerIDs); } \
	FORCEINLINE static uint32 __PPO__MatchLobbyTime() { return STRUCT_OFFSET(AELSSGameMode, MatchLobbyTime); } \
	FORCEINLINE static uint32 __PPO__verApplication() { return STRUCT_OFFSET(AELSSGameMode, verApplication); } \
	FORCEINLINE static uint32 __PPO__verMaster() { return STRUCT_OFFSET(AELSSGameMode, verMaster); } \
	FORCEINLINE static uint32 __PPO__SSGameState() { return STRUCT_OFFSET(AELSSGameMode, SSGameState); } \
	FORCEINLINE static uint32 __PPO__ReservedPlayerStartMap() { return STRUCT_OFFSET(AELSSGameMode, ReservedPlayerStartMap); } \
	FORCEINLINE static uint32 __PPO__WaitJoinElapsedTime() { return STRUCT_OFFSET(AELSSGameMode, WaitJoinElapsedTime); } \
	FORCEINLINE static uint32 __PPO__TitleStorageDownloadingTimeTotal() { return STRUCT_OFFSET(AELSSGameMode, TitleStorageDownloadingTimeTotal); } \
	FORCEINLINE static uint32 __PPO__TitleStorageDownloadingTimeLimit() { return STRUCT_OFFSET(AELSSGameMode, TitleStorageDownloadingTimeLimit); } \
	FORCEINLINE static uint32 __PPO__IsInitialized() { return STRUCT_OFFSET(AELSSGameMode, IsInitialized); } \
	FORCEINLINE static uint32 __PPO__ManagerActorArray() { return STRUCT_OFFSET(AELSSGameMode, ManagerActorArray); } \
	FORCEINLINE static uint32 __PPO__IsMatchDataGetEnd() { return STRUCT_OFFSET(AELSSGameMode, IsMatchDataGetEnd); } \
	FORCEINLINE static uint32 __PPO__DebugMenuParam() { return STRUCT_OFFSET(AELSSGameMode, DebugMenuParam); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
