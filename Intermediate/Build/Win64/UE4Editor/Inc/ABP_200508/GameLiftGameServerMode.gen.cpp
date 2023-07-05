// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameServerMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameServerMode() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AGameLiftGameServerMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AGameLiftGameServerMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSession_Response();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSOnlinePlayerData();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_GameServerJoinPlayerEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGameServerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameServerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetCreatePlayerPawnNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCreatePlayerPawnNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetGameSessionPlayerMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameSessionPlayerMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetJoinGameSessionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameLiftGameSession_Response*)Z_Param__Result=P_THIS->GetJoinGameSessionData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetJoinPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJoinPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetLoginPlayerData)
	{
		P_GET_OBJECT(APlayerState,Z_Param_pSate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSOnlinePlayerData*)Z_Param__Result=P_THIS->GetLoginPlayerData(Z_Param_pSate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetLoginPlayerDataToController)
	{
		P_GET_OBJECT(AController,Z_Param_pController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSOnlinePlayerData*)Z_Param__Result=P_THIS->GetLoginPlayerDataToController(Z_Param_pController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetLoginPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoginPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetLoginPlayerToPlayerState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_idx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerState**)Z_Param__Result=P_THIS->GetLoginPlayerToPlayerState(Z_Param_idx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execGetServerJoinOptionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=AGameLiftGameServerMode::GetServerJoinOptionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsEnableSDK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableSDK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsFirstPlayerJoinEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstPlayerJoinEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsGameServerActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGameServerActivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsPlayerJoinEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerJoinEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsPlayerLoginEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerLoginEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execIsStartGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execPrepareGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLiftGameServerMode::execUpdatePlayerSessionPolicyIsStopPlayerJoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerSessionPolicyIsStopPlayerJoin();
		P_NATIVE_END;
	}
	void AGameLiftGameServerMode::StaticRegisterNativesAGameLiftGameServerMode()
	{
		UClass* Class = AGameLiftGameServerMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameServerEnd", &AGameLiftGameServerMode::execGameServerEnd },
			{ "GetCreatePlayerPawnNum", &AGameLiftGameServerMode::execGetCreatePlayerPawnNum },
			{ "GetGameSessionPlayerMax", &AGameLiftGameServerMode::execGetGameSessionPlayerMax },
			{ "GetJoinGameSessionData", &AGameLiftGameServerMode::execGetJoinGameSessionData },
			{ "GetJoinPlayerNum", &AGameLiftGameServerMode::execGetJoinPlayerNum },
			{ "GetLoginPlayerData", &AGameLiftGameServerMode::execGetLoginPlayerData },
			{ "GetLoginPlayerDataToController", &AGameLiftGameServerMode::execGetLoginPlayerDataToController },
			{ "GetLoginPlayerNum", &AGameLiftGameServerMode::execGetLoginPlayerNum },
			{ "GetLoginPlayerToPlayerState", &AGameLiftGameServerMode::execGetLoginPlayerToPlayerState },
			{ "GetServerJoinOptionName", &AGameLiftGameServerMode::execGetServerJoinOptionName },
			{ "IsEnableSDK", &AGameLiftGameServerMode::execIsEnableSDK },
			{ "IsFirstPlayerJoinEnd", &AGameLiftGameServerMode::execIsFirstPlayerJoinEnd },
			{ "IsGameServerActivate", &AGameLiftGameServerMode::execIsGameServerActivate },
			{ "IsPlayerJoinEnd", &AGameLiftGameServerMode::execIsPlayerJoinEnd },
			{ "IsPlayerLoginEnd", &AGameLiftGameServerMode::execIsPlayerLoginEnd },
			{ "IsStartGameSession", &AGameLiftGameServerMode::execIsStartGameSession },
			{ "PrepareGameSession", &AGameLiftGameServerMode::execPrepareGameSession },
			{ "UpdatePlayerSessionPolicyIsStopPlayerJoin", &AGameLiftGameServerMode::execUpdatePlayerSessionPolicyIsStopPlayerJoin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GameServerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics
	{
		struct GameLiftGameServerMode_eventGetCreatePlayerPawnNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetCreatePlayerPawnNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetCreatePlayerPawnNum", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetCreatePlayerPawnNum_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics
	{
		struct GameLiftGameServerMode_eventGetGameSessionPlayerMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetGameSessionPlayerMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetGameSessionPlayerMax", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetGameSessionPlayerMax_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics
	{
		struct GameLiftGameServerMode_eventGetJoinGameSessionData_Parms
		{
			FGameLiftGameSession_Response ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetJoinGameSessionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetJoinGameSessionData", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetJoinGameSessionData_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics
	{
		struct GameLiftGameServerMode_eventGetJoinPlayerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetJoinPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetJoinPlayerNum", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetJoinPlayerNum_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics
	{
		struct GameLiftGameServerMode_eventGetLoginPlayerData_Parms
		{
			const APlayerState* pSate;
			FSSOnlinePlayerData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pSate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pSate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_pSate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_pSate = { "pSate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerData_Parms, pSate), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_pSate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_pSate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSOnlinePlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_pSate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetLoginPlayerData", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetLoginPlayerData_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics
	{
		struct GameLiftGameServerMode_eventGetLoginPlayerDataToController_Parms
		{
			const AController* pController;
			FSSOnlinePlayerData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_pController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_pController = { "pController", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerDataToController_Parms, pController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_pController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_pController_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerDataToController_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSOnlinePlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_pController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetLoginPlayerDataToController", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetLoginPlayerDataToController_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics
	{
		struct GameLiftGameServerMode_eventGetLoginPlayerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetLoginPlayerNum", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetLoginPlayerNum_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics
	{
		struct GameLiftGameServerMode_eventGetLoginPlayerToPlayerState_Parms
		{
			int32 idx;
			APlayerState* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_idx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerToPlayerState_Parms, idx), METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_idx_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_idx_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetLoginPlayerToPlayerState_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetLoginPlayerToPlayerState", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetLoginPlayerToPlayerState_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics
	{
		struct GameLiftGameServerMode_eventGetServerJoinOptionName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLiftGameServerMode_eventGetServerJoinOptionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "GetServerJoinOptionName", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventGetServerJoinOptionName_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics
	{
		struct GameLiftGameServerMode_eventIsEnableSDK_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsEnableSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsEnableSDK_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsEnableSDK", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsEnableSDK_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics
	{
		struct GameLiftGameServerMode_eventIsFirstPlayerJoinEnd_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsFirstPlayerJoinEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsFirstPlayerJoinEnd_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsFirstPlayerJoinEnd", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsFirstPlayerJoinEnd_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics
	{
		struct GameLiftGameServerMode_eventIsGameServerActivate_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsGameServerActivate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsGameServerActivate_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsGameServerActivate", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsGameServerActivate_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics
	{
		struct GameLiftGameServerMode_eventIsPlayerJoinEnd_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsPlayerJoinEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsPlayerJoinEnd_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsPlayerJoinEnd", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsPlayerJoinEnd_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics
	{
		struct GameLiftGameServerMode_eventIsPlayerLoginEnd_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsPlayerLoginEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsPlayerLoginEnd_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsPlayerLoginEnd", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsPlayerLoginEnd_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics
	{
		struct GameLiftGameServerMode_eventIsStartGameSession_Parms
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
	void Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLiftGameServerMode_eventIsStartGameSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLiftGameServerMode_eventIsStartGameSession_Parms), &Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "IsStartGameSession", nullptr, nullptr, sizeof(GameLiftGameServerMode_eventIsStartGameSession_Parms), Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "PrepareGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLiftGameServerMode, nullptr, "UpdatePlayerSessionPolicyIsStopPlayerJoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameLiftGameServerMode_NoRegister()
	{
		return AGameLiftGameServerMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameLiftGameServerMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameJoinPlayer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameJoinPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_gameJoinPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSGameServerJoinPlayerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SSGameServerJoinPlayerEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinGameSessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinGameSessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinPlayerDataToDummy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinPlayerDataToDummy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLiftGameServerMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameLiftGameServerMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GameServerEnd, "GameServerEnd" }, // 3270378011
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetCreatePlayerPawnNum, "GetCreatePlayerPawnNum" }, // 1633967568
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetGameSessionPlayerMax, "GetGameSessionPlayerMax" }, // 2327612190
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinGameSessionData, "GetJoinGameSessionData" }, // 2043402214
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetJoinPlayerNum, "GetJoinPlayerNum" }, // 845309534
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerData, "GetLoginPlayerData" }, // 2425346124
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerDataToController, "GetLoginPlayerDataToController" }, // 147548886
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerNum, "GetLoginPlayerNum" }, // 1131135137
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetLoginPlayerToPlayerState, "GetLoginPlayerToPlayerState" }, // 852372381
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_GetServerJoinOptionName, "GetServerJoinOptionName" }, // 2192345840
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsEnableSDK, "IsEnableSDK" }, // 1855287315
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsFirstPlayerJoinEnd, "IsFirstPlayerJoinEnd" }, // 723923049
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsGameServerActivate, "IsGameServerActivate" }, // 10956522
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerJoinEnd, "IsPlayerJoinEnd" }, // 388899325
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsPlayerLoginEnd, "IsPlayerLoginEnd" }, // 3753809077
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_IsStartGameSession, "IsStartGameSession" }, // 44188585
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_PrepareGameSession, "PrepareGameSession" }, // 2552919159
		{ &Z_Construct_UFunction_AGameLiftGameServerMode_UpdatePlayerSessionPolicyIsStopPlayerJoin, "UpdatePlayerSessionPolicyIsStopPlayerJoin" }, // 1760913019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameLiftGameServerMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer_Inner = { "gameJoinPlayer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSOnlinePlayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameServerMode" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer = { "gameJoinPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLiftGameServerMode, gameJoinPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_SSGameServerJoinPlayerEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameServerMode" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_SSGameServerJoinPlayerEvent = { "SSGameServerJoinPlayerEvent", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLiftGameServerMode, SSGameServerJoinPlayerEvent), Z_Construct_UDelegateFunction_ABP_200508_GameServerJoinPlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_SSGameServerJoinPlayerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_SSGameServerJoinPlayerEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinGameSessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameServerMode" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinGameSessionData = { "joinGameSessionData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLiftGameServerMode, joinGameSessionData), Z_Construct_UScriptStruct_FGameLiftGameSession_Response, METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinGameSessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinGameSessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinPlayerDataToDummy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameServerMode" },
		{ "ModuleRelativePath", "Public/GameLiftGameServerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinPlayerDataToDummy = { "joinPlayerDataToDummy", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLiftGameServerMode, joinPlayerDataToDummy), Z_Construct_UScriptStruct_FSSOnlinePlayerData, METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinPlayerDataToDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinPlayerDataToDummy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameLiftGameServerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_gameJoinPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_SSGameServerJoinPlayerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinGameSessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLiftGameServerMode_Statics::NewProp_joinPlayerDataToDummy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLiftGameServerMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLiftGameServerMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLiftGameServerMode_Statics::ClassParams = {
		&AGameLiftGameServerMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameLiftGameServerMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameLiftGameServerMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLiftGameServerMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLiftGameServerMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLiftGameServerMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLiftGameServerMode, 2201573568);
	template<> ABP_200508_API UClass* StaticClass<AGameLiftGameServerMode>()
	{
		return AGameLiftGameServerMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLiftGameServerMode(Z_Construct_UClass_AGameLiftGameServerMode, &AGameLiftGameServerMode::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AGameLiftGameServerMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLiftGameServerMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
