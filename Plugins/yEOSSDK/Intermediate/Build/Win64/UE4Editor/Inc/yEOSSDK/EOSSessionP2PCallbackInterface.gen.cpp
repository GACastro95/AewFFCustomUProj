// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PCallbackInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PCallbackInterface() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execIsDoneSessionGamePause)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSessionGamePause_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execIsDoneSessionGameSetup)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSessionGameSetup_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnReceivedSessionPacket)
	{
		P_GET_OBJECT(UEOSSessionP2PPacketBase,Z_Param_PacketBase);
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->OnReceivedSessionPacket_Implementation(Z_Param_PacketBase,Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionDispose_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionGameEnd)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameEnd_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionGamePause)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGamePause_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionGameResume)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameResume_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionGameSetup)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameSetup_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionGameStart)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameStart_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionLogout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionLogout_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionSetup)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_GET_OBJECT(UEOSSessionP2P,Z_Param_SessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionSetup_Implementation(Z_Param_SessionInfo,Z_Param_SessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEOSSessionP2PCallbackInterface::execOnSessionSyncRequest)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param_SessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionSyncRequest_Implementation(Z_Param_SessionInfo);
		P_NATIVE_END;
	}
	bool IEOSSessionP2PCallbackInterface::IsDoneSessionGamePause(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDoneSessionGamePause instead.");
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::IsDoneSessionGameSetup(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDoneSessionGameSetup instead.");
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IEOSSessionP2PCallbackInterface::OnReceivedSessionPacket(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReceivedSessionPacket instead.");
		EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionDispose()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionDispose instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionGameEnd(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionGameEnd instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionGamePause(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionGamePause instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionGameResume(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionGameResume instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionGameSetup(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionGameSetup instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionGameStart(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionGameStart instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionLogout()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionLogout instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionSetup(UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionSetup instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IEOSSessionP2PCallbackInterface::OnSessionSyncRequest(UEOSSessionInfo* SessionInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionSyncRequest instead.");
		EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms Parms;
		return Parms.ReturnValue;
	}
	void UEOSSessionP2PCallbackInterface::StaticRegisterNativesUEOSSessionP2PCallbackInterface()
	{
		UClass* Class = UEOSSessionP2PCallbackInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDoneSessionGamePause", &IEOSSessionP2PCallbackInterface::execIsDoneSessionGamePause },
			{ "IsDoneSessionGameSetup", &IEOSSessionP2PCallbackInterface::execIsDoneSessionGameSetup },
			{ "OnReceivedSessionPacket", &IEOSSessionP2PCallbackInterface::execOnReceivedSessionPacket },
			{ "OnSessionDispose", &IEOSSessionP2PCallbackInterface::execOnSessionDispose },
			{ "OnSessionGameEnd", &IEOSSessionP2PCallbackInterface::execOnSessionGameEnd },
			{ "OnSessionGamePause", &IEOSSessionP2PCallbackInterface::execOnSessionGamePause },
			{ "OnSessionGameResume", &IEOSSessionP2PCallbackInterface::execOnSessionGameResume },
			{ "OnSessionGameSetup", &IEOSSessionP2PCallbackInterface::execOnSessionGameSetup },
			{ "OnSessionGameStart", &IEOSSessionP2PCallbackInterface::execOnSessionGameStart },
			{ "OnSessionLogout", &IEOSSessionP2PCallbackInterface::execOnSessionLogout },
			{ "OnSessionSetup", &IEOSSessionP2PCallbackInterface::execOnSessionSetup },
			{ "OnSessionSyncRequest", &IEOSSessionP2PCallbackInterface::execOnSessionSyncRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "IsDoneSessionGamePause", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "IsDoneSessionGameSetup", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_PacketBase = { "PacketBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms, PacketBase), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_PacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnReceivedSessionPacket", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionDispose", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionGameEnd", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionGamePause", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionGameResume", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionGameSetup", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionGameStart", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionLogout", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_SessionP2P = { "SessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms, SessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_SessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionSetup", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms, SessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms), &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_SessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PCallbackInterface, nullptr, "OnSessionSyncRequest", nullptr, nullptr, sizeof(EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms), Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister()
	{
		return UEOSSessionP2PCallbackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause, "IsDoneSessionGamePause" }, // 2473894318
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup, "IsDoneSessionGameSetup" }, // 1559009716
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket, "OnReceivedSessionPacket" }, // 2050921147
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionDispose, "OnSessionDispose" }, // 4059686508
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameEnd, "OnSessionGameEnd" }, // 2159261642
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGamePause, "OnSessionGamePause" }, // 265227009
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameResume, "OnSessionGameResume" }, // 3984929965
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameSetup, "OnSessionGameSetup" }, // 1294656560
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionGameStart, "OnSessionGameStart" }, // 164488858
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionLogout, "OnSessionLogout" }, // 581619497
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSetup, "OnSessionSetup" }, // 1045586517
		{ &Z_Construct_UFunction_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest, "OnSessionSyncRequest" }, // 3246214625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEOSSessionP2PCallbackInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::ClassParams = {
		&UEOSSessionP2PCallbackInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PCallbackInterface, 3890215271);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PCallbackInterface>()
	{
		return UEOSSessionP2PCallbackInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PCallbackInterface(Z_Construct_UClass_UEOSSessionP2PCallbackInterface, &UEOSSessionP2PCallbackInterface::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PCallbackInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PCallbackInterface);
	static FName NAME_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause = FName(TEXT("IsDoneSessionGamePause"));
	bool IEOSSessionP2PCallbackInterface::Execute_IsDoneSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_IsDoneSessionGamePause);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsDoneSessionGamePause_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup = FName(TEXT("IsDoneSessionGameSetup"));
	bool IEOSSessionP2PCallbackInterface::Execute_IsDoneSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_IsDoneSessionGameSetup);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsDoneSessionGameSetup_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket = FName(TEXT("OnReceivedSessionPacket"));
	uint8 IEOSSessionP2PCallbackInterface::Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnReceivedSessionPacket);
		if (Func)
		{
			Parms.PacketBase=PacketBase;
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnReceivedSessionPacket_Implementation(PacketBase,SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionDispose = FName(TEXT("OnSessionDispose"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionDispose(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionDispose);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionDispose_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionGameEnd = FName(TEXT("OnSessionGameEnd"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionGameEnd(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionGameEnd);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionGameEnd_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionGamePause = FName(TEXT("OnSessionGamePause"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionGamePause);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionGamePause_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionGameResume = FName(TEXT("OnSessionGameResume"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionGameResume(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionGameResume);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionGameResume_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionGameSetup = FName(TEXT("OnSessionGameSetup"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionGameSetup);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionGameSetup_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionGameStart = FName(TEXT("OnSessionGameStart"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionGameStart(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionGameStart);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionGameStart_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionLogout = FName(TEXT("OnSessionLogout"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionLogout(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionLogout);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionLogout_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionSetup = FName(TEXT("OnSessionSetup"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionSetup(UObject* O, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionSetup);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			Parms.SessionP2P=SessionP2P;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionSetup_Implementation(SessionInfo,SessionP2P);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest = FName(TEXT("OnSessionSyncRequest"));
	bool IEOSSessionP2PCallbackInterface::Execute_OnSessionSyncRequest(UObject* O, UEOSSessionInfo* SessionInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEOSSessionP2PCallbackInterface::StaticClass()));
		EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEOSSessionP2PCallbackInterface_OnSessionSyncRequest);
		if (Func)
		{
			Parms.SessionInfo=SessionInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEOSSessionP2PCallbackInterface*)(O->GetNativeInterfaceAddress(UEOSSessionP2PCallbackInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnSessionSyncRequest_Implementation(SessionInfo);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
