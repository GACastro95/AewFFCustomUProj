// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameMode() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameMode();
	ABP_200508_API UClass* Z_Construct_UClass_AGameLiftGameServerMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSServerState();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSModeLaunchType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameState_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSDebugMenuParam();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGameMode::execCalcRandomWrestlerIDs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EWrestlerID_N>*)Z_Param__Result=P_THIS->CalcRandomWrestlerIDs(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execCanEndClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEndClosing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execCanLobbyStartCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanLobbyStartCountdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execCanLobbyStartHottestPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanLobbyStartHottestPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execCanRequestDownloadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRequestDownloadTitleStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execCanStartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execChangeServerState)
	{
		P_GET_ENUM(ESSServerState,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeServerState(ESSServerState(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execDebugForciblyEndMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DebugForciblyEndMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execDebugGetAIEditWrestlerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DebugGetAIEditWrestlerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execDebugIsAIOnlyMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DebugIsAIOnlyMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execEndOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execEnterState_Closing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_Closing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execEnterState_DownloadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_DownloadTitleStorage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execEnterState_WaitStartGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_WaitStartGameSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execExitState_Closing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState_Closing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execExitState_DownloadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState_DownloadTitleStorage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execExitState_WaitStartGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState_WaitStartGameSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execGetGameServerMatchingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGameServerMatchingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execGetReservedPlayerStartLocator)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inPlayerState);
		P_GET_UBOOL(Z_Param_inConsume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSLocator**)Z_Param__Result=P_THIS->GetReservedPlayerStartLocator(Z_Param_inPlayerState,Z_Param_inConsume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execGetServerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSServerState*)Z_Param__Result=P_THIS->GetServerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execInitializeCharacterPlacement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerStartID);
		P_GET_UBOOL(Z_Param_isShuffle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeCharacterPlacement_Implementation(Z_Param_playerStartID,Z_Param_isShuffle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execInitializeManagerActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeManagerActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execIsAcceptMatching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAcceptMatching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execIsCompletedDownloadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompletedDownloadTitleStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execIsDownloadingTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDownloadingTitleStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execIsLaunchType)
	{
		P_GET_ENUM(ESSModeLaunchType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLaunchType(ESSModeLaunchType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execIsServerState)
	{
		P_GET_ENUM(ESSServerState,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsServerState(ESSServerState(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execNotice_LobbyFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Notice_LobbyFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execOnReadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReadTitleStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execOnStartHottestPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartHottestPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execOnStartLobbyCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartLobbyCountdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execOnStartReadyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartReadyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execOnStartTipsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartTipsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Log);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_Log);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execRequestDownloadTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDownloadTitleStorage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execSetupCharacterPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupCharacterPlacement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execSpawnManagerActor)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnManagerActor(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execStartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execTickLobby_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickLobby_Native(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execTickState_Closing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickState_Closing_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execTickState_DownloadTitleStorage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickState_DownloadTitleStorage_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execTickState_WaitStartGameSession)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickState_WaitStartGameSession_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameMode::execWrestlerIdToCastEnum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_idx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->WrestlerIdToCastEnum(Z_Param_idx);
		P_NATIVE_END;
	}
	static FName NAME_AELSSGameMode_CanEndClosing = FName(TEXT("CanEndClosing"));
	bool AELSSGameMode::CanEndClosing() const
	{
		ELSSGameMode_eventCanEndClosing_Parms Parms;
		const_cast<AELSSGameMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_CanEndClosing),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_CanStartOfMatch = FName(TEXT("CanStartOfMatch"));
	bool AELSSGameMode::CanStartOfMatch()
	{
		ELSSGameMode_eventCanStartOfMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_CanStartOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_DebugForciblyEndMatch = FName(TEXT("DebugForciblyEndMatch"));
	bool AELSSGameMode::DebugForciblyEndMatch()
	{
		ELSSGameMode_eventDebugForciblyEndMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_DebugForciblyEndMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_EndOfMatch = FName(TEXT("EndOfMatch"));
	bool AELSSGameMode::EndOfMatch()
	{
		ELSSGameMode_eventEndOfMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EndOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_EnterState_Closing = FName(TEXT("EnterState_Closing"));
	void AELSSGameMode::EnterState_Closing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_Closing),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_DataLoading = FName(TEXT("EnterState_DataLoading"));
	void AELSSGameMode::EnterState_DataLoading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_DataLoading),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_DownloadTitleStorage = FName(TEXT("EnterState_DownloadTitleStorage"));
	void AELSSGameMode::EnterState_DownloadTitleStorage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_DownloadTitleStorage),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_Exit = FName(TEXT("EnterState_Exit"));
	void AELSSGameMode::EnterState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_Exit),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_Initialize = FName(TEXT("EnterState_Initialize"));
	void AELSSGameMode::EnterState_Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_Initialize),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_InProgress = FName(TEXT("EnterState_InProgress"));
	void AELSSGameMode::EnterState_InProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_InProgress),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_Matching = FName(TEXT("EnterState_Matching"));
	void AELSSGameMode::EnterState_Matching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_Matching),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_WaitSpawnClientActor = FName(TEXT("EnterState_WaitSpawnClientActor"));
	void AELSSGameMode::EnterState_WaitSpawnClientActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_WaitSpawnClientActor),NULL);
	}
	static FName NAME_AELSSGameMode_EnterState_WaitStartGameSession = FName(TEXT("EnterState_WaitStartGameSession"));
	void AELSSGameMode::EnterState_WaitStartGameSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_EnterState_WaitStartGameSession),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_Closing = FName(TEXT("ExitState_Closing"));
	void AELSSGameMode::ExitState_Closing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_Closing),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_DataLoading = FName(TEXT("ExitState_DataLoading"));
	void AELSSGameMode::ExitState_DataLoading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_DataLoading),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_DownloadTitleStorage = FName(TEXT("ExitState_DownloadTitleStorage"));
	void AELSSGameMode::ExitState_DownloadTitleStorage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_DownloadTitleStorage),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_Exit = FName(TEXT("ExitState_Exit"));
	void AELSSGameMode::ExitState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_Exit),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_Initialize = FName(TEXT("ExitState_Initialize"));
	void AELSSGameMode::ExitState_Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_Initialize),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_InProgress = FName(TEXT("ExitState_InProgress"));
	void AELSSGameMode::ExitState_InProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_InProgress),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_Matching = FName(TEXT("ExitState_Matching"));
	void AELSSGameMode::ExitState_Matching()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_Matching),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_WaitSpawnClientActor = FName(TEXT("ExitState_WaitSpawnClientActor"));
	void AELSSGameMode::ExitState_WaitSpawnClientActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_WaitSpawnClientActor),NULL);
	}
	static FName NAME_AELSSGameMode_ExitState_WaitStartGameSession = FName(TEXT("ExitState_WaitStartGameSession"));
	void AELSSGameMode::ExitState_WaitStartGameSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_ExitState_WaitStartGameSession),NULL);
	}
	static FName NAME_AELSSGameMode_GetChangeListByAsset = FName(TEXT("GetChangeListByAsset"));
	int32 AELSSGameMode::GetChangeListByAsset() const
	{
		ELSSGameMode_eventGetChangeListByAsset_Parms Parms;
		const_cast<AELSSGameMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_GetChangeListByAsset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_InitializeCharacterPlacement = FName(TEXT("InitializeCharacterPlacement"));
	bool AELSSGameMode::InitializeCharacterPlacement(int32 playerStartID, bool isShuffle)
	{
		ELSSGameMode_eventInitializeCharacterPlacement_Parms Parms;
		Parms.playerStartID=playerStartID;
		Parms.isShuffle=isShuffle ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_InitializeCharacterPlacement),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_InitializeManagerActors = FName(TEXT("InitializeManagerActors"));
	bool AELSSGameMode::InitializeManagerActors()
	{
		ELSSGameMode_eventInitializeManagerActors_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_InitializeManagerActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_RequestGameServerClosing = FName(TEXT("RequestGameServerClosing"));
	void AELSSGameMode::RequestGameServerClosing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_RequestGameServerClosing),NULL);
	}
	static FName NAME_AELSSGameMode_SetupCharacterPlacement = FName(TEXT("SetupCharacterPlacement"));
	bool AELSSGameMode::SetupCharacterPlacement()
	{
		ELSSGameMode_eventSetupCharacterPlacement_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_SetupCharacterPlacement),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_StartOfMatch = FName(TEXT("StartOfMatch"));
	bool AELSSGameMode::StartOfMatch()
	{
		ELSSGameMode_eventStartOfMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_StartOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameMode_TickState_Closing = FName(TEXT("TickState_Closing"));
	void AELSSGameMode::TickState_Closing(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_Closing_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_Closing),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_DataLoading = FName(TEXT("TickState_DataLoading"));
	void AELSSGameMode::TickState_DataLoading(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_DataLoading_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_DataLoading),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_DownloadTitleStorage = FName(TEXT("TickState_DownloadTitleStorage"));
	void AELSSGameMode::TickState_DownloadTitleStorage(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_DownloadTitleStorage_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_DownloadTitleStorage),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_Exit = FName(TEXT("TickState_Exit"));
	void AELSSGameMode::TickState_Exit(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_Exit_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_Exit),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_Initialize = FName(TEXT("TickState_Initialize"));
	void AELSSGameMode::TickState_Initialize(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_Initialize_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_Initialize),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_InProgress = FName(TEXT("TickState_InProgress"));
	void AELSSGameMode::TickState_InProgress(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_InProgress_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_InProgress),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_Matching = FName(TEXT("TickState_Matching"));
	void AELSSGameMode::TickState_Matching(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_Matching_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_Matching),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_WaitSpawnClientActor = FName(TEXT("TickState_WaitSpawnClientActor"));
	void AELSSGameMode::TickState_WaitSpawnClientActor(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_WaitSpawnClientActor_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_WaitSpawnClientActor),&Parms);
	}
	static FName NAME_AELSSGameMode_TickState_WaitStartGameSession = FName(TEXT("TickState_WaitStartGameSession"));
	void AELSSGameMode::TickState_WaitStartGameSession(float inDeltaSeconds)
	{
		ELSSGameMode_eventTickState_WaitStartGameSession_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameMode_TickState_WaitStartGameSession),&Parms);
	}
	void AELSSGameMode::StaticRegisterNativesAELSSGameMode()
	{
		UClass* Class = AELSSGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcRandomWrestlerIDs", &AELSSGameMode::execCalcRandomWrestlerIDs },
			{ "CanEndClosing", &AELSSGameMode::execCanEndClosing },
			{ "CanLobbyStartCountdown", &AELSSGameMode::execCanLobbyStartCountdown },
			{ "CanLobbyStartHottestPlayer", &AELSSGameMode::execCanLobbyStartHottestPlayer },
			{ "CanRequestDownloadTitleStorage", &AELSSGameMode::execCanRequestDownloadTitleStorage },
			{ "CanStartOfMatch", &AELSSGameMode::execCanStartOfMatch },
			{ "ChangeServerState", &AELSSGameMode::execChangeServerState },
			{ "DebugForciblyEndMatch", &AELSSGameMode::execDebugForciblyEndMatch },
			{ "DebugGetAIEditWrestlerNum", &AELSSGameMode::execDebugGetAIEditWrestlerNum },
			{ "DebugIsAIOnlyMode", &AELSSGameMode::execDebugIsAIOnlyMode },
			{ "EndOfMatch", &AELSSGameMode::execEndOfMatch },
			{ "EnterState_Closing", &AELSSGameMode::execEnterState_Closing },
			{ "EnterState_DownloadTitleStorage", &AELSSGameMode::execEnterState_DownloadTitleStorage },
			{ "EnterState_WaitStartGameSession", &AELSSGameMode::execEnterState_WaitStartGameSession },
			{ "ExitState_Closing", &AELSSGameMode::execExitState_Closing },
			{ "ExitState_DownloadTitleStorage", &AELSSGameMode::execExitState_DownloadTitleStorage },
			{ "ExitState_WaitStartGameSession", &AELSSGameMode::execExitState_WaitStartGameSession },
			{ "GetGameServerMatchingData", &AELSSGameMode::execGetGameServerMatchingData },
			{ "GetReservedPlayerStartLocator", &AELSSGameMode::execGetReservedPlayerStartLocator },
			{ "GetServerState", &AELSSGameMode::execGetServerState },
			{ "InitializeCharacterPlacement", &AELSSGameMode::execInitializeCharacterPlacement },
			{ "InitializeManagerActors", &AELSSGameMode::execInitializeManagerActors },
			{ "IsAcceptMatching", &AELSSGameMode::execIsAcceptMatching },
			{ "IsCompletedDownloadTitleStorage", &AELSSGameMode::execIsCompletedDownloadTitleStorage },
			{ "IsDownloadingTitleStorage", &AELSSGameMode::execIsDownloadingTitleStorage },
			{ "IsLaunchType", &AELSSGameMode::execIsLaunchType },
			{ "IsServerState", &AELSSGameMode::execIsServerState },
			{ "Notice_LobbyFinished", &AELSSGameMode::execNotice_LobbyFinished },
			{ "OnReadTitleStorage", &AELSSGameMode::execOnReadTitleStorage },
			{ "OnStartHottestPlayer", &AELSSGameMode::execOnStartHottestPlayer },
			{ "OnStartLobbyCountdown", &AELSSGameMode::execOnStartLobbyCountdown },
			{ "OnStartReadyState", &AELSSGameMode::execOnStartReadyState },
			{ "OnStartTipsLoading", &AELSSGameMode::execOnStartTipsLoading },
			{ "PrintLog", &AELSSGameMode::execPrintLog },
			{ "RequestDownloadTitleStorage", &AELSSGameMode::execRequestDownloadTitleStorage },
			{ "SetupCharacterPlacement", &AELSSGameMode::execSetupCharacterPlacement },
			{ "SpawnManagerActor", &AELSSGameMode::execSpawnManagerActor },
			{ "StartOfMatch", &AELSSGameMode::execStartOfMatch },
			{ "TickLobby_Native", &AELSSGameMode::execTickLobby_Native },
			{ "TickState_Closing", &AELSSGameMode::execTickState_Closing },
			{ "TickState_DownloadTitleStorage", &AELSSGameMode::execTickState_DownloadTitleStorage },
			{ "TickState_WaitStartGameSession", &AELSSGameMode::execTickState_WaitStartGameSession },
			{ "WrestlerIdToCastEnum", &AELSSGameMode::execWrestlerIdToCastEnum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics
	{
		struct ELSSGameMode_eventCalcRandomWrestlerIDs_Parms
		{
			int32 Amount;
			TArray<EWrestlerID_N> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventCalcRandomWrestlerIDs_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventCalcRandomWrestlerIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CalcRandomWrestlerIDs", nullptr, nullptr, sizeof(ELSSGameMode_eventCalcRandomWrestlerIDs_Parms), Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventCanEndClosing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventCanEndClosing_Parms), &Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CanEndClosing", nullptr, nullptr, sizeof(ELSSGameMode_eventCanEndClosing_Parms), Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CanEndClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CanEndClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics
	{
		struct ELSSGameMode_eventCanLobbyStartCountdown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventCanLobbyStartCountdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventCanLobbyStartCountdown_Parms), &Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CanLobbyStartCountdown", nullptr, nullptr, sizeof(ELSSGameMode_eventCanLobbyStartCountdown_Parms), Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics
	{
		struct ELSSGameMode_eventCanLobbyStartHottestPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventCanLobbyStartHottestPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventCanLobbyStartHottestPlayer_Parms), &Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CanLobbyStartHottestPlayer", nullptr, nullptr, sizeof(ELSSGameMode_eventCanLobbyStartHottestPlayer_Parms), Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics
	{
		struct ELSSGameMode_eventCanRequestDownloadTitleStorage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventCanRequestDownloadTitleStorage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventCanRequestDownloadTitleStorage_Parms), &Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CanRequestDownloadTitleStorage", nullptr, nullptr, sizeof(ELSSGameMode_eventCanRequestDownloadTitleStorage_Parms), Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventCanStartOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventCanStartOfMatch_Parms), &Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "CanStartOfMatch", nullptr, nullptr, sizeof(ELSSGameMode_eventCanStartOfMatch_Parms), Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics
	{
		struct ELSSGameMode_eventChangeServerState_Parms
		{
			ESSServerState inState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventChangeServerState_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSServerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ChangeServerState", nullptr, nullptr, sizeof(ELSSGameMode_eventChangeServerState_Parms), Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ChangeServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ChangeServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventDebugForciblyEndMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventDebugForciblyEndMatch_Parms), &Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "DebugForciblyEndMatch", nullptr, nullptr, sizeof(ELSSGameMode_eventDebugForciblyEndMatch_Parms), Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics
	{
		struct ELSSGameMode_eventDebugGetAIEditWrestlerNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventDebugGetAIEditWrestlerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "DebugGetAIEditWrestlerNum", nullptr, nullptr, sizeof(ELSSGameMode_eventDebugGetAIEditWrestlerNum_Parms), Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics
	{
		struct ELSSGameMode_eventDebugIsAIOnlyMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventDebugIsAIOnlyMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventDebugIsAIOnlyMode_Parms), &Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "DebugIsAIOnlyMode", nullptr, nullptr, sizeof(ELSSGameMode_eventDebugIsAIOnlyMode_Parms), Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventEndOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventEndOfMatch_Parms), &Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EndOfMatch", nullptr, nullptr, sizeof(ELSSGameMode_eventEndOfMatch_Parms), Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EndOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EndOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_Closing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_DataLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_DownloadTitleStorage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_InProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_Matching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_Matching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_Matching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_WaitSpawnClientActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "EnterState_WaitStartGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_Closing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_DataLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_DownloadTitleStorage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_InProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_Matching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_Matching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_Matching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_WaitSpawnClientActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "ExitState_WaitStartGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventGetChangeListByAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "GetChangeListByAsset", nullptr, nullptr, sizeof(ELSSGameMode_eventGetChangeListByAsset_Parms), Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics
	{
		struct ELSSGameMode_eventGetGameServerMatchingData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventGetGameServerMatchingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventGetGameServerMatchingData_Parms), &Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "GetGameServerMatchingData", nullptr, nullptr, sizeof(ELSSGameMode_eventGetGameServerMatchingData_Parms), Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics
	{
		struct ELSSGameMode_eventGetReservedPlayerStartLocator_Parms
		{
			AELSSPlayerState* inPlayerState;
			bool inConsume;
			AELSSLocator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerState;
		static void NewProp_inConsume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inConsume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inPlayerState = { "inPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventGetReservedPlayerStartLocator_Parms, inPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inConsume_SetBit(void* Obj)
	{
		((ELSSGameMode_eventGetReservedPlayerStartLocator_Parms*)Obj)->inConsume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inConsume = { "inConsume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventGetReservedPlayerStartLocator_Parms), &Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inConsume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventGetReservedPlayerStartLocator_Parms, ReturnValue), Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_inConsume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "GetReservedPlayerStartLocator", nullptr, nullptr, sizeof(ELSSGameMode_eventGetReservedPlayerStartLocator_Parms), Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics
	{
		struct ELSSGameMode_eventGetServerState_Parms
		{
			ESSServerState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventGetServerState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSServerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "GetServerState", nullptr, nullptr, sizeof(ELSSGameMode_eventGetServerState_Parms), Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_GetServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_GetServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerStartID;
		static void NewProp_isShuffle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShuffle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_playerStartID = { "playerStartID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventInitializeCharacterPlacement_Parms, playerStartID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_isShuffle_SetBit(void* Obj)
	{
		((ELSSGameMode_eventInitializeCharacterPlacement_Parms*)Obj)->isShuffle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_isShuffle = { "isShuffle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventInitializeCharacterPlacement_Parms), &Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_isShuffle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventInitializeCharacterPlacement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventInitializeCharacterPlacement_Parms), &Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_playerStartID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_isShuffle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "InitializeCharacterPlacement", nullptr, nullptr, sizeof(ELSSGameMode_eventInitializeCharacterPlacement_Parms), Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventInitializeManagerActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventInitializeManagerActors_Parms), &Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "InitializeManagerActors", nullptr, nullptr, sizeof(ELSSGameMode_eventInitializeManagerActors_Parms), Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics
	{
		struct ELSSGameMode_eventIsAcceptMatching_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventIsAcceptMatching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventIsAcceptMatching_Parms), &Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "IsAcceptMatching", nullptr, nullptr, sizeof(ELSSGameMode_eventIsAcceptMatching_Parms), Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics
	{
		struct ELSSGameMode_eventIsCompletedDownloadTitleStorage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventIsCompletedDownloadTitleStorage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventIsCompletedDownloadTitleStorage_Parms), &Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "IsCompletedDownloadTitleStorage", nullptr, nullptr, sizeof(ELSSGameMode_eventIsCompletedDownloadTitleStorage_Parms), Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics
	{
		struct ELSSGameMode_eventIsDownloadingTitleStorage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventIsDownloadingTitleStorage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventIsDownloadingTitleStorage_Parms), &Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "IsDownloadingTitleStorage", nullptr, nullptr, sizeof(ELSSGameMode_eventIsDownloadingTitleStorage_Parms), Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics
	{
		struct ELSSGameMode_eventIsLaunchType_Parms
		{
			ESSModeLaunchType Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventIsLaunchType_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSModeLaunchType, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type_MetaData)) };
	void Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventIsLaunchType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventIsLaunchType_Parms), &Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "IsLaunchType", nullptr, nullptr, sizeof(ELSSGameMode_eventIsLaunchType_Parms), Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_IsLaunchType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_IsLaunchType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics
	{
		struct ELSSGameMode_eventIsServerState_Parms
		{
			ESSServerState inState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventIsServerState_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSServerState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventIsServerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventIsServerState_Parms), &Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_inState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "IsServerState", nullptr, nullptr, sizeof(ELSSGameMode_eventIsServerState_Parms), Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_IsServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_IsServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "Notice_LobbyFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "OnReadTitleStorage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "OnStartHottestPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "OnStartLobbyCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "OnStartReadyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_OnStartReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_OnStartReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "OnStartTipsLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics
	{
		struct ELSSGameMode_eventPrintLog_Parms
		{
			FString Log;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::NewProp_Log_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventPrintLog_Parms, Log), METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::NewProp_Log_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::NewProp_Log_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::NewProp_Log,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "PrintLog", nullptr, nullptr, sizeof(ELSSGameMode_eventPrintLog_Parms), Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics
	{
		struct ELSSGameMode_eventRequestDownloadTitleStorage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventRequestDownloadTitleStorage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventRequestDownloadTitleStorage_Parms), &Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "RequestDownloadTitleStorage", nullptr, nullptr, sizeof(ELSSGameMode_eventRequestDownloadTitleStorage_Parms), Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "RequestGameServerClosing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventSetupCharacterPlacement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventSetupCharacterPlacement_Parms), &Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "SetupCharacterPlacement", nullptr, nullptr, sizeof(ELSSGameMode_eventSetupCharacterPlacement_Parms), Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics
	{
		struct ELSSGameMode_eventSpawnManagerActor_Parms
		{
			TSubclassOf<AActor>  InClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventSpawnManagerActor_Parms, InClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventSpawnManagerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "SpawnManagerActor", nullptr, nullptr, sizeof(ELSSGameMode_eventSpawnManagerActor_Parms), Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameMode_eventStartOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameMode_eventStartOfMatch_Parms), &Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "StartOfMatch", nullptr, nullptr, sizeof(ELSSGameMode_eventStartOfMatch_Parms), Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_StartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_StartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics
	{
		struct ELSSGameMode_eventTickLobby_Native_Parms
		{
			float inDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickLobby_Native_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickLobby_Native", nullptr, nullptr, sizeof(ELSSGameMode_eventTickLobby_Native_Parms), Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickLobby_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickLobby_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_Closing_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_Closing", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_Closing_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_Closing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_Closing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_DataLoading_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_DataLoading", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_DataLoading_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_DownloadTitleStorage_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_DownloadTitleStorage", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_DownloadTitleStorage_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_Exit_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_Exit", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_Exit_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_Initialize_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_Initialize", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_Initialize_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_InProgress_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_InProgress", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_InProgress_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_InProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_InProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_Matching_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_Matching", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_Matching_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_Matching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_Matching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_WaitSpawnClientActor_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_WaitSpawnClientActor", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_WaitSpawnClientActor_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventTickState_WaitStartGameSession_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "TickState_WaitStartGameSession", nullptr, nullptr, sizeof(ELSSGameMode_eventTickState_WaitStartGameSession_Parms), Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics
	{
		struct ELSSGameMode_eventWrestlerIdToCastEnum_Parms
		{
			int32 idx;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_idx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventWrestlerIdToCastEnum_Parms, idx), METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_idx_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_idx_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameMode_eventWrestlerIdToCastEnum_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameMode, nullptr, "WrestlerIdToCastEnum", nullptr, nullptr, sizeof(ELSSGameMode_eventWrestlerIdToCastEnum_Parms), Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGameMode_NoRegister()
	{
		return AELSSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerEnvName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerEnvName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSModeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YGS2URL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaunchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LaunchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlayersRequiredToStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayersRequiredToStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlayersMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayersMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CandidateAIWrestlerIDs_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CandidateAIWrestlerIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateAIWrestlerIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateAIWrestlerIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchLobbyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchLobbyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verApplication_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_verApplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verMaster_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_verMaster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSGameState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReservedPlayerStartMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReservedPlayerStartMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedPlayerStartMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReservedPlayerStartMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitJoinElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitJoinElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleStorageDownloadingTimeTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TitleStorageDownloadingTimeTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleStorageDownloadingTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TitleStorageDownloadingTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInitialized_MetaData[];
#endif
		static void NewProp_IsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInitialized;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagerActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManagerActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMatchDataGetEnd_MetaData[];
#endif
		static void NewProp_IsMatchDataGetEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMatchDataGetEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugMenuParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameLiftGameServerMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGameMode_CalcRandomWrestlerIDs, "CalcRandomWrestlerIDs" }, // 2891203116
		{ &Z_Construct_UFunction_AELSSGameMode_CanEndClosing, "CanEndClosing" }, // 1003001399
		{ &Z_Construct_UFunction_AELSSGameMode_CanLobbyStartCountdown, "CanLobbyStartCountdown" }, // 1165309138
		{ &Z_Construct_UFunction_AELSSGameMode_CanLobbyStartHottestPlayer, "CanLobbyStartHottestPlayer" }, // 2233018564
		{ &Z_Construct_UFunction_AELSSGameMode_CanRequestDownloadTitleStorage, "CanRequestDownloadTitleStorage" }, // 3644487274
		{ &Z_Construct_UFunction_AELSSGameMode_CanStartOfMatch, "CanStartOfMatch" }, // 1622278422
		{ &Z_Construct_UFunction_AELSSGameMode_ChangeServerState, "ChangeServerState" }, // 489635353
		{ &Z_Construct_UFunction_AELSSGameMode_DebugForciblyEndMatch, "DebugForciblyEndMatch" }, // 189454855
		{ &Z_Construct_UFunction_AELSSGameMode_DebugGetAIEditWrestlerNum, "DebugGetAIEditWrestlerNum" }, // 1318688149
		{ &Z_Construct_UFunction_AELSSGameMode_DebugIsAIOnlyMode, "DebugIsAIOnlyMode" }, // 1006702604
		{ &Z_Construct_UFunction_AELSSGameMode_EndOfMatch, "EndOfMatch" }, // 4271761845
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_Closing, "EnterState_Closing" }, // 330996472
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_DataLoading, "EnterState_DataLoading" }, // 2779994126
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_DownloadTitleStorage, "EnterState_DownloadTitleStorage" }, // 3408477770
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_Exit, "EnterState_Exit" }, // 3012165980
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_Initialize, "EnterState_Initialize" }, // 403145471
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_InProgress, "EnterState_InProgress" }, // 2241953928
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_Matching, "EnterState_Matching" }, // 1007549210
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_WaitSpawnClientActor, "EnterState_WaitSpawnClientActor" }, // 473517127
		{ &Z_Construct_UFunction_AELSSGameMode_EnterState_WaitStartGameSession, "EnterState_WaitStartGameSession" }, // 1451102818
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_Closing, "ExitState_Closing" }, // 1768853263
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_DataLoading, "ExitState_DataLoading" }, // 3723703801
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_DownloadTitleStorage, "ExitState_DownloadTitleStorage" }, // 3039937544
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_Exit, "ExitState_Exit" }, // 4009616936
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_Initialize, "ExitState_Initialize" }, // 3589929412
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_InProgress, "ExitState_InProgress" }, // 167793940
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_Matching, "ExitState_Matching" }, // 2767935490
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_WaitSpawnClientActor, "ExitState_WaitSpawnClientActor" }, // 1974919609
		{ &Z_Construct_UFunction_AELSSGameMode_ExitState_WaitStartGameSession, "ExitState_WaitStartGameSession" }, // 1046799381
		{ &Z_Construct_UFunction_AELSSGameMode_GetChangeListByAsset, "GetChangeListByAsset" }, // 2001516539
		{ &Z_Construct_UFunction_AELSSGameMode_GetGameServerMatchingData, "GetGameServerMatchingData" }, // 2494852482
		{ &Z_Construct_UFunction_AELSSGameMode_GetReservedPlayerStartLocator, "GetReservedPlayerStartLocator" }, // 785474364
		{ &Z_Construct_UFunction_AELSSGameMode_GetServerState, "GetServerState" }, // 2397237501
		{ &Z_Construct_UFunction_AELSSGameMode_InitializeCharacterPlacement, "InitializeCharacterPlacement" }, // 734978051
		{ &Z_Construct_UFunction_AELSSGameMode_InitializeManagerActors, "InitializeManagerActors" }, // 4214888327
		{ &Z_Construct_UFunction_AELSSGameMode_IsAcceptMatching, "IsAcceptMatching" }, // 2776960670
		{ &Z_Construct_UFunction_AELSSGameMode_IsCompletedDownloadTitleStorage, "IsCompletedDownloadTitleStorage" }, // 3423034242
		{ &Z_Construct_UFunction_AELSSGameMode_IsDownloadingTitleStorage, "IsDownloadingTitleStorage" }, // 208489159
		{ &Z_Construct_UFunction_AELSSGameMode_IsLaunchType, "IsLaunchType" }, // 3486735057
		{ &Z_Construct_UFunction_AELSSGameMode_IsServerState, "IsServerState" }, // 870799226
		{ &Z_Construct_UFunction_AELSSGameMode_Notice_LobbyFinished, "Notice_LobbyFinished" }, // 1650779952
		{ &Z_Construct_UFunction_AELSSGameMode_OnReadTitleStorage, "OnReadTitleStorage" }, // 1367088
		{ &Z_Construct_UFunction_AELSSGameMode_OnStartHottestPlayer, "OnStartHottestPlayer" }, // 802371656
		{ &Z_Construct_UFunction_AELSSGameMode_OnStartLobbyCountdown, "OnStartLobbyCountdown" }, // 3618664184
		{ &Z_Construct_UFunction_AELSSGameMode_OnStartReadyState, "OnStartReadyState" }, // 460772904
		{ &Z_Construct_UFunction_AELSSGameMode_OnStartTipsLoading, "OnStartTipsLoading" }, // 1445792185
		{ &Z_Construct_UFunction_AELSSGameMode_PrintLog, "PrintLog" }, // 886763814
		{ &Z_Construct_UFunction_AELSSGameMode_RequestDownloadTitleStorage, "RequestDownloadTitleStorage" }, // 2280706252
		{ &Z_Construct_UFunction_AELSSGameMode_RequestGameServerClosing, "RequestGameServerClosing" }, // 3777291936
		{ &Z_Construct_UFunction_AELSSGameMode_SetupCharacterPlacement, "SetupCharacterPlacement" }, // 1189200102
		{ &Z_Construct_UFunction_AELSSGameMode_SpawnManagerActor, "SpawnManagerActor" }, // 1163967923
		{ &Z_Construct_UFunction_AELSSGameMode_StartOfMatch, "StartOfMatch" }, // 1940790810
		{ &Z_Construct_UFunction_AELSSGameMode_TickLobby_Native, "TickLobby_Native" }, // 1606831556
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_Closing, "TickState_Closing" }, // 2199476702
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_DataLoading, "TickState_DataLoading" }, // 1705670723
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_DownloadTitleStorage, "TickState_DownloadTitleStorage" }, // 746330043
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_Exit, "TickState_Exit" }, // 562586983
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_Initialize, "TickState_Initialize" }, // 904049010
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_InProgress, "TickState_InProgress" }, // 876973902
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_Matching, "TickState_Matching" }, // 2418463531
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_WaitSpawnClientActor, "TickState_WaitSpawnClientActor" }, // 4222289913
		{ &Z_Construct_UFunction_AELSSGameMode_TickState_WaitStartGameSession, "TickState_WaitStartGameSession" }, // 3186242182
		{ &Z_Construct_UFunction_AELSSGameMode_WrestlerIdToCastEnum, "WrestlerIdToCastEnum" }, // 4165259335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GameServerEnvName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GameServerEnvName = { "GameServerEnvName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, GameServerEnvName), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GameServerEnvName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GameServerEnvName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, DataVersion), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, GroupId), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, Platform), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleVersion = { "TitleVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, TitleVersion), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSModeVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSModeVersion = { "SSModeVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, SSModeVersion), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSModeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSModeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ChangeList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ChangeList = { "ChangeList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, ChangeList), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ChangeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ChangeList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_YGS2URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_YGS2URL = { "YGS2URL", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, YGS2URL), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_YGS2URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_YGS2URL_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType = { "LaunchType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, LaunchType), Z_Construct_UEnum_ABP_200508_ESSModeLaunchType, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersRequiredToStart = { "NumberOfPlayersRequiredToStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, NumberOfPlayersRequiredToStart), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersRequiredToStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersMax = { "NumberOfPlayersMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, NumberOfPlayersMax), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_Inner = { "CandidateAIWrestlerIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs = { "CandidateAIWrestlerIDs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, CandidateAIWrestlerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_MatchLobbyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_MatchLobbyTime = { "MatchLobbyTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, MatchLobbyTime), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_MatchLobbyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_MatchLobbyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verApplication_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verApplication = { "verApplication", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, verApplication), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verApplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verMaster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verMaster = { "verMaster", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, verMaster), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verMaster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verMaster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSGameState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSGameState = { "SSGameState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, SSGameState), Z_Construct_UClass_AELSSGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSGameState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_ValueProp = { "ReservedPlayerStartMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_Key_KeyProp = { "ReservedPlayerStartMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap = { "ReservedPlayerStartMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, ReservedPlayerStartMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_WaitJoinElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_WaitJoinElapsedTime = { "WaitJoinElapsedTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, WaitJoinElapsedTime), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_WaitJoinElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_WaitJoinElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeTotal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeTotal = { "TitleStorageDownloadingTimeTotal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, TitleStorageDownloadingTimeTotal), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeLimit = { "TitleStorageDownloadingTimeLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, TitleStorageDownloadingTimeLimit), METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized_SetBit(void* Obj)
	{
		((AELSSGameMode*)Obj)->IsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized = { "IsInitialized", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGameMode), &Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray_Inner = { "ManagerActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray = { "ManagerActorArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, ManagerActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd_SetBit(void* Obj)
	{
		((AELSSGameMode*)Obj)->IsMatchDataGetEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd = { "IsMatchDataGetEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGameMode), &Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DebugMenuParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameMode" },
		{ "ModuleRelativePath", "Public/ELSSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DebugMenuParam = { "DebugMenuParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameMode, DebugMenuParam), Z_Construct_UScriptStruct_FELSSDebugMenuParam, METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DebugMenuParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DebugMenuParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GameServerEnvName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSModeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ChangeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_YGS2URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_LaunchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersRequiredToStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_NumberOfPlayersMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_CandidateAIWrestlerIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_MatchLobbyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verApplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_verMaster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_SSGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ReservedPlayerStartMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_WaitJoinElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_TitleStorageDownloadingTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_ManagerActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_IsMatchDataGetEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameMode_Statics::NewProp_DebugMenuParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGameMode_Statics::ClassParams = {
		&AELSSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGameMode, 1390512381);
	template<> ABP_200508_API UClass* StaticClass<AELSSGameMode>()
	{
		return AELSSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGameMode(Z_Construct_UClass_AELSSGameMode, &AELSSGameMode::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
