// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSNatP2PAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSNatP2PAPIVersionSettings"), sizeof(FEOSNatP2PAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSNatP2PAPIVersionSettings>()
{
	return FEOSNatP2PAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSNatP2PAPIVersionSettings(FEOSNatP2PAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSNatP2PAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSNatP2PAPIVersionSettings>(FName(TEXT("EOSNatP2PAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SocketID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerConnectionRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerConnectionRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerConnectionEstablished_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerConnectionEstablished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerConnectionInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerConnectionInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerConnectionClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerConnectionClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyIncomingPacketQueueFull_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyIncomingPacketQueueFull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryNatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryNatType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetNatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetNatType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivePacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceivePacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetNextReceivedPacketSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetNextReceivedPacketSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CloseConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CloseConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetPacketQueueInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetPacketQueueInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPacketQueueSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetPacketQueueSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSNatP2PAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SocketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, SocketID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SocketID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionRequest = { "AddNotifyPeerConnectionRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AddNotifyPeerConnectionRequest), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionEstablished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionEstablished = { "AddNotifyPeerConnectionEstablished", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AddNotifyPeerConnectionEstablished), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionEstablished_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionEstablished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionInterrupted = { "AddNotifyPeerConnectionInterrupted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AddNotifyPeerConnectionInterrupted), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionClosed = { "AddNotifyPeerConnectionClosed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AddNotifyPeerConnectionClosed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyIncomingPacketQueueFull_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyIncomingPacketQueueFull = { "AddNotifyIncomingPacketQueueFull", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AddNotifyIncomingPacketQueueFull), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyIncomingPacketQueueFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyIncomingPacketQueueFull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_QueryNatType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_QueryNatType = { "QueryNatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, QueryNatType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_QueryNatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_QueryNatType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNatType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNatType = { "GetNatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, GetNatType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNatType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_ReceivePacket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_ReceivePacket = { "ReceivePacket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, ReceivePacket), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_ReceivePacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_ReceivePacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNextReceivedPacketSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNextReceivedPacketSize = { "GetNextReceivedPacketSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, GetNextReceivedPacketSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNextReceivedPacketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNextReceivedPacketSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SendPacket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SendPacket = { "SendPacket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, SendPacket), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SendPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SendPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AcceptConnection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AcceptConnection = { "AcceptConnection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, AcceptConnection), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AcceptConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AcceptConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnection = { "CloseConnection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, CloseConnection), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnections = { "CloseConnections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, CloseConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetPacketQueueInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetPacketQueueInfo = { "GetPacketQueueInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, GetPacketQueueInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetPacketQueueInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetPacketQueueInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SetPacketQueueSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSNatP2PAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SetPacketQueueSize = { "SetPacketQueueSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PAPIVersionSettings, SetPacketQueueSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SetPacketQueueSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SetPacketQueueSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionEstablished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyPeerConnectionClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AddNotifyIncomingPacketQueueFull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_QueryNatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_ReceivePacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetNextReceivedPacketSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SendPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_AcceptConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_CloseConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_GetPacketQueueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::NewProp_SetPacketQueueSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSNatP2PAPIVersionSettings",
		sizeof(FEOSNatP2PAPIVersionSettings),
		alignof(FEOSNatP2PAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSNatP2PAPIVersionSettings"), sizeof(FEOSNatP2PAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings_Hash() { return 728603921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
