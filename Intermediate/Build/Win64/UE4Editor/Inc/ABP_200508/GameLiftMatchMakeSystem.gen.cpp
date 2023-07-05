// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftMatchMakeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftMatchMakeSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftMatchMakeSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftMatchMakeSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_Base_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateGameSession_RequestParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDescribeGameSessions_RequestParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerSessionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGLAPI_ErrorData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessions_Response();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FRandomJoinMatchData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TimerEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execActivateMatchMakeAPI)
	{
		P_GET_OBJECT(UGLAPI_Base,Z_Param_Api);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateMatchMakeAPI(Z_Param_Api);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execCreateClientJsonData)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_joinData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateClientJsonData(Z_Param_Out_joinData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execCreateGameLiftMatchMakeSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameLiftMatchMakeSystem**)Z_Param__Result=UGameLiftMatchMakeSystem::CreateGameLiftMatchMakeSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execCreateMatchMake)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_pNum);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_pMin);
		P_GET_PROPERTY(FStrProperty,Z_Param_aliasID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMatchMake(Z_Param_Out_pNum,Z_Param_Out_pMin,Z_Param_aliasID,Z_Param_sessionTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execCreateMatchMakeToRequest)
	{
		P_GET_STRUCT_REF(FCreateGameSession_RequestParam,Z_Param_Out_roomParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMatchMakeToRequest(Z_Param_Out_roomParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execCreateMatchMakeToSessionParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aliasID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMatchMakeToSessionParam(Z_Param_aliasID,Z_Param_sessionTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execGetGameServerJoinData)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ipPort);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_joinUserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameServerJoinData(Z_Param_Out_ipPort,Z_Param_Out_joinUserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execGetJoinGamePlayerSessionData)
	{
		P_GET_STRUCT_REF(FGameLiftGameSession_Response,Z_Param_Out_GameSession);
		P_GET_STRUCT_REF(FGameLiftPlayerSession_Response,Z_Param_Out_playerSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetJoinGamePlayerSessionData(Z_Param_Out_GameSession,Z_Param_Out_playerSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execGetPlayerSessionId)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerSessionId(Z_Param_Out_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execInit)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_gamelift);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delayLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameLiftMatchMakeSystem**)Z_Param__Result=P_THIS->Init(Z_Param_gamelift,Z_Param_playerId,Z_Param_PlayerData,Z_Param_delayLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execIsMatchMakeEnd)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsMatchMakeEnd(Z_Param_Out_IsEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinGameServerIpPort)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_iport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGameServerIpPort(Z_Param_Out_iport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinGameSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinGameSession(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinGameSessionToGameSessionData)
	{
		P_GET_STRUCT_REF(FGameLiftGameSession_Response,Z_Param_Out_sessionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinGameSessionToGameSessionData(Z_Param_Out_sessionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinGameSessionToRequest)
	{
		P_GET_STRUCT_REF(FDescribeGameSessions_RequestParam,Z_Param_Out_requestParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinGameSessionToRequest(Z_Param_Out_requestParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinPlayerSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_targetGameSessionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_userDataJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinPlayerSession(Z_Param_targetGameSessionId,Z_Param_playerId,Z_Param_userDataJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinPlayerSessionToParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_targetGameSessionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_STRUCT_REF(FSSPlayerSessionParam,Z_Param_Out_userDataJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinPlayerSessionToParam(Z_Param_targetGameSessionId,Z_Param_playerId,Z_Param_Out_userDataJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execJoinPlayerSessionToRequestParam)
	{
		P_GET_STRUCT_REF(FCreatePlayerSession_RequestParam,Z_Param_Out_requestParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JoinPlayerSessionToRequestParam(Z_Param_Out_requestParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnCreateGameSessionSuccess)
	{
		P_GET_STRUCT_REF(FCreateGameSession_RequestParam,Z_Param_Out_reqestParam);
		P_GET_STRUCT_REF(FGameLiftGameSession_Response,Z_Param_Out_responseParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateGameSessionSuccess(Z_Param_Out_reqestParam,Z_Param_Out_responseParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnErrorEvent)
	{
		P_GET_STRUCT_REF(FGLAPI_ErrorData,Z_Param_Out_err);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnErrorEvent(Z_Param_Out_err);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnJoinGameSessionSuccess)
	{
		P_GET_STRUCT_REF(FDescribeGameSessions_RequestParam,Z_Param_Out_requestParam);
		P_GET_STRUCT_REF(FGameLiftGameSessions_Response,Z_Param_Out_responseParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinGameSessionSuccess(Z_Param_Out_requestParam,Z_Param_Out_responseParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnJoinGameSessionToDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinGameSessionToDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnJoinPlayerSessionSuccess)
	{
		P_GET_STRUCT_REF(FCreatePlayerSession_RequestParam,Z_Param_Out_requestParam);
		P_GET_STRUCT_REF(FGameLiftPlayerSession_Response,Z_Param_Out_responseParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinPlayerSessionSuccess(Z_Param_Out_requestParam,Z_Param_Out_responseParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnSearchGameSessionSuccess)
	{
		P_GET_STRUCT_REF(FGameLiftGameSessions_Response,Z_Param_Out_gameSessions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSearchGameSessionSuccess(Z_Param_Out_gameSessions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execOnSuccessEvent)
	{
		P_GET_ENUM_REF(EMatchMakeExecuteType,Z_Param_Out_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSuccessEvent((EMatchMakeExecuteType&)(Z_Param_Out_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execRandomGameSessionJoinOrCreate)
	{
		P_GET_STRUCT_REF(FRandomJoinMatchData,Z_Param_Out_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RandomGameSessionJoinOrCreate(Z_Param_Out_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execSearchGameSessionToAlias)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aliasID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_sort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SearchGameSessionToAlias(Z_Param_aliasID,Z_Param_Filter,Z_Param_sort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execSetUserSelectedData)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserSelectedData(EWrestlerID_N(Z_Param_inWrestlerId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameLiftMatchMakeSystem::execUpdate)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	void UGameLiftMatchMakeSystem::StaticRegisterNativesUGameLiftMatchMakeSystem()
	{
		UClass* Class = UGameLiftMatchMakeSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMatchMakeAPI", &UGameLiftMatchMakeSystem::execActivateMatchMakeAPI },
			{ "CreateClientJsonData", &UGameLiftMatchMakeSystem::execCreateClientJsonData },
			{ "CreateGameLiftMatchMakeSystem", &UGameLiftMatchMakeSystem::execCreateGameLiftMatchMakeSystem },
			{ "CreateMatchMake", &UGameLiftMatchMakeSystem::execCreateMatchMake },
			{ "CreateMatchMakeToRequest", &UGameLiftMatchMakeSystem::execCreateMatchMakeToRequest },
			{ "CreateMatchMakeToSessionParam", &UGameLiftMatchMakeSystem::execCreateMatchMakeToSessionParam },
			{ "GetGameServerJoinData", &UGameLiftMatchMakeSystem::execGetGameServerJoinData },
			{ "GetJoinGamePlayerSessionData", &UGameLiftMatchMakeSystem::execGetJoinGamePlayerSessionData },
			{ "GetPlayerSessionId", &UGameLiftMatchMakeSystem::execGetPlayerSessionId },
			{ "Init", &UGameLiftMatchMakeSystem::execInit },
			{ "IsMatchMakeEnd", &UGameLiftMatchMakeSystem::execIsMatchMakeEnd },
			{ "JoinGameServerIpPort", &UGameLiftMatchMakeSystem::execJoinGameServerIpPort },
			{ "JoinGameSession", &UGameLiftMatchMakeSystem::execJoinGameSession },
			{ "JoinGameSessionToGameSessionData", &UGameLiftMatchMakeSystem::execJoinGameSessionToGameSessionData },
			{ "JoinGameSessionToRequest", &UGameLiftMatchMakeSystem::execJoinGameSessionToRequest },
			{ "JoinPlayerSession", &UGameLiftMatchMakeSystem::execJoinPlayerSession },
			{ "JoinPlayerSessionToParam", &UGameLiftMatchMakeSystem::execJoinPlayerSessionToParam },
			{ "JoinPlayerSessionToRequestParam", &UGameLiftMatchMakeSystem::execJoinPlayerSessionToRequestParam },
			{ "OnCreateGameSessionSuccess", &UGameLiftMatchMakeSystem::execOnCreateGameSessionSuccess },
			{ "OnErrorEvent", &UGameLiftMatchMakeSystem::execOnErrorEvent },
			{ "OnJoinGameSessionSuccess", &UGameLiftMatchMakeSystem::execOnJoinGameSessionSuccess },
			{ "OnJoinGameSessionToDelay", &UGameLiftMatchMakeSystem::execOnJoinGameSessionToDelay },
			{ "OnJoinPlayerSessionSuccess", &UGameLiftMatchMakeSystem::execOnJoinPlayerSessionSuccess },
			{ "OnSearchGameSessionSuccess", &UGameLiftMatchMakeSystem::execOnSearchGameSessionSuccess },
			{ "OnSuccessEvent", &UGameLiftMatchMakeSystem::execOnSuccessEvent },
			{ "RandomGameSessionJoinOrCreate", &UGameLiftMatchMakeSystem::execRandomGameSessionJoinOrCreate },
			{ "SearchGameSessionToAlias", &UGameLiftMatchMakeSystem::execSearchGameSessionToAlias },
			{ "SetUserSelectedData", &UGameLiftMatchMakeSystem::execSetUserSelectedData },
			{ "Update", &UGameLiftMatchMakeSystem::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics
	{
		struct GameLiftMatchMakeSystem_eventActivateMatchMakeAPI_Parms
		{
			UGLAPI_Base* Api;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Api;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventActivateMatchMakeAPI_Parms, Api), Z_Construct_UClass_UGLAPI_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventActivateMatchMakeAPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventActivateMatchMakeAPI_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_Api,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "ActivateMatchMakeAPI", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventActivateMatchMakeAPI_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics
	{
		struct GameLiftMatchMakeSystem_eventCreateClientJsonData_Parms
		{
			FString joinData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::NewProp_joinData = { "joinData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateClientJsonData_Parms, joinData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::NewProp_joinData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "CreateClientJsonData", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventCreateClientJsonData_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics
	{
		struct GameLiftMatchMakeSystem_eventCreateGameLiftMatchMakeSystem_Parms
		{
			UGameLiftMatchMakeSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateGameLiftMatchMakeSystem_Parms, ReturnValue), Z_Construct_UClass_UGameLiftMatchMakeSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "CreateGameLiftMatchMakeSystem", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventCreateGameLiftMatchMakeSystem_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics
	{
		struct GameLiftMatchMakeSystem_eventCreateMatchMake_Parms
		{
			int32 pNum;
			int32 pMin;
			FString aliasID;
			FString sessionTitle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionTitle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pNum = { "pNum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms, pNum), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pMin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pMin = { "pMin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms, pMin), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_aliasID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms, aliasID), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_aliasID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_sessionTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_sessionTitle = { "sessionTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms, sessionTitle), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_sessionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_sessionTitle_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventCreateMatchMake_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_pMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_aliasID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_sessionTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "CreateMatchMake", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventCreateMatchMake_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics
	{
		struct GameLiftMatchMakeSystem_eventCreateMatchMakeToRequest_Parms
		{
			FCreateGameSession_RequestParam roomParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roomParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_roomParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_roomParam = { "roomParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMakeToRequest_Parms, roomParam), Z_Construct_UScriptStruct_FCreateGameSession_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_roomParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_roomParam_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventCreateMatchMakeToRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventCreateMatchMakeToRequest_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_roomParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "CreateMatchMakeToRequest", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventCreateMatchMakeToRequest_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics
	{
		struct GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms
		{
			FString aliasID;
			FString sessionTitle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionTitle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_aliasID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms, aliasID), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_aliasID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_sessionTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_sessionTitle = { "sessionTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms, sessionTitle), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_sessionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_sessionTitle_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_aliasID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_sessionTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "CreateMatchMakeToSessionParam", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventCreateMatchMakeToSessionParam_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics
	{
		struct GameLiftMatchMakeSystem_eventGetGameServerJoinData_Parms
		{
			FString ipPort;
			FString joinUserData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::NewProp_ipPort = { "ipPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventGetGameServerJoinData_Parms, ipPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::NewProp_joinUserData = { "joinUserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventGetGameServerJoinData_Parms, joinUserData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::NewProp_ipPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::NewProp_joinUserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "GetGameServerJoinData", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventGetGameServerJoinData_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics
	{
		struct GameLiftMatchMakeSystem_eventGetJoinGamePlayerSessionData_Parms
		{
			FGameLiftGameSession_Response GameSession;
			FGameLiftPlayerSession_Response playerSession;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameSession;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventGetJoinGamePlayerSessionData_Parms, GameSession), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::NewProp_playerSession = { "playerSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventGetJoinGamePlayerSessionData_Parms, playerSession), Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::NewProp_GameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::NewProp_playerSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "GetJoinGamePlayerSessionData", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventGetJoinGamePlayerSessionData_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics
	{
		struct GameLiftMatchMakeSystem_eventGetPlayerSessionId_Parms
		{
			FString SessionID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventGetPlayerSessionId_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "GetPlayerSessionId", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventGetPlayerSessionId_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics
	{
		struct GameLiftMatchMakeSystem_eventInit_Parms
		{
			UGameLiftClientObject* gamelift;
			FString playerId;
			FString PlayerData;
			float delayLimit;
			UGameLiftMatchMakeSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gamelift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayLimit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_gamelift = { "gamelift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventInit_Parms, gamelift), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventInit_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventInit_Parms, PlayerData), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_delayLimit = { "delayLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventInit_Parms, delayLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventInit_Parms, ReturnValue), Z_Construct_UClass_UGameLiftMatchMakeSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_gamelift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_delayLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "Init", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventInit_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics
	{
		struct GameLiftMatchMakeSystem_eventIsMatchMakeEnd_Parms
		{
			bool IsEnd;
		};
		static void NewProp_IsEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::NewProp_IsEnd_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventIsMatchMakeEnd_Parms*)Obj)->IsEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::NewProp_IsEnd = { "IsEnd", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventIsMatchMakeEnd_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::NewProp_IsEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::NewProp_IsEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "IsMatchMakeEnd", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventIsMatchMakeEnd_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinGameServerIpPort_Parms
		{
			FString iport;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::NewProp_iport = { "iport", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinGameServerIpPort_Parms, iport), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::NewProp_iport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinGameServerIpPort", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinGameServerIpPort_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinGameSession_Parms
		{
			FString SessionID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinGameSession_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_SessionID_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinGameSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinGameSession_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinGameSession", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinGameSession_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinGameSessionToGameSessionData_Parms
		{
			FGameLiftGameSession_Response sessionData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sessionData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_sessionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_sessionData = { "sessionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinGameSessionToGameSessionData_Parms, sessionData), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_sessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_sessionData_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinGameSessionToGameSessionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinGameSessionToGameSessionData_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_sessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinGameSessionToGameSessionData", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinGameSessionToGameSessionData_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinGameSessionToRequest_Parms
		{
			FDescribeGameSessions_RequestParam requestParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinGameSessionToRequest_Parms, requestParam), Z_Construct_UScriptStruct_FDescribeGameSessions_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_requestParam_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinGameSessionToRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinGameSessionToRequest_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinGameSessionToRequest", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinGameSessionToRequest_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms
		{
			FString targetGameSessionId;
			FString playerId;
			FString userDataJson;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetGameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetGameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userDataJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userDataJson;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_targetGameSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_targetGameSessionId = { "targetGameSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms, targetGameSessionId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_targetGameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_targetGameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_userDataJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_userDataJson = { "userDataJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms, userDataJson), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_userDataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_userDataJson_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_targetGameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_userDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinPlayerSession", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSession_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms
		{
			FString targetGameSessionId;
			FString playerId;
			FSSPlayerSessionParam userDataJson;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetGameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetGameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_userDataJson;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_targetGameSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_targetGameSessionId = { "targetGameSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms, targetGameSessionId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_targetGameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_targetGameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_userDataJson = { "userDataJson", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms, userDataJson), Z_Construct_UScriptStruct_FSSPlayerSessionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_targetGameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_userDataJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinPlayerSessionToParam", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSessionToParam_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics
	{
		struct GameLiftMatchMakeSystem_eventJoinPlayerSessionToRequestParam_Parms
		{
			FCreatePlayerSession_RequestParam requestParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventJoinPlayerSessionToRequestParam_Parms, requestParam), Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_requestParam_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventJoinPlayerSessionToRequestParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSessionToRequestParam_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "JoinPlayerSessionToRequestParam", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventJoinPlayerSessionToRequestParam_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnCreateGameSessionSuccess_Parms
		{
			FCreateGameSession_RequestParam reqestParam;
			FGameLiftGameSession_Response responseParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reqestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_reqestParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_responseParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_reqestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_reqestParam = { "reqestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnCreateGameSessionSuccess_Parms, reqestParam), Z_Construct_UScriptStruct_FCreateGameSession_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_reqestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_reqestParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_responseParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_responseParam = { "responseParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnCreateGameSessionSuccess_Parms, responseParam), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_responseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_responseParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_reqestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::NewProp_responseParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnCreateGameSessionSuccess", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnCreateGameSessionSuccess_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnErrorEvent_Parms
		{
			FGLAPI_ErrorData err;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_err_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_err;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::NewProp_err_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::NewProp_err = { "err", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnErrorEvent_Parms, err), Z_Construct_UScriptStruct_FGLAPI_ErrorData, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::NewProp_err_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::NewProp_err_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::NewProp_err,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnErrorEvent", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnErrorEvent_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnJoinGameSessionSuccess_Parms
		{
			FDescribeGameSessions_RequestParam requestParam;
			FGameLiftGameSessions_Response responseParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_responseParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnJoinGameSessionSuccess_Parms, requestParam), Z_Construct_UScriptStruct_FDescribeGameSessions_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_requestParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_responseParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_responseParam = { "responseParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnJoinGameSessionSuccess_Parms, responseParam), Z_Construct_UScriptStruct_FGameLiftGameSessions_Response, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_responseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_responseParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::NewProp_responseParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnJoinGameSessionSuccess", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnJoinGameSessionSuccess_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnJoinGameSessionToDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnJoinPlayerSessionSuccess_Parms
		{
			FCreatePlayerSession_RequestParam requestParam;
			FGameLiftPlayerSession_Response responseParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_requestParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_responseParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_requestParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_requestParam = { "requestParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnJoinPlayerSessionSuccess_Parms, requestParam), Z_Construct_UScriptStruct_FCreatePlayerSession_RequestParam, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_requestParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_requestParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_responseParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_responseParam = { "responseParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnJoinPlayerSessionSuccess_Parms, responseParam), Z_Construct_UScriptStruct_FGameLiftPlayerSession_Response, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_responseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_responseParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_requestParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::NewProp_responseParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnJoinPlayerSessionSuccess", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnJoinPlayerSessionSuccess_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnSearchGameSessionSuccess_Parms
		{
			FGameLiftGameSessions_Response gameSessions;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameSessions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::NewProp_gameSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::NewProp_gameSessions = { "gameSessions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnSearchGameSessionSuccess_Parms, gameSessions), Z_Construct_UScriptStruct_FGameLiftGameSessions_Response, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::NewProp_gameSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::NewProp_gameSessions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::NewProp_gameSessions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnSearchGameSessionSuccess", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnSearchGameSessionSuccess_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics
	{
		struct GameLiftMatchMakeSystem_eventOnSuccessEvent_Parms
		{
			EMatchMakeExecuteType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventOnSuccessEvent_Parms, Type), Z_Construct_UEnum_ABP_200508_EMatchMakeExecuteType, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "OnSuccessEvent", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventOnSuccessEvent_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics
	{
		struct GameLiftMatchMakeSystem_eventRandomGameSessionJoinOrCreate_Parms
		{
			FRandomJoinMatchData dat;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventRandomGameSessionJoinOrCreate_Parms, dat), Z_Construct_UScriptStruct_FRandomJoinMatchData, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_dat_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventRandomGameSessionJoinOrCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventRandomGameSessionJoinOrCreate_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_dat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "RandomGameSessionJoinOrCreate", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventRandomGameSessionJoinOrCreate_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics
	{
		struct GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms
		{
			FString aliasID;
			FString Filter;
			FString sort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliasID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aliasID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sort_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_aliasID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_aliasID = { "aliasID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms, aliasID), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_aliasID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_aliasID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms, Filter), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_sort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_sort = { "sort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms, sort), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_sort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_sort_MetaData)) };
	void Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms), &Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_aliasID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_sort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "SearchGameSessionToAlias", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventSearchGameSessionToAlias_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics
	{
		struct GameLiftMatchMakeSystem_eventSetUserSelectedData_Parms
		{
			EWrestlerID_N inWrestlerId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventSetUserSelectedData_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::NewProp_inWrestlerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "SetUserSelectedData", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventSetUserSelectedData_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics
	{
		struct GameLiftMatchMakeSystem_eventUpdate_Parms
		{
			float Delta;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftMatchMakeSystem_eventUpdate_Parms, Delta), METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::NewProp_Delta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameLiftMatchMakeSystem, nullptr, "Update", nullptr, nullptr, sizeof(GameLiftMatchMakeSystem_eventUpdate_Parms), Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameLiftMatchMakeSystem_NoRegister()
	{
		return UGameLiftMatchMakeSystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onCallEndEventSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCallEndEventSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onCallEndEventFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCallEndEventFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onDelayTimerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDelayTimerEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectedWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_ActivateMatchMakeAPI, "ActivateMatchMakeAPI" }, // 674324594
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateClientJsonData, "CreateClientJsonData" }, // 54307746
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateGameLiftMatchMakeSystem, "CreateGameLiftMatchMakeSystem" }, // 512282120
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMake, "CreateMatchMake" }, // 2105849836
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToRequest, "CreateMatchMakeToRequest" }, // 3794504316
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_CreateMatchMakeToSessionParam, "CreateMatchMakeToSessionParam" }, // 650780604
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetGameServerJoinData, "GetGameServerJoinData" }, // 3236332823
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetJoinGamePlayerSessionData, "GetJoinGamePlayerSessionData" }, // 1508019858
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_GetPlayerSessionId, "GetPlayerSessionId" }, // 893729723
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_Init, "Init" }, // 1404712933
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_IsMatchMakeEnd, "IsMatchMakeEnd" }, // 2589055340
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameServerIpPort, "JoinGameServerIpPort" }, // 1259161890
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSession, "JoinGameSession" }, // 3909281235
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToGameSessionData, "JoinGameSessionToGameSessionData" }, // 3841979726
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinGameSessionToRequest, "JoinGameSessionToRequest" }, // 3047924429
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSession, "JoinPlayerSession" }, // 3530968222
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToParam, "JoinPlayerSessionToParam" }, // 1433263304
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_JoinPlayerSessionToRequestParam, "JoinPlayerSessionToRequestParam" }, // 2195512214
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnCreateGameSessionSuccess, "OnCreateGameSessionSuccess" }, // 4077840833
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnErrorEvent, "OnErrorEvent" }, // 3762708160
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionSuccess, "OnJoinGameSessionSuccess" }, // 1565129637
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinGameSessionToDelay, "OnJoinGameSessionToDelay" }, // 3957005854
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnJoinPlayerSessionSuccess, "OnJoinPlayerSessionSuccess" }, // 3261472239
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSearchGameSessionSuccess, "OnSearchGameSessionSuccess" }, // 1535376913
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_OnSuccessEvent, "OnSuccessEvent" }, // 1933742228
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_RandomGameSessionJoinOrCreate, "RandomGameSessionJoinOrCreate" }, // 2055352313
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_SearchGameSessionToAlias, "SearchGameSessionToAlias" }, // 4069676053
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_SetUserSelectedData, "SetUserSelectedData" }, // 1763985797
		{ &Z_Construct_UFunction_UGameLiftMatchMakeSystem_Update, "Update" }, // 3235941568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameLiftMatchMakeSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventSuccess = { "onCallEndEventSuccess", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftMatchMakeSystem, onCallEndEventSuccess), Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Success__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventFailed = { "onCallEndEventFailed", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftMatchMakeSystem, onCallEndEventFailed), Z_Construct_UDelegateFunction_ABP_200508_MachMakeEvent_Failed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onDelayTimerEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onDelayTimerEvent = { "onDelayTimerEvent", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftMatchMakeSystem, onDelayTimerEvent), Z_Construct_UDelegateFunction_ABP_200508_TimerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onDelayTimerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onDelayTimerEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftMatchMakeSystem" },
		{ "ModuleRelativePath", "Public/GameLiftMatchMakeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID = { "SelectedWrestlerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameLiftMatchMakeSystem, SelectedWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onCallEndEventFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_onDelayTimerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::NewProp_SelectedWrestlerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLiftMatchMakeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::ClassParams = {
		&UGameLiftMatchMakeSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameLiftMatchMakeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameLiftMatchMakeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameLiftMatchMakeSystem, 1315098132);
	template<> ABP_200508_API UClass* StaticClass<UGameLiftMatchMakeSystem>()
	{
		return UGameLiftMatchMakeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameLiftMatchMakeSystem(Z_Construct_UClass_UGameLiftMatchMakeSystem, &UGameLiftMatchMakeSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGameLiftMatchMakeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLiftMatchMakeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
