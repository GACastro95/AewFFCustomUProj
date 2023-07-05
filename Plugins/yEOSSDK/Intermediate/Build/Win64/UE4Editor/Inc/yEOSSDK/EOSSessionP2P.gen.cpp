// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2P() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUpdateType();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingSharedPacketDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingReceivedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingCompareDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PBindPlayerMemberUpdatedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PHostMigrationEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackParam_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FSessionSchedule();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2P::execAddUserMap)
	{
		P_GET_OBJECT_REF(UEOSSessionUserPacketMap,Z_Param_Out__pcUserPacketMap);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcCommunityUserBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUserMap(Z_Param_Out__pcUserPacketMap,Z_Param__pcCommunityUserBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execCloseConnection)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseConnection(Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execCloseSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execCreatePacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPacket);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreatePacket(Z_Param_Out__pcPacket,Z_Param__sPacketType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execCreateReceivePacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPacket);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateReceivePacket(Z_Param_Out__pcPacket,Z_Param__sPacketType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetAccountDisplayNameForOwnerUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayNameForOwnerUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetAccountDisplayNameForSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayNameForSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetActiveP2PProductUserIDList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__pcProductUserIDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActiveP2PProductUserIDList(Z_Param_Out__pcProductUserIDList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetActiveUserMap)
	{
		P_GET_TARRAY_REF(UEOSSessionUserPacketMap*,Z_Param_Out__pcCopiedUserMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActiveUserMap(Z_Param_Out__pcCopiedUserMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetAllPlayerGameEvent)
	{
		P_GET_ENUM_REF(EEOSSessionGameEventType,Z_Param_Out__enRefEventType);
		P_GET_UBOOL(Z_Param__bIncludeHost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllPlayerGameEvent((EEOSSessionGameEventType&)(Z_Param_Out__enRefEventType),Z_Param__bIncludeHost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetAllPlayerHostMigrationStep)
	{
		P_GET_ENUM_REF(EEOSSessionHostMigrationStep,Z_Param_Out__enHostMigrationStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllPlayerHostMigrationStep((EEOSSessionHostMigrationStep&)(Z_Param_Out__enHostMigrationStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetConnectedPearNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConnectedPearNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetCopiedUserMap)
	{
		P_GET_TARRAY_REF(UEOSSessionUserPacketMap*,Z_Param_Out__pcCopiedUserMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCopiedUserMap(Z_Param_Out__pcCopiedUserMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetEOSSessionInfo)
	{
		P_GET_OBJECT_REF(UEOSSessionInfo,Z_Param_Out__pcSessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionInfo(Z_Param_Out__pcSessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetEOSSessionP2PAdditionalFunction)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PAdditionalFunctionBase,Z_Param_Out__pcEOSSessionP2PAdditionalFnctionBase);
		P_GET_ENUM(EEOSSessionP2PAdditionalFunctionTypeBits,Z_Param__enSessionP2PAdditionalFunctionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionP2PAdditionalFunction(Z_Param_Out__pcEOSSessionP2PAdditionalFnctionBase,EEOSSessionP2PAdditionalFunctionTypeBits(Z_Param__enSessionP2PAdditionalFunctionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetNatType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSNatType*)Z_Param__Result=P_THIS->GetNatType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetReceivedSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivedSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetSendSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSendSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetSocketID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSocketID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetStringOfProductUserIDForOwnerUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfProductUserIDForOwnerUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetTransferSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__rsSendSize);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__rsRecvSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTransferSize(Z_Param_Out__rsSendSize,Z_Param_Out__rsRecvSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execGetUserMap)
	{
		P_GET_OBJECT_REF(UEOSSessionUserPacketMap,Z_Param_Out__pcUserPacketMap);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserMap(Z_Param_Out__pcUserPacketMap,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execHasActiveP2PUserMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasActiveP2PUserMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsActiveP2PUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveP2PUser(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsDoneAllPlayerCheckLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneAllPlayerCheckLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsDoneAllPlayerRegistedOnSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneAllPlayerRegistedOnSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsDoneSessionGamePause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSessionGamePause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsDoneSessionGameSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSessionGameSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsHostMigratingNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHostMigratingNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsLocalUserTheOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalUserTheOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsSynchronizedAllPlayerPacket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSynchronizedAllPlayerPacket(Z_Param__sPacketType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execIsSynchronizedAllPlayerPackets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSynchronizedAllPlayerPackets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionGameEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionGamePause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGamePause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionGameResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameResume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionGameSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionGameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execOnSessionSyncRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSessionSyncRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execRegistCallbackInterface)
	{
		P_GET_TINTERFACE(IEOSSessionP2PCallbackInterface,Z_Param__pcIntarface);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegistCallbackInterface(Z_Param__pcIntarface,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execRemoveUserMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUserMap(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execRequestLatencyCheck)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLatencyCheck(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execRequestNatType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestNatType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSNatP2PAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSSessionP2P::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetCommunityInfo)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfoBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCommunityInfo(Z_Param__pcCommunityInfoBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetEOSSession)
	{
		P_GET_OBJECT(UEOSSession,Z_Param__pcSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEOSSession(Z_Param__pcSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetPacketGenerator)
	{
		P_GET_OBJECT(UEOSSessionP2PPacketGeneratorBase,Z_Param__pcPacketGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPacketGenerator(Z_Param__pcPacketGenerator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetReceivedPacketMaxCacheNum)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__uNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivedPacketMaxCacheNum(Z_Param__uNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetSessionP2PAdditionalFunctionBits)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__uSessionP2PAdditionalFunctionBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSessionP2PAdditionalFunctionBits(Z_Param__uSessionP2PAdditionalFunctionBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetUpdateType)
	{
		P_GET_ENUM(EEOSUpdateType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpdateType(EEOSUpdateType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execSetupSocket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannelNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSocket(Z_Param__strSocketID,Z_Param__uChannelNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execUnregistCallbackInterface)
	{
		P_GET_TINTERFACE(IEOSSessionP2PCallbackInterface,Z_Param__pcIntarface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregistCallbackInterface(Z_Param__pcIntarface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2P::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Update();
		P_NATIVE_END;
	}
	void UEOSSessionP2P::StaticRegisterNativesUEOSSessionP2P()
	{
		UClass* Class = UEOSSessionP2P::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUserMap", &UEOSSessionP2P::execAddUserMap },
			{ "CloseConnection", &UEOSSessionP2P::execCloseConnection },
			{ "CloseSocket", &UEOSSessionP2P::execCloseSocket },
			{ "CreatePacket", &UEOSSessionP2P::execCreatePacket },
			{ "CreateReceivePacket", &UEOSSessionP2P::execCreateReceivePacket },
			{ "GetAccountDisplayNameForOwnerUser", &UEOSSessionP2P::execGetAccountDisplayNameForOwnerUser },
			{ "GetAccountDisplayNameForSession", &UEOSSessionP2P::execGetAccountDisplayNameForSession },
			{ "GetActiveP2PProductUserIDList", &UEOSSessionP2P::execGetActiveP2PProductUserIDList },
			{ "GetActiveUserMap", &UEOSSessionP2P::execGetActiveUserMap },
			{ "GetAllPlayerGameEvent", &UEOSSessionP2P::execGetAllPlayerGameEvent },
			{ "GetAllPlayerHostMigrationStep", &UEOSSessionP2P::execGetAllPlayerHostMigrationStep },
			{ "GetChannel", &UEOSSessionP2P::execGetChannel },
			{ "GetConnectedPearNum", &UEOSSessionP2P::execGetConnectedPearNum },
			{ "GetCopiedUserMap", &UEOSSessionP2P::execGetCopiedUserMap },
			{ "GetEOSSessionInfo", &UEOSSessionP2P::execGetEOSSessionInfo },
			{ "GetEOSSessionP2PAdditionalFunction", &UEOSSessionP2P::execGetEOSSessionP2PAdditionalFunction },
			{ "GetNatType", &UEOSSessionP2P::execGetNatType },
			{ "GetReceivedSynchronizedPacket", &UEOSSessionP2P::execGetReceivedSynchronizedPacket },
			{ "GetSendSynchronizedPacket", &UEOSSessionP2P::execGetSendSynchronizedPacket },
			{ "GetSocketID", &UEOSSessionP2P::execGetSocketID },
			{ "GetStringOfProductUserIDForOwnerUser", &UEOSSessionP2P::execGetStringOfProductUserIDForOwnerUser },
			{ "GetTransferSize", &UEOSSessionP2P::execGetTransferSize },
			{ "GetUserMap", &UEOSSessionP2P::execGetUserMap },
			{ "HasActiveP2PUserMap", &UEOSSessionP2P::execHasActiveP2PUserMap },
			{ "IsActiveP2PUser", &UEOSSessionP2P::execIsActiveP2PUser },
			{ "IsDoneAllPlayerCheckLatency", &UEOSSessionP2P::execIsDoneAllPlayerCheckLatency },
			{ "IsDoneAllPlayerRegistedOnSession", &UEOSSessionP2P::execIsDoneAllPlayerRegistedOnSession },
			{ "IsDoneSessionGamePause", &UEOSSessionP2P::execIsDoneSessionGamePause },
			{ "IsDoneSessionGameSetup", &UEOSSessionP2P::execIsDoneSessionGameSetup },
			{ "IsHostMigratingNow", &UEOSSessionP2P::execIsHostMigratingNow },
			{ "IsLocalUserTheOwner", &UEOSSessionP2P::execIsLocalUserTheOwner },
			{ "IsSynchronizedAllPlayerPacket", &UEOSSessionP2P::execIsSynchronizedAllPlayerPacket },
			{ "IsSynchronizedAllPlayerPackets", &UEOSSessionP2P::execIsSynchronizedAllPlayerPackets },
			{ "OnSessionGameEnd", &UEOSSessionP2P::execOnSessionGameEnd },
			{ "OnSessionGamePause", &UEOSSessionP2P::execOnSessionGamePause },
			{ "OnSessionGameResume", &UEOSSessionP2P::execOnSessionGameResume },
			{ "OnSessionGameSetup", &UEOSSessionP2P::execOnSessionGameSetup },
			{ "OnSessionGameStart", &UEOSSessionP2P::execOnSessionGameStart },
			{ "OnSessionSyncRequest", &UEOSSessionP2P::execOnSessionSyncRequest },
			{ "RegistCallbackInterface", &UEOSSessionP2P::execRegistCallbackInterface },
			{ "RemoveUserMap", &UEOSSessionP2P::execRemoveUserMap },
			{ "RequestLatencyCheck", &UEOSSessionP2P::execRequestLatencyCheck },
			{ "RequestNatType", &UEOSSessionP2P::execRequestNatType },
			{ "SetApiVersion", &UEOSSessionP2P::execSetApiVersion },
			{ "SetCommunityInfo", &UEOSSessionP2P::execSetCommunityInfo },
			{ "SetEOSSession", &UEOSSessionP2P::execSetEOSSession },
			{ "SetPacketGenerator", &UEOSSessionP2P::execSetPacketGenerator },
			{ "SetReceivedPacketMaxCacheNum", &UEOSSessionP2P::execSetReceivedPacketMaxCacheNum },
			{ "SetSessionP2PAdditionalFunctionBits", &UEOSSessionP2P::execSetSessionP2PAdditionalFunctionBits },
			{ "SetUpdateType", &UEOSSessionP2P::execSetUpdateType },
			{ "SetupInternalCallback", &UEOSSessionP2P::execSetupInternalCallback },
			{ "SetupSocket", &UEOSSessionP2P::execSetupSocket },
			{ "UnregistCallbackInterface", &UEOSSessionP2P::execUnregistCallbackInterface },
			{ "Update", &UEOSSessionP2P::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics
	{
		struct EOSSessionP2P_eventAddUserMap_Parms
		{
			UEOSSessionUserPacketMap* _pcUserPacketMap;
			UEOSCommunityUserBase* _pcCommunityUserBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserPacketMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityUserBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp__pcUserPacketMap = { "_pcUserPacketMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventAddUserMap_Parms, _pcUserPacketMap), Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp__pcCommunityUserBase = { "_pcCommunityUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventAddUserMap_Parms, _pcCommunityUserBase), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventAddUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventAddUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp__pcUserPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp__pcCommunityUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "AddUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventAddUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_AddUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_AddUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics
	{
		struct EOSSessionP2P_eventCloseConnection_Parms
		{
			UEOSUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventCloseConnection_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventCloseConnection_Parms), &Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "CloseConnection", nullptr, nullptr, sizeof(EOSSessionP2P_eventCloseConnection_Parms), Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics
	{
		struct EOSSessionP2P_eventCloseSocket_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventCloseSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventCloseSocket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "CloseSocket", nullptr, nullptr, sizeof(EOSSessionP2P_eventCloseSocket_Parms), Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_CloseSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_CloseSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics
	{
		struct EOSSessionP2P_eventCreatePacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacket;
			int32 _sPacketType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp__pcPacket = { "_pcPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventCreatePacket_Parms, _pcPacket), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventCreatePacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventCreatePacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventCreatePacket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp__pcPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "CreatePacket", nullptr, nullptr, sizeof(EOSSessionP2P_eventCreatePacket_Parms), Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_CreatePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_CreatePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics
	{
		struct EOSSessionP2P_eventCreateReceivePacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacket;
			int32 _sPacketType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp__pcPacket = { "_pcPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventCreateReceivePacket_Parms, _pcPacket), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventCreateReceivePacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventCreateReceivePacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventCreateReceivePacket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp__pcPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "CreateReceivePacket", nullptr, nullptr, sizeof(EOSSessionP2P_eventCreateReceivePacket_Parms), Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics
	{
		struct EOSSessionP2P_eventGetAccountDisplayNameForOwnerUser_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetAccountDisplayNameForOwnerUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetAccountDisplayNameForOwnerUser", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetAccountDisplayNameForOwnerUser_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics
	{
		struct EOSSessionP2P_eventGetAccountDisplayNameForSession_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetAccountDisplayNameForSession_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetAccountDisplayNameForSession", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetAccountDisplayNameForSession_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics
	{
		struct EOSSessionP2P_eventGetActiveP2PProductUserIDList_Parms
		{
			TArray<FString> _pcProductUserIDList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pcProductUserIDList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcProductUserIDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp__pcProductUserIDList_Inner = { "_pcProductUserIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp__pcProductUserIDList = { "_pcProductUserIDList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetActiveP2PProductUserIDList_Parms, _pcProductUserIDList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetActiveP2PProductUserIDList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetActiveP2PProductUserIDList_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp__pcProductUserIDList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp__pcProductUserIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetActiveP2PProductUserIDList", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetActiveP2PProductUserIDList_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics
	{
		struct EOSSessionP2P_eventGetActiveUserMap_Parms
		{
			TArray<UEOSSessionUserPacketMap*> _pcCopiedUserMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCopiedUserMap_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcCopiedUserMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp__pcCopiedUserMap_Inner = { "_pcCopiedUserMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp__pcCopiedUserMap = { "_pcCopiedUserMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetActiveUserMap_Parms, _pcCopiedUserMap), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetActiveUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetActiveUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp__pcCopiedUserMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp__pcCopiedUserMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetActiveUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetActiveUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics
	{
		struct EOSSessionP2P_eventGetAllPlayerGameEvent_Parms
		{
			EEOSSessionGameEventType _enRefEventType;
			bool _bIncludeHost;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enRefEventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enRefEventType;
		static void NewProp__bIncludeHost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIncludeHost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__enRefEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__enRefEventType = { "_enRefEventType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetAllPlayerGameEvent_Parms, _enRefEventType), Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__bIncludeHost_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetAllPlayerGameEvent_Parms*)Obj)->_bIncludeHost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__bIncludeHost = { "_bIncludeHost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetAllPlayerGameEvent_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__bIncludeHost_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetAllPlayerGameEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetAllPlayerGameEvent_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__enRefEventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__enRefEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp__bIncludeHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetAllPlayerGameEvent", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetAllPlayerGameEvent_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics
	{
		struct EOSSessionP2P_eventGetAllPlayerHostMigrationStep_Parms
		{
			EEOSSessionHostMigrationStep _enHostMigrationStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enHostMigrationStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enHostMigrationStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp__enHostMigrationStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp__enHostMigrationStep = { "_enHostMigrationStep", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetAllPlayerHostMigrationStep_Parms, _enHostMigrationStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetAllPlayerHostMigrationStep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetAllPlayerHostMigrationStep_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp__enHostMigrationStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp__enHostMigrationStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetAllPlayerHostMigrationStep", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetAllPlayerHostMigrationStep_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics
	{
		struct EOSSessionP2P_eventGetChannel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetChannel", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetChannel_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics
	{
		struct EOSSessionP2P_eventGetConnectedPearNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetConnectedPearNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetConnectedPearNum", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetConnectedPearNum_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics
	{
		struct EOSSessionP2P_eventGetCopiedUserMap_Parms
		{
			TArray<UEOSSessionUserPacketMap*> _pcCopiedUserMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCopiedUserMap_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcCopiedUserMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp__pcCopiedUserMap_Inner = { "_pcCopiedUserMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp__pcCopiedUserMap = { "_pcCopiedUserMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetCopiedUserMap_Parms, _pcCopiedUserMap), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetCopiedUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetCopiedUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp__pcCopiedUserMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp__pcCopiedUserMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetCopiedUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetCopiedUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics
	{
		struct EOSSessionP2P_eventGetEOSSessionInfo_Parms
		{
			UEOSSessionInfo* _pcSessionInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp__pcSessionInfo = { "_pcSessionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetEOSSessionInfo_Parms, _pcSessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetEOSSessionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetEOSSessionInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp__pcSessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetEOSSessionInfo", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetEOSSessionInfo_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics
	{
		struct EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms
		{
			UEOSSessionP2PAdditionalFunctionBase* _pcEOSSessionP2PAdditionalFnctionBase;
			EEOSSessionP2PAdditionalFunctionTypeBits _enSessionP2PAdditionalFunctionType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSSessionP2PAdditionalFnctionBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enSessionP2PAdditionalFunctionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enSessionP2PAdditionalFunctionType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__pcEOSSessionP2PAdditionalFnctionBase = { "_pcEOSSessionP2PAdditionalFnctionBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms, _pcEOSSessionP2PAdditionalFnctionBase), Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__enSessionP2PAdditionalFunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__enSessionP2PAdditionalFunctionType = { "_enSessionP2PAdditionalFunctionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms, _enSessionP2PAdditionalFunctionType), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__pcEOSSessionP2PAdditionalFnctionBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__enSessionP2PAdditionalFunctionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp__enSessionP2PAdditionalFunctionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetEOSSessionP2PAdditionalFunction", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetEOSSessionP2PAdditionalFunction_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics
	{
		struct EOSSessionP2P_eventGetNatType_Parms
		{
			EEOSNatType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetNatType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSNatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetNatType", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetNatType_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetNatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetNatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics
	{
		struct EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms
		{
			UEOSSessionP2PSynchronizedPacketBase* _pcPacketBase;
			int32 _sPacketType;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetReceivedSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetReceivedSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics
	{
		struct EOSSessionP2P_eventGetSendSynchronizedPacket_Parms
		{
			UEOSSessionP2PSynchronizedPacketBase* _pcPacketBase;
			int32 _sPacketType;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetSendSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetSendSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetSendSynchronizedPacket_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetSendSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetSendSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetSendSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetSendSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics
	{
		struct EOSSessionP2P_eventGetSocketID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetSocketID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetSocketID", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetSocketID_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics
	{
		struct EOSSessionP2P_eventGetStringOfProductUserIDForOwnerUser_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetStringOfProductUserIDForOwnerUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetStringOfProductUserIDForOwnerUser", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetStringOfProductUserIDForOwnerUser_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics
	{
		struct EOSSessionP2P_eventGetTransferSize_Parms
		{
			int32 _rsSendSize;
			int32 _rsRecvSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rsSendSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rsRecvSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::NewProp__rsSendSize = { "_rsSendSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetTransferSize_Parms, _rsSendSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::NewProp__rsRecvSize = { "_rsRecvSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetTransferSize_Parms, _rsRecvSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::NewProp__rsSendSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::NewProp__rsRecvSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetTransferSize", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetTransferSize_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics
	{
		struct EOSSessionP2P_eventGetUserMap_Parms
		{
			UEOSSessionUserPacketMap* _pcUserPacketMap;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserPacketMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__pcUserPacketMap = { "_pcUserPacketMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetUserMap_Parms, _pcUserPacketMap), Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventGetUserMap_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventGetUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventGetUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__pcUserPacketMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "GetUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventGetUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_GetUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_GetUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics
	{
		struct EOSSessionP2P_eventHasActiveP2PUserMap_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventHasActiveP2PUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventHasActiveP2PUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "HasActiveP2PUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventHasActiveP2PUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics
	{
		struct EOSSessionP2P_eventIsActiveP2PUser_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventIsActiveP2PUser_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsActiveP2PUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsActiveP2PUser_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsActiveP2PUser", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsActiveP2PUser_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics
	{
		struct EOSSessionP2P_eventIsDoneAllPlayerCheckLatency_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsDoneAllPlayerCheckLatency_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsDoneAllPlayerCheckLatency_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsDoneAllPlayerCheckLatency", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsDoneAllPlayerCheckLatency_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics
	{
		struct EOSSessionP2P_eventIsDoneAllPlayerRegistedOnSession_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsDoneAllPlayerRegistedOnSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsDoneAllPlayerRegistedOnSession_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsDoneAllPlayerRegistedOnSession", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsDoneAllPlayerRegistedOnSession_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics
	{
		struct EOSSessionP2P_eventIsDoneSessionGamePause_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsDoneSessionGamePause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsDoneSessionGamePause_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsDoneSessionGamePause", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsDoneSessionGamePause_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics
	{
		struct EOSSessionP2P_eventIsDoneSessionGameSetup_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsDoneSessionGameSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsDoneSessionGameSetup_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsDoneSessionGameSetup", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsDoneSessionGameSetup_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics
	{
		struct EOSSessionP2P_eventIsHostMigratingNow_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsHostMigratingNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsHostMigratingNow_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsHostMigratingNow", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsHostMigratingNow_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics
	{
		struct EOSSessionP2P_eventIsLocalUserTheOwner_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsLocalUserTheOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsLocalUserTheOwner_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsLocalUserTheOwner", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsLocalUserTheOwner_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics
	{
		struct EOSSessionP2P_eventIsSynchronizedAllPlayerPacket_Parms
		{
			int32 _sPacketType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventIsSynchronizedAllPlayerPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsSynchronizedAllPlayerPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsSynchronizedAllPlayerPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsSynchronizedAllPlayerPacket", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsSynchronizedAllPlayerPacket_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics
	{
		struct EOSSessionP2P_eventIsSynchronizedAllPlayerPackets_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventIsSynchronizedAllPlayerPackets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventIsSynchronizedAllPlayerPackets_Parms), &Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "IsSynchronizedAllPlayerPackets", nullptr, nullptr, sizeof(EOSSessionP2P_eventIsSynchronizedAllPlayerPackets_Parms), Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics
	{
		struct EOSSessionP2P_eventOnSessionGameEnd_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionGameEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionGameEnd_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionGameEnd", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionGameEnd_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics
	{
		struct EOSSessionP2P_eventOnSessionGamePause_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionGamePause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionGamePause_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionGamePause", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionGamePause_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics
	{
		struct EOSSessionP2P_eventOnSessionGameResume_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionGameResume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionGameResume_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionGameResume", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionGameResume_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics
	{
		struct EOSSessionP2P_eventOnSessionGameSetup_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionGameSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionGameSetup_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionGameSetup", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionGameSetup_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics
	{
		struct EOSSessionP2P_eventOnSessionGameStart_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionGameStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionGameStart_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionGameStart", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionGameStart_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics
	{
		struct EOSSessionP2P_eventOnSessionSyncRequest_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventOnSessionSyncRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventOnSessionSyncRequest_Parms), &Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "OnSessionSyncRequest", nullptr, nullptr, sizeof(EOSSessionP2P_eventOnSessionSyncRequest_Parms), Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics
	{
		struct EOSSessionP2P_eventRegistCallbackInterface_Parms
		{
			TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__pcIntarface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__pcIntarface = { "_pcIntarface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventRegistCallbackInterface_Parms, _pcIntarface), Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventRegistCallbackInterface_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventRegistCallbackInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventRegistCallbackInterface_Parms), &Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__pcIntarface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "RegistCallbackInterface", nullptr, nullptr, sizeof(EOSSessionP2P_eventRegistCallbackInterface_Parms), Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics
	{
		struct EOSSessionP2P_eventRemoveUserMap_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventRemoveUserMap_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventRemoveUserMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventRemoveUserMap_Parms), &Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "RemoveUserMap", nullptr, nullptr, sizeof(EOSSessionP2P_eventRemoveUserMap_Parms), Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics
	{
		struct EOSSessionP2P_eventRequestLatencyCheck_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventRequestLatencyCheck_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventRequestLatencyCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventRequestLatencyCheck_Parms), &Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "RequestLatencyCheck", nullptr, nullptr, sizeof(EOSSessionP2P_eventRequestLatencyCheck_Parms), Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics
	{
		struct EOSSessionP2P_eventRequestNatType_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventRequestNatType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventRequestNatType_Parms), &Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "RequestNatType", nullptr, nullptr, sizeof(EOSSessionP2P_eventRequestNatType_Parms), Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_RequestNatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_RequestNatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics
	{
		struct EOSSessionP2P_eventSetApiVersion_Parms
		{
			FEOSNatP2PAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics
	{
		struct EOSSessionP2P_eventSetCommunityInfo_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfoBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfoBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp__pcCommunityInfoBase = { "_pcCommunityInfoBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetCommunityInfo_Parms, _pcCommunityInfoBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetCommunityInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetCommunityInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp__pcCommunityInfoBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetCommunityInfo", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetCommunityInfo_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics
	{
		struct EOSSessionP2P_eventSetEOSSession_Parms
		{
			UEOSSession* _pcSession;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSession;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp__pcSession = { "_pcSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetEOSSession_Parms, _pcSession), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetEOSSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetEOSSession_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp__pcSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetEOSSession", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetEOSSession_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics
	{
		struct EOSSessionP2P_eventSetPacketGenerator_Parms
		{
			UEOSSessionP2PPacketGeneratorBase* _pcPacketGenerator;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketGenerator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp__pcPacketGenerator = { "_pcPacketGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetPacketGenerator_Parms, _pcPacketGenerator), Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetPacketGenerator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetPacketGenerator_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp__pcPacketGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetPacketGenerator", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetPacketGenerator_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics
	{
		struct EOSSessionP2P_eventSetReceivedPacketMaxCacheNum_Parms
		{
			uint8 _uNum;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::NewProp__uNum = { "_uNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetReceivedPacketMaxCacheNum_Parms, _uNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::NewProp__uNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetReceivedPacketMaxCacheNum", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetReceivedPacketMaxCacheNum_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics
	{
		struct EOSSessionP2P_eventSetSessionP2PAdditionalFunctionBits_Parms
		{
			uint8 _uSessionP2PAdditionalFunctionBits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uSessionP2PAdditionalFunctionBits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp__uSessionP2PAdditionalFunctionBits = { "_uSessionP2PAdditionalFunctionBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetSessionP2PAdditionalFunctionBits_Parms, _uSessionP2PAdditionalFunctionBits), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetSessionP2PAdditionalFunctionBits_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetSessionP2PAdditionalFunctionBits_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp__uSessionP2PAdditionalFunctionBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetSessionP2PAdditionalFunctionBits", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetSessionP2PAdditionalFunctionBits_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics
	{
		struct EOSSessionP2P_eventSetUpdateType_Parms
		{
			EEOSUpdateType _enType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetUpdateType_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSUpdateType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetUpdateType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetUpdateType_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetUpdateType", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetUpdateType_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics
	{
		struct EOSSessionP2P_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics
	{
		struct EOSSessionP2P_eventSetupSocket_Parms
		{
			FString _strSocketID;
			uint8 _uChannelNo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannelNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetupSocket_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__uChannelNo = { "_uChannelNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventSetupSocket_Parms, _uChannelNo), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::NewProp__uChannelNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "SetupSocket", nullptr, nullptr, sizeof(EOSSessionP2P_eventSetupSocket_Parms), Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_SetupSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_SetupSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics
	{
		struct EOSSessionP2P_eventUnregistCallbackInterface_Parms
		{
			TScriptInterface<IEOSSessionP2PCallbackInterface> _pcIntarface;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__pcIntarface;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp__pcIntarface = { "_pcIntarface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2P_eventUnregistCallbackInterface_Parms, _pcIntarface), Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventUnregistCallbackInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventUnregistCallbackInterface_Parms), &Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp__pcIntarface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "UnregistCallbackInterface", nullptr, nullptr, sizeof(EOSSessionP2P_eventUnregistCallbackInterface_Parms), Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2P_Update_Statics
	{
		struct EOSSessionP2P_eventUpdate_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2P_eventUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2P_eventUpdate_Parms), &Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2P, nullptr, "Update", nullptr, nullptr, sizeof(EOSSessionP2P_eventUpdate_Parms), Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2P_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2P_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister()
	{
		return UEOSSessionP2P::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2P_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PDataSharingSharedPacketDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PDataSharingSharedPacketDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PDataSharingReceivedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PDataSharingReceivedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PDataSharingCompareDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PDataSharingCompareDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PHostMigrationEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PHostMigrationEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPacketGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPacketGenerator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUserMaps_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cUserMaps_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUserMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cUserMaps;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cCallbackParams_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cCallbackParams_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cCallbackParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cCallbackParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cFunctions_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cFunctions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSessionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSessionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPacketQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPacketQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CloseSessionScheduleQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CloseSessionScheduleQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CloseSessionScheduleQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2P_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2P_AddUserMap, "AddUserMap" }, // 3065853406
		{ &Z_Construct_UFunction_UEOSSessionP2P_CloseConnection, "CloseConnection" }, // 2282094507
		{ &Z_Construct_UFunction_UEOSSessionP2P_CloseSocket, "CloseSocket" }, // 3550633354
		{ &Z_Construct_UFunction_UEOSSessionP2P_CreatePacket, "CreatePacket" }, // 2750601776
		{ &Z_Construct_UFunction_UEOSSessionP2P_CreateReceivePacket, "CreateReceivePacket" }, // 874828109
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForOwnerUser, "GetAccountDisplayNameForOwnerUser" }, // 1775623885
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetAccountDisplayNameForSession, "GetAccountDisplayNameForSession" }, // 1028624201
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetActiveP2PProductUserIDList, "GetActiveP2PProductUserIDList" }, // 904859319
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetActiveUserMap, "GetActiveUserMap" }, // 760711155
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerGameEvent, "GetAllPlayerGameEvent" }, // 2897218632
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetAllPlayerHostMigrationStep, "GetAllPlayerHostMigrationStep" }, // 485517937
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetChannel, "GetChannel" }, // 326585957
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetConnectedPearNum, "GetConnectedPearNum" }, // 2629254024
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetCopiedUserMap, "GetCopiedUserMap" }, // 747649229
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionInfo, "GetEOSSessionInfo" }, // 2167310130
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetEOSSessionP2PAdditionalFunction, "GetEOSSessionP2PAdditionalFunction" }, // 2318428033
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetNatType, "GetNatType" }, // 2378854737
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetReceivedSynchronizedPacket, "GetReceivedSynchronizedPacket" }, // 4229443754
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetSendSynchronizedPacket, "GetSendSynchronizedPacket" }, // 2927874648
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetSocketID, "GetSocketID" }, // 1160443959
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetStringOfProductUserIDForOwnerUser, "GetStringOfProductUserIDForOwnerUser" }, // 368524654
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetTransferSize, "GetTransferSize" }, // 1565264035
		{ &Z_Construct_UFunction_UEOSSessionP2P_GetUserMap, "GetUserMap" }, // 983026221
		{ &Z_Construct_UFunction_UEOSSessionP2P_HasActiveP2PUserMap, "HasActiveP2PUserMap" }, // 4064026378
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsActiveP2PUser, "IsActiveP2PUser" }, // 220172278
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerCheckLatency, "IsDoneAllPlayerCheckLatency" }, // 3961098853
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsDoneAllPlayerRegistedOnSession, "IsDoneAllPlayerRegistedOnSession" }, // 334151041
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGamePause, "IsDoneSessionGamePause" }, // 3071215918
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsDoneSessionGameSetup, "IsDoneSessionGameSetup" }, // 3258763461
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsHostMigratingNow, "IsHostMigratingNow" }, // 858887718
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsLocalUserTheOwner, "IsLocalUserTheOwner" }, // 3365263585
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPacket, "IsSynchronizedAllPlayerPacket" }, // 3173298489
		{ &Z_Construct_UFunction_UEOSSessionP2P_IsSynchronizedAllPlayerPackets, "IsSynchronizedAllPlayerPackets" }, // 3958260351
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameEnd, "OnSessionGameEnd" }, // 2974136061
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGamePause, "OnSessionGamePause" }, // 620497888
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameResume, "OnSessionGameResume" }, // 4286760336
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameSetup, "OnSessionGameSetup" }, // 3901138252
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionGameStart, "OnSessionGameStart" }, // 191984563
		{ &Z_Construct_UFunction_UEOSSessionP2P_OnSessionSyncRequest, "OnSessionSyncRequest" }, // 4048578698
		{ &Z_Construct_UFunction_UEOSSessionP2P_RegistCallbackInterface, "RegistCallbackInterface" }, // 2942960903
		{ &Z_Construct_UFunction_UEOSSessionP2P_RemoveUserMap, "RemoveUserMap" }, // 3263336659
		{ &Z_Construct_UFunction_UEOSSessionP2P_RequestLatencyCheck, "RequestLatencyCheck" }, // 5213178
		{ &Z_Construct_UFunction_UEOSSessionP2P_RequestNatType, "RequestNatType" }, // 1066001823
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetApiVersion, "SetApiVersion" }, // 391804259
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetCommunityInfo, "SetCommunityInfo" }, // 2158719207
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetEOSSession, "SetEOSSession" }, // 3724434051
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetPacketGenerator, "SetPacketGenerator" }, // 1391950559
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetReceivedPacketMaxCacheNum, "SetReceivedPacketMaxCacheNum" }, // 3399432811
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetSessionP2PAdditionalFunctionBits, "SetSessionP2PAdditionalFunctionBits" }, // 1398715601
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetUpdateType, "SetUpdateType" }, // 1808937743
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetupInternalCallback, "SetupInternalCallback" }, // 2507479339
		{ &Z_Construct_UFunction_UEOSSessionP2P_SetupSocket, "SetupSocket" }, // 1254854550
		{ &Z_Construct_UFunction_UEOSSessionP2P_UnregistCallbackInterface, "UnregistCallbackInterface" }, // 2686608445
		{ &Z_Construct_UFunction_UEOSSessionP2P_Update, "Update" }, // 3548080066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2P.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PEventDispatcher = { "SessionP2PEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingSharedPacketDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingSharedPacketDispatcher = { "SessionP2PDataSharingSharedPacketDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PDataSharingSharedPacketDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingSharedPacketDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingSharedPacketDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingSharedPacketDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingReceivedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingReceivedDispatcher = { "SessionP2PDataSharingReceivedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PDataSharingReceivedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingReceivedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingReceivedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingReceivedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingCompareDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingCompareDispatcher = { "SessionP2PDataSharingCompareDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PDataSharingCompareDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDataSharingCompareDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingCompareDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingCompareDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher = { "SessionP2PBindPlayerMemberUpdatedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PBindPlayerMemberUpdatedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PBindPlayerMemberUpdatedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationEventDispatcher = { "SessionP2PHostMigrationEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PHostMigrationEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PHostMigrationEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher = { "SessionP2PHostMigrationUpdatedLatencyInfoDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, SessionP2PHostMigrationUpdatedLatencyInfoDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketGenerator = { "m_pcPacketGenerator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_pcPacketGenerator), Z_Construct_UClass_UEOSSessionP2PPacketGeneratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketGenerator_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_ValueProp = { "m_cUserMaps", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_Key_KeyProp = { "m_cUserMaps_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps = { "m_cUserMaps", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_cUserMaps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_ValueProp = { "m_cCallbackParams", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PCallbackParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_Key_KeyProp = { "m_cCallbackParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams = { "m_cCallbackParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_cCallbackParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_ValueProp = { "m_cFunctions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_Key_KeyProp = { "m_cFunctions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions = { "m_cFunctions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_cFunctions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSession = { "m_pcSession", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_pcSession), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSessionInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSessionInfo = { "m_pcSessionInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_pcSessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSessionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSessionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketQueue = { "m_pcPacketQueue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_pcPacketQueue), Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue_Inner = { "m_CloseSessionScheduleQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionSchedule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2P" },
		{ "ModuleRelativePath", "Public/EOSSessionP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue = { "m_CloseSessionScheduleQueue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2P, m_CloseSessionScheduleQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingSharedPacketDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingReceivedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PDataSharingCompareDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PBindPlayerMemberUpdatedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_SessionP2PHostMigrationUpdatedLatencyInfoDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cUserMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cCallbackParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_cFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcSessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_pcPacketQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2P_Statics::NewProp_m_CloseSessionScheduleQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2P_Statics::ClassParams = {
		&UEOSSessionP2P::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionP2P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2P, 1645026805);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2P>()
	{
		return UEOSSessionP2P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2P(Z_Construct_UClass_UEOSSessionP2P, &UEOSSessionP2P::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
