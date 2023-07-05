// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFGameFlowCallbackInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFGameFlowCallbackInterface() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUser_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execIsPossibleToChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param_GameFlowStep);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep(Z_Param_GameFlowStep),Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnChangedGameFlowForAllPlayers)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param_GameFlowStep);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnChangedGameFlowForAllPlayers_Implementation(EEOSSessionP2PAFGameFlowStep(Z_Param_GameFlowStep),Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param_GameFlowStep);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep(Z_Param_GameFlowStep),Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnReceivedSessionPacket)
	{
		P_GET_OBJECT(UEOSSessionP2PPacketBase,Z_Param_PacketBase);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnReceivedSessionPacket_Implementation(Z_Param_PacketBase,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnResultForChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param_GameFlowStep);
		P_GET_UBOOL(Z_Param_Result);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnResultForChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep(Z_Param_GameFlowStep),Z_Param_Result,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnResultForPossibleToChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param_GameFlowStep);
		P_GET_UBOOL(Z_Param_Result);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnResultForPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep(Z_Param_GameFlowStep),Z_Param_Result,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnUserJoinInGame)
	{
		P_GET_OBJECT(UEOSSessionUser,Z_Param_SessionUser);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnUserJoinInGame_Implementation(Z_Param_SessionUser,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PAFGameFlowCallbackInterface::execOnUserQuitGame)
	{
		P_GET_OBJECT(UEOSSessionUser,Z_Param_SessionUser);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnUserQuitGame_Implementation(Z_Param_SessionUser,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	bool IEOSSessionP2PAFGameFlowCallbackInterface::IsPossibleToChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPossibleToChangeGameFlow instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnChangedGameFlowForAllPlayers(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChangedGameFlowForAllPlayers instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChangeGameFlow instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnReceivedSessionPacket(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReceivedSessionPacket instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnResultForChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnResultForChangeGameFlow instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnResultForPossibleToChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnResultForPossibleToChangeGameFlow instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnUserJoinInGame(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUserJoinInGame instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::OnUserQuitGame(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUserQuitGame instead.");
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms Parms;
		return Parms.ReturnValue;
	}
	void UEOSSessionP2PAFGameFlowCallbackInterface::StaticRegisterNativesUEOSSessionP2PAFGameFlowCallbackInterface()
	{
		UClass* Class = UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPossibleToChangeGameFlow", &IEOSSessionP2PAFGameFlowCallbackInterface::execIsPossibleToChangeGameFlow },
			{ "OnChangedGameFlowForAllPlayers", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnChangedGameFlowForAllPlayers },
			{ "OnChangeGameFlow", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnChangeGameFlow },
			{ "OnReceivedSessionPacket", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnReceivedSessionPacket },
			{ "OnResultForChangeGameFlow", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnResultForChangeGameFlow },
			{ "OnResultForPossibleToChangeGameFlow", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnResultForPossibleToChangeGameFlow },
			{ "OnUserJoinInGame", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnUserJoinInGame },
			{ "OnUserQuitGame", &IEOSSessionP2PAFGameFlowCallbackInterface::execOnUserQuitGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameFlowStep;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms, GameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "IsPossibleToChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameFlowStep;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_GameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms, GameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_GameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnChangedGameFlowForAllPlayers", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameFlowStep;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms, GameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_PacketBase = { "PacketBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms, PacketBase), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_PacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnReceivedSessionPacket", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameFlowStep;
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms, GameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnResultForChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameFlowStep;
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep = { "GameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms, GameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_GameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnResultForPossibleToChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_SessionUser = { "SessionUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms, SessionUser), Z_Construct_UClass_UEOSSessionUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_SessionUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnUserJoinInGame", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_SessionUser = { "SessionUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms, SessionUser), Z_Construct_UClass_UEOSSessionUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_SessionUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, nullptr, "OnUserQuitGame", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister()
	{
		return UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow, "IsPossibleToChangeGameFlow" }, // 1744910777
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers, "OnChangedGameFlowForAllPlayers" }, // 2851654719
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow, "OnChangeGameFlow" }, // 1944896580
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket, "OnReceivedSessionPacket" }, // 2750774060
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow, "OnResultForChangeGameFlow" }, // 2205698465
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow, "OnResultForPossibleToChangeGameFlow" }, // 1567329468
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame, "OnUserJoinInGame" }, // 4025182174
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame, "OnUserQuitGame" }, // 4153826941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowCallbackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEOSSessionP2PAFGameFlowCallbackInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::ClassParams = {
		&UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFGameFlowCallbackInterface, 3500685650);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFGameFlowCallbackInterface>()
	{
		return UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFGameFlowCallbackInterface(Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface, &UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFGameFlowCallbackInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFGameFlowCallbackInterface);
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow = FName(TEXT("IsPossibleToChangeGameFlow"));
	bool IEOSSessionP2PAFGameFlowCallbackInterface::Execute_IsPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_IsPossibleToChangeGameFlow);
		if (Func)
		{
			Parms.GameFlowStep=GameFlowStep;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsPossibleToChangeGameFlow_Implementation(GameFlowStep,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers = FName(TEXT("OnChangedGameFlowForAllPlayers"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnChangedGameFlowForAllPlayers(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangedGameFlowForAllPlayers);
		if (Func)
		{
			Parms.GameFlowStep=GameFlowStep;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnChangedGameFlowForAllPlayers_Implementation(GameFlowStep,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow = FName(TEXT("OnChangeGameFlow"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnChangeGameFlow);
		if (Func)
		{
			Parms.GameFlowStep=GameFlowStep;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnChangeGameFlow_Implementation(GameFlowStep,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket = FName(TEXT("OnReceivedSessionPacket"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnReceivedSessionPacket);
		if (Func)
		{
			Parms.PacketBase=PacketBase;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnReceivedSessionPacket_Implementation(PacketBase,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow = FName(TEXT("OnResultForChangeGameFlow"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnResultForChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForChangeGameFlow);
		if (Func)
		{
			Parms.GameFlowStep=GameFlowStep;
			Parms.Result=Result;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnResultForChangeGameFlow_Implementation(GameFlowStep,Result,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow = FName(TEXT("OnResultForPossibleToChangeGameFlow"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnResultForPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnResultForPossibleToChangeGameFlow);
		if (Func)
		{
			Parms.GameFlowStep=GameFlowStep;
			Parms.Result=Result;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnResultForPossibleToChangeGameFlow_Implementation(GameFlowStep,Result,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame = FName(TEXT("OnUserJoinInGame"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnUserJoinInGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserJoinInGame);
		if (Func)
		{
			Parms.SessionUser=SessionUser;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnUserJoinInGame_Implementation(SessionUser,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame = FName(TEXT("OnUserQuitGame"));
	uint8 IEOSSessionP2PAFGameFlowCallbackInterface::Execute_OnUserQuitGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass()));
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PAFGameFlowCallbackInterface_OnUserQuitGame);
		if (Func)
		{
			Parms.SessionUser=SessionUser;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PAFGameFlowCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PAFGameFlowCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnUserQuitGame_Implementation(SessionUser,SessionInfo);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
