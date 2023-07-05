// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameLobby() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameLobby_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameLobby();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyState();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameLobbyData();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSOnlinePlayerData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LobbyStateChangeEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LobbyDataReplicateEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyData();
// End Cross Module References
	DEFINE_FUNCTION(UELSSGameLobby::execForceLobbySyncDataNoticeToClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceLobbySyncDataNoticeToClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execGetGameStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execGetLobbyHottestPlayerDataToClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FELSSLobbyMatchPlayerDataToClient>*)Z_Param__Result=P_THIS->GetLobbyHottestPlayerDataToClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execGetLobbyPlayerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyPlayerCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execGetLobbyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(eSSLobbyState*)Z_Param__Result=P_THIS->GetLobbyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execGetMatchPlayerData)
	{
		P_GET_TARRAY_REF(FELSSLobbyMatchPlayerDataToClient,Z_Param_Out_dats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMatchPlayerData(Z_Param_Out_dats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execInitializeForClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeForClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execInitializeLobby)
	{
		P_GET_OBJECT(AGameMode,Z_Param_ownerGameMode);
		P_GET_STRUCT_REF(FSSGameLobbyData,Z_Param_Out_datLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeLobby(Z_Param_ownerGameMode,Z_Param_Out_datLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execIsEmptyLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmptyLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execIsLobbyEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLobbyEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execIsLobbyMatchAIPlayer)
	{
		P_GET_TARRAY_REF(AELSSPlayerState*,Z_Param_Out_aiPlayerList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLobbyMatchAIPlayer(Z_Param_Out_aiPlayerList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execIsLobbyMatchPlayerToCheckClient)
	{
		P_GET_TARRAY_REF(AELSSPlayerState*,Z_Param_Out_allPlayerList);
		P_GET_TARRAY_REF(FELSSLobbyMatchPlayerDataToClient,Z_Param_Out_inPlayerList);
		P_GET_TARRAY_REF(FELSSLobbyMatchPlayerDataToClient,Z_Param_Out_outPlayerList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLobbyMatchPlayerToCheckClient(Z_Param_Out_allPlayerList,Z_Param_Out_inPlayerList,Z_Param_Out_outPlayerList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execOnRep_SSGameLobbyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SSGameLobbyData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execOnRep_SSGameLobbyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SSGameLobbyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execOnRep_SSGameNpcCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SSGameNpcCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execOnRep_SSGameStartLimitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SSGameStartLimitTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execOnRep_SSGameValidPlayerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SSGameValidPlayerCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execSSGameServerJoinPlayerNotifyEvent)
	{
		P_GET_OBJECT(APlayerController,Z_Param_pController);
		P_GET_STRUCT_REF(FSSOnlinePlayerData,Z_Param_Out_PlayerData);
		P_GET_UBOOL(Z_Param_isLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSGameServerJoinPlayerNotifyEvent(Z_Param_pController,Z_Param_Out_PlayerData,Z_Param_isLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execStartupLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartupLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameLobby::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UELSSGameLobby::StaticRegisterNativesUELSSGameLobby()
	{
		UClass* Class = UELSSGameLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceLobbySyncDataNoticeToClient", &UELSSGameLobby::execForceLobbySyncDataNoticeToClient },
			{ "GetGameStartTime", &UELSSGameLobby::execGetGameStartTime },
			{ "GetLobbyHottestPlayerDataToClient", &UELSSGameLobby::execGetLobbyHottestPlayerDataToClient },
			{ "GetLobbyPlayerCount", &UELSSGameLobby::execGetLobbyPlayerCount },
			{ "GetLobbyState", &UELSSGameLobby::execGetLobbyState },
			{ "GetMatchPlayerData", &UELSSGameLobby::execGetMatchPlayerData },
			{ "InitializeForClient", &UELSSGameLobby::execInitializeForClient },
			{ "InitializeLobby", &UELSSGameLobby::execInitializeLobby },
			{ "IsEmptyLobby", &UELSSGameLobby::execIsEmptyLobby },
			{ "IsLobbyEnd", &UELSSGameLobby::execIsLobbyEnd },
			{ "IsLobbyMatchAIPlayer", &UELSSGameLobby::execIsLobbyMatchAIPlayer },
			{ "IsLobbyMatchPlayerToCheckClient", &UELSSGameLobby::execIsLobbyMatchPlayerToCheckClient },
			{ "OnRep_SSGameLobbyData", &UELSSGameLobby::execOnRep_SSGameLobbyData },
			{ "OnRep_SSGameLobbyState", &UELSSGameLobby::execOnRep_SSGameLobbyState },
			{ "OnRep_SSGameNpcCount", &UELSSGameLobby::execOnRep_SSGameNpcCount },
			{ "OnRep_SSGameStartLimitTime", &UELSSGameLobby::execOnRep_SSGameStartLimitTime },
			{ "OnRep_SSGameValidPlayerCount", &UELSSGameLobby::execOnRep_SSGameValidPlayerCount },
			{ "SSGameServerJoinPlayerNotifyEvent", &UELSSGameLobby::execSSGameServerJoinPlayerNotifyEvent },
			{ "StartupLobby", &UELSSGameLobby::execStartupLobby },
			{ "Update", &UELSSGameLobby::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "ForceLobbySyncDataNoticeToClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics
	{
		struct ELSSGameLobby_eventGetGameStartTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventGetGameStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "GetGameStartTime", nullptr, nullptr, sizeof(ELSSGameLobby_eventGetGameStartTime_Parms), Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics
	{
		struct ELSSGameLobby_eventGetLobbyHottestPlayerDataToClient_Parms
		{
			TArray<FELSSLobbyMatchPlayerDataToClient> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventGetLobbyHottestPlayerDataToClient_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "GetLobbyHottestPlayerDataToClient", nullptr, nullptr, sizeof(ELSSGameLobby_eventGetLobbyHottestPlayerDataToClient_Parms), Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics
	{
		struct ELSSGameLobby_eventGetLobbyPlayerCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventGetLobbyPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "GetLobbyPlayerCount", nullptr, nullptr, sizeof(ELSSGameLobby_eventGetLobbyPlayerCount_Parms), Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics
	{
		struct ELSSGameLobby_eventGetLobbyState_Parms
		{
			eSSLobbyState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventGetLobbyState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "GetLobbyState", nullptr, nullptr, sizeof(ELSSGameLobby_eventGetLobbyState_Parms), Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_GetLobbyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_GetLobbyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics
	{
		struct ELSSGameLobby_eventGetMatchPlayerData_Parms
		{
			TArray<FELSSLobbyMatchPlayerDataToClient> dats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dats_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::NewProp_dats_Inner = { "dats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::NewProp_dats = { "dats", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventGetMatchPlayerData_Parms, dats), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::NewProp_dats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::NewProp_dats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "GetMatchPlayerData", nullptr, nullptr, sizeof(ELSSGameLobby_eventGetMatchPlayerData_Parms), Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "InitializeForClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_InitializeForClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_InitializeForClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics
	{
		struct ELSSGameLobby_eventInitializeLobby_Parms
		{
			AGameMode* ownerGameMode;
			FSSGameLobbyData datLobby;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ownerGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_datLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ownerGameMode = { "ownerGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventInitializeLobby_Parms, ownerGameMode), Z_Construct_UClass_AGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_datLobby_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_datLobby = { "datLobby", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventInitializeLobby_Parms, datLobby), Z_Construct_UScriptStruct_FSSGameLobbyData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_datLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_datLobby_MetaData)) };
	void Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventInitializeLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventInitializeLobby_Parms), &Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ownerGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_datLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "InitializeLobby", nullptr, nullptr, sizeof(ELSSGameLobby_eventInitializeLobby_Parms), Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_InitializeLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_InitializeLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics
	{
		struct ELSSGameLobby_eventIsEmptyLobby_Parms
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
	void Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventIsEmptyLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventIsEmptyLobby_Parms), &Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "IsEmptyLobby", nullptr, nullptr, sizeof(ELSSGameLobby_eventIsEmptyLobby_Parms), Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics
	{
		struct ELSSGameLobby_eventIsLobbyEnd_Parms
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
	void Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventIsLobbyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventIsLobbyEnd_Parms), &Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "IsLobbyEnd", nullptr, nullptr, sizeof(ELSSGameLobby_eventIsLobbyEnd_Parms), Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics
	{
		struct ELSSGameLobby_eventIsLobbyMatchAIPlayer_Parms
		{
			TArray<AELSSPlayerState*> aiPlayerList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aiPlayerList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_aiPlayerList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_aiPlayerList_Inner = { "aiPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_aiPlayerList = { "aiPlayerList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventIsLobbyMatchAIPlayer_Parms, aiPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventIsLobbyMatchAIPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventIsLobbyMatchAIPlayer_Parms), &Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_aiPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_aiPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "IsLobbyMatchAIPlayer", nullptr, nullptr, sizeof(ELSSGameLobby_eventIsLobbyMatchAIPlayer_Parms), Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics
	{
		struct ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms
		{
			TArray<AELSSPlayerState*> allPlayerList;
			TArray<FELSSLobbyMatchPlayerDataToClient> inPlayerList;
			TArray<FELSSLobbyMatchPlayerDataToClient> outPlayerList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allPlayerList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_allPlayerList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inPlayerList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inPlayerList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outPlayerList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outPlayerList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_allPlayerList_Inner = { "allPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_allPlayerList = { "allPlayerList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms, allPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_inPlayerList_Inner = { "inPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_inPlayerList = { "inPlayerList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms, inPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_outPlayerList_Inner = { "outPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_outPlayerList = { "outPlayerList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms, outPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms), &Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_allPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_allPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_inPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_inPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_outPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_outPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "IsLobbyMatchPlayerToCheckClient", nullptr, nullptr, sizeof(ELSSGameLobby_eventIsLobbyMatchPlayerToCheckClient_Parms), Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "OnRep_SSGameLobbyData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "OnRep_SSGameLobbyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "OnRep_SSGameNpcCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "OnRep_SSGameStartLimitTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "OnRep_SSGameValidPlayerCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics
	{
		struct ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms
		{
			APlayerController* pController;
			FSSOnlinePlayerData PlayerData;
			bool isLogin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
		static void NewProp_isLogin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLogin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_pController = { "pController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms, pController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms, PlayerData), Z_Construct_UScriptStruct_FSSOnlinePlayerData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_PlayerData_MetaData)) };
	void Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_isLogin_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms*)Obj)->isLogin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_isLogin = { "isLogin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms), &Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_isLogin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_pController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::NewProp_isLogin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "SSGameServerJoinPlayerNotifyEvent", nullptr, nullptr, sizeof(ELSSGameLobby_eventSSGameServerJoinPlayerNotifyEvent_Parms), Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics
	{
		struct ELSSGameLobby_eventStartupLobby_Parms
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
	void Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameLobby_eventStartupLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameLobby_eventStartupLobby_Parms), &Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "StartupLobby", nullptr, nullptr, sizeof(ELSSGameLobby_eventStartupLobby_Parms), Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_StartupLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_StartupLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameLobby_Update_Statics
	{
		struct ELSSGameLobby_eventUpdate_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_Update_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSGameLobby_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameLobby_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_Update_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_Update_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameLobby_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameLobby_Update_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameLobby_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameLobby_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameLobby, nullptr, "Update", nullptr, nullptr, sizeof(ELSSGameLobby_eventUpdate_Parms), Z_Construct_UFunction_UELSSGameLobby_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameLobby_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameLobby_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameLobby_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameLobby_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSGameLobby_NoRegister()
	{
		return UELSSGameLobby::StaticClass();
	}
	struct Z_Construct_UClass_UELSSGameLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyStateChangeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyStateChangeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyDataReplicateEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataReplicateEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssMatchPlayerDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssMatchPlayerDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ssMatchPlayerDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSGameLobbyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSGameLobbyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tGameStartLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tGameStartLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssGamePlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssGamePlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssGameNpcCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssGameNpcCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ssGameLobbyState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssGameLobbyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ssGameLobbyState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_clientMatchPlayerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientMatchPlayerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_clientMatchPlayerList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_clientPlayerAIList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientPlayerAIList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_clientPlayerAIList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssLobbyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssLobbyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInitialized_MetaData[];
#endif
		static void NewProp_IsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSGameLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSGameLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSGameLobby_ForceLobbySyncDataNoticeToClient, "ForceLobbySyncDataNoticeToClient" }, // 2440079348
		{ &Z_Construct_UFunction_UELSSGameLobby_GetGameStartTime, "GetGameStartTime" }, // 461656711
		{ &Z_Construct_UFunction_UELSSGameLobby_GetLobbyHottestPlayerDataToClient, "GetLobbyHottestPlayerDataToClient" }, // 2553470511
		{ &Z_Construct_UFunction_UELSSGameLobby_GetLobbyPlayerCount, "GetLobbyPlayerCount" }, // 2958391463
		{ &Z_Construct_UFunction_UELSSGameLobby_GetLobbyState, "GetLobbyState" }, // 3841546876
		{ &Z_Construct_UFunction_UELSSGameLobby_GetMatchPlayerData, "GetMatchPlayerData" }, // 2738339236
		{ &Z_Construct_UFunction_UELSSGameLobby_InitializeForClient, "InitializeForClient" }, // 2854742559
		{ &Z_Construct_UFunction_UELSSGameLobby_InitializeLobby, "InitializeLobby" }, // 2664377337
		{ &Z_Construct_UFunction_UELSSGameLobby_IsEmptyLobby, "IsEmptyLobby" }, // 4234377012
		{ &Z_Construct_UFunction_UELSSGameLobby_IsLobbyEnd, "IsLobbyEnd" }, // 2115557596
		{ &Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchAIPlayer, "IsLobbyMatchAIPlayer" }, // 476753211
		{ &Z_Construct_UFunction_UELSSGameLobby_IsLobbyMatchPlayerToCheckClient, "IsLobbyMatchPlayerToCheckClient" }, // 3755327412
		{ &Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyData, "OnRep_SSGameLobbyData" }, // 2761272440
		{ &Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameLobbyState, "OnRep_SSGameLobbyState" }, // 689988807
		{ &Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameNpcCount, "OnRep_SSGameNpcCount" }, // 3350945220
		{ &Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameStartLimitTime, "OnRep_SSGameStartLimitTime" }, // 1983495880
		{ &Z_Construct_UFunction_UELSSGameLobby_OnRep_SSGameValidPlayerCount, "OnRep_SSGameValidPlayerCount" }, // 3046846384
		{ &Z_Construct_UFunction_UELSSGameLobby_SSGameServerJoinPlayerNotifyEvent, "SSGameServerJoinPlayerNotifyEvent" }, // 3146453636
		{ &Z_Construct_UFunction_UELSSGameLobby_StartupLobby, "StartupLobby" }, // 3602565473
		{ &Z_Construct_UFunction_UELSSGameLobby_Update, "Update" }, // 3180918998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGameLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyStateChangeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyStateChangeEvent = { "LobbyStateChangeEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, LobbyStateChangeEvent), Z_Construct_UDelegateFunction_ABP_200508_LobbyStateChangeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyStateChangeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyStateChangeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyDataReplicateEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyDataReplicateEvent = { "LobbyDataReplicateEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, LobbyDataReplicateEvent), Z_Construct_UDelegateFunction_ABP_200508_LobbyDataReplicateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyDataReplicateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyDataReplicateEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList_Inner = { "ssMatchPlayerDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList = { "ssMatchPlayerDataList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, ssMatchPlayerDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_SSGameLobbyData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_SSGameLobbyData = { "SSGameLobbyData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, SSGameLobbyData), Z_Construct_UScriptStruct_FSSGameLobbyData, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_SSGameLobbyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_SSGameLobbyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_tGameStartLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_tGameStartLimit = { "tGameStartLimit", "OnRep_SSGameStartLimitTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, tGameStartLimit), METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_tGameStartLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_tGameStartLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGamePlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGamePlayerCount = { "ssGamePlayerCount", "OnRep_SSGameValidPlayerCount", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, ssGamePlayerCount), METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGamePlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGamePlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameNpcCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameNpcCount = { "ssGameNpcCount", "OnRep_SSGameNpcCount", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, ssGameNpcCount), METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameNpcCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameNpcCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState = { "ssGameLobbyState", "OnRep_SSGameLobbyState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, ssGameLobbyState), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList_Inner = { "clientMatchPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList = { "clientMatchPlayerList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, clientMatchPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList_Inner = { "clientPlayerAIList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList = { "clientPlayerAIList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, clientPlayerAIList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssLobbyData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssLobbyData = { "ssLobbyData", "OnRep_SSGameLobbyData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameLobby, ssLobbyData), Z_Construct_UScriptStruct_FELSSLobbyData, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssLobbyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssLobbyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLobby" },
		{ "ModuleRelativePath", "Public/ELSSGameLobby.h" },
	};
#endif
	void Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized_SetBit(void* Obj)
	{
		((UELSSGameLobby*)Obj)->IsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized = { "IsInitialized", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSGameLobby), &Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSGameLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyStateChangeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_LobbyDataReplicateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssMatchPlayerDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_SSGameLobbyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_tGameStartLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGamePlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameNpcCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssGameLobbyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientMatchPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_clientPlayerAIList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_ssLobbyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameLobby_Statics::NewProp_IsInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSGameLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSGameLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSGameLobby_Statics::ClassParams = {
		&UELSSGameLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSGameLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSGameLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSGameLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSGameLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSGameLobby, 1321552335);
	template<> ABP_200508_API UClass* StaticClass<UELSSGameLobby>()
	{
		return UELSSGameLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSGameLobby(Z_Construct_UClass_UELSSGameLobby, &UELSSGameLobby::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSGameLobby"), false, nullptr, nullptr, nullptr);

	void UELSSGameLobby::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_tGameStartLimit(TEXT("tGameStartLimit"));
		static const FName Name_ssGamePlayerCount(TEXT("ssGamePlayerCount"));
		static const FName Name_ssGameNpcCount(TEXT("ssGameNpcCount"));
		static const FName Name_ssGameLobbyState(TEXT("ssGameLobbyState"));
		static const FName Name_ssLobbyData(TEXT("ssLobbyData"));

		const bool bIsValid = true
			&& Name_tGameStartLimit == ClassReps[(int32)ENetFields_Private::tGameStartLimit].Property->GetFName()
			&& Name_ssGamePlayerCount == ClassReps[(int32)ENetFields_Private::ssGamePlayerCount].Property->GetFName()
			&& Name_ssGameNpcCount == ClassReps[(int32)ENetFields_Private::ssGameNpcCount].Property->GetFName()
			&& Name_ssGameLobbyState == ClassReps[(int32)ENetFields_Private::ssGameLobbyState].Property->GetFName()
			&& Name_ssLobbyData == ClassReps[(int32)ENetFields_Private::ssLobbyData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UELSSGameLobby"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSGameLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
