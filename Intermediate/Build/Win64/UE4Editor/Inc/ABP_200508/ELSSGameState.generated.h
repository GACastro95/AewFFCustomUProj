// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSGameFlowState : uint8;
struct FSSWrestlerSetupParam;
struct FWrestlerSetupParam;
enum class eSSLobbyState : uint8;
class AELSSPlayerState;
class AELSSDatabase;
class AELSSItemManager;
class AELSSLocatorManager;
class UELSSPoolManager;
class AELSSRoundManager;
class AELSSSoundManager;
class AELSSVehicleManager;
enum class ESSGameStateDebugFlag : uint8;
enum class ESSPlayerProgress : uint8;
enum class ESSServerState : uint8;
class APlayerState;
class APawn;
enum class ESSLogIconType : uint8;
enum class ESSRoundEventLogType : uint8;
enum class EWrestlerID_N : uint8;
class AELSSAIController;
class AActor;
struct FTransform;
class AELSSPlayer;
struct FVector;
struct FRotator;
#ifdef ABP_200508_ELSSGameState_generated_h
#error "ELSSGameState.generated.h already included, missing '#pragma once' in ELSSGameState.h"
#endif
#define ABP_200508_ELSSGameState_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_RPC_WRAPPERS \
	virtual bool CanStartOfMatch_Implementation() const; \
	virtual void ChangeState_Multicast_Implementation(ESSGameFlowState inState, int32 inStateSyncId); \
	virtual void DeadMySelf_Implementation(); \
	virtual void DebugAddInstantMessage_Multicast_Implementation(const FString& inMessage); \
	virtual bool EndOfMatch_Implementation(); \
	virtual void EnterState_GamePlay_Implementation(); \
	virtual void EnterState_Ready_Implementation(); \
	virtual void EnterState_Setup_Implementation(); \
	virtual void ExitState_GamePlay_Implementation(); \
	virtual void ExitState_Ready_Implementation(); \
	virtual bool InitializeManagerActors_Implementation(); \
	virtual bool IsDoneReplicatesManagerActors_Implementation() const; \
	virtual void NotifyAnnouceAttention_Multicast_Implementation(int32 inServerPlayerStateIndex, int32 inAttentionPoint); \
	virtual void NotifyKilled_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon); \
	virtual void NotifyKo_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon); \
	virtual void NotifyRoundEvent_Multicast_Implementation(ESSRoundEventLogType inRoundEvent); \
	virtual void OnRep_SurvivorNum_Implementation(); \
	virtual bool StartOfMatch_Implementation(); \
	virtual void TickState_GamePlay_Implementation(float inDeltaSeconds); \
	virtual void TickState_Ready_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execApplyConnectionTimeoutDuration); \
	DECLARE_FUNCTION(execBeginAsyncPreloadStationalAsset); \
	DECLARE_FUNCTION(execBeginAsyncPreloadVariableAsset); \
	DECLARE_FUNCTION(execCanStartOfMatch); \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execChangeState_Multicast); \
	DECLARE_FUNCTION(execCheckDoneShutdownNetDriver); \
	DECLARE_FUNCTION(execCheckMultiPlayFeature); \
	DECLARE_FUNCTION(execClearShouldShutdownGameFlag); \
	DECLARE_FUNCTION(execCreatePreloadAssetInfo); \
	DECLARE_FUNCTION(execCreatePreloadAssetInfoForDebug); \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execDeadMySelf); \
	DECLARE_FUNCTION(execDebugAddInstantMessage_Multicast); \
	DECLARE_FUNCTION(execDebugPrintStateInfo); \
	DECLARE_FUNCTION(execDebugSetLocalLobbyStateBP); \
	DECLARE_FUNCTION(execDebugSetNoTimeouts); \
	DECLARE_FUNCTION(execEndOfMatch); \
	DECLARE_FUNCTION(execEnterState_GamePlay); \
	DECLARE_FUNCTION(execEnterState_Ready); \
	DECLARE_FUNCTION(execEnterState_Setup); \
	DECLARE_FUNCTION(execExitState_GamePlay); \
	DECLARE_FUNCTION(execExitState_Ready); \
	DECLARE_FUNCTION(execFindSSPlayerState); \
	DECLARE_FUNCTION(execFindSSPlayerStateForWatch_Random); \
	DECLARE_FUNCTION(execGetDatabase); \
	DECLARE_FUNCTION(execGetItemManager); \
	DECLARE_FUNCTION(execGetLocatorManager); \
	DECLARE_FUNCTION(execGetPoolManager); \
	DECLARE_FUNCTION(execGetRoundManager); \
	DECLARE_FUNCTION(execGetSoundManager); \
	DECLARE_FUNCTION(execGetVehicleManager); \
	DECLARE_FUNCTION(execHasDebugFlag); \
	DECLARE_FUNCTION(execHasProgressFlagForAllPlayers); \
	DECLARE_FUNCTION(execInitializeManagerActors); \
	DECLARE_FUNCTION(execIsCompletedPreload); \
	DECLARE_FUNCTION(execIsDeactiveGameSessionForClient); \
	DECLARE_FUNCTION(execIsDoneActorSpawned); \
	DECLARE_FUNCTION(execIsDoneOpenGamePlayScreen); \
	DECLARE_FUNCTION(execIsDoneReplicatesManagerActors); \
	DECLARE_FUNCTION(execIsDoneSyncPreloadAssetInfo); \
	DECLARE_FUNCTION(execIsDoneUIPrepare); \
	DECLARE_FUNCTION(execIsEnabledServerConnection); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsMatchPlayerLobbyEnd); \
	DECLARE_FUNCTION(execIsServerState); \
	DECLARE_FUNCTION(execIsState); \
	DECLARE_FUNCTION(execNeedsEnableAIForServer); \
	DECLARE_FUNCTION(execNeedsReadyStateForServer); \
	DECLARE_FUNCTION(execNotifyAnnouceAttention_Multicast); \
	DECLARE_FUNCTION(execNotifyKilled_Multicast); \
	DECLARE_FUNCTION(execNotifyKo_Multicast); \
	DECLARE_FUNCTION(execNotifyRoundEvent_Multicast); \
	DECLARE_FUNCTION(execOnCompletedSpawnManagerActorsLocal); \
	DECLARE_FUNCTION(execOnCompletePreload_StationalAsset); \
	DECLARE_FUNCTION(execOnCompletePreload_VariableAsset); \
	DECLARE_FUNCTION(execOnRep_DebugFlags); \
	DECLARE_FUNCTION(execOnRep_DebugServerAverageFPS); \
	DECLARE_FUNCTION(execOnRep_DebugServerCrashRequestedTime); \
	DECLARE_FUNCTION(execOnRep_DebugServerState); \
	DECLARE_FUNCTION(execOnRep_ItemManager); \
	DECLARE_FUNCTION(execOnRep_RoundManager); \
	DECLARE_FUNCTION(execOnRep_StateSyncParam); \
	DECLARE_FUNCTION(execOnRep_SurvivorNum); \
	DECLARE_FUNCTION(execOnRep_VehicleManager); \
	DECLARE_FUNCTION(execPlayMatchPointPay); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execReleasePreloadAsset); \
	DECLARE_FUNCTION(execRequestCloseConnection); \
	DECLARE_FUNCTION(execRequestTearDownReplicationConnectionDriver); \
	DECLARE_FUNCTION(execSetDummyPlayerName); \
	DECLARE_FUNCTION(execSetupServerPlayerStateIndex); \
	DECLARE_FUNCTION(execShutdownNetDriverOnFinishedMatch); \
	DECLARE_FUNCTION(execShutdownNetDriverOnSignout); \
	DECLARE_FUNCTION(execSpawnAIController); \
	DECLARE_FUNCTION(execSpawnAIControllerRemainAll); \
	DECLARE_FUNCTION(execSpawnManagerActor); \
	DECLARE_FUNCTION(execSpawnSSPlayerByPlayerState); \
	DECLARE_FUNCTION(execStartOfMatch); \
	DECLARE_FUNCTION(execTickState_GamePlay); \
	DECLARE_FUNCTION(execTickState_Ready); \
	DECLARE_FUNCTION(execUpdateSurvivorNum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanStartOfMatch_Implementation() const; \
	virtual void ChangeState_Multicast_Implementation(ESSGameFlowState inState, int32 inStateSyncId); \
	virtual void DeadMySelf_Implementation(); \
	virtual void DebugAddInstantMessage_Multicast_Implementation(const FString& inMessage); \
	virtual bool EndOfMatch_Implementation(); \
	virtual void EnterState_GamePlay_Implementation(); \
	virtual void EnterState_Ready_Implementation(); \
	virtual void EnterState_Setup_Implementation(); \
	virtual void ExitState_GamePlay_Implementation(); \
	virtual void ExitState_Ready_Implementation(); \
	virtual bool InitializeManagerActors_Implementation(); \
	virtual bool IsDoneReplicatesManagerActors_Implementation() const; \
	virtual void NotifyAnnouceAttention_Multicast_Implementation(int32 inServerPlayerStateIndex, int32 inAttentionPoint); \
	virtual void NotifyKilled_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon); \
	virtual void NotifyKo_Multicast_Implementation(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon); \
	virtual void NotifyRoundEvent_Multicast_Implementation(ESSRoundEventLogType inRoundEvent); \
	virtual void OnRep_SurvivorNum_Implementation(); \
	virtual bool StartOfMatch_Implementation(); \
	virtual void TickState_GamePlay_Implementation(float inDeltaSeconds); \
	virtual void TickState_Ready_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execApplyConnectionTimeoutDuration); \
	DECLARE_FUNCTION(execBeginAsyncPreloadStationalAsset); \
	DECLARE_FUNCTION(execBeginAsyncPreloadVariableAsset); \
	DECLARE_FUNCTION(execCanStartOfMatch); \
	DECLARE_FUNCTION(execChangeState); \
	DECLARE_FUNCTION(execChangeState_Multicast); \
	DECLARE_FUNCTION(execCheckDoneShutdownNetDriver); \
	DECLARE_FUNCTION(execCheckMultiPlayFeature); \
	DECLARE_FUNCTION(execClearShouldShutdownGameFlag); \
	DECLARE_FUNCTION(execCreatePreloadAssetInfo); \
	DECLARE_FUNCTION(execCreatePreloadAssetInfoForDebug); \
	DECLARE_FUNCTION(execCreateWrestlerSetupParam); \
	DECLARE_FUNCTION(execDeadMySelf); \
	DECLARE_FUNCTION(execDebugAddInstantMessage_Multicast); \
	DECLARE_FUNCTION(execDebugPrintStateInfo); \
	DECLARE_FUNCTION(execDebugSetLocalLobbyStateBP); \
	DECLARE_FUNCTION(execDebugSetNoTimeouts); \
	DECLARE_FUNCTION(execEndOfMatch); \
	DECLARE_FUNCTION(execEnterState_GamePlay); \
	DECLARE_FUNCTION(execEnterState_Ready); \
	DECLARE_FUNCTION(execEnterState_Setup); \
	DECLARE_FUNCTION(execExitState_GamePlay); \
	DECLARE_FUNCTION(execExitState_Ready); \
	DECLARE_FUNCTION(execFindSSPlayerState); \
	DECLARE_FUNCTION(execFindSSPlayerStateForWatch_Random); \
	DECLARE_FUNCTION(execGetDatabase); \
	DECLARE_FUNCTION(execGetItemManager); \
	DECLARE_FUNCTION(execGetLocatorManager); \
	DECLARE_FUNCTION(execGetPoolManager); \
	DECLARE_FUNCTION(execGetRoundManager); \
	DECLARE_FUNCTION(execGetSoundManager); \
	DECLARE_FUNCTION(execGetVehicleManager); \
	DECLARE_FUNCTION(execHasDebugFlag); \
	DECLARE_FUNCTION(execHasProgressFlagForAllPlayers); \
	DECLARE_FUNCTION(execInitializeManagerActors); \
	DECLARE_FUNCTION(execIsCompletedPreload); \
	DECLARE_FUNCTION(execIsDeactiveGameSessionForClient); \
	DECLARE_FUNCTION(execIsDoneActorSpawned); \
	DECLARE_FUNCTION(execIsDoneOpenGamePlayScreen); \
	DECLARE_FUNCTION(execIsDoneReplicatesManagerActors); \
	DECLARE_FUNCTION(execIsDoneSyncPreloadAssetInfo); \
	DECLARE_FUNCTION(execIsDoneUIPrepare); \
	DECLARE_FUNCTION(execIsEnabledServerConnection); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsMatchPlayerLobbyEnd); \
	DECLARE_FUNCTION(execIsServerState); \
	DECLARE_FUNCTION(execIsState); \
	DECLARE_FUNCTION(execNeedsEnableAIForServer); \
	DECLARE_FUNCTION(execNeedsReadyStateForServer); \
	DECLARE_FUNCTION(execNotifyAnnouceAttention_Multicast); \
	DECLARE_FUNCTION(execNotifyKilled_Multicast); \
	DECLARE_FUNCTION(execNotifyKo_Multicast); \
	DECLARE_FUNCTION(execNotifyRoundEvent_Multicast); \
	DECLARE_FUNCTION(execOnCompletedSpawnManagerActorsLocal); \
	DECLARE_FUNCTION(execOnCompletePreload_StationalAsset); \
	DECLARE_FUNCTION(execOnCompletePreload_VariableAsset); \
	DECLARE_FUNCTION(execOnRep_DebugFlags); \
	DECLARE_FUNCTION(execOnRep_DebugServerAverageFPS); \
	DECLARE_FUNCTION(execOnRep_DebugServerCrashRequestedTime); \
	DECLARE_FUNCTION(execOnRep_DebugServerState); \
	DECLARE_FUNCTION(execOnRep_ItemManager); \
	DECLARE_FUNCTION(execOnRep_RoundManager); \
	DECLARE_FUNCTION(execOnRep_StateSyncParam); \
	DECLARE_FUNCTION(execOnRep_SurvivorNum); \
	DECLARE_FUNCTION(execOnRep_VehicleManager); \
	DECLARE_FUNCTION(execPlayMatchPointPay); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execReleasePreloadAsset); \
	DECLARE_FUNCTION(execRequestCloseConnection); \
	DECLARE_FUNCTION(execRequestTearDownReplicationConnectionDriver); \
	DECLARE_FUNCTION(execSetDummyPlayerName); \
	DECLARE_FUNCTION(execSetupServerPlayerStateIndex); \
	DECLARE_FUNCTION(execShutdownNetDriverOnFinishedMatch); \
	DECLARE_FUNCTION(execShutdownNetDriverOnSignout); \
	DECLARE_FUNCTION(execSpawnAIController); \
	DECLARE_FUNCTION(execSpawnAIControllerRemainAll); \
	DECLARE_FUNCTION(execSpawnManagerActor); \
	DECLARE_FUNCTION(execSpawnSSPlayerByPlayerState); \
	DECLARE_FUNCTION(execStartOfMatch); \
	DECLARE_FUNCTION(execTickState_GamePlay); \
	DECLARE_FUNCTION(execTickState_Ready); \
	DECLARE_FUNCTION(execUpdateSurvivorNum);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_EVENT_PARMS \
	struct ELSSGameState_eventCanStartOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventCanStartOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventChangeState_Multicast_Parms \
	{ \
		ESSGameFlowState inState; \
		int32 inStateSyncId; \
	}; \
	struct ELSSGameState_eventDebugAddInstantMessage_Multicast_Parms \
	{ \
		FString inMessage; \
	}; \
	struct ELSSGameState_eventDebugTickBP_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventEndOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventEndOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventInitializeManagerActors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventInitializeManagerActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventIsDoneReplicatesManagerActors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventIsDoneReplicatesManagerActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventIsNetworkStatusOnline_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventIsNetworkStatusOnline_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventNotifyAnnouceAttention_Multicast_Parms \
	{ \
		int32 inServerPlayerStateIndex; \
		int32 inAttentionPoint; \
	}; \
	struct ELSSGameState_eventNotifyKilled_Multicast_Parms \
	{ \
		APlayerState* killerPlayerState; \
		APlayerState* killedPlayerState; \
		APawn* killedPawn; \
		ESSLogIconType LogIcon; \
	}; \
	struct ELSSGameState_eventNotifyKo_Multicast_Parms \
	{ \
		APlayerState* killerPlayerState; \
		APlayerState* killedPlayerState; \
		APawn* killedPawn; \
		ESSLogIconType LogIcon; \
	}; \
	struct ELSSGameState_eventNotifyRoundEvent_Multicast_Parms \
	{ \
		ESSRoundEventLogType inRoundEvent; \
	}; \
	struct ELSSGameState_eventSpawnAISSPlayer_Parms \
	{ \
		EWrestlerID_N inWrestlerId; \
		FVector InLocation; \
		FRotator inRotator; \
		AELSSPlayer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventSpawnAISSPlayer_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms \
	{ \
		FWrestlerSetupParam inSetupParam; \
		FVector InLocation; \
		FRotator inRotator; \
		AELSSPlayer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventSpawnAISSPlayers_Parms \
	{ \
		TArray<EWrestlerID_N> wrestlerIDs; \
		TArray<AELSSPlayer*> ReturnValue; \
	}; \
	struct ELSSGameState_eventStartOfMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSGameState_eventStartOfMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSGameState_eventTickState_AfterGamePlay_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_BeforeInProgress_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Entrance_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Exit_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_GamePlay_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Initialize_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Loading_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_OpenGamePlayScreen_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Ready_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSGameState_eventTickState_Setup_Parms \
	{ \
		float inDeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSGameState(); \
	friend struct Z_Construct_UClass_AELSSGameState_Statics; \
public: \
	DECLARE_CLASS(AELSSGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StateSyncParamRep=NETFIELD_REP_START, \
		PreloadAssetInfoRep, \
		RoundManager, \
		ItemManager, \
		VehicleManager, \
		SurvivorNum, \
		SSModeLobby, \
		Activity_ReplicatedMatchId, \
		Activity_Result, \
		DebugFlags, \
		DebugServerState, \
		DebugServerLobbyState, \
		DebugServerAverageFPS, \
		DebugServerMaxDeltaSec_Recently5sec, \
		DebugServerCrashRequestedTime, \
		NETFIELD_REP_END=DebugServerCrashRequestedTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAELSSGameState(); \
	friend struct Z_Construct_UClass_AELSSGameState_Statics; \
public: \
	DECLARE_CLASS(AELSSGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StateSyncParamRep=NETFIELD_REP_START, \
		PreloadAssetInfoRep, \
		RoundManager, \
		ItemManager, \
		VehicleManager, \
		SurvivorNum, \
		SSModeLobby, \
		Activity_ReplicatedMatchId, \
		Activity_Result, \
		DebugFlags, \
		DebugServerState, \
		DebugServerLobbyState, \
		DebugServerAverageFPS, \
		DebugServerMaxDeltaSec_Recently5sec, \
		DebugServerCrashRequestedTime, \
		NETFIELD_REP_END=DebugServerCrashRequestedTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameState(AELSSGameState&&); \
	NO_API AELSSGameState(const AELSSGameState&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSGameState(AELSSGameState&&); \
	NO_API AELSSGameState(const AELSSGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSGameState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventOnPreEndPlay() { return STRUCT_OFFSET(AELSSGameState, EventOnPreEndPlay); } \
	FORCEINLINE static uint32 __PPO__PrevState() { return STRUCT_OFFSET(AELSSGameState, PrevState); } \
	FORCEINLINE static uint32 __PPO__StateSyncParamRep() { return STRUCT_OFFSET(AELSSGameState, StateSyncParamRep); } \
	FORCEINLINE static uint32 __PPO__bShouldShutdownGame() { return STRUCT_OFFSET(AELSSGameState, bShouldShutdownGame); } \
	FORCEINLINE static uint32 __PPO__bDoneShutdownNetDriver() { return STRUCT_OFFSET(AELSSGameState, bDoneShutdownNetDriver); } \
	FORCEINLINE static uint32 __PPO__SSPlayerClass() { return STRUCT_OFFSET(AELSSGameState, SSPlayerClass); } \
	FORCEINLINE static uint32 __PPO__AIControllerClass() { return STRUCT_OFFSET(AELSSGameState, AIControllerClass); } \
	FORCEINLINE static uint32 __PPO__LocationCheckOffsetZ_Top() { return STRUCT_OFFSET(AELSSGameState, LocationCheckOffsetZ_Top); } \
	FORCEINLINE static uint32 __PPO__LocationCheckOffsetZ_Bottom() { return STRUCT_OFFSET(AELSSGameState, LocationCheckOffsetZ_Bottom); } \
	FORCEINLINE static uint32 __PPO__TempAIPlayerEquipSettings() { return STRUCT_OFFSET(AELSSGameState, TempAIPlayerEquipSettings); } \
	FORCEINLINE static uint32 __PPO__TempWrestlerParam() { return STRUCT_OFFSET(AELSSGameState, TempWrestlerParam); } \
	FORCEINLINE static uint32 __PPO__TempAIPlayerNameIdList() { return STRUCT_OFFSET(AELSSGameState, TempAIPlayerNameIdList); } \
	FORCEINLINE static uint32 __PPO__AINpcIdCount() { return STRUCT_OFFSET(AELSSGameState, AINpcIdCount); } \
	FORCEINLINE static uint32 __PPO__PreloadAssetInfoRep() { return STRUCT_OFFSET(AELSSGameState, PreloadAssetInfoRep); } \
	FORCEINLINE static uint32 __PPO__LocatorManagerType() { return STRUCT_OFFSET(AELSSGameState, LocatorManagerType); } \
	FORCEINLINE static uint32 __PPO__LocatorManager() { return STRUCT_OFFSET(AELSSGameState, LocatorManager); } \
	FORCEINLINE static uint32 __PPO__SoundManagerType() { return STRUCT_OFFSET(AELSSGameState, SoundManagerType); } \
	FORCEINLINE static uint32 __PPO__SoundManager() { return STRUCT_OFFSET(AELSSGameState, SoundManager); } \
	FORCEINLINE static uint32 __PPO__RoundManagerType() { return STRUCT_OFFSET(AELSSGameState, RoundManagerType); } \
	FORCEINLINE static uint32 __PPO__RoundManager() { return STRUCT_OFFSET(AELSSGameState, RoundManager); } \
	FORCEINLINE static uint32 __PPO__ItemManagerType() { return STRUCT_OFFSET(AELSSGameState, ItemManagerType); } \
	FORCEINLINE static uint32 __PPO__ItemManager() { return STRUCT_OFFSET(AELSSGameState, ItemManager); } \
	FORCEINLINE static uint32 __PPO__VehicleManagerType() { return STRUCT_OFFSET(AELSSGameState, VehicleManagerType); } \
	FORCEINLINE static uint32 __PPO__VehicleManager() { return STRUCT_OFFSET(AELSSGameState, VehicleManager); } \
	FORCEINLINE static uint32 __PPO__ManagerActorArray() { return STRUCT_OFFSET(AELSSGameState, ManagerActorArray); } \
	FORCEINLINE static uint32 __PPO__ValidPlayerList() { return STRUCT_OFFSET(AELSSGameState, ValidPlayerList); } \
	FORCEINLINE static uint32 __PPO__SaveDataManager() { return STRUCT_OFFSET(AELSSGameState, SaveDataManager); } \
	FORCEINLINE static uint32 __PPO__SaveDataManagerType() { return STRUCT_OFFSET(AELSSGameState, SaveDataManagerType); } \
	FORCEINLINE static uint32 __PPO__SurvivorNum() { return STRUCT_OFFSET(AELSSGameState, SurvivorNum); } \
	FORCEINLINE static uint32 __PPO__LastSurvivorIndex() { return STRUCT_OFFSET(AELSSGameState, LastSurvivorIndex); } \
	FORCEINLINE static uint32 __PPO__ValidObjectGimmicks() { return STRUCT_OFFSET(AELSSGameState, ValidObjectGimmicks); } \
	FORCEINLINE static uint32 __PPO__ValidObjectOils() { return STRUCT_OFFSET(AELSSGameState, ValidObjectOils); } \
	FORCEINLINE static uint32 __PPO__ValidObjectPushpins() { return STRUCT_OFFSET(AELSSGameState, ValidObjectPushpins); } \
	FORCEINLINE static uint32 __PPO__ValidObjectFireBottles() { return STRUCT_OFFSET(AELSSGameState, ValidObjectFireBottles); } \
	FORCEINLINE static uint32 __PPO__ValidObjectTraps() { return STRUCT_OFFSET(AELSSGameState, ValidObjectTraps); } \
	FORCEINLINE static uint32 __PPO__ValidObjectTrapLimit() { return STRUCT_OFFSET(AELSSGameState, ValidObjectTrapLimit); } \
	FORCEINLINE static uint32 __PPO__ValidInteractableObject() { return STRUCT_OFFSET(AELSSGameState, ValidInteractableObject); } \
	FORCEINLINE static uint32 __PPO__ValidHorseSpawnPoint() { return STRUCT_OFFSET(AELSSGameState, ValidHorseSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__FadeManager() { return STRUCT_OFFSET(AELSSGameState, FadeManager); } \
	FORCEINLINE static uint32 __PPO__GameRule() { return STRUCT_OFFSET(AELSSGameState, GameRule); } \
	FORCEINLINE static uint32 __PPO__Database() { return STRUCT_OFFSET(AELSSGameState, Database); } \
	FORCEINLINE static uint32 __PPO__PoolManager() { return STRUCT_OFFSET(AELSSGameState, PoolManager); } \
	FORCEINLINE static uint32 __PPO__PoolableRegistTable() { return STRUCT_OFFSET(AELSSGameState, PoolableRegistTable); } \
	FORCEINLINE static uint32 __PPO__OptimizeManager() { return STRUCT_OFFSET(AELSSGameState, OptimizeManager); } \
	FORCEINLINE static uint32 __PPO__AttentionPlayerInfo() { return STRUCT_OFFSET(AELSSGameState, AttentionPlayerInfo); } \
	FORCEINLINE static uint32 __PPO__SSModeLobby() { return STRUCT_OFFSET(AELSSGameState, SSModeLobby); } \
	FORCEINLINE static uint32 __PPO__Activity_ExecPlayerState() { return STRUCT_OFFSET(AELSSGameState, Activity_ExecPlayerState); } \
	FORCEINLINE static uint32 __PPO__Activity_MatchId() { return STRUCT_OFFSET(AELSSGameState, Activity_MatchId); } \
	FORCEINLINE static uint32 __PPO__Activity_ReplicatedMatchId() { return STRUCT_OFFSET(AELSSGameState, Activity_ReplicatedMatchId); } \
	FORCEINLINE static uint32 __PPO__Activity_Result() { return STRUCT_OFFSET(AELSSGameState, Activity_Result); } \
	FORCEINLINE static uint32 __PPO__DebugFlags() { return STRUCT_OFFSET(AELSSGameState, DebugFlags); } \
	FORCEINLINE static uint32 __PPO__DebugServerState() { return STRUCT_OFFSET(AELSSGameState, DebugServerState); } \
	FORCEINLINE static uint32 __PPO__DebugServerLobbyState() { return STRUCT_OFFSET(AELSSGameState, DebugServerLobbyState); } \
	FORCEINLINE static uint32 __PPO__DebugLocalLobbyState() { return STRUCT_OFFSET(AELSSGameState, DebugLocalLobbyState); } \
	FORCEINLINE static uint32 __PPO__DebugLocalLobbyStateBP() { return STRUCT_OFFSET(AELSSGameState, DebugLocalLobbyStateBP); } \
	FORCEINLINE static uint32 __PPO__DebugServerAverageFPS() { return STRUCT_OFFSET(AELSSGameState, DebugServerAverageFPS); } \
	FORCEINLINE static uint32 __PPO__DebugServerMaxDeltaSec_Recently5sec() { return STRUCT_OFFSET(AELSSGameState, DebugServerMaxDeltaSec_Recently5sec); } \
	FORCEINLINE static uint32 __PPO__DebugServerCrashRequestedTime() { return STRUCT_OFFSET(AELSSGameState, DebugServerCrashRequestedTime); } \
	FORCEINLINE static uint32 __PPO__DebugOverrideAIWrestlerSetupParam() { return STRUCT_OFFSET(AELSSGameState, DebugOverrideAIWrestlerSetupParam); } \
	FORCEINLINE static uint32 __PPO__PreloadAssetInfoForDebug() { return STRUCT_OFFSET(AELSSGameState, PreloadAssetInfoForDebug); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_49_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
